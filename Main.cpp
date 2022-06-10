#include "Main.h"
wxBEGIN_EVENT_TABLE(Main, wxFrame)
EVT_BUTTON(wxID_ANY, Main::OnButtonClick)

wxEND_EVENT_TABLE()
Main::Main() : wxFrame(nullptr, wxID_ANY, "CALCULATORTRON 4000", wxPoint(400, 100), wxSize(400, 600)) {
	txt = new wxTextCtrl(this, 21, "", wxPoint(5, 5), wxSize(375, 50));
	button1 = new wxButton(this, 1, "1", wxPoint(30, 100), wxSize(100, 100));
	button1 = new wxButton(this, 2, "2", wxPoint(140, 100), wxSize(100, 100));
	button1 = new wxButton(this, 3, "3", wxPoint(250, 100), wxSize(100, 100));
	button1 = new wxButton(this, 4, "4", wxPoint(30, 210), wxSize(100, 100));
	button1 = new wxButton(this, 5, "5", wxPoint(140, 210), wxSize(100, 100));
	button1 = new wxButton(this, 6, "6", wxPoint(250, 210), wxSize(100, 100));
	button1 = new wxButton(this, 7, "7", wxPoint(30, 320), wxSize(100, 100));
	button1 = new wxButton(this, 8, "8", wxPoint(140, 320), wxSize(100, 100));
	button1 = new wxButton(this, 9, "9", wxPoint(250, 320), wxSize(100, 100));
	button1 = new wxButton(this, 0, "0", wxPoint(140, 430), wxSize(100, 100));
	button1 = new wxButton(this, 10, "=", wxPoint(305, 430), wxSize(45, 45));
	button1 = new wxButton(this, 11, "C", wxPoint(305, 485), wxSize(45, 45));
	button1 = new wxButton(this, 12, "MOD", wxPoint(250, 430), wxSize(45, 45));
	button1 = new wxButton(this, 13, "+/-", wxPoint(250, 485), wxSize(45, 45));
	button1 = new wxButton(this, 14, "+", wxPoint(30, 430), wxSize(45, 45));
	button1 = new wxButton(this, 15, "-", wxPoint(85, 430), wxSize(45, 45));
	button1 = new wxButton(this, 16, "*", wxPoint(30, 485), wxSize(45, 45));
	button1 = new wxButton(this, 17, "/", wxPoint(85, 485), wxSize(45, 45));
	button1 = new wxButton(this, 18, "DEC", wxPoint(30, 60), wxSize(100, 30));
	button1 = new wxButton(this, 19, "BIN", wxPoint(140, 60), wxSize(100, 30));
	button1 = new wxButton(this, 20, "HEX", wxPoint(250, 60), wxSize(100, 30));


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