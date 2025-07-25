#include <convar.h>
#include "cbase.h"

#include "ienginevgui.h"
#include <vgui_controls/ScrollBarSlider.h>
#include "vgui/ILocalize.h"
#include "vgui/ISurface.h"
#include "vgui/IInput.h"
#include "tf_controls.h"
#include "vgui_controls/TextImage.h"
#include "vgui_controls/PropertyPage.h"
#include "econ_item_system.h"
#include "iachievementmgr.h"
#include "clientmode_tf.h"
#include <vgui_controls/AnimationController.h>
#include <vgui_controls/ListPanel.h>
#include <vgui_controls/PanelListPanel.h>
#include <vgui_controls/Label.h>
#include <vgui_controls/Button.h>
#include <vgui_controls/MessageBox.h>
#include <vgui_controls/CheckButton.h>
#include <vgui_controls/ComboBox.h>
#include <vgui_controls/TextEntry.h>
#include <../common/GameUI/cvarslider.h>
#include "filesystem.h"
#include "hud_controlpointicons.h"

// memdbgon must be the last include file in a .cpp file!!!
#include "tier0/memdbgon.h"

using namespace vgui;


void c_snowtf( void )
{
	#ifdef SNOWTF_CLIENT_DLL
		Msg("[SnowyTF] SNOWTF_CLIENT_DLL is defined?");
	#else
		Msg("[SnowyTF] SNOWTF_CLIENT_DLL is not defined?");
	#endif

	#ifdef SNOWTF_DLL
	Msg("[SnowyTF] SNOWTF_DLL is defined?");
	#else
	Msg("[SnowyTF] SNOWTF_DLL is not defined?");
	#endif
}

//ConVar snowtf_testcvar( "snowtf_testcvar", "42", FCVAR_ARCHIVE, "Test" );

ConCommand snowtf_clienttestfunc( "snowtf_clienttestfunc", c_snowtf, "Test");


//Msg("Test")