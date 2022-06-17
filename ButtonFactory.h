#pragma once
#include "wx/wx.h"
#include "Main.h"
class ButtonFactory
{
public:
	ButtonFactory();
	~ButtonFactory();
	wxButton* Make(Main* temp, int id, std::string label, int x, int y, int xs, int ys);
};

