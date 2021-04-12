///////////////////////////////////////////////////////////////////////
// Copyright (c) 1988-2011 $organization$
//
// This software is provided by the author and contributors ``as is'' 
// and any express or implied warranties, including, but not limited to, 
// the implied warranties of merchantability and fitness for a particular 
// purpose are disclaimed. In no event shall the author or contributors 
// be liable for any direct, indirect, incidental, special, exemplary, 
// or consequential damages (including, but not limited to, procurement 
// of substitute goods or services; loss of use, data, or profits; or 
// business interruption) however caused and on any theory of liability, 
// whether in contract, strict liability, or tort (including negligence 
// or otherwise) arising in any way out of the use of this software, 
// even if advised of the possibility of such damage.
//
//   File: cXalanXSLTResultTarget.hpp
//
// Author: $author$
//   Date: 7/18/2011
///////////////////////////////////////////////////////////////////////
#ifndef _CXALANXSLTRESULTTARGET_HPP
#define _CXALANXSLTRESULTTARGET_HPP

#include <XSLT/XSLTResultTarget.hpp>
#include "cXalanWriter.hpp"

#if defined(c_NAMESPACE)
namespace c_NAMESPACE {
#endif // defined(c_NAMESPACE) 

///////////////////////////////////////////////////////////////////////
// Typedef: cXalanXSLTResultTargetExtend
//
//  Author: $author$
//    Date: 7/18/2011
///////////////////////////////////////////////////////////////////////
typedef nsXalan::XSLTResultTarget
cXalanXSLTResultTargetExtend;
///////////////////////////////////////////////////////////////////////
//  Class: cXalanXSLTResultTarget
//
// Author: $author$
//   Date: 7/18/2011
///////////////////////////////////////////////////////////////////////
class c_INSTANCE_CLASS cXalanXSLTResultTarget
: public cXalanXSLTResultTargetExtend
{
public:
    typedef cXalanXSLTResultTargetExtend cExtends;

    cXalanWriter m_writer;

    ///////////////////////////////////////////////////////////////////////
    //  Constructor: cXalanXSLTResultTarget
    //
    //       Author: $author$
    //         Date: 7/18/2011
    ///////////////////////////////////////////////////////////////////////
    cXalanXSLTResultTarget
    (cCharWriterInterface& writer) 
    : m_writer(writer)
    {
        setCharacterStream(&m_writer);
    }
};


#if defined(c_NAMESPACE)
}
#endif // defined(c_NAMESPACE) 

#endif // _CXALANXSLTRESULTTARGET_HPP 
        

