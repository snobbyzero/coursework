#ifndef BOOK_H
#define BOOK_H
#include <iostream>
#include <string>
class Book
{
private:
    std::string author;
    std::string name;
    std::string readerCategory;
    std::string genre;
    std::string publishingHouse;
    std::string picPath;
    bool isBookNew;
    int yearOfPublication;
    int countOfPages;
    int price;
    int retailMarkup;
    int rating = 0;
    int count = 0;
    int id;

public:
    Book(std::string author, std::string name, std::string publishingHouse, std::string readerCategory, std::string genre,
         int yearOfPublication, int price, int retailMarkup, bool isBookNew, int count, int rating, int countOfPages, int id, std::string picPath);
    ~Book();
    Book(int id);
    void set_Author(std::string newAuthor);
    void set_Name(std::string newName);
    void set_ReaderCategory(std::string newReaderCategory);
    void set_Gengre(std::string newGenre);
    void set_YearOfPublication(int newYearOfPublication);
    void set_Price(int newPrice);
    void set_RetailMarkup(int newRetailMarkup);
    void set_IsBookNew(bool newIsBookNew);
    void set_Count(int newCount);
    void increase_Count();
    void decrease_Count();
    void set_CountOfPages(int newCountOfPages);
    void set_Rating(int newRating);
    void increase_Rating();
    void set_Id(int newId);
    void set_PublishingHouse(std::string newPublishingHouse);
    void set_PicPath(std::string newPicPath);
    std::string get_Name();
    std::string get_Author();
    std::string get_PublishingHouse();
    std::string get_ReaderCategory();
    std::string get_Genre();
    std::string get_PicPath();
    bool get_IsBookNew();
    int get_YearOfPublication();
    int get_CountOfPages();
    int get_Price();
    int get_RetailMarkup();
    int get_Rating();
    int get_Count();
    int get_Id();
};

#endif // BOOK_H
