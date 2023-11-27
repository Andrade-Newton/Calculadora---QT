#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    number_1 = "";
    number_2 = "";
    aux = "";
    resultado = 0;
    operacao = 0;
    clique = false;
}

MainWindow::~MainWindow()
{
    delete ui;
}

//p1


void MainWindow::on_button_0_clicked()
{
    if(clique == false){
        number_1 += "0";
        ui->Tela->display(number_1.toInt());
    }else{
        number_2 += "0";
        ui->Tela->display(number_2.toInt());
    }
}


void MainWindow::on_button_1_clicked()
{
    if(clique == false){
        number_1 += "1";
        ui->Tela->display(number_1.toInt());
    }else{
        number_2 += "1";
        ui->Tela->display(number_2.toInt());
    }
}


void MainWindow::on_button_2_clicked()
{
    if(clique == false){
        number_1 += "2";
        ui->Tela->display(number_1.toInt());
    }else{
        number_2 += "2";
        ui->Tela->display(number_2.toInt());
    }
}


void MainWindow::on_button_3_clicked()
{
    if(clique == false){
        number_1 += "3";
        ui->Tela->display(number_1.toInt());
    }else{
        number_2 += "3";
        ui->Tela->display(number_2.toInt());
    }
}


void MainWindow::on_button_4_clicked()
{
    if(clique == false){
        number_1 += "4";
        ui->Tela->display(number_1.toInt());
    }else{
        number_2 += "4";
        ui->Tela->display(number_2.toInt());
    }
}


void MainWindow::on_button_5_clicked()
{
    if(clique == false){
        number_1 += "5";
        ui->Tela->display(number_1.toInt());
    }else{
        number_2 += "5";
        ui->Tela->display(number_2.toInt());
    }
}


void MainWindow::on_button_6_clicked()
{
    if(clique == false){
        number_1 += "6";
        ui->Tela->display(number_1.toInt());
    }else{
        number_2 += "6";
        ui->Tela->display(number_2.toInt());
    }
}


void MainWindow::on_button_7_clicked()
{
    if(clique == false){
        number_1 += "7";
        ui->Tela->display(number_1.toInt());
    }else{
        number_2 += "7";
        ui->Tela->display(number_2.toInt());
    }
}


void MainWindow::on_button_8_clicked()
{
    if(clique == false){
        number_1 += "8";
        ui->Tela->display(number_1.toInt());
    }else{
        number_2 += "8";
        ui->Tela->display(number_2.toInt());
    }
}


void MainWindow::on_button_9_clicked()
{
    if(clique == false){
        number_1 += "9";
        ui->Tela->display(number_1.toInt());
    }else{
        number_2 += "9";
        ui->Tela->display(number_2.toInt());
    }
}

//p2


void MainWindow::on_button_equal_clicked()
{
    clique = false;
    switch(operacao){
    case 1:
        resultado = number_1.toDouble() + number_2.toDouble();
        ui->Tela->display(resultado);
        break;

    case 2:
        resultado = number_1.toDouble() - number_2.toDouble();
        ui->Tela->display(resultado);
        break;

    case 3:
        resultado = number_1.toDouble() * number_2.toDouble();
        ui->Tela->display(resultado);
        break;

    case 4:
        resultado = number_1.toDouble() / number_2.toDouble();
        ui->Tela->display(resultado);
        break;

    case 5:
        resultado = pow(number_1.toDouble(), number_2.toDouble());
        ui->Tela->display(resultado);
        break;

    case 6:
        resultado = pow(number_1.toDouble(), (1 / number_2.toDouble()));
        ui->Tela->display(resultado);
        break;
    }
    number_1 = QString::number(resultado);
    number_2 = "";
}


void MainWindow::on_button_sum_clicked()
{
    operacao = 1;
    clique = true;
}


void MainWindow::on_button_minus_clicked()
{
    operacao = 2;
    clique = true;
}


void MainWindow::on_button_multiplication_clicked()
{
    operacao = 3;
    clique = true;
}


void MainWindow::on_button_division_clicked()
{
    operacao = 4;
    clique = true;
}


void MainWindow::on_button_clear_clicked()
{
    if(clique == false){
        number_1 = "";
        ui->Tela->display(0);
    }else{
        number_2 = "";
        ui->Tela->display(0);
    }
}


void MainWindow::on_button_delete_clicked()
{
    number_1 = "";
    number_2 = "";
    clique = false;
    operacao = 0;
    ui->Tela->display(0);
}


void MainWindow::on_button_power_clicked()
{
    operacao = 5;
    clique = true;
}


void MainWindow::on_button_root_clicked()
{
    operacao = 6;
    clique = true;
}

//p3

void MainWindow::on_button_remove_clicked()
{
    if(clique == false){
        for(int i = 0;i < number_1.size()-1;i++){
            aux += number_1[i];
        }
        number_1 = aux;
        ui->Tela->display(number_1.toInt());
    }else{
        for(int i = 0;i < number_2.size()-1;i++){
            aux += number_2[i];
        }
        number_2 = aux;
        ui->Tela->display(number_2.toInt());
    }
    aux.clear();
}

