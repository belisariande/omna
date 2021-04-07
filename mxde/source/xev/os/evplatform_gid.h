///////////////////////////////////////////////////////////////////////
//   File: evplatform_gid.h
//
// Author: $author$
//   Date: 7/18/2007
//
//    $Id$
///////////////////////////////////////////////////////////////////////

#ifndef _EVPLATFORM_GID_H
#define _EVPLATFORM_GID_H

#include "evplatform.h"

#if defined(WIN32) 
// Windows
typedef int GID;
typedef GID gid_t;
#else // defined(WIN32) 
// Unix
#include <unistd.h>
#include <sys/types.h>
typedef gid_t GID;
#endif // defined(WIN32)

#define INVALID_GID ((GID)-1)

#if defined(__cplusplus)
extern "C" {
#endif

#if defined(WIN32) 
// Windows
///////////////////////////////////////////////////////////////////////
// Function: setgid
//
//   Author: $author$
//     Date: 7/18/2007
///////////////////////////////////////////////////////////////////////
int setgid(gid_t gid);
///////////////////////////////////////////////////////////////////////
// Function: getgid
//
//   Author: $author$
//     Date: 7/18/2007
///////////////////////////////////////////////////////////////////////
gid_t getgid(void);

///////////////////////////////////////////////////////////////////////
// Function: setegid
//
//   Author: $author$
//     Date: 7/18/2007
///////////////////////////////////////////////////////////////////////
int setegid(gid_t gid);
///////////////////////////////////////////////////////////////////////
// Function: getegid
//
//   Author: $author$
//     Date: 7/18/2007
///////////////////////////////////////////////////////////////////////
gid_t getegid(void);

///////////////////////////////////////////////////////////////////////
// Function: setregid
//
//   Author: $author$
//     Date: 7/18/2007
///////////////////////////////////////////////////////////////////////
int setregid(gid_t gid);
#else // defined(WIN32) 
// Unix
#endif // defined(WIN32)

#if defined(__cplusplus)
}
#endif

#endif // _EVPLATFORM_GID_H
