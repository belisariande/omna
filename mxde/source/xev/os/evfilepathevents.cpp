///////////////////////////////////////////////////////////////////////
//   File: evfilepathevents.cpp
//
// Author: $author$
//   Date: 5/16/2008
///////////////////////////////////////////////////////////////////////

#include "evfilepathevents.hpp"

///////////////////////////////////////////////////////////////////////
//  Class: EvFilePathEvents
//
// Author: $author$
//   Date: 5/16/2008
///////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////
// Function: EvFilePathEvents::CreateInstance
//
//   Author: $author$
//     Date: 5/16/2008
///////////////////////////////////////////////////////////////////////
EvFilePathEvents* EvFilePathEvents::CreateInstance
(EvError& error) 
{
    EvFilePathEvents* instance = 0;
    error = EV_ERROR_NOT_IMPLEMENTED;
    return instance;
}
///////////////////////////////////////////////////////////////////////
// Function: EvFilePathEvents::DestroyInstance
//
//   Author: $author$
//     Date: 5/16/2008
///////////////////////////////////////////////////////////////////////
EvError EvFilePathEvents::DestroyInstance
(EvFilePathEvents& instance) 
{
    EvError error = EV_ERROR_NOT_IMPLEMENTED;
    return error;
}
