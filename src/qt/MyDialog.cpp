#include "MyDialog.h"
#include "ui_MyDialogForm.h"

ep::qt::MyDialog::MyDialog(QWidget* parent, Qt::WindowFlags f)
  : QDialog(parent, f),
    m_ui(new Ui::MyDialogForm)
{
	// add controls
	m_ui->setupUi(this);
	
	connect(m_ui->m_okPushButton, SIGNAL(clicked()), this, SLOT(onOkPushButtonClicked()));
}

ep::qt::MyDialog::~MyDialog()
{
	
}

void ep::qt::MyDialog::onOkPushButtonClicked()
{
  reject();
}

