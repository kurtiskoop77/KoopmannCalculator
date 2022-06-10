#include "Calc.h"
#include "Main.h"
wxIMPLEMENT_APP(Calc);

Calc::Calc() {

}
Calc::~Calc() {

}
bool Calc::OnInit() {
	frame = new Main();
	frame->Show();
	return true;
}
