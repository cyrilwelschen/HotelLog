#include "loginwindow.h"
#include "ui_loginwindow.h"
#include <QMessageBox>

LoginWindow::LoginWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LoginWindow)
{
    ui->setupUi(this);
}

LoginWindow::~LoginWindow()
{
    delete ui;
}

void LoginWindow::on_loginButton_clicked()
{
    QString username = ui->userNameLineEdit->text();
    QString password = ui->passwordLineEdit->text();

    if (username == "Chris" && password == "horu"){
        hide();
        QMessageBox::information(this, "Login", "Login was correct. Starting Application.");
    } else {
        QMessageBox::warning(this, "Login", "Wrong password or username. \nPlease try again.");
    }
}
