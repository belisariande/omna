///////////////////////////////////////////////////////////////////////
//   File: cevsha1.hpp
//
// Author: $author$
//   Date: 11/2/2007
//
//    $Id$
///////////////////////////////////////////////////////////////////////

#ifndef _CEVSHA1_HPP
#define _CEVSHA1_HPP

#include "evsha1.hpp"
#include "cevhash.hpp"

///////////////////////////////////////////////////////////////////////
//  Class: CEvSHA1
//
// Author: $author$
//   Date: 11/2/2007
///////////////////////////////////////////////////////////////////////
class CEvSHA1
: virtual public EvSHA1,
  public CEvHash
{
public:
    typedef EvSHA1 CImplements;
    typedef CEvHash CExtends;
    typedef CEvSHA1 CDerives;

    ///////////////////////////////////////////////////////////////////////
    // Constructor: CEvSHA1
    //
    //       Author: $author$
    //         Date: 11/2/2007
    ///////////////////////////////////////////////////////////////////////
    CEvSHA1() 
    {
    }
    ///////////////////////////////////////////////////////////////////////
    // Destructor: ~CEvSHA1
    //
    //      Author: $author$
    //        Date: 11/2/2007
    ///////////////////////////////////////////////////////////////////////
    virtual ~CEvSHA1()
    {
    }

    ///////////////////////////////////////////////////////////////////////
    // Function: GetHashSize
    //
    //   Author: $author$
    //     Date: 12/5/2007
    ///////////////////////////////////////////////////////////////////////
    virtual LONG GetHashSize() const 
    {
        LONG hashSize = EV_HASH_SIZE;
        return hashSize;
    }
};

#endif // _CEVSHA1_HPP
