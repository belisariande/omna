///////////////////////////////////////////////////////////////////////
//   File: cevcryptor.hpp
//
// Author: $author$
//   Date: 10/27/2007
//
//    $Id$
///////////////////////////////////////////////////////////////////////

#ifndef _CEVCRYPTOR_HPP
#define _CEVCRYPTOR_HPP

#include "evcryptor.hpp"
#include "cevcryptokey.hpp"

///////////////////////////////////////////////////////////////////////
//  Class: CEvCryptor
//
// Author: $author$
//   Date: 10/27/2007
///////////////////////////////////////////////////////////////////////
class CEvCryptor
: virtual public EvCryptor,
  public CEvCryptoKey
{
public:
    typedef EvCryptor CImplements;
    typedef CEvCryptoKey CExtends;
    typedef CEvCryptor CDerives;

    ///////////////////////////////////////////////////////////////////////
    // Constructor: CEvCryptor
    //
    //       Author: $author$
    //         Date: 10/27/2007
    ///////////////////////////////////////////////////////////////////////
    CEvCryptor() 
    {
    }
    ///////////////////////////////////////////////////////////////////////
    // Destructor: ~CEvCryptor
    //
    //      Author: $author$
    //        Date: 10/27/2007
    ///////////////////////////////////////////////////////////////////////
    virtual ~CEvCryptor()
    {
    }
    ///////////////////////////////////////////////////////////////////////
    // Function: Crypt
    //
    //   Author: $author$
    //     Date: 10/27/2007
    ///////////////////////////////////////////////////////////////////////
    virtual LONG Crypt
    (BYTE* out,
     ULONG outSize,
     const BYTE* in,
     LONG inLength=-1) 
    {
        LONG length = -EV_ERROR_NOT_IMPLEMENTED;
        return length;
    }
};
#endif // _CEVCRYPTOR_HPP