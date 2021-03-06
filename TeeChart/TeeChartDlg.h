
// TeeChartDlg.h: 头文件
//

#pragma once
#include "afxwin.h"
#include "mscomm1.h"
#include "tchart2.h"
#include "afxcmn.h"


// CTeeChartDlg 对话框
class CTeeChartDlg : public CDialog
{
// 构造
public:
	CTeeChartDlg(CWnd* pParent = NULL);	// 标准构造函数

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_TEECHART_DIALOG };
#endif

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
	
	CMscomm1 m_mscomm;
	afx_msg void OnBnClickedButtonOpen();
	DECLARE_EVENTSINK_MAP()
	void OnCommMscomm1();
	CTchart2 m_chart;
	_ConnectionPtr m_pConnection;
	_CommandPtr m_pCommand;
	_RecordsetPtr m_pRecordset;
	CString m_temp;
	CListCtrl m_list;
	afx_msg void OnBnClickedButton1();
	afx_msg void OnLvnItemchangedList1(NMHDR *pNMHDR, LRESULT *pResult);
};
