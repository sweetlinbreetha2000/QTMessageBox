#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QMessageBox>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    QMessageBox::information(this,"sweetlin_2122181041698","this is my information");

}



void MainWindow::on_pushButton_2_clicked()
{
    QMessageBox::critical(this,"sweetlin_2122181041698","this is critical");
}

void MainWindow::on_pushButton_3_clicked()
{
    QMessageBox::StandardButton reply=QMessageBox::question(this,"sweetlin_2122181041698","do you like cats",QMessageBox::Yes|QMessageBox::No);
    if(reply==QMessageBox::Yes)
    {
        QApplication::quit();
    }
}



void MainWindow::on_pushButton_4_clicked()
{
    QMessageBox::warning(this,"sweetlin_2122181041698","this is warning message");

}
