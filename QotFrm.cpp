///-----------------------------------------------------------------
///
/// @file      QotFrm.cpp
/// @author    Niña
/// Created:   25/05/2017 06:43:53 a.m.
/// @section   DESCRIPTION
///            OTHELLO class implementation
///
///------------------------------------------------------------------

#include "QotFrm.h"

//Do not add custom headers between
//Header Include Start and Header Include End
//wxDev-C++ designer will remove them
////Header Include Start
////Header Include End

//----------------------------------------------------------------------------
// OTHELLO
//----------------------------------------------------------------------------
//Add Custom Events only in the appropriate block.
//Code added in other places will be removed by wxDev-C++
////Event Table Start
BEGIN_EVENT_TABLE(OTHELLO,wxFrame)
	////Manual Code Start
	////Manual Code End
	
	EVT_CLOSE(OTHELLO::OnClose)
	EVT_BUTTON(ID_WXBUTTON64,OTHELLO::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON63,OTHELLO::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON62,OTHELLO::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON61,OTHELLO::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON60,OTHELLO::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON59,OTHELLO::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON58,OTHELLO::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON57,OTHELLO::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON56,OTHELLO::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON55,OTHELLO::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON54,OTHELLO::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON53,OTHELLO::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON52,OTHELLO::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON51,OTHELLO::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON50,OTHELLO::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON49,OTHELLO::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON48,OTHELLO::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON47,OTHELLO::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON46,OTHELLO::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON45,OTHELLO::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON44,OTHELLO::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON43,OTHELLO::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON42,OTHELLO::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON41,OTHELLO::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON40,OTHELLO::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON39,OTHELLO::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON38,OTHELLO::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON37,OTHELLO::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON36,OTHELLO::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON35,OTHELLO::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON34,OTHELLO::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON33,OTHELLO::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON32,OTHELLO::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON31,OTHELLO::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON30,OTHELLO::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON29,OTHELLO::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON28,OTHELLO::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON27,OTHELLO::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON26,OTHELLO::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON25,OTHELLO::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON24,OTHELLO::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON23,OTHELLO::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON22,OTHELLO::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON21,OTHELLO::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON20,OTHELLO::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON19,OTHELLO::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON18,OTHELLO::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON17,OTHELLO::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON16,OTHELLO::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON15,OTHELLO::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON14,OTHELLO::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON13,OTHELLO::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON12,OTHELLO::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON11,OTHELLO::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON10,OTHELLO::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON9,OTHELLO::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON8,OTHELLO::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON7,OTHELLO::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON6,OTHELLO::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON5,OTHELLO::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON4,OTHELLO::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON3,OTHELLO::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON2,OTHELLO::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON1,OTHELLO::WxButton1Click)
END_EVENT_TABLE()
////Event Table End

OTHELLO::OTHELLO(wxWindow *parent, wxWindowID id, const wxString &title, const wxPoint &position, const wxSize& size, long style)
: wxFrame(parent, id, title, position, size, style)
{
	CreateGUIControls();
}

OTHELLO::~OTHELLO()
{
}

