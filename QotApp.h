//---------------------------------------------------------------------------
//
// Name:        QotApp.h
// Author:      Niña
// Created:     25/05/2017 06:43:53 a.m.
// Description: 
//
//---------------------------------------------------------------------------

#ifndef __OTHELLOApp_h__
#define __OTHELLOApp_h__

#ifdef __BORLANDC__
	#pragma hdrstop
#endif

#ifndef WX_PRECOMP
	#include <wx/wx.h>
#else
	#include <wx/wxprec.h>
#endif

class OTHELLOApp : public wxApp
{
	public:
		bool OnInit();
		int OnExit();
};

#endif
