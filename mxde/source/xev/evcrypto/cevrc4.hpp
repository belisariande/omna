///////////////////////////////////////////////////////////////////////
//   File: cevrc4.hpp
//
// Author: $author$
//   Date: 11/5/2007
//
//    $Id$
///////////////////////////////////////////////////////////////////////

#ifndef _CEVRC4_HPP
#define _CEVRC4_HPP

#include <vector>
#include "evrc4.hpp"
#include "cevcipher.hpp"

///////////////////////////////////////////////////////////////////////
//  Class: CEvRC4
//
// Author: $author$
//   Date: 11/5/2007
///////////////////////////////////////////////////////////////////////
class CEvRC4
: virtual public EvRC4,
  public CEvCipher
{
public:
    typedef EvRC4 CImplements;
    typedef CEvCipher CExtends;
    typedef CEvRC4 CDerives;

    ///////////////////////////////////////////////////////////////////////
    // Constructor: CEvRC4
    //
    //       Author: $author$
    //         Date: 11/5/2007
    ///////////////////////////////////////////////////////////////////////
    CEvRC4() 
    {
    }
    ///////////////////////////////////////////////////////////////////////
    // Destructor: ~CEvRC4
    //
    //      Author: $author$
    //        Date: 11/5/2007
    ///////////////////////////////////////////////////////////////////////
    virtual ~CEvRC4()
    {
    }
};

///////////////////////////////////////////////////////////////////////
//  Typedef: CEvRC4s
//
//   Author: $author$
//     Date: 11/5/2007
///////////////////////////////////////////////////////////////////////
typedef ::std::vector<CEvRC4*>
CEvRC4s;

///////////////////////////////////////////////////////////////////////
//  Typedef: CEvRC4sIterator
//
//   Author: $author$
//     Date: 11/5/2007
///////////////////////////////////////////////////////////////////////
typedef CEvRC4s::iterator
CEvRC4sIterator;

///////////////////////////////////////////////////////////////////////
//  Typedef: const_CEvRC4sIterator
//
//   Author: $author$
//     Date: 11/5/2007
///////////////////////////////////////////////////////////////////////
typedef CEvRC4s::const_iterator
const_CEvRC4sIterator;

#endif // _CEVRC4_HPP