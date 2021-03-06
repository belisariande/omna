///////////////////////////////////////////////////////////////////////
//   File: evbytestream.hpp
//
// Author: $author$
//   Date: 11/8/2007
//
//    $Id$
///////////////////////////////////////////////////////////////////////

#ifndef _EVBYTESTREAM_HPP
#define _EVBYTESTREAM_HPP

#include "evstream.hpp"
#include "evbytereader.hpp"
#include "evbytewriter.hpp"

///////////////////////////////////////////////////////////////////////
//  Typedef: EvBYTEStream
//
//   Author: $author$
//     Date: 11/8/2007
///////////////////////////////////////////////////////////////////////
typedef EvStream
<BYTE, ULONG, LONG, 
 EvBYTEReader, EvBYTEWriter, EvBase>
EvBYTEStream;

#endif // _EVBYTESTREAM_HPP