void OTHELLO::CreateGUIControls()
{
	//Do not add custom code between
	//GUI Items Creation Start and GUI Items Creation End
	//wxDev-C++ designer will remove them.
	//Add the custom code before or after the blocks
	////GUI Items Creation Start

	WxGridSizer1 = new wxGridSizer(0, 8, 0, 0);
	this->SetSizer(WxGridSizer1);
	this->SetAutoLayout(true);

	WxButton1 = new wxButton(this, ID_WXBUTTON1, _(""), wxPoint(5, 5), wxSize(45, 42), 0, wxDefaultValidator, _("WxButton1"));
	WxButton1->SetBackgroundColour(wxColour(_("PURPLE")));
	WxGridSizer1->Add(WxButton1, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton2 = new wxButton(this, ID_WXBUTTON2, _(""), wxPoint(60, 5), wxSize(45, 42), 0, wxDefaultValidator, _("WxButton2"));
	WxButton2->SetBackgroundColour(wxColour(_("PURPLE")));
	WxGridSizer1->Add(WxButton2, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton3 = new wxButton(this, ID_WXBUTTON3, _(""), wxPoint(115, 5), wxSize(45, 42), 0, wxDefaultValidator, _("WxButton3"));
	WxButton3->SetBackgroundColour(wxColour(_("PURPLE")));
	WxGridSizer1->Add(WxButton3, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton4 = new wxButton(this, ID_WXBUTTON4, _(""), wxPoint(170, 5), wxSize(45, 42), 0, wxDefaultValidator, _("WxButton4"));
	WxButton4->SetBackgroundColour(wxColour(_("PURPLE")));
	WxGridSizer1->Add(WxButton4, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton5 = new wxButton(this, ID_WXBUTTON5, _(""), wxPoint(225, 5), wxSize(45, 42), 0, wxDefaultValidator, _("WxButton5"));
	WxButton5->SetBackgroundColour(wxColour(_("PURPLE")));
	WxGridSizer1->Add(WxButton5, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton6 = new wxButton(this, ID_WXBUTTON6, _(""), wxPoint(280, 5), wxSize(45, 42), 0, wxDefaultValidator, _("WxButton6"));
	WxButton6->SetBackgroundColour(wxColour(_("PURPLE")));
	WxGridSizer1->Add(WxButton6, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton7 = new wxButton(this, ID_WXBUTTON7, _(""), wxPoint(335, 5), wxSize(45, 42), 0, wxDefaultValidator, _("WxButton7"));
	WxButton7->SetBackgroundColour(wxColour(_("PURPLE")));
	WxGridSizer1->Add(WxButton7, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton8 = new wxButton(this, ID_WXBUTTON8, _(""), wxPoint(390, 5), wxSize(45, 42), 0, wxDefaultValidator, _("WxButton8"));
	WxButton8->SetBackgroundColour(wxColour(_("PURPLE")));
	WxGridSizer1->Add(WxButton8, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton9 = new wxButton(this, ID_WXBUTTON9, _(""), wxPoint(5, 57), wxSize(45, 42), 0, wxDefaultValidator, _("WxButton9"));
	WxButton9->SetBackgroundColour(wxColour(_("PURPLE")));
	WxGridSizer1->Add(WxButton9, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton10 = new wxButton(this, ID_WXBUTTON10, _(""), wxPoint(60, 57), wxSize(45, 42), 0, wxDefaultValidator, _("WxButton10"));
	WxButton10->SetBackgroundColour(wxColour(_("PURPLE")));
	WxGridSizer1->Add(WxButton10, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton11 = new wxButton(this, ID_WXBUTTON11, _(""), wxPoint(115, 57), wxSize(45, 42), 0, wxDefaultValidator, _("WxButton11"));
	WxButton11->SetBackgroundColour(wxColour(_("PURPLE")));
	WxGridSizer1->Add(WxButton11, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton12 = new wxButton(this, ID_WXBUTTON12, _(""), wxPoint(170, 57), wxSize(45, 42), 0, wxDefaultValidator, _("WxButton12"));
	WxButton12->SetBackgroundColour(wxColour(_("PURPLE")));
	WxGridSizer1->Add(WxButton12, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton13 = new wxButton(this, ID_WXBUTTON13, _(""), wxPoint(225, 57), wxSize(45, 42), 0, wxDefaultValidator, _("WxButton13"));
	WxButton13->SetBackgroundColour(wxColour(_("PURPLE")));
	WxGridSizer1->Add(WxButton13, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton14 = new wxButton(this, ID_WXBUTTON14, _(""), wxPoint(280, 57), wxSize(45, 42), 0, wxDefaultValidator, _("WxButton14"));
	WxButton14->SetBackgroundColour(wxColour(_("PURPLE")));
	WxGridSizer1->Add(WxButton14, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton15 = new wxButton(this, ID_WXBUTTON15, _(""), wxPoint(335, 57), wxSize(45, 42), 0, wxDefaultValidator, _("WxButton15"));
	WxButton15->SetBackgroundColour(wxColour(_("PURPLE")));
	WxGridSizer1->Add(WxButton15, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton16 = new wxButton(this, ID_WXBUTTON16, _(""), wxPoint(390, 57), wxSize(45, 42), 0, wxDefaultValidator, _("WxButton16"));
	WxButton16->SetBackgroundColour(wxColour(_("PURPLE")));
	WxGridSizer1->Add(WxButton16, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton17 = new wxButton(this, ID_WXBUTTON17, _(""), wxPoint(5, 109), wxSize(45, 42), 0, wxDefaultValidator, _("WxButton17"));
	WxButton17->SetBackgroundColour(wxColour(_("PURPLE")));
	WxGridSizer1->Add(WxButton17, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton18 = new wxButton(this, ID_WXBUTTON18, _(""), wxPoint(60, 109), wxSize(45, 42), 0, wxDefaultValidator, _("WxButton18"));
	WxButton18->SetBackgroundColour(wxColour(_("PURPLE")));
	WxGridSizer1->Add(WxButton18, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton19 = new wxButton(this, ID_WXBUTTON19, _(""), wxPoint(115, 109), wxSize(45, 42), 0, wxDefaultValidator, _("WxButton19"));
	WxButton19->SetBackgroundColour(wxColour(_("PURPLE")));
	WxGridSizer1->Add(WxButton19, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton20 = new wxButton(this, ID_WXBUTTON20, _(""), wxPoint(170, 109), wxSize(45, 42), 0, wxDefaultValidator, _("WxButton20"));
	WxButton20->SetBackgroundColour(wxColour(_("PURPLE")));
	WxGridSizer1->Add(WxButton20, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton21 = new wxButton(this, ID_WXBUTTON21, _(""), wxPoint(225, 109), wxSize(45, 42), 0, wxDefaultValidator, _("WxButton21"));
	WxButton21->SetBackgroundColour(wxColour(_("PURPLE")));
	WxGridSizer1->Add(WxButton21, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton22 = new wxButton(this, ID_WXBUTTON22, _(""), wxPoint(280, 109), wxSize(45, 42), 0, wxDefaultValidator, _("WxButton22"));
	WxButton22->SetBackgroundColour(wxColour(_("PURPLE")));
	WxGridSizer1->Add(WxButton22, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton23 = new wxButton(this, ID_WXBUTTON23, _(""), wxPoint(335, 109), wxSize(45, 42), 0, wxDefaultValidator, _("WxButton23"));
	WxButton23->SetBackgroundColour(wxColour(_("PURPLE")));
	WxGridSizer1->Add(WxButton23, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton24 = new wxButton(this, ID_WXBUTTON24, _(""), wxPoint(390, 109), wxSize(45, 42), 0, wxDefaultValidator, _("WxButton24"));
	WxButton24->SetBackgroundColour(wxColour(_("PURPLE")));
	WxGridSizer1->Add(WxButton24, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton25 = new wxButton(this, ID_WXBUTTON25, _(""), wxPoint(5, 161), wxSize(45, 42), 0, wxDefaultValidator, _("WxButton25"));
	WxButton25->SetBackgroundColour(wxColour(_("PURPLE")));
	WxGridSizer1->Add(WxButton25, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton26 = new wxButton(this, ID_WXBUTTON26, _(""), wxPoint(60, 161), wxSize(45, 42), 0, wxDefaultValidator, _("WxButton26"));
	WxButton26->SetBackgroundColour(wxColour(_("PURPLE")));
	WxGridSizer1->Add(WxButton26, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton27 = new wxButton(this, ID_WXBUTTON27, _(""), wxPoint(115, 161), wxSize(45, 42), 0, wxDefaultValidator, _("WxButton27"));
	WxButton27->SetBackgroundColour(wxColour(_("PURPLE")));
	WxGridSizer1->Add(WxButton27, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton28 = new wxButton(this, ID_WXBUTTON28, _(""), wxPoint(170, 161), wxSize(45, 42), 0, wxDefaultValidator, _("WxButton28"));
	WxButton28->Enable(false);
	WxButton28->SetBackgroundColour(wxColour(_("WHITE")));
	WxGridSizer1->Add(WxButton28, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton29 = new wxButton(this, ID_WXBUTTON29, _(""), wxPoint(225, 161), wxSize(45, 42), 0, wxDefaultValidator, _("WxButton29"));
	WxButton29->Enable(false);
	WxButton29->SetBackgroundColour(wxColour(_("BLACK")));
	WxGridSizer1->Add(WxButton29, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton30 = new wxButton(this, ID_WXBUTTON30, _(""), wxPoint(280, 161), wxSize(45, 42), 0, wxDefaultValidator, _("WxButton30"));
	WxButton30->SetBackgroundColour(wxColour(_("PURPLE")));
	WxGridSizer1->Add(WxButton30, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton31 = new wxButton(this, ID_WXBUTTON31, _(""), wxPoint(335, 161), wxSize(45, 42), 0, wxDefaultValidator, _("WxButton31"));
	WxButton31->SetBackgroundColour(wxColour(_("PURPLE")));
	WxGridSizer1->Add(WxButton31, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton32 = new wxButton(this, ID_WXBUTTON32, _(""), wxPoint(390, 161), wxSize(45, 42), 0, wxDefaultValidator, _("WxButton32"));
	WxButton32->SetBackgroundColour(wxColour(_("PURPLE")));
	WxGridSizer1->Add(WxButton32, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton33 = new wxButton(this, ID_WXBUTTON33, _(""), wxPoint(5, 213), wxSize(45, 42), 0, wxDefaultValidator, _("WxButton33"));
	WxButton33->SetBackgroundColour(wxColour(_("PURPLE")));
	WxGridSizer1->Add(WxButton33, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton34 = new wxButton(this, ID_WXBUTTON34, _(""), wxPoint(60, 213), wxSize(45, 42), 0, wxDefaultValidator, _("WxButton34"));
	WxButton34->SetBackgroundColour(wxColour(_("PURPLE")));
	WxGridSizer1->Add(WxButton34, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton35 = new wxButton(this, ID_WXBUTTON35, _(""), wxPoint(115, 213), wxSize(45, 42), 0, wxDefaultValidator, _("WxButton35"));
	WxButton35->SetBackgroundColour(wxColour(_("PURPLE")));
	WxGridSizer1->Add(WxButton35, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton36 = new wxButton(this, ID_WXBUTTON36, _(""), wxPoint(170, 213), wxSize(45, 42), 0, wxDefaultValidator, _("WxButton36"));
	WxButton36->Enable(false);
	WxButton36->SetBackgroundColour(wxColour(_("BLACK")));
	WxGridSizer1->Add(WxButton36, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton37 = new wxButton(this, ID_WXBUTTON37, _(""), wxPoint(225, 213), wxSize(45, 42), 0, wxDefaultValidator, _("WxButton37"));
	WxButton37->Enable(false);
	WxButton37->SetBackgroundColour(wxColour(_("WHITE")));
	WxGridSizer1->Add(WxButton37, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton38 = new wxButton(this, ID_WXBUTTON38, _(""), wxPoint(280, 213), wxSize(45, 42), 0, wxDefaultValidator, _("WxButton38"));
	WxButton38->SetBackgroundColour(wxColour(_("PURPLE")));
	WxGridSizer1->Add(WxButton38, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton39 = new wxButton(this, ID_WXBUTTON39, _(""), wxPoint(335, 213), wxSize(45, 42), 0, wxDefaultValidator, _("WxButton39"));
	WxButton39->SetBackgroundColour(wxColour(_("PURPLE")));
	WxGridSizer1->Add(WxButton39, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton40 = new wxButton(this, ID_WXBUTTON40, _(""), wxPoint(390, 213), wxSize(45, 42), 0, wxDefaultValidator, _("WxButton40"));
	WxButton40->SetBackgroundColour(wxColour(_("PURPLE")));
	WxGridSizer1->Add(WxButton40, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton41 = new wxButton(this, ID_WXBUTTON41, _(""), wxPoint(5, 265), wxSize(45, 42), 0, wxDefaultValidator, _("WxButton41"));
	WxButton41->SetBackgroundColour(wxColour(_("PURPLE")));
	WxGridSizer1->Add(WxButton41, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton42 = new wxButton(this, ID_WXBUTTON42, _(""), wxPoint(60, 265), wxSize(45, 42), 0, wxDefaultValidator, _("WxButton42"));
	WxButton42->SetBackgroundColour(wxColour(_("PURPLE")));
	WxGridSizer1->Add(WxButton42, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton43 = new wxButton(this, ID_WXBUTTON43, _(""), wxPoint(115, 265), wxSize(45, 42), 0, wxDefaultValidator, _("WxButton43"));
	WxButton43->SetBackgroundColour(wxColour(_("PURPLE")));
	WxGridSizer1->Add(WxButton43, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton44 = new wxButton(this, ID_WXBUTTON44, _(""), wxPoint(170, 265), wxSize(45, 42), 0, wxDefaultValidator, _("WxButton44"));
	WxButton44->SetBackgroundColour(wxColour(_("PURPLE")));
	WxGridSizer1->Add(WxButton44, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton45 = new wxButton(this, ID_WXBUTTON45, _(""), wxPoint(225, 265), wxSize(45, 42), 0, wxDefaultValidator, _("WxButton45"));
	WxButton45->SetBackgroundColour(wxColour(_("PURPLE")));
	WxGridSizer1->Add(WxButton45, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton46 = new wxButton(this, ID_WXBUTTON46, _(""), wxPoint(280, 265), wxSize(45, 42), 0, wxDefaultValidator, _("WxButton46"));
	WxButton46->SetBackgroundColour(wxColour(_("PURPLE")));
	WxGridSizer1->Add(WxButton46, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton47 = new wxButton(this, ID_WXBUTTON47, _(""), wxPoint(335, 265), wxSize(45, 42), 0, wxDefaultValidator, _("WxButton47"));
	WxButton47->SetBackgroundColour(wxColour(_("PURPLE")));
	WxGridSizer1->Add(WxButton47, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton48 = new wxButton(this, ID_WXBUTTON48, _(""), wxPoint(390, 265), wxSize(45, 42), 0, wxDefaultValidator, _("WxButton48"));
	WxButton48->SetBackgroundColour(wxColour(_("PURPLE")));
	WxGridSizer1->Add(WxButton48, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton49 = new wxButton(this, ID_WXBUTTON49, _(""), wxPoint(5, 317), wxSize(45, 42), 0, wxDefaultValidator, _("WxButton49"));
	WxButton49->SetBackgroundColour(wxColour(_("PURPLE")));
	WxGridSizer1->Add(WxButton49, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton50 = new wxButton(this, ID_WXBUTTON50, _(""), wxPoint(60, 317), wxSize(45, 42), 0, wxDefaultValidator, _("WxButton50"));
	WxButton50->SetBackgroundColour(wxColour(_("PURPLE")));
	WxGridSizer1->Add(WxButton50, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton51 = new wxButton(this, ID_WXBUTTON51, _(""), wxPoint(115, 317), wxSize(45, 42), 0, wxDefaultValidator, _("WxButton51"));
	WxButton51->SetBackgroundColour(wxColour(_("PURPLE")));
	WxGridSizer1->Add(WxButton51, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton52 = new wxButton(this, ID_WXBUTTON52, _(""), wxPoint(170, 317), wxSize(45, 42), 0, wxDefaultValidator, _("WxButton52"));
	WxButton52->SetBackgroundColour(wxColour(_("PURPLE")));
	WxGridSizer1->Add(WxButton52, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton53 = new wxButton(this, ID_WXBUTTON53, _(""), wxPoint(225, 317), wxSize(45, 42), 0, wxDefaultValidator, _("WxButton53"));
	WxButton53->SetBackgroundColour(wxColour(_("PURPLE")));
	WxGridSizer1->Add(WxButton53, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton54 = new wxButton(this, ID_WXBUTTON54, _(""), wxPoint(280, 317), wxSize(45, 42), 0, wxDefaultValidator, _("WxButton54"));
	WxButton54->SetBackgroundColour(wxColour(_("PURPLE")));
	WxGridSizer1->Add(WxButton54, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton55 = new wxButton(this, ID_WXBUTTON55, _(""), wxPoint(335, 317), wxSize(45, 42), 0, wxDefaultValidator, _("WxButton55"));
	WxButton55->SetBackgroundColour(wxColour(_("PURPLE")));
	WxGridSizer1->Add(WxButton55, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton56 = new wxButton(this, ID_WXBUTTON56, _(""), wxPoint(390, 317), wxSize(45, 42), 0, wxDefaultValidator, _("WxButton56"));
	WxButton56->SetBackgroundColour(wxColour(_("PURPLE")));
	WxGridSizer1->Add(WxButton56, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton57 = new wxButton(this, ID_WXBUTTON57, _(""), wxPoint(5, 369), wxSize(45, 42), 0, wxDefaultValidator, _("WxButton57"));
	WxButton57->SetBackgroundColour(wxColour(_("PURPLE")));
	WxGridSizer1->Add(WxButton57, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton58 = new wxButton(this, ID_WXBUTTON58, _(""), wxPoint(60, 369), wxSize(45, 42), 0, wxDefaultValidator, _("WxButton58"));
	WxButton58->SetBackgroundColour(wxColour(_("PURPLE")));
	WxGridSizer1->Add(WxButton58, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton59 = new wxButton(this, ID_WXBUTTON59, _(""), wxPoint(115, 369), wxSize(45, 42), 0, wxDefaultValidator, _("WxButton59"));
	WxButton59->SetBackgroundColour(wxColour(_("PURPLE")));
	WxGridSizer1->Add(WxButton59, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton60 = new wxButton(this, ID_WXBUTTON60, _(""), wxPoint(170, 369), wxSize(45, 42), 0, wxDefaultValidator, _("WxButton60"));
	WxButton60->SetBackgroundColour(wxColour(_("PURPLE")));
	WxGridSizer1->Add(WxButton60, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton61 = new wxButton(this, ID_WXBUTTON61, _(""), wxPoint(225, 369), wxSize(45, 42), 0, wxDefaultValidator, _("WxButton61"));
	WxButton61->SetBackgroundColour(wxColour(_("PURPLE")));
	WxGridSizer1->Add(WxButton61, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton62 = new wxButton(this, ID_WXBUTTON62, _(""), wxPoint(280, 369), wxSize(45, 42), 0, wxDefaultValidator, _("WxButton62"));
	WxButton62->SetBackgroundColour(wxColour(_("PURPLE")));
	WxGridSizer1->Add(WxButton62, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton63 = new wxButton(this, ID_WXBUTTON63, _(""), wxPoint(335, 369), wxSize(45, 42), 0, wxDefaultValidator, _("WxButton63"));
	WxButton63->SetBackgroundColour(wxColour(_("PURPLE")));
	WxGridSizer1->Add(WxButton63, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton64 = new wxButton(this, ID_WXBUTTON64, _(""), wxPoint(390, 369), wxSize(45, 42), 0, wxDefaultValidator, _("WxButton64"));
	WxButton64->SetBackgroundColour(wxColour(_("PURPLE")));
	WxGridSizer1->Add(WxButton64, 0, wxALIGN_CENTER | wxALL, 5);

	SetTitle(_("Qot"));
	SetIcon(wxNullIcon);
	
	Layout();
	GetSizer()->Fit(this);
	GetSizer()->SetSizeHints(this);
	Center();
	
	////GUI Items Creation End
	turno=0; // asignacion de que el primer turno sea el de las negras
	fichas=0; // contador para las fichas que llevaran un cambio
	// sentencia para darle una posicion a cada boton en la matriz tablero
    tablero[0][0]=WxButton1;
    tablero[0][1]=WxButton2;
    tablero[0][2]=WxButton3;
    tablero[0][3]=WxButton4;
    tablero[0][4]=WxButton5;
    tablero[0][5]=WxButton6;
    tablero[0][6]=WxButton7;
    tablero[0][7]=WxButton8;
    tablero[1][0]=WxButton9;
    tablero[1][1]=WxButton10;
    tablero[1][2]=WxButton11;
    tablero[1][3]=WxButton12;
    tablero[1][4]=WxButton13;
    tablero[1][5]=WxButton14;
    tablero[1][6]=WxButton15;
    tablero[1][7]=WxButton16;
    tablero[2][0]=WxButton17;
    tablero[2][1]=WxButton18;
    tablero[2][2]=WxButton19;
    tablero[2][3]=WxButton20;
    tablero[2][4]=WxButton21;
    tablero[2][5]=WxButton22;
    tablero[2][6]=WxButton23;
    tablero[2][7]=WxButton24;
    tablero[3][0]=WxButton25;
    tablero[3][1]=WxButton26;
    tablero[3][2]=WxButton27;
    tablero[3][3]=WxButton28;
    tablero[3][4]=WxButton29;
    tablero[3][5]=WxButton30;
    tablero[3][6]=WxButton31;
    tablero[3][7]=WxButton32;
    tablero[4][0]=WxButton33;
    tablero[4][1]=WxButton34;
    tablero[4][2]=WxButton35;
    tablero[4][3]=WxButton36;
    tablero[4][4]=WxButton37;
    tablero[4][5]=WxButton38;
    tablero[4][6]=WxButton39;
    tablero[4][7]=WxButton40;
    tablero[5][0]=WxButton41;
    tablero[5][1]=WxButton42;
    tablero[5][2]=WxButton43;
    tablero[5][3]=WxButton44;
    tablero[5][4]=WxButton45;
    tablero[5][5]=WxButton46;
    tablero[5][6]=WxButton47;
    tablero[5][7]=WxButton48;
    tablero[6][0]=WxButton49;
    tablero[6][1]=WxButton50;
    tablero[6][2]=WxButton51;
    tablero[6][3]=WxButton52;
    tablero[6][4]=WxButton53;
    tablero[6][5]=WxButton54;
    tablero[6][6]=WxButton55;
    tablero[6][7]=WxButton56;
    tablero[7][0]=WxButton57;
    tablero[7][1]=WxButton58;
    tablero[7][2]=WxButton59;
    tablero[7][3]=WxButton60;
    tablero[7][4]=WxButton61;
    tablero[7][5]=WxButton62;
    tablero[7][6]=WxButton63;
    tablero[7][7]=WxButton64; // fin de la sentencia
}

void OTHELLO::OnClose(wxCloseEvent& event)
{
	Destroy();
}

/*
 * WxButton1Click
 */
void OTHELLO::WxButton1Click(wxCommandEvent& event)
{
	// insert your code here
	wxButton*botonpresionado= (wxButton*)event.GetEventObject(); // codigo  para saber el boton del evento
	botonpresionado->Enable(false);                           
    //sentencia para saber cual boton fue el presionado            
	
    cambio=0;
	fichas=0;
	
	for (int y=0;y<8;y++){
        for(int x=0;x<8;x++){
            if(botonpresionado==tablero[y][x]){         //este ciclo, guarda las posiciones 
                auxY=y;                                 //cuando el boton presionado sea igual al boton de la matriz tablero
                auxX=x;
            }
        }
    }
    
    //cambio de colores de las FICHAS

    if(turno==0){ //cuando el turno es igual a 0, es el turno de las NEGRAS    
        turno=1; // para cederle el turno a las fichas blancas cuando termine la jugada
        botonpresionado->SetBackgroundColour("BLACK");
        tablero[auxY][auxX]->SetBackgroundColour(botonpresionado->GetBackgroundColour());
    //intentemos con los cambios VERTICALES
    
        for(int y=auxY;y<8;y++){ //este metodo es para las verticales cuando el cambio
                                 //es hacia ABAJO de la ficha colocada
            if(auxY+(y-auxY)<8){
                
                if(botonpresionado->GetBackgroundColour()!=tablero[auxY+(y-auxY)][auxX]->GetBackgroundColour() && tablero[auxY+(y-auxY)][auxX]->GetBackgroundColour()!="PURPLE"){
                fichas=fichas+1;    //este proceso, revisa a ver si la posicion a comparar es diferente
                                    //de una ficha negra y de un espacio purpura,osea, si es una ficha blanca
                }
                
                else if(botonpresionado->GetBackgroundColour()==tablero[auxY+(y-auxY)][auxX]->GetBackgroundColour() && fichas>=1){
                cambio=1;
                }
                
                
        
            }
        
        }
        
        if(cambio==1){
            for(int y=0;y<=fichas;y++){//CONDICION PARA ASEGURARSE QUE EL CAMBIO NO SE EFECTUE
                                        //SI LA CASILLA SIGUIENTE ES UN ESPACIO VACIO, OSEA, SIN FICHAS
                if(tablero[auxY+y][auxX]->GetBackgroundColour()!="PURPLE"){
                    tablero[auxY+y][auxX]->SetBackgroundColour("BLACK");
                }
            }
        }
        cambio=0;                   //reiniciamos las variables bandera para
        fichas=0;                   //que no hallan inconvenientes en los demas 
                                    //cambios
    
        for(int y=0;y<=auxY;y++){ //este metodo es para las verticales cuando el cambio
                                  //es hacia ARRIBA de la ficha colocada
            if(auxY-y>=0 && cambio==0){
                
                if(botonpresionado->GetBackgroundColour()!=tablero[auxY-y][auxX]->GetBackgroundColour() && tablero[auxY-y][auxX]->GetBackgroundColour()!="PURPLE"){
                fichas=fichas+1;    
                }
                
                else if(botonpresionado->GetBackgroundColour()==tablero[(auxY-y)][auxX]->GetBackgroundColour() && fichas>=1){
                cambio=1;
                }
                
                if(tablero[(auxY-y)][auxX]->GetBackgroundColour()=="PURPLE"){
                    cambio=0;   // esta condicion es para cuando halla un espacio sin marcar, no haga el cambio
                }
            }
            
        }
        
        if(cambio==1){
            for(int y=0;y<=(fichas);y++){//CONDICION PARA ASEGURARSE QUE EL CAMBIO NO SE EFECTUE
                                        //SI LA CASILLA SIGUIENTE ES UN ESPACIO VACIO, OSEA, SIN FICHAS
                if(tablero[auxY-y][auxX]->GetBackgroundColour()!="PURPLE"){
                    tablero[auxY-y][auxX]->SetBackgroundColour("BLACK");
                }
            }
        }
    
        cambio=0;                   //reiniciamos las variables bandera para
        fichas=0;                   //que no hallan inconvenientes en los demas 
                                    //cambios
                                    
        //CAMBIOS HORIZONTALES
        
        
        for(int x=auxX;x<8;x++){ //este metodo es para las horizontales cuando el cambio
                                 //es hacia DERECHA de la ficha colocada
            if(auxX+(x-auxX)<8){
                
                if(botonpresionado->GetBackgroundColour()!=tablero[auxY][auxX+(x-auxX)]->GetBackgroundColour() && tablero[auxY][auxX+(x-auxX)]->GetBackgroundColour()!="PURPLE"){
                fichas=fichas+1;    //este proceso, revisa a ver si la posicion a comparar es diferente
                                    //de una ficha negra y de un espacio purpura,osea, si es una ficha blanca
                }
                
                else if(botonpresionado->GetBackgroundColour()==tablero[auxY][auxX+(x-auxX)]->GetBackgroundColour() && fichas>=1){
                cambio=1;
                }
                
                
        
            }
        
        }
        
        if(cambio==1){
            for(int x=0;x<=fichas;x++){//CONDICION PARA ASEGURARSE QUE EL CAMBIO NO SE EFECTUE
                                        //SI LA CASILLA SIGUIENTE ES UN ESPACIO VACIO, OSEA, SIN FICHAS
                if(tablero[auxY][auxX+x]->GetBackgroundColour()!="PURPLE"){
                    tablero[auxY][auxX+x]->SetBackgroundColour("BLACK");
                }
            }
        }
        cambio=0;                   //reiniciamos las variables bandera para
        fichas=0;                   //que no hallan inconvenientes en los demas 
                                    //cambios
    
        for(int x=0;x<=auxX;x++){ //este metodo es para las verticales cuando el cambio
                                  //es hacia la IZQUIERDA de la ficha colocada
            if(auxX-x>=0 && cambio==0){
                
                if(botonpresionado->GetBackgroundColour()!=tablero[auxY][auxX-x]->GetBackgroundColour() && tablero[auxY][auxX-x]->GetBackgroundColour()!="PURPLE"){
                fichas=fichas+1;    
                }
                
                else if(botonpresionado->GetBackgroundColour()==tablero[(auxY)][auxX-x]->GetBackgroundColour() && fichas>=1){
                cambio=1;
                }
                
                if(tablero[auxY][auxX-x]->GetBackgroundColour()=="PURPLE"){
                    cambio=0;   // esta condicion es para cuando halla un espacio sin marcar, no haga el cambio
                }
            }
            
        }
        
        if(cambio==1){
            for(int x=0;x<=(fichas);x++){//CONDICION PARA ASEGURARSE QUE EL CAMBIO NO SE EFECTUE
                                        //SI LA CASILLA SIGUIENTE ES UN ESPACIO VACIO, OSEA, SIN FICHAS
                if(tablero[auxY][auxX-x]->GetBackgroundColour()!="PURPLE"){
                    tablero[auxY][auxX-x]->SetBackgroundColour("BLACK");
                }
            }
        }
    
        cambio=0;                   //reiniciamos las variables bandera para
        fichas=0;                   //que no hallan inconvenientes en los demas 
                                    //cambios
                                    
    
    
    }else if(turno==1){ // TURNO DE LAS FICHAS BLANCAS
        
        //este es el codigo para el turno de las BLANCAS
        
        turno=0; // para cederle el turno a las fichas negras cuando termine la jugada
        botonpresionado->SetBackgroundColour("WHITE");
        tablero[auxY][auxX]->SetBackgroundColour(botonpresionado->GetBackgroundColour()); 
        //cambio de FICHAS
           //CAMBIOS VERTICALES
    
        for(int y=auxY;y<8;y++){ //este metodo es para las verticales cuando el cambio
                                 //es hacia ABAJO de la ficha colocada
            if(auxY+(y-auxY)<8){
                
                if(botonpresionado->GetBackgroundColour()!=tablero[auxY+(y-auxY)][auxX]->GetBackgroundColour() && tablero[auxY+(y-auxY)][auxX]->GetBackgroundColour()!="PURPLE"){
                fichas=fichas+1;    //este proceso, revisa a ver si la posicion a comparar es diferente
                                    //de una ficha negra y de un espacio purpura,osea, si es una ficha blanca
                }
                
                else if(botonpresionado->GetBackgroundColour()==tablero[auxY+(y-auxY)][auxX]->GetBackgroundColour() && fichas>=1){
                cambio=1;
                }
                
            }
        
        }
        
        if(cambio==1){
            for(int y=0;y<=fichas;y++){//CONDICION PARA ASEGURARSE QUE EL CAMBIO NO SE EFECTUE
                                        //SI LA CASILLA SIGUIENTE ES UN ESPACIO VACIO, OSEA, SIN FICHAS
                if(tablero[auxY+y][auxX]->GetBackgroundColour()!="PURPLE"){
                    tablero[auxY+y][auxX]->SetBackgroundColour("WHITE");
                }
            }
        }
        cambio=0;                   //reiniciamos las variables bandera para
        fichas=0;                   //que no hallan inconvenientes en los demas 
                                    //cambios
    
        for(int y=0;y<=auxY;y++){ //este metodo es para las verticales cuando el cambio
                                  //es hacia ARRIBA de la ficha colocada
            if(auxY-y>=0 && cambio==0){
                
                if(botonpresionado->GetBackgroundColour()!=tablero[auxY-y][auxX]->GetBackgroundColour() && tablero[auxY-y][auxX]->GetBackgroundColour()!="PURPLE"){
                fichas=fichas+1;    
                }
                
                else if(botonpresionado->GetBackgroundColour()==tablero[(auxY-y)][auxX]->GetBackgroundColour() && fichas>=1){
                cambio=1;
                }
                
                if(tablero[(auxY-y)][auxX]->GetBackgroundColour()=="PURPLE"){
                    cambio=0;   // esta condicion es para cuando halla un espacio sin marcar, no haga el cambio
                }
            }
            
        }
        
        if(cambio==1){
            for(int y=0;y<=(fichas);y++){//CONDICION PARA ASEGURARSE QUE EL CAMBIO NO SE EFECTUE
                                        //SI LA CASILLA SIGUIENTE ES UN ESPACIO VACIO, OSEA, SIN FICHAS
                if(tablero[auxY-y][auxX]->GetBackgroundColour()!="PURPLE"){
                    tablero[auxY-y][auxX]->SetBackgroundColour("WHITE");
                }
            }
        }
    
        //MOVIMIENTOS HORIZONTALES
    
    
        cambio=0;                   //reiniciamos las variables bandera para
        fichas=0;                   //que no hallan inconvenientes en los demas 
                                    //cambios 
        
        for(int x=auxX;x<8;x++){ //este metodo es para las verticales cuando el cambio
                                 //es hacia la DERECHA de la ficha colocada
            if(auxX+(x-auxX)<8){
                
                if(botonpresionado->GetBackgroundColour()!=tablero[auxY][auxX+(x-auxX)]->GetBackgroundColour() && tablero[auxY][auxX+(x-auxX)]->GetBackgroundColour()!="PURPLE"){
                fichas=fichas+1;    //este proceso, revisa a ver si la posicion a comparar es diferente
                                    //de una ficha negra y de un espacio purpura,osea, si es una ficha blanca
                }
                
                else if(botonpresionado->GetBackgroundColour()==tablero[auxY][auxX+(x-auxX)]->GetBackgroundColour() && fichas>=1){
                cambio=1;
                }
        
            }
        
        }
        
        if(cambio==1){
            for(int x=0;x<=fichas;x++){//CONDICION PARA ASEGURARSE QUE EL CAMBIO NO SE EFECTUE
                                        //SI LA CASILLA SIGUIENTE ES UN ESPACIO VACIO, OSEA, SIN FICHAS
                if(tablero[auxY][auxX+x]->GetBackgroundColour()!="PURPLE"){
                    tablero[auxY][auxX+x]->SetBackgroundColour("WHITE");
                }
            }
        }
        cambio=0;                   //reiniciamos las variables bandera para
        fichas=0;                   //que no hallan inconvenientes en los demas 
                                    //cambios
    
        for(int x=0;x<=auxX;x++){ //este metodo es para las verticales cuando el cambio
                                  //es hacia la IZQUIERDA de la ficha colocada
            if(auxX-x>=0 && cambio==0){
                
                if(botonpresionado->GetBackgroundColour()!=tablero[auxY][auxX-x]->GetBackgroundColour() && tablero[auxY][auxX-x]->GetBackgroundColour()!="PURPLE"){
                fichas=fichas+1;    
                }
                
                else if(botonpresionado->GetBackgroundColour()==tablero[(auxY)][auxX-x]->GetBackgroundColour() && fichas>=1){
                cambio=1;
                }
                
                if(tablero[auxY][auxX-x]->GetBackgroundColour()=="PURPLE"){
                    cambio=0;   // esta condicion es para cuando halla un espacio sin marcar, no haga el cambio
                }
            }
            
        }
        
        if(cambio==1){
            for(int x=0;x<=(fichas);x++){//CONDICION PARA ASEGURARSE QUE EL CAMBIO NO SE EFECTUE
                                        //SI LA CASILLA SIGUIENTE ES UN ESPACIO VACIO, OSEA, SIN FICHAS
                if(tablero[auxY][auxX-x]->GetBackgroundColour()!="PURPLE"){
                    tablero[auxY][auxX-x]->SetBackgroundColour("WHITE");
                }
            }
        }
    
        cambio=0;                   //reiniciamos las variables bandera para
        fichas=0;                   //que no hallan inconvenientes en los demas 
                                    //cambios
        
           
    }
    
    
    WxButton1=tablero[0][0];
    WxButton2=tablero[0][1];        //proceso para actualizar los botones con respecto a la matriz tablero
    WxButton3=tablero[0][2];
    WxButton4=tablero[0][3];
    WxButton5=tablero[0][4];
    WxButton6=tablero[0][5];
    WxButton7=tablero[0][6];
    WxButton8=tablero[0][7];
    WxButton9=tablero[1][0];
    WxButton10=tablero[1][1];
    WxButton11=tablero[1][2];
    WxButton12=tablero[1][3];
    WxButton13=tablero[1][4];
    WxButton14=tablero[1][5];
    WxButton15=tablero[1][6];
    WxButton16=tablero[1][7];
    WxButton17=tablero[2][0];
    WxButton18=tablero[2][1];
    WxButton19=tablero[2][2];
    WxButton20=tablero[2][3];
    WxButton21=tablero[2][4];
    WxButton22=tablero[2][5];
    WxButton23=tablero[2][6];
    WxButton24=tablero[2][7];
    WxButton25=tablero[3][0];
    WxButton26=tablero[3][1];
    WxButton27=tablero[3][2];
    WxButton28=tablero[3][3];
    WxButton29=tablero[3][4];
    WxButton30=tablero[3][5];
    WxButton31=tablero[3][6];
    WxButton32=tablero[3][7];
    WxButton33=tablero[4][0];
    WxButton34=tablero[4][1];
    WxButton35=tablero[4][2];
    WxButton36=tablero[4][3];
    WxButton37=tablero[4][4];
    WxButton38=tablero[4][5];
    WxButton39=tablero[4][6];
    WxButton40=tablero[4][7];
    WxButton41=tablero[5][0];
    WxButton42=tablero[5][1];
    WxButton43=tablero[5][2];
    WxButton44=tablero[5][3];
    WxButton45=tablero[5][4];
    WxButton46=tablero[5][5];
    WxButton47=tablero[5][6];
    WxButton48=tablero[5][7];
    WxButton49=tablero[6][0];
    WxButton50=tablero[6][1];
    WxButton51=tablero[6][2];
    WxButton52=tablero[6][3];
    WxButton53=tablero[6][4];
    WxButton54=tablero[6][5];
    WxButton55=tablero[6][6];
    WxButton56=tablero[6][7];
    WxButton57=tablero[7][0];
    WxButton58=tablero[7][1];
    WxButton59=tablero[7][2];
    WxButton60=tablero[7][3];
    WxButton61=tablero[7][4];
    WxButton62=tablero[7][5];
    WxButton63=tablero[7][6];
    WxButton64=tablero[7][7];
    
}
