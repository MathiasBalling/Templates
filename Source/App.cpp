#include <wx/wx.h>
#include "../Header/App.h"
#include "../Header/MainFrame.h"
#include <iostream>

wxIMPLEMENT_APP(App);

bool App::OnInit()
{
    MainFrame *mainFrame = new MainFrame("C++ GUI");
    mainFrame->SetClientSize(800, 600);
    mainFrame->Center();
    mainFrame->Show();
    int w, h;
    wxDisplaySize(&w, &h);
    std::cout << h << " " << w << std::endl;
    return true;
}
