#include "include/config.h"

#include <pthread.h>

#ifdef __ANDROID__

/* Adding missing `pthread` related definitions in Android.
 */

#define PTHREAD_CANCEL_ASYNCHRONOUS 0
#define PTHREAD_CANCEL_ENABLE NULL

int pthread_setcanceltype(int type, int *oldtype);
int pthread_setcancelstate(int state, int *oldstate);
int pthread_cancel(pthread_t thread_id);

#endif // defined(__ANDROID__)
