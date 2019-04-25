#ifndef ORDERINFORMATION_H
#define ORDERINFORMATION_H
#include <iostream>
#include <vector>
#include "book.h"
#include "ui_mainwindow.h"

class OrderInformation
{
private:
    std::string phoneNumber = "";
    std::string email = "";
    std::string surname = "";
    int totalPrice;

public:
    std::vector<Book> orderedBooks;
    std::vector<Book> wishlistBooks;
    OrderInformation();
    ~OrderInformation();
    void set_phoneNumber(std::string phoneNumber);
    void set_email(std::string email);
    void set_surname(std::string surname);
    void set_totalPrice(int bookPrice);
    int get_totalPrice();
    std::string get_phoneNumber();
    std::string get_email();
    std::string get_surname();
    void addToOrdered(Book book);
    void addToWishlist(Book book);
    void updateCartList(Ui::MainWindow* ui);
    void updateWishList(Ui::MainWindow* ui);
};

#endif // ORDERINFORMATION_H
