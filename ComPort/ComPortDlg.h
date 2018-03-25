
// ComPortDlg.h : 头文件
//

#pragma once


// CComPortDlg 对话框
class CComPortDlg : public CDialogEx
{
// 构造
public:
	CComPortDlg(CWnd* pParent = NULL);	// 标准构造函数

// 对话框数据
	enum { IDD = IDD_COMPORT_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持


// 实现
protected:
	HICON m_hIcon;

	// 生成的消息映射函数
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedBtnOpen();
	// 文件路径
	CString m_strDownLoadFile;
	afx_msg void OnBnClickedBtnDowndown();
	afx_msg void OnBnClickedButton4();
	afx_msg void OnBnClickedRadio2();
	afx_msg void OnBnClickedRadio4();
};
