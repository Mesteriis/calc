#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::s_pres_num_pad()
{
ui->lineEdit->setText(ui->lineEdit->text() + sender()->objectName().split("_")[1]);
}


void MainWindow::on_pb_1_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text() + sender()->objectName().split("_")[1]);
}


void MainWindow::on_pb_2_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text() + sender()->objectName().split("_")[1]);
}


void MainWindow::on_pb_3_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text() + sender()->objectName().split("_")[1]);
}


void MainWindow::on_pb_4_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text() + sender()->objectName().split("_")[1]);
}


void MainWindow::on_pb_5_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text() + sender()->objectName().split("_")[1]);
}


void MainWindow::on_pb_6_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text() + sender()->objectName().split("_")[1]);
}


void MainWindow::on_pb_7_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text() + sender()->objectName().split("_")[1]);
}


void MainWindow::on_pb_8_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text() + sender()->objectName().split("_")[1]);
}


void MainWindow::on_pb_9_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text() + sender()->objectName().split("_")[1]);
}


void MainWindow::on_pb_0_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text() + sender()->objectName().split("_")[1]);
}


void MainWindow::on_pb_back_clicked()
{
    auto tmp = ui->lineEdit->text();
    tmp.chop(1);
    ui->lineEdit->setText(tmp);
}


void MainWindow::on_pb_ymn_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text() + "*");
}


void MainWindow::on_pb_del_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text() + "/");
}


void MainWindow::on_pb_plus_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text() + "+");
}


void MainWindow::on_pb_minus_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text() + "-");
}


void MainWindow::on_pb_ravno_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text() + '=' + calc(ui->lineEdit->text().toStdString()+'='));
}

QString MainWindow::calc(std::string str)
{
    int a;
    int b;
    enum actions {
        ADDITION = '+',
        SUBTRACTION = '-',
        MULTIPLICATION = '*',
        SEGMENTATION = '/'
    };
    std::string tmp = "";
    actions action;
    // 456+765=
    for (char i: str) {
        if (isdigit(i) || i == '.') {
            tmp += i;
        } else if (i == '/' || i == '*' || i == '+' || i == '-') {
            action = actions(i);
            a = std::stoi(tmp);
            tmp = "";
        } else if (i == '=') {
            b = std::stoi(tmp);
            switch (action) {
                case ADDITION:return QString::number(a+b);
                case SUBTRACTION:return QString::number(a-b);
                case MULTIPLICATION:return QString::number(a*b);
                case SEGMENTATION:return QString::number(a/b);
            }
        }
    }
}

