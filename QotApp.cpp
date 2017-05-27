//---------------------------------------------------------------------------
//
// Name:        QotApp.cpp
// Author:      Niña
// Created:     25/05/2017 06:43:53 a.m.
// Description: 
//
//---------------------------------------------------------------------------

#include "QotApp.h"
#include "QotFrm.h"

IMPLEMENT_APP(OTHELLOApp)

bool OTHELLOApp::OnInit()
{
    OTHELLO* frame = new OTHELLO(NULL);
    SetTopWindow(frame);
    frame->Show();
    return true;
}
 
int OTHELLOApp::OnExit()
{
	return 0;
}
