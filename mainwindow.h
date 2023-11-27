#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <cmath>

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
    void on_button_0_clicked();

    void on_button_1_clicked();

    void on_button_2_clicked();

    void on_button_3_clicked();

    void on_button_4_clicked();

    void on_button_5_clicked();

    void on_button_6_clicked();

    void on_button_7_clicked();

    void on_button_8_clicked();

    void on_button_9_clicked();

    void on_button_equal_clicked();

    void on_button_sum_clicked();

    void on_button_minus_clicked();

    void on_button_multiplication_clicked();

    void on_button_division_clicked();

    void on_button_clear_clicked();

    void on_button_delete_clicked();

    void on_button_power_clicked();

    void on_button_root_clicked();

    void on_button_remove_clicked();

private:
    Ui::MainWindow *ui;
    QString number_1;
    QString number_2;
    QString aux;
    double resultado;
    int operacao;
    bool clique;
};
#endif // MAINWINDOW_H
