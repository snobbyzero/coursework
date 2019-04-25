#include "book.h"

Book::Book(std::string author, std::string name, std::string publishingHouse, std::string readerCategory, std::string genre,
           int yearOfPublication, int price, int retailMarkup, bool isBookNew, int count, int rating, int countOfPages, int id, std::string picPath)
{
    this->author = author;
    this->name = name;
    this->publishingHouse = publishingHouse;
    this->readerCategory = readerCategory;
    this->genre = genre;
    this->yearOfPublication = yearOfPublication;
    this->price = price;
    this->retailMarkup = retailMarkup;
    this->isBookNew = isBookNew;
    this->count = count;
    this->id = id;
    this->rating = rating;
    this->countOfPages = countOfPages;
    this->picPath = picPath;
}

void Book::set_Name(std::string newName) { this->name = newName; }

void Book::set_Author(std::string newAuthor) { this->author = newAuthor; }

void Book::set_Gengre(std::string newGenre) { this->genre = newGenre; }

void Book::set_ReaderCategory(std::string newReaderCategory) { this->readerCategory = newReaderCategory; }

void Book::set_IsBookNew(bool newIsBookNew) { this->isBookNew = newIsBookNew; }

void Book::set_Price(int newPrice) { this->price = newPrice; }

void Book::set_RetailMarkup(int newRetailMarkup) { this->retailMarkup = newRetailMarkup; }

void Book::set_YearOfPublication(int newYearOfPublication) { this->yearOfPublication = newYearOfPublication; }

void Book::set_Count(int newCount) { this->count = newCount; }

void Book::increase_Count() { this->count++; }

void Book::decrease_Count() { this->count--; }

void Book::set_CountOfPages(int newCountOfPages) { this->countOfPages = newCountOfPages; }

void Book::set_Rating(int newRating) { this->rating = newRating; }

void Book::increase_Rating() { this->rating++; }

void Book::set_Id(int newId) { this->id = newId; }

void Book::set_PublishingHouse(std::string newPublishingHouse) { this->publishingHouse = newPublishingHouse; }

void Book::set_PicPath(std::string newPicPath) { this->picPath = newPicPath; }

std::string Book::get_Name() { return this->name; }

std::string Book::get_Author() { return this->author; }

std::string Book::get_Genre() { return this->genre; }

std::string Book::get_ReaderCategory() { return this->readerCategory; }

std::string Book::get_PublishingHouse() { return this->publishingHouse; }

std::string Book::get_PicPath() { return this->picPath; }

bool Book::get_IsBookNew() { return this->isBookNew; }

int Book::get_Price() { return this->price; }

int Book::get_RetailMarkup() { return this->retailMarkup; }

int Book::get_YearOfPublication() { return this->yearOfPublication; }

int Book::get_Count() { return this->count; }

int Book::get_CountOfPages() { return this->countOfPages; }

int Book::get_Rating() { return this->rating; }

int Book::get_Id() { return this->id; }

Book::Book(int id) { this->id = id; }
Book::~Book() {}
