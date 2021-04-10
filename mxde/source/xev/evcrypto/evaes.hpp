///////////////////////////////////////////////////////////////////////
//   File: evaes.hpp
//
// Author: $author$
//   Date: 11/2/2007
//
//    $Id$
///////////////////////////////////////////////////////////////////////

#ifndef _EVAES_HPP
#define _EVAES_HPP

#include "evcipher.hpp"

///////////////////////////////////////////////////////////////////////
//  Class: EvAES
//
// Author: $author$
//   Date: 11/2/2007
///////////////////////////////////////////////////////////////////////
class EV_EXPORT_CLASS EvAES
: virtual public EvCipher
{
public:
    typedef EvCipher CImplements;
    typedef EvAES CDerives;

    ///////////////////////////////////////////////////////////////////////
    //   Enum:  
    //
    // Author: $author$
    //   Date: 12/3/2007
    ///////////////////////////////////////////////////////////////////////
    enum 
    {
        EV_BLOCK_SIZE = 16,
        EV_KEY_SIZE   = 32,
        EV_IV_SIZE    = 16
    };
};

#endif // _EVAES_HPP
