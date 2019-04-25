#include "sorting.h"
#include <algorithm>
#include <iostream>
Sorting::Sorting()
{

}
bool Sorting::compareNamesAZ(Book &book1, Book &book2) { return book1.get_Name() < book2.get_Name(); }
bool Sorting::compareNamesZA(Book &book1, Book &book2) { return book1.get_Name() > book2.get_Name(); }
bool Sorting::compareAuthorsAZ(Book &book1, Book &book2) { return book1.get_Author() < book2.get_Author(); }
bool Sorting::compareAuthorsZA(Book &book1, Book &book2) { return book1.get_Author() > book2.get_Author(); }
bool Sorting::comparePriceLH(Book &book1, Book &book2) { return book1.get_Price() < book2.get_Price(); }
bool Sorting::comparePriceHL(Book &book1, Book &book2) { return book1.get_Price() > book2.get_Price(); }
bool Sorting::compareNew(Book &book1, Book &book2) { return book1.get_IsBookNew() < book2.get_IsBookNew(); }
bool Sorting::compareRating(Book &book1, Book &book2) { return book1.get_Rating() > book2.get_Rating(); }

void Sorting::sortByNameAZ(std::vector<Book> &booksStock) { std::sort(booksStock.begin(), booksStock.end(), compareNamesAZ); }
void Sorting::sortByNameZA(std::vector<Book> &booksStock) { std::sort(booksStock.begin(), booksStock.end(), compareNamesZA); }
void Sorting::sortByAuthorAZ(std::vector<Book> &booksStock) { std::sort(booksStock.begin(), booksStock.end(), compareAuthorsAZ); }
void Sorting::sortByAuthorZA(std::vector<Book> &booksStock) { std::sort(booksStock.begin(), booksStock.end(), compareAuthorsZA); }
void Sorting::sortByPriceLH(std::vector<Book> &booksStock) { std::sort(booksStock.begin(), booksStock.end(), comparePriceLH); }
void Sorting::sortByPriceHL(std::vector<Book> &booksStock) { std::sort(booksStock.begin(), booksStock.end(), comparePriceHL); }
void Sorting::sortByNew(std::vector<Book> &booksStock) { std::sort(booksStock.begin(), booksStock.end(), compareNew); }
void Sorting::sortByRating(std::vector<Book> &booksStock) { std::sort(booksStock.begin(), booksStock.end(), compareRating); }
