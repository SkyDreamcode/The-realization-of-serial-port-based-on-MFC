
// ComPortDlg.h : ͷ�ļ�
//

#pragma once


// CComPortDlg �Ի���
class CComPortDlg : public CDialogEx
{
// ����
public:
	CComPortDlg(CWnd* pParent = NULL);	// ��׼���캯��

// �Ի�������
	enum { IDD = IDD_COMPORT_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV ֧��


// ʵ��
protected:
	HICON m_hIcon;

	// ���ɵ���Ϣӳ�亯��
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedBtnOpen();
	// �ļ�·��
	CString m_strDownLoadFile;
	afx_msg void OnBnClickedBtnDowndown();
	afx_msg void OnBnClickedButton4();
	afx_msg void OnBnClickedRadio2();
	afx_msg void OnBnClickedRadio4();
};
