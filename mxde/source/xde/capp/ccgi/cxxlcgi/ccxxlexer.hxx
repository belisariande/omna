/**
 **********************************************************************
 * Copyright (c) 1988-2008 $organization$
 *
 * This software is provided by the author and contributors ``as is'' 
 * and any express or implied warranties, including, but not limited to, 
 * the implied warranties of merchantability and fitness for a particular 
 * purpose are disclaimed. In no event shall the author or contributors 
 * be liable for any direct, indirect, incidental, special, exemplary, 
 * or consequential damages (including, but not limited to, procurement 
 * of substitute goods or services; loss of use, data, or profits; or 
 * business interruption) however caused and on any theory of liability, 
 * whether in contract, strict liability, or tort (including negligence 
 * or otherwise) arising in any way out of the use of this software, 
 * even if advised of the possibility of such damage.
 *
 *   File: ccxxlexer.hxx
 *
 * Author: $author$
 *   Date: 9/3/2008
 **********************************************************************
 */
#ifndef _CCXXLEXER_HXX
#define _CCXXLEXER_HXX

#undef yyIsLexer
#undef yyLexer
#undef cYYIsLexer
#define yyIsLexer cCXXIsLexer
#define yyLexer cCXXLexer
#define cYYIsLexer cCXXLexerExtends

#include "cyylexer.hxx"
#include "clexerdelegate.hxx"
#include "clexer.hxx"

/**
 **********************************************************************
 *  Class: cCXXLexerDelegate
 *
 * Author: $author$
 *   Date: 9/3/2008
 **********************************************************************
 */
class cCXXLexerDelegate
: public cLexerDelegateT<cCXXLexerDelegate>
{
public:
    typedef cLexerDelegateT<cCXXLexerDelegate> cExtends;
    typedef cCXXLexerDelegate cDelegate;
};

/**
 **********************************************************************
 *  Class: cCXXLexer
 *
 * Author: $author$
 *   Date: 9/3/2008
 **********************************************************************
 */
class cCXXLexer
: public cLexerT
  <cCXXLexerDelegate,cCXXLexerExtends,
   cLexerSource,cCharStreamInterface>
{
public:
    typedef cLexerT
    <cCXXLexerDelegate,cCXXLexerExtends,
     cLexerSource,cCharStreamInterface> cExtends;
    typedef cCXXLexer cDerives;

    /**
     **********************************************************************
     * Constructor: cCXXLexer
     *
     *      Author: $author$
     *        Date: 9/3/2008
     **********************************************************************
     */
    cCXXLexer
    (cCXXLexerDelegate& delegate,
     cCharStreamInterface& out, 
     cCharStreamInterface& in, 
     cLexerSource &source)
    : cExtends(delegate, out, in, source) 
    {
    }
    /**
     **********************************************************************
     * Function: yylex
     *
     *   Author: $author$
     *     Date: 9/3/2008
     *
     * This function is generated by flex.
     **********************************************************************
     */
    virtual int yylex();
};

#endif /* _CCXXLEXER_HXX */
