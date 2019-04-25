#ifndef SORTING_H
#define SORTING_H
#include "stock.h"

class Sorting
{
public:
    Sorting();
    ~Sorting();

    static bool compareNamesAZ(Book &book1, Book &book2);
    static bool compareNamesZA(Book &book1, Book &book2);
    static bool compareAuthorsAZ(Book &book1, Book &book2);
    static bool compareAuthorsZA(Book &book1, Book &book2);
    static bool comparePriceLH(Book &book1, Book &book2);
    static bool comparePriceHL(Book &book1, Book &book2);
    static bool compareNew(Book &book1, Book &book2);
    static bool compareRating(Book &book1, Book &book2);

    void sortByNameAZ(std::vector<Book> &booksStock);
    void sortByNameZA(std::vector<Book> &booksStock);
    void sortByAuthorAZ(std::vector<Book> &booksStock);
    void sortByAuthorZA(std::vector<Book> &booksStock);
    void sortByPriceLH(std::vector<Book> &booksStock);
    void sortByPriceHL(std::vector<Book> &booksStock);
    void sortByNew(std::vector<Book> &booksStock);
    void sortByRating(std::vector<Book> &booksStock);
};

#endif // SORTING_H
