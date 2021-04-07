///////////////////////////////////////////////////////////////////////
//   File: evplatform_signal.h
//
// Author: $author$
//   Date: 7/18/2007
//
//    $Id$
///////////////////////////////////////////////////////////////////////

#ifndef _EVPLATFORM_SIGNAL_H
#define _EVPLATFORM_SIGNAL_H

#include "evplatform.h"

#if defined(WIN32) 
// Windows
enum 
{
    SIG_IGN,
    SIG_DFL
};
enum 
{
    SIGKILL,
    SIGSTOP,
    SIGTERM,
    SIGHUP,
    SIGCHLD,
    SIGFPE,
    SIGILL,
    SIGSEGV
};
typedef void (*sighandler_t)(int);
typedef void sigset_t;
#else // defined(WIN32) 
// Unix
#include <sys/types.h>
#include <signal.h>
#endif // defined(WIN32)

#if defined(__cplusplus)
extern "C" {
#endif

#if defined(WIN32) 
// Windows
///////////////////////////////////////////////////////////////////////
// Function: signal
//
//   Author: $author$
//     Date: 7/19/2007
///////////////////////////////////////////////////////////////////////
sighandler_t signal(int signum, sighandler_t handler);
///////////////////////////////////////////////////////////////////////
// Function: sigaction
//
//   Author: $author$
//     Date: 7/19/2007
///////////////////////////////////////////////////////////////////////
int sigaction(int signum, const struct sigaction *act, struct sigaction *oldact);
///////////////////////////////////////////////////////////////////////
// Function: sigprocmask
//
//   Author: $author$
//     Date: 7/19/2007
///////////////////////////////////////////////////////////////////////
int sigprocmask(int how, const sigset_t *set, sigset_t *oldset);
///////////////////////////////////////////////////////////////////////
// Function: sigpending
//
//   Author: $author$
//     Date: 7/19/2007
///////////////////////////////////////////////////////////////////////
int sigpending(sigset_t *set);
///////////////////////////////////////////////////////////////////////
// Function: sigsuspend
//
//   Author: $author$
//     Date: 7/19/2007
///////////////////////////////////////////////////////////////////////
int sigsuspend(const sigset_t *mask);
///////////////////////////////////////////////////////////////////////
// Function: sigemptyset
//
//   Author: $author$
//     Date: 7/19/2007
///////////////////////////////////////////////////////////////////////
int sigemptyset(sigset_t *set);
///////////////////////////////////////////////////////////////////////
// Function: sigfillset
//
//   Author: $author$
//     Date: 7/19/2007
///////////////////////////////////////////////////////////////////////
int sigfillset(sigset_t *set);
///////////////////////////////////////////////////////////////////////
// Function: sigaddset
//
//   Author: $author$
//     Date: 7/19/2007
///////////////////////////////////////////////////////////////////////
int sigaddset(sigset_t *set, int signum);
///////////////////////////////////////////////////////////////////////
// Function: sigdelset
//
//   Author: $author$
//     Date: 7/19/2007
///////////////////////////////////////////////////////////////////////
int sigdelset(sigset_t *set, int signum);
///////////////////////////////////////////////////////////////////////
// Function: sigismember
//
//   Author: $author$
//     Date: 7/19/2007
///////////////////////////////////////////////////////////////////////
int sigismember(const sigset_t *set, int signum);
///////////////////////////////////////////////////////////////////////
// Function: kill
//
//   Author: $author$
//     Date: 7/19/2007
///////////////////////////////////////////////////////////////////////
int kill(pid_t pid, int sig);
///////////////////////////////////////////////////////////////////////
// Function: pause
//
//   Author: $author$
//     Date: 7/19/2007
///////////////////////////////////////////////////////////////////////
int pause(void);
///////////////////////////////////////////////////////////////////////
// Function: raise
//
//   Author: $author$
//     Date: 7/19/2007
///////////////////////////////////////////////////////////////////////
int raise(int sig);
///////////////////////////////////////////////////////////////////////
// Function: alarm
//
//   Author: $author$
//     Date: 7/19/2007
///////////////////////////////////////////////////////////////////////
unsigned int alarm(unsigned int seconds);
#else // defined(WIN32) 
// Unix
#endif // defined(WIN32)

#if defined(__cplusplus)
}
#endif

#endif // _EVPLATFORM_SIGNAL_H
