/*------------------------------------------------------------------
 * test_fprintf_s
 *
 *------------------------------------------------------------------
 */

#include "test_private.h"
#include "safe_str_lib.h"
#include <unistd.h>

#define TMP   "tmpfp"
#define LEN   ( 128 )

static FILE* out;
static char  str[LEN];

int test_fprintf_s (void)
{
    errno_t rc;
    int  ind;
    int  errs = 0;

    out = fopen(TMP, "w");

/*--------------------------------------------------*/

    rc = fprintf_s(NULL, "%s", NULL);
    ERR(ESNULLP)

/*--------------------------------------------------*/

    rc = fprintf_s(out, NULL, NULL);
    ERR(ESNULLP)

/*--------------------------------------------------*/

    str[0] = '\0';
    rc = fprintf_s(out, "%s %n", str, &ind);
    ERR(EINVAL)

    if (!out) {
        printf("Failed to open file %s for write: %s\n",
               TMP, strerror(errno));
        return errs;
    }

/*--------------------------------------------------*/
        
    rc = fprintf_s(out, "%s %%n", str);
    ERR(3)

    rc = fprintf_s(out, "%%n");
    ERR(2);

/*--------------------------------------------------*/

    /* TODO
    rc = fprintf_s(out, "%p", NULL);
    ERR(ESNULLP)
    */

/*--------------------------------------------------*/

    strcpy(str, "keep it simple");

    rc = fprintf_s(out, "%s", str);
    NOERRNULL()

/*--------------------------------------------------*/

    str[0] = '\0';

    rc = fprintf_s(out, "%s", str);
    ERR(0)

/*--------------------------------------------------*/

    strcpy(str, "keep it simple");

    rc = fprintf_s(out, "%s", str);
    NOERRNULL()

/*--------------------------------------------------*/

    fclose(out);
    unlink(TMP);
        
    return (errs);
}

#ifndef __KERNEL__
/* simple hack to get this to work for both userspace and Linux kernel,
   until a better solution can be created. */
int main (void)
{
    return (test_fprintf_s());
}
#endif