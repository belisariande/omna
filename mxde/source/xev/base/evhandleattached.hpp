///////////////////////////////////////////////////////////////////////
//   File: evhandleattached.hpp
//
// Author: $author$
//   Date: 7/3/2007
//
//    $Id$
///////////////////////////////////////////////////////////////////////

#ifndef _EVHANDLEATTACHED_HPP
#define _EVHANDLEATTACHED_HPP

#include "evattached.hpp"

///////////////////////////////////////////////////////////////////////
//  Typedef: EvHANDLEAttachedImplements
//
//   Author: $author$
//     Date: 7/3/2007
///////////////////////////////////////////////////////////////////////
typedef EvAttached<HANDLE, EvBase>
EvHANDLEAttachedImplements;

///////////////////////////////////////////////////////////////////////
//  Class: EvHANDLEAttached
//
// Author: $author$
//   Date: 5/15/2008
///////////////////////////////////////////////////////////////////////
class EV_EXPORT_CLASS EvHANDLEAttached
: virtual public EvHANDLEAttachedImplements
{
public:
    typedef EvHANDLEAttachedImplements EvImplements;
    typedef EvHANDLEAttached EvDerives;
    ///////////////////////////////////////////////////////////////////////
    // Function: CreateInstance
    //
    //   Author: $author$
    //     Date: 5/15/2008
    ///////////////////////////////////////////////////////////////////////
    static EvHANDLEAttached* CreateInstance
    (EvError& error);
    ///////////////////////////////////////////////////////////////////////
    // Function: DestroyInstance
    //
    //   Author: $author$
    //     Date: 5/15/2008
    ///////////////////////////////////////////////////////////////////////
    static EvError DestroyInstance
    (EvHANDLEAttached& instance);
};

#endif // _EVHANDLEATTACHED_HPP
