#ifndef STOCK_H
#define STOCK_H
#include "book.h"
#include <iostream>
#include <vector>

static std::vector<Book> booksStock = {
    Book("BAuthor1", "CName1", "AST", "For children", "Fiction", 1990, 250, 300, true, 6, 3, 300, 123, ":/images/aaa.jpg"),
    Book("AAuthor2", "AName2", "AST", "For children", "Fantasy", 1990, 600, 300, false, 2, 0, 200, 124, ":/images/bbb.jpg"),
    Book("CAuthor3", "BName3", "Exmo", "For adults", "Novel", 1990, 300, 300, false, 4, 6, 565, 125, ":/images/ccc.jpg"),
    Book("DAuthor4", "TName4", "Exmo", "For students", "Thriller", 2000, 500, 600, true, 3, 4, 300, 126, ":/images/ddd.jpg"),
    Book("FAuthor5", "KName5", "AST", "For adults", "Fantasy", 2010, 300, 400, true, 2, 6, 600, 127, ":/images/eee.jpg"),
    Book("PAuthor4", "FName6", "Exmo", "For students", "Thriller", 2000, 500, 600, false, 3, 4, 300, 128, ":/images/fff.jpg"),

};

#endif // STOCK_H
