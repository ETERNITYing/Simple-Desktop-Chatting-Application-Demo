#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "logindialog.h"
#include "rgisterdialog.h"
/******************************************************************************
 *
 * @file       mainwindow.h
 * @brief      main window
 *
 * @author     Chueh Chi
 * @date       2024/03/26
 * @history
 *****************************************************************************/

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

public slots:
    void SlotSwitchReg();

private:
    Ui::MainWindow *ui;
    LoginDialog*  _login_dlg;
    RegisterDialog* _reg_dlg;
};
#endif // MAINWINDOW_H
