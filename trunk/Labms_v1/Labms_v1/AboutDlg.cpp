#include "AboutDlg.h"
#include <QMessageBox>

AboutDlg::AboutDlg(QWidget *parent)
    : QDialog(parent)
{
    ui.setupUi(this);

    connect(ui.m_ok, SIGNAL(clicked()), this, SLOT(clickedOKBtn()));
}

AboutDlg::~AboutDlg()
{

}

void AboutDlg::clickedOKBtn(){
    close();
}
