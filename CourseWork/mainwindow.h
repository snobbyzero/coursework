#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QVBoxLayout>
#include <QPushButton>
#include <QLabel>
#include <QListWidgetItem>
#include <QMessageBox>
#include "book.h"
#include "orderinformation.h"
#include "sorting.h"
#include "stock.h"
#include <sstream>
#include <iostream>
#include <QTextEdit>
#include <iterator>
#include <QFile>
#include <QTextStream>
#include <QDebug>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();


private:
    const QRegExp* emailRx = new QRegExp("\\w+@{1}\\w+.{1}\\w+");
    const QRegExp* phoneNumberRx = new QRegExp("[0-9]{6,20}");
    int row = 0;
    Ui::MainWindow *ui;
    QListWidgetItem* it1;
    QListWidgetItem* it2;
    QLineEdit* minPrice_lineEdit;
    QLineEdit* maxPrice_lineEdit;
    QHBoxLayout* main_layout;
    QLabel* name_label;
    QLabel* author_label;
    QLabel* publishingHouse_label;
    QLabel* genre_label;
    QLabel* readerCategory_label;
    QLabel* rating_label;
    QLabel* price_label;
    QPushButton* addToCart_button;
    QListWidgetItem* item;
    QVBoxLayout* bookInformation_layout;
    QWidget* widget;
    QLabel* bookPicLabel;
    void showBook(Book &book, int &row);
    OrderInformation* currentOrder;
    Sorting* s;
    QFile ordersFile;
    QTextStream out;
private slots:
    void sortingBooks(int index);
    void addToCart_button_clicked();
    void order_button_clicked();
    void reportAdmission_button_clicked();
    void search_button_clicked();
    void applyFilters_button_clicked();
    void currentTabChanged(int index);
};

#endif // MAINWINDOW_H
