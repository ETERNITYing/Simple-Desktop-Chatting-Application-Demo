#include "logindialog.h"
#include "ui_logindialog.h"

LoginDialog::LoginDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::LoginDialog)
{
    ui->setupUi(this);
    ui->passEdit->setEchoMode(QLineEdit::Password);
    connect(ui->regButton, &QPushButton::clicked, this, &LoginDialog::switchReg);
}

LoginDialog::~LoginDialog()
{
    delete ui;
}
