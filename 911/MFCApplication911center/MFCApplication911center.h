
// MFCApplication911center.h : main header file for the PROJECT_NAME application
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'pch.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CMFCApplication911centerApp:
// See MFCApplication911center.cpp for the implementation of this class
//

class CMFCApplication911centerApp : public CWinApp
{
public:
	CMFCApplication911centerApp();

// Overrides
public:
	virtual BOOL InitInstance();

// Implementation

	DECLARE_MESSAGE_MAP()
};

extern CMFCApplication911centerApp theApp;
