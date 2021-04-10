///////////////////////////////////////////////////////////////////////
//   File: evencryptor.hpp
//
// Author: $author$
//   Date: 10/25/2007
//
//    $Id$
///////////////////////////////////////////////////////////////////////

#ifndef _EVENCRYPTOR_HPP
#define _EVENCRYPTOR_HPP

#include "evcryptobase.hpp"

///////////////////////////////////////////////////////////////////////
//  Class: EvEncryptor
//
// Author: $author$
//   Date: 10/25/2007
///////////////////////////////////////////////////////////////////////
class EV_EXPORT_CLASS EvEncryptor
: virtual public EvCryptoBase
{
public:
    typedef EvCryptoBase CImplements;
    typedef EvEncryptor CDerives;

    ///////////////////////////////////////////////////////////////////////
    // Function: Encrypt
    //
    //   Author: $author$
    //     Date: 10/27/2007
    ///////////////////////////////////////////////////////////////////////
    virtual LONG Encrypt
    (BYTE* out,
     ULONG outSize,
     const BYTE* in,
     LONG inLength=-1) = 0;
};
#endif // _EVENCRYPTOR_HPP
