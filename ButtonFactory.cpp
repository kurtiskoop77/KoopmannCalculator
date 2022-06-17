#include "ButtonFactory.h"

ButtonFactory::ButtonFactory() {

}
ButtonFactory::~ButtonFactory() {

}

wxButton* ButtonFactory::Make(Main* temp, int id, std::string label, int x, int y, int xs, int ys) {
	wxButton* buttn = new wxButton(temp, id, label, wxPoint(x, y), wxSize(xs, ys));
	return buttn;
}
