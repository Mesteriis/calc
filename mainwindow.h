#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDebug>
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void s_pres_num_pad();

    void on_pb_1_clicked();

    void on_pb_2_clicked();

    void on_pb_3_clicked();

    void on_pb_4_clicked();

    void on_pb_5_clicked();

    void on_pb_6_clicked();

    void on_pb_7_clicked();

    void on_pb_8_clicked();

    void on_pb_9_clicked();

    void on_pb_0_clicked();

    void on_pb_back_clicked();

    void on_pb_ymn_clicked();

    void on_pb_del_clicked();

    void on_pb_plus_clicked();

    void on_pb_minus_clicked();

    void on_pb_ravno_clicked();

private:
    Ui::MainWindow *ui;
    QString calc(std::string str);
};
#endif // MAINWINDOW_H
