#include "orderinformation.h"

OrderInformation::OrderInformation(){}

void OrderInformation::addToOrdered(Book book)
{
    book.set_Count(1);
    this->orderedBooks.push_back(book);
}
void OrderInformation::addToWishlist(Book book)
{
    book.set_Count(1);
    this->wishlistBooks.push_back(book);
}
void OrderInformation::updateCartList(Ui::MainWindow* ui)
{
    ui->cart_list->setRowCount(0);
    for (Book &book : orderedBooks)
    {
        ui->cart_list->insertRow(0);
        ui->cart_list->setItem(0, 0, new QTableWidgetItem(QString::number(book.get_Id())));
        ui->cart_list->setItem(0, 1, new QTableWidgetItem(QString::fromStdString(book.get_Name())));
        ui->cart_list->setItem(0, 2, new QTableWidgetItem(QString::fromStdString(book.get_Author())));
        ui->cart_list->setItem(0, 3, new QTableWidgetItem(QString::number(book.get_Price())));
        ui->cart_list->setItem(0, 4, new QTableWidgetItem(QString::number(book.get_Count())));
    }
    ui->totalPrice_label->setText(QString::number(this->get_totalPrice()));
}
void OrderInformation::updateWishList(Ui::MainWindow* ui)
{
    ui->wishList_list->setRowCount(0);
    for (Book &book : wishlistBooks)
    {
    ui->wishList_list->insertRow(0);
    ui->wishList_list->setItem(0, 0, new QTableWidgetItem(QString::number(book.get_Id())));
    ui->wishList_list->setItem(0, 1, new QTableWidgetItem(QString::fromStdString(book.get_Name())));
    ui->wishList_list->setItem(0, 2, new QTableWidgetItem(QString::fromStdString(book.get_Author())));
    ui->wishList_list->setItem(0, 3, new QTableWidgetItem(QString::number(book.get_Price())));
    ui->wishList_list->setItem(0, 4, new QTableWidgetItem(QString::number(book.get_Count())));
    }
}
void OrderInformation::set_phoneNumber(std::string phoneNumber) { this->phoneNumber = phoneNumber; }
void OrderInformation::set_email(std::string email) { this->email = email; }
void OrderInformation::set_surname(std::string surname) { this->surname = surname; }
void OrderInformation::set_totalPrice(int bookPrice) { this->totalPrice += bookPrice; }
int OrderInformation::get_totalPrice() { return this->totalPrice; }
std::string OrderInformation::get_phoneNumber() { return this->phoneNumber; }
std::string OrderInformation::get_email() { return this->email; }
std::string OrderInformation::get_surname() { return this->surname; }

