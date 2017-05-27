///-----------------------------------------------------------------
///
/// @file      QotFrm.h
/// @author    Niña
/// Created:   25/05/2017 06:43:53 a.m.
/// @section   DESCRIPTION
///            OTHELLO class declaration
///
///------------------------------------------------------------------

#ifndef __OTHELLO_H__
#define __OTHELLO_H__

#ifdef __BORLANDC__
	#pragma hdrstop
#endif

#ifndef WX_PRECOMP
	#include <wx/wx.h>
	#include <wx/frame.h>
#else
	#include <wx/wxprec.h>
#endif

//Do not add custom headers between 
//Header Include Start and Header Include End.
//wxDev-C++ designer will remove them. Add custom headers after the block.
////Header Include Start
#include <wx/button.h>
#include <wx/sizer.h>
////Header Include End

////Dialog Style Start
#undef OTHELLO_STYLE
#define OTHELLO_STYLE wxCAPTION | wxRESIZE_BORDER | wxSYSTEM_MENU | wxMINIMIZE_BOX | wxMAXIMIZE_BOX | wxCLOSE_BOX
////Dialog Style End

class OTHELLO : public wxFrame
{
	private:
		DECLARE_EVENT_TABLE();
		
	public:
		OTHELLO(wxWindow *parent, wxWindowID id = 1, const wxString &title = wxT("Qot"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = OTHELLO_STYLE);
		virtual ~OTHELLO();
		void WxButton1Click(wxCommandEvent& event);
		
	private:
		//Do not add custom control declarations between
		//GUI Control Declaration Start and GUI Control Declaration End.
		//wxDev-C++ will remove them. Add custom code after the block.
		////GUI Control Declaration Start
		wxButton *WxButton64;
		wxButton *WxButton63;
		wxButton *WxButton62;
		wxButton *WxButton61;
		wxButton *WxButton60;
		wxButton *WxButton59;
		wxButton *WxButton58;
		wxButton *WxButton57;
		wxButton *WxButton56;
		wxButton *WxButton55;
		wxButton *WxButton54;
		wxButton *WxButton53;
		wxButton *WxButton52;
		wxButton *WxButton51;
		wxButton *WxButton50;
		wxButton *WxButton49;
		wxButton *WxButton48;
		wxButton *WxButton47;
		wxButton *WxButton46;
		wxButton *WxButton45;
		wxButton *WxButton44;
		wxButton *WxButton43;
		wxButton *WxButton42;
		wxButton *WxButton41;
		wxButton *WxButton40;
		wxButton *WxButton39;
		wxButton *WxButton38;
		wxButton *WxButton37;
		wxButton *WxButton36;
		wxButton *WxButton35;
		wxButton *WxButton34;
		wxButton *WxButton33;
		wxButton *WxButton32;
		wxButton *WxButton31;
		wxButton *WxButton30;
		wxButton *WxButton29;
		wxButton *WxButton28;
		wxButton *WxButton27;
		wxButton *WxButton26;
		wxButton *WxButton25;
		wxButton *WxButton24;
		wxButton *WxButton23;
		wxButton *WxButton22;
		wxButton *WxButton21;
		wxButton *WxButton20;
		wxButton *WxButton19;
		wxButton *WxButton18;
		wxButton *WxButton17;
		wxButton *WxButton16;
		wxButton *WxButton15;
		wxButton *WxButton14;
		wxButton *WxButton13;
		wxButton *WxButton12;
		wxButton *WxButton11;
		wxButton *WxButton10;
		wxButton *WxButton9;
		wxButton *WxButton8;
		wxButton *WxButton7;
		wxButton *WxButton6;
		wxButton *WxButton5;
		wxButton *WxButton4;
		wxButton *WxButton3;
		wxButton *WxButton2;
		wxButton *WxButton1;
		wxGridSizer *WxGridSizer1;
		////GUI Control Declaration End
		wxButton* tablero[8][8];
		int auxX,auxY,turno,cambio,fichas;
		
		
	private:
		//Note: if you receive any error with these enum IDs, then you need to
		//change your old form code that are based on the #define control IDs.
		//#defines may replace a numeric value for the enum names.
		//Try copy and pasting the below block in your old form header files.
		enum
		{
			////GUI Enum Control ID Start
			ID_WXBUTTON64 = 1135,
			ID_WXBUTTON63 = 1134,
			ID_WXBUTTON62 = 1133,
			ID_WXBUTTON61 = 1132,
			ID_WXBUTTON60 = 1131,
			ID_WXBUTTON59 = 1130,
			ID_WXBUTTON58 = 1129,
			ID_WXBUTTON57 = 1128,
			ID_WXBUTTON56 = 1127,
			ID_WXBUTTON55 = 1126,
			ID_WXBUTTON54 = 1125,
			ID_WXBUTTON53 = 1124,
			ID_WXBUTTON52 = 1123,
			ID_WXBUTTON51 = 1122,
			ID_WXBUTTON50 = 1121,
			ID_WXBUTTON49 = 1120,
			ID_WXBUTTON48 = 1119,
			ID_WXBUTTON47 = 1118,
			ID_WXBUTTON46 = 1117,
			ID_WXBUTTON45 = 1116,
			ID_WXBUTTON44 = 1115,
			ID_WXBUTTON43 = 1114,
			ID_WXBUTTON42 = 1113,
			ID_WXBUTTON41 = 1112,
			ID_WXBUTTON40 = 1111,
			ID_WXBUTTON39 = 1110,
			ID_WXBUTTON38 = 1109,
			ID_WXBUTTON37 = 1108,
			ID_WXBUTTON36 = 1107,
			ID_WXBUTTON35 = 1106,
			ID_WXBUTTON34 = 1105,
			ID_WXBUTTON33 = 1104,
			ID_WXBUTTON32 = 1103,
			ID_WXBUTTON31 = 1102,
			ID_WXBUTTON30 = 1101,
			ID_WXBUTTON29 = 1100,
			ID_WXBUTTON28 = 1099,
			ID_WXBUTTON27 = 1098,
			ID_WXBUTTON26 = 1097,
			ID_WXBUTTON25 = 1096,
			ID_WXBUTTON24 = 1095,
			ID_WXBUTTON23 = 1094,
			ID_WXBUTTON22 = 1093,
			ID_WXBUTTON21 = 1092,
			ID_WXBUTTON20 = 1091,
			ID_WXBUTTON19 = 1090,
			ID_WXBUTTON18 = 1089,
			ID_WXBUTTON17 = 1088,
			ID_WXBUTTON16 = 1087,
			ID_WXBUTTON15 = 1086,
			ID_WXBUTTON14 = 1085,
			ID_WXBUTTON13 = 1084,
			ID_WXBUTTON12 = 1083,
			ID_WXBUTTON11 = 1082,
			ID_WXBUTTON10 = 1081,
			ID_WXBUTTON9 = 1080,
			ID_WXBUTTON8 = 1079,
			ID_WXBUTTON7 = 1078,
			ID_WXBUTTON6 = 1077,
			ID_WXBUTTON5 = 1076,
			ID_WXBUTTON4 = 1075,
			ID_WXBUTTON3 = 1074,
			ID_WXBUTTON2 = 1072,
			ID_WXBUTTON1 = 1071,
			////GUI Enum Control ID End
			ID_DUMMY_VALUE_ //don't remove this value unless you have other enum values
		};
		
	private:
		void OnClose(wxCloseEvent& event);
		void CreateGUIControls();
};

#endif
