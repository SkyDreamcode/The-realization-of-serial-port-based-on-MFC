
// ComPort.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CComPortApp: 
// �йش����ʵ�֣������ ComPort.cpp
//

class CComPortApp : public CWinApp
{
public:
	CComPortApp();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CComPortApp theApp;