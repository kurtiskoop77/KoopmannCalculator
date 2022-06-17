#include "Main.h"
#include "ButtonFactory.h"
wxBEGIN_EVENT_TABLE(Main, wxFrame)
EVT_BUTTON(wxID_ANY, Main::OnButtonClick)

wxEND_EVENT_TABLE()
Main::Main() : wxFrame(nullptr, wxID_ANY, "CALCULATORTRON 4000", wxPoint(400, 100), wxSize(400, 600)) {
	ButtonFactory* butFac = new ButtonFactory();
	button1 = butFac->Make(this, 1, "1", 30, 100, 100, 100);
	button1 = butFac->Make(this, 2, "2", 140, 100, 100, 100);
	button1 = butFac->Make(this, 3, "3", 250, 100, 100, 100);
	button1 = butFac->Make(this, 4, "4", 30, 210, 100, 100);
	button1 = butFac->Make(this, 5, "5", 140, 210, 100, 100);
	button1 = butFac->Make(this, 6, "6", 250, 210, 100, 100);
	button1 = butFac->Make(this, 7, "7", 30, 320, 100, 100);
	button1 = butFac->Make(this, 8, "8", 140, 320, 100, 100);
	button1 = butFac->Make(this, 9, "9", 250, 320, 100, 100);
	button1 = butFac->Make(this, 0, "0", 140, 430, 100, 100);
	button1 = butFac->Make(this, 10, "=", 305, 430, 45, 45);
	button1 = butFac->Make(this, 11, "C", 305, 485, 45, 45);
	button1 = butFac->Make(this, 12, "MOD", 250, 430, 45, 45);
	button1 = butFac->Make(this, 13, "+/-", 250, 485, 45, 45);
	button1 = butFac->Make(this, 14, "+", 30, 430, 45, 45);
	button1 = butFac->Make(this, 15, "-", 85, 430, 45, 45);
	button1 = butFac->Make(this, 16, "*", 30, 485, 45, 45);
	button1 = butFac->Make(this, 17, "/", 85, 485, 45, 45);
	button1 = butFac->Make(this, 18, "DEC", 30, 60, 100, 30);
	button1 = butFac->Make(this, 19, "BIN", 140, 60, 100, 30);
	button1 = butFac->Make(this, 20, "HEX", 250, 60, 100, 30);

	txt = new wxTextCtrl(this, 21, "", wxPoint(5, 5), wxSize(375, 50));

}
Main::~Main() {

}
void Main::OnButtonClick(wxCommandEvent(&evt)) {
	int id = evt.GetId();
	switch (id) {
	case 0: {
		txt->AppendText("0");
		break;
	}
	case 1: {
		txt->AppendText("1");
		break;
	}
	case 2: {
		txt->AppendText("2");
		break;
	}
	case 3: {
		txt->AppendText("3");
		break;
	}
	case 4: {
		txt->AppendText("4");
		break;
	}
	case 5: {
		txt->AppendText("5");
		break;
	}
	case 6: {
		txt->AppendText("6");
		break;
	}
	case 7: {
		txt->AppendText("7");
		break;
	}
	case 8: {
		txt->AppendText("8");
		break;
	}
	case 9: {
		txt->AppendText("9");
		break;
	}
	case 10: {
		txt->AppendText("=");
		break;
	}
	case 11: {
		txt->Clear();
		break;
	}
	case 12: {
		txt->AppendText("MOD");
		break;
	}
	case 13: {
		txt->AppendText("-");
		break;
	}
	case 14: {
		txt->AppendText("+");
		break;
	}
	case 15: {
		txt->AppendText("-");
		break;
	}
	case 16: {
		txt->AppendText("*");
		break;
	}
	case 17: {
		txt->AppendText("/");
		break;
	}
	case 18: {
		txt->AppendText("DEC");
		break;
	}
	case 19: {
		txt->AppendText("BIN");
		break;
	}
	case 20: {
		txt->AppendText("HEX");
		break; 
	}
	}
}