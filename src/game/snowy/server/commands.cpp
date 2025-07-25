#include <convar.h>
#include "cbase.h"

#include "snowtest.h"

// memdbgon must be the last include file in a .cpp file!!!
#include "tier0/memdbgon.h"

using namespace vgui;


void c_sersnowtf(void)
{
	test();
#ifdef SNOWTF_DLL
	Msg("[SnowyTF] SNOWTF_DLL is defined?");
#else
	Msg("[SnowyTF] SNOWTF_DLL is not defined?");
#endif
}

//ConVar snowtf_testcvar( "snowtf_testcvar", "42", FCVAR_ARCHIVE, "Test" );

ConCommand snowtf_servertestfunc("snowtf_servertestfunc", c_sersnowtf, "Test");


//Msg("Test")