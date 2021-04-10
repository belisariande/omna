///////////////////////////////////////////////////////////////////////
//   File: evcryptoblock.hpp
//
// Author: $author$
//   Date: 10/25/2007
//
//    $Id$
///////////////////////////////////////////////////////////////////////

#ifndef _EVCRYPTOBLOCK_HPP
#define _EVCRYPTOBLOCK_HPP

#include "evcryptobase.hpp"

///////////////////////////////////////////////////////////////////////
//  Class: EvCryptoBlock
//
// Author: $author$
//   Date: 10/25/2007
///////////////////////////////////////////////////////////////////////
class EV_EXPORT_CLASS EvCryptoBlock
: virtual public EvCryptoBase
{
public:
    typedef EvCryptoBase CImplements;
    typedef EvCryptoBlock CDerives;

    ///////////////////////////////////////////////////////////////////////
    // Function: SetBlockSize
    //
    //   Author: $author$
    //     Date: 10/25/2007
    ///////////////////////////////////////////////////////////////////////
    virtual LONG SetBlockSize
    (ULONG size) = 0;
    ///////////////////////////////////////////////////////////////////////
    // Function: GetBlockSize
    //
    //   Author: $author$
    //     Date: 10/25/2007
    ///////////////////////////////////////////////////////////////////////
    virtual LONG GetBlockSize() const = 0;
};
#endif // _EVCRYPTOBLOCK_HPP
