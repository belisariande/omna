///////////////////////////////////////////////////////////////////////
/// Copyright (c) 1988-2021 $organization$
///
/// This software is provided by the author and contributors ``as is'' 
/// and any express or implied warranties, including, but not limited to, 
/// the implied warranties of merchantability and fitness for a particular 
/// purpose are disclaimed. In no event shall the author or contributors 
/// be liable for any direct, indirect, incidental, special, exemplary, 
/// or consequential damages (including, but not limited to, procurement 
/// of substitute goods or services; loss of use, data, or profits; or 
/// business interruption) however caused and on any theory of liability, 
/// whether in contract, strict liability, or tort (including negligence 
/// or otherwise) arising in any way out of the use of this software, 
/// even if advised of the possibility of such damage.
///
///   File: cev2hashmain.cpp
///
/// Author: $author$
///   Date: 4/9/2021
///////////////////////////////////////////////////////////////////////
#include "cev2hashmain.hpp"

///////////////////////////////////////////////////////////////////////
/// class CEv2HashMain
///////////////////////////////////////////////////////////////////////
CEv2HashMain* CEv2HashMain::m_theMain = 0;

///////////////////////////////////////////////////////////////////////
///  Class: CEvHashFileMainArg
///////////////////////////////////////////////////////////////////////
class CEvHashFileMainArg: public CEvMainArg {
public:
    typedef CEvMainArg CExtends;
    typedef CEvHashFileMainArg CDerives;

    ///////////////////////////////////////////////////////////////////////
    /// Constructor: CEvHashFileMainArg
    ///////////////////////////////////////////////////////////////////////
    CEvHashFileMainArg
    (const char* shortName="f",
     const char* longName="file",
     const char* description="File to hash",
     const char* parameters="file:File to hash")
    : CExtends(shortName, longName, description, parameters) {
    }

    ///////////////////////////////////////////////////////////////////////
    /// Function: MainArg
    ///////////////////////////////////////////////////////////////////////
    virtual int MainArg
    (int args, int argn, const char *arg, 
     int argc, const char** argv, const char** env) {
        CEv2HashMain* theMain = 0;
        if ((theMain = CEv2HashMain::theMain())) {
            if ((arg = MainArgParam(argn, arg, argc, argv)))
                theMain->HashFile(arg);
            theMain->SetDidMain();
        }
        return argn;
    }
} g_hashFileArg;

///////////////////////////////////////////////////////////////////////
///  Class: CEvHashTestMainArg
///////////////////////////////////////////////////////////////////////
class CEvHashTestMainArg: public CEvMainArg {
public:
    typedef CEvMainArg CExtends;
    typedef CEvHashTestMainArg CDerives;

    ///////////////////////////////////////////////////////////////////////
    /// Constructor: CEvHashTestMainArg
    ///////////////////////////////////////////////////////////////////////
    CEvHashTestMainArg
    (const char* shortName="t",
     const char* longName="test",
     const char* description="Test hash",
     const char* parameters="")
    : CExtends(shortName, longName, description, parameters) {
    }

    ///////////////////////////////////////////////////////////////////////
    /// Function: MainArg
    ///////////////////////////////////////////////////////////////////////
    virtual int MainArg
    (int args, int argn, const char *arg, 
     int argc, const char** argv, const char** env) {
        CEv2HashMain* theMain = 0;
        if ((theMain = CEv2HashMain::theMain())) {
            theMain->Test(argc, argv, env);
            theMain->SetDidMain();
        }
        return argn;
    }
} g_hashTestArg;

#if defined(_CEV2HASHMAIN_INSTANCE)
static CEv2HashMain the_CEv2HashMain;
#endif /// defined(_CEV2HASHMAIN_INSTANCE) 
