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

int btrfs_set_thread_exit_handler();
void btrfs_thread_exit_handler(int sig);

#endif // defined(__ANDROID__)
