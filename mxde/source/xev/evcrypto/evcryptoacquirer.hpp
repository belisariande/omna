///////////////////////////////////////////////////////////////////////
//   File: evcryptoacquirer.hpp
//
// Author: $author$
//   Date: 10/29/2007
//
//    $Id$
///////////////////////////////////////////////////////////////////////

#ifndef _EVCRYPTOACQUIRER_HPP
#define _EVCRYPTOACQUIRER_HPP

#include "evcrypto.hpp"
#include "evbase.hpp"

///////////////////////////////////////////////////////////////////////
//  Class: EvCryptoAcquirer
//
// Author: $author$
//   Date: 10/29/2007
///////////////////////////////////////////////////////////////////////
class EvCryptoAcquirer
: virtual public EvBase
{
public:
    typedef EvBase CImplements;
    
    ///////////////////////////////////////////////////////////////////////
    // Function: AcquireCrypto
    //
    //   Author: $author$
    //     Date: 10/29/2007
    ///////////////////////////////////////////////////////////////////////
    virtual EvCrypto* 
    AcquireCrypto
    (EvError& error) = 0;
    ///////////////////////////////////////////////////////////////////////
    // Function: ReleaseCrypto
    //
    //   Author: $author$
    //     Date: 10/29/2007
    ///////////////////////////////////////////////////////////////////////
    virtual EvError ReleaseCrypto
    (EvCrypto& acquired) = 0;
    ///////////////////////////////////////////////////////////////////////
    // Function: ReleaseAllCryptos
    //
    //   Author: $author$
    //     Date: 10/29/2007
    ///////////////////////////////////////////////////////////////////////
    virtual EvError ReleaseAllCryptos() = 0;
};

#endif // _EVCRYPTOACQUIRER_HPP