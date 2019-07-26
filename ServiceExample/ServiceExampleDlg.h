
// ServiceExampleDlg.h : ͷ�ļ�
//

#pragma once
#include "afxcmn.h"


// CServiceExampleDlg �Ի���
class CServiceExampleDlg : public CDialogEx
{
// ����
public:
	CServiceExampleDlg(CWnd* pParent = NULL);	// ��׼���캯��

// �Ի�������
	enum { IDD = IDD_SERVICEEXAMPLE_DIALOG };

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
	afx_msg void OnSize(UINT nType, int cx, int cy);
private:
	bool InitEnumSrv(void);
	CListCtrl m_list;
	CToolBar m_toolbar;
	CImageList m_toolbarImg;
public:
	afx_msg void OnLvnColumnclickList1(NMHDR *pNMHDR, LRESULT *pResult);
	afx_msg void OnStartService();
	afx_msg void OnPauseService();
	afx_msg void OnStopService();
	afx_msg void OnRefreshAll();
	afx_msg void OnNMRClickList1(NMHDR *pNMHDR, LRESULT *pResult);
};
