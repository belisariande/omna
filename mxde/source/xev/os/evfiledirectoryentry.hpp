///////////////////////////////////////////////////////////////////////
//   File: evfiledirectoryentry.hpp
//
// Author: $author$
//   Date: 5/3/2007
///////////////////////////////////////////////////////////////////////

#ifndef _EVFILEDIRECTORYENTRY_HPP
#define _EVFILEDIRECTORYENTRY_HPP

#include "evfilesystementrytimes.hpp"
#include "evfilesystementrybase.hpp"
#include "evattached.hpp"
#include "evplatform_directory.h"

///////////////////////////////////////////////////////////////////////
// Typedef: EvFileSystemDirectoryEntryAttached
//
//  Author: $author$
//    Date: 5/3/2007
///////////////////////////////////////////////////////////////////////
typedef EvAttached
<DIRECTORY, EvFileSystemEntryBase> 
EvFileSystemDirectoryEntryAttached;

///////////////////////////////////////////////////////////////////////
//  Typedef: EvFileSystemDirectoryEntryImplements
//
//   Author: $author$
//     Date: 6/22/2007
///////////////////////////////////////////////////////////////////////
typedef EvFileSystemEntryTimesT
<EvFileSystemDirectoryEntryAttached>
EvFileSystemDirectoryEntryImplements;

///////////////////////////////////////////////////////////////////////
//  Class: EvFileSystemDirectoryEntry
//
// Author: $author$
//   Date: 6/23/2007
///////////////////////////////////////////////////////////////////////
class EV_EXPORT_CLASS EvFileSystemDirectoryEntry
: virtual public EvFileSystemDirectoryEntryImplements
{
public:
    typedef EvFileSystemDirectoryEntryImplements CImplements;
    typedef EvFileSystemDirectoryEntry CDerives;

    ///////////////////////////////////////////////////////////////////////
    // Function: CopyFileTimesTo
    //
    //   Author: $author$
    //     Date: 9/16/2007
    ///////////////////////////////////////////////////////////////////////
    virtual EvError CopyFileTimesTo
    (EvFileSystemEntryTimes& fileTimes) const = 0;

    ///////////////////////////////////////////////////////////////////////
    // Function: SetIsCircular
    //
    //   Author: $author$
    //     Date: 5/4/2007
    ///////////////////////////////////////////////////////////////////////
    virtual int SetIsCircular(bool is=true) = 0;
    ///////////////////////////////////////////////////////////////////////
    // Function: GetIsCircular
    //
    //   Author: $author$
    //     Date: 5/4/2007
    ///////////////////////////////////////////////////////////////////////
    virtual bool GetIsCircular() const = 0;

    ///////////////////////////////////////////////////////////////////////
    // Function: SetIsCurrent
    //
    //   Author: $author$
    //     Date: 5/20/2008
    ///////////////////////////////////////////////////////////////////////
    virtual bool SetIsCurrent
    (bool is=true) = 0;
    ///////////////////////////////////////////////////////////////////////
    // Function: GetIsCurrent
    //
    //   Author: $author$
    //     Date: 5/20/2008
    ///////////////////////////////////////////////////////////////////////
    virtual bool GetIsCurrent() const = 0;

    ///////////////////////////////////////////////////////////////////////
    // Function: SetIsParent
    //
    //   Author: $author$
    //     Date: 5/20/2008
    ///////////////////////////////////////////////////////////////////////
    virtual bool SetIsParent
    (bool is=true) = 0;
    ///////////////////////////////////////////////////////////////////////
    // Function: GetIsParent
    //
    //   Author: $author$
    //     Date: 5/20/2008
    ///////////////////////////////////////////////////////////////////////
    virtual bool GetIsParent() const = 0;
};

///////////////////////////////////////////////////////////////////////
//  Class: EvFileDirectoryEntry
//
// Author: $author$
//   Date: 5/3/2007
///////////////////////////////////////////////////////////////////////
class EV_EXPORT_CLASS EvFileDirectoryEntry
: virtual public EvFileSystemDirectoryEntry
{
public:
    typedef EvFileSystemDirectoryEntry CImplements;
    typedef EvFileDirectoryEntry CDerives;

    ///////////////////////////////////////////////////////////////////////
    // Function: GetNextEntry
    //
    //   Author: $author$
    //     Date: 5/4/2007
    ///////////////////////////////////////////////////////////////////////
    virtual EvError GetNextEntry() = 0;

    ///////////////////////////////////////////////////////////////////////
    // Function: CreateInstance
    //
    //   Author: $author$
    //     Date: 5/16/2008
    ///////////////////////////////////////////////////////////////////////
    static EvFileDirectoryEntry* CreateInstance
    (EvError& error);
    ///////////////////////////////////////////////////////////////////////
    // Function: DestroyInstance
    //
    //   Author: $author$
    //     Date: 5/16/2008
    ///////////////////////////////////////////////////////////////////////
    static EvError DestroyInstance
    (EvFileDirectoryEntry& instance);
};
#endif // _EVFILEDIRECTORYENTRY_HPP
