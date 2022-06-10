#pragma once
#include "wx/wx.h"
#include "Main.h"
class Calc : public wxApp
{
public:
	Calc();
	~Calc();
private:
	Main* frame = nullptr;
public:
	virtual bool OnInit();
};

