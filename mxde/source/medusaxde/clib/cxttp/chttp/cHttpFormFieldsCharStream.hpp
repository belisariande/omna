///////////////////////////////////////////////////////////////////////
// Copyright (c) 1988-2012 $organization$
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
//   File: cHttpFormFieldsCharStream.hpp
//
// Author: $author$
//   Date: 11/24/2012
///////////////////////////////////////////////////////////////////////
#ifndef _CHTTPFORMFIELDSCHARSTREAM_HPP
#define _CHTTPFORMFIELDSCHARSTREAM_HPP

#include "cCharStream.hpp"
#include "cHttpFormFieldsCharStreamEvents.hpp"

#if defined(c_NAMESPACE)
namespace c_NAMESPACE {
#endif // defined(c_NAMESPACE) 

///////////////////////////////////////////////////////////////////////
// Typedef: cHttpFormFieldsCharStreamImplement
//
//  Author: $author$
//    Date: 11/24/2012
///////////////////////////////////////////////////////////////////////
typedef cCharStreamImplement
cHttpFormFieldsCharStreamImplement;
///////////////////////////////////////////////////////////////////////
// Typedef: cHttpFormFieldsCharStreamExtend
//
//  Author: $author$
//    Date: 11/24/2012
///////////////////////////////////////////////////////////////////////
typedef cCharStream
cHttpFormFieldsCharStreamExtend;
///////////////////////////////////////////////////////////////////////
//  Class: cHttpFormFieldsCharStream
//
// Author: $author$
//   Date: 11/24/2012
///////////////////////////////////////////////////////////////////////
class c_EXPORT_CLASS cHttpFormFieldsCharStream
: virtual public cHttpFormFieldsCharStreamImplement,
  public cHttpFormFieldsCharStreamExtend
{
public:
    typedef cHttpFormFieldsCharStreamImplement cImplements;
    typedef cHttpFormFieldsCharStreamExtend cExtends;
    typedef cHttpFormFieldsCharStream cDerives;

    typedef tWhat tChar;
    typedef ssize_t tLength;
    typedef cString tString;
    typedef tLength (cDerives::*mPut)(const tWhat& what);
    typedef eError (cDerives::*mFinal)();

    cHttpFormFieldsCharStreamEvents& m_events;
    bool m_isFromQueryString;
    mPut m_put;
    mFinal m_final;
    tChar m_eq, m_amp, m_lf, m_cr;
    tString m_name, m_value;
    
    ///////////////////////////////////////////////////////////////////////
    //  Constructor: cHttpFormFieldsCharStream
    //
    //       Author: $author$
    //         Date: 11/24/2012
    ///////////////////////////////////////////////////////////////////////
    cHttpFormFieldsCharStream
    (cHttpFormFieldsCharStreamEvents& events)
    : cExtends(0),
      m_events(events),
      m_isFromQueryString(false),
      m_put(0),
      m_final(0),
      m_eq('='),
      m_amp('&'),
      m_lf('\n'),
      m_cr('\r')
    {
    }

    ///////////////////////////////////////////////////////////////////////
    //  Function: Read
    //
    //    Author: $author$
    //      Date: 11/24/2012
    ///////////////////////////////////////////////////////////////////////
    virtual eError Read
    (cCharStreamInterface* delegated, bool isFromQueryString=false)
    {
        eError error = e_ERROR_NONE;
        if ((delegated))
        if (!(error = ReadInit(delegated, isFromQueryString))) 
        {
            tWhat what;
            tLength count;
            while (0 < (count = delegated->Read(&what, 1))) 
            {
                if (0 > (count = ReadPut(what)))
                    break;
            }
            error = ReadFinal();
        }
        return error;
    }
    ///////////////////////////////////////////////////////////////////////
    //  Function: ReadLine
    //
    //    Author: $author$
    //      Date: 11/24/2012
    ///////////////////////////////////////////////////////////////////////
    virtual eError ReadLine
    (cCharStreamInterface* delegated)
    {
        eError error = e_ERROR_NONE;
        if ((delegated))
        {
            tWhat what;
            tLength count;
            while (0 < (count = delegated->Read(&what, 1))) 
            {
                if (m_lf == (what))
                    break;
            }
        }
        return error;
    }
    ///////////////////////////////////////////////////////////////////////
    //  Function: ReadInit
    //
    //    Author: $author$
    //      Date: 11/24/2012
    ///////////////////////////////////////////////////////////////////////
    virtual eError ReadInit
    (cCharStreamInterface* delegated, bool isFromQueryString=false)
    {
        eError error = e_ERROR_NONE;
        eError error2;
        tLength count;

        m_delegated = delegated;
        m_isFromQueryString = isFromQueryString;
        m_put = &cDerives::ReadNamePut;
        m_final = 0;    
        
        if (0 > (count = m_name.Clear()))
        if (!error)
            error = -count;
            
        if (0 > (count = m_value.Clear()))
        if (!error)
            error = -count;
            
        if ((error2 = m_events.OnReadFormFieldsInit(m_isFromQueryString)))
        if (!error)
            error = error2;

        return error;
    }
    ///////////////////////////////////////////////////////////////////////
    //  Function: ReadFinal
    //
    //    Author: $author$
    //      Date: 11/24/2012
    ///////////////////////////////////////////////////////////////////////
    virtual eError ReadFinal()
    {
        eError error = e_ERROR_NONE;
        eError error2;
        
        if (m_final)
            error = (this->*m_final)();
            
        if ((error2 = m_events.OnReadFormFieldsFinal(m_isFromQueryString)))
        if (!error)
            error = error2;

        m_isFromQueryString = false;
        m_delegated = 0;
        return error;
    }

    ///////////////////////////////////////////////////////////////////////
    //  Function: ReadPut
    //
    //    Author: $author$
    //      Date: 11/24/2012
    ///////////////////////////////////////////////////////////////////////
    virtual tLength ReadPut(const tWhat& what)
    {
        tLength count = -1;
        if (m_put)
            count = (this->*m_put)(what);
        return count;
    }
    ///////////////////////////////////////////////////////////////////////
    //  Function: ReadNamePut
    //
    //    Author: $author$
    //      Date: 11/24/2012
    ///////////////////////////////////////////////////////////////////////
    virtual tLength ReadNamePut(const tWhat& what)
    {
        tLength count = 1;
        tLength count2;
        
        if (m_eq == what)
        {
            m_put = &cDerives::ReadValuePut;
        }
        else
        if (m_amp == what)
        {
            if (0 > (count2 = m_name.Clear()))
                count = count2;
        }
        else
        if (0 > (count2 = m_name.Append(&what, 1)))
            count = count2;
            
        return count;
    }
    ///////////////////////////////////////////////////////////////////////
    //  Function: ReadValuePut
    //
    //    Author: $author$
    //      Date: 11/24/2012
    ///////////////////////////////////////////////////////////////////////
    virtual tLength ReadValuePut(const tWhat& what)
    {
        tLength count = 1;
        tLength count2;
        eError error;
        
        if (m_amp == what)
        {
            if ((error = ReadValueFinal()))
                count = -error;
                
            m_put = &cDerives::ReadNamePut;
            m_final = 0;    
        }
        else
        if (0 > (count2 = m_value.Append(&what, 1)))
            count = count2;
        else
        if (!m_final)
            m_final = &cDerives::ReadValueFinal;
            
        return count;
    }
    ///////////////////////////////////////////////////////////////////////
    //  Function: ReadValueFinal
    //
    //    Author: $author$
    //      Date: 11/24/2012
    ///////////////////////////////////////////////////////////////////////
    virtual eError ReadValueFinal()
    {
        eError error = m_events.OnReadFormField(m_name, m_value, m_isFromQueryString);
        tLength count;

        if (0 > (count = m_name.Clear()))
        if (!error)
            error = -count;
            
        if (0 > (count = m_value.Clear()))
        if (!error)
            error = -count;

        return error;
    }
};


#if defined(c_NAMESPACE)
}
#endif // defined(c_NAMESPACE) 

#endif // _CHTTPFORMFIELDSCHARSTREAM_HPP 
        

