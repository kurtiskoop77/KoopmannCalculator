#pragma once
#include "wx/wx.h"
class Main : public wxFrame
{
public:
	Main();
	~Main();
public:
	wxTextCtrl* txt;
	wxButton* button1;
public:
	wxDECLARE_EVENT_TABLE();
	void OnButtonClick(wxCommandEvent(&evt));

};

