#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    it1 = new QListWidgetItem("", ui->listWidget);
    ui->listWidget->addItem("Maximum price");
    it2 = new QListWidgetItem("", ui->listWidget);
    minPrice_lineEdit = new QLineEdit();
    minPrice_lineEdit->setText("0");
    maxPrice_lineEdit = new QLineEdit();
    maxPrice_lineEdit->setText("5000");
    ui->listWidget->setItemWidget(it1, minPrice_lineEdit);
    ui->listWidget->setItemWidget(it2, maxPrice_lineEdit);
    for (Book &book : booksStock)
        showBook(book, row);
    connect(ui->sort_combobox, SIGNAL(activated(int)), this, SLOT(sortingBooks(int)));
    connect(ui->search_button, SIGNAL(clicked()), this, SLOT(search_button_clicked()));
    connect(ui->applyFilters_button, SIGNAL(clicked()), this, SLOT(applyFilters_button_clicked()));
    connect(ui->order_button, SIGNAL(clicked()), this, SLOT(order_button_clicked()));
    connect(ui->)
    connect(ui->tabs, SIGNAL(currentChanged(int)), this, SLOT(currentTabChanged(int)));
    currentOrder = new OrderInformation();
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::addToCart_button_clicked()
{
    QPushButton* pButton = qobject_cast<QPushButton*>(sender());
    QListWidgetItem* it = ui->stock_list->itemAt(pButton->pos());
    bool bookInCart = false;
    bool bookInWishList = false;
    Book* selectedBook = nullptr;
    for (Book &book : booksStock)
    {
        if (book.get_Id() == it->data(Qt::UserRole).toInt())
        {
            selectedBook = &book;
            selectedBook->increase_Rating();
        }
    }
    if (selectedBook->get_Count() > 0)
    {
        currentOrder->set_totalPrice(selectedBook->get_Price());
        selectedBook->decrease_Count();
        for (Book &book : currentOrder->orderedBooks)
        {
            if (selectedBook->get_Id() == book.get_Id())
            {
                bookInCart = true;
                book.increase_Count();
                break;
            }
        }
        if (bookInCart == false)
            currentOrder->addToOrdered(*selectedBook);
    }
    else
    {
        for (Book &book : currentOrder->wishlistBooks)
        {
            if (selectedBook->get_Id() == book.get_Id())
            {
                bookInWishList = true;
                book.increase_Count();
                break;
            }
        }
        if (bookInWishList == false)
            currentOrder->addToWishlist(*selectedBook);
    }
    if (pButton && selectedBook->get_Count() == 0)
    {
        pButton->setText("ADD TO WISHLIST");
    }
    int index = ui->stock_list->indexAt(pButton->pos()).row();
    ui->stock_list->takeItem(index);
    showBook(*selectedBook, index);
    ui->stock_list->setCurrentRow(index-1);
}

void MainWindow::order_button_clicked()
{
    if (ui->name_lineEdit->text() == "")
        ui->cartError_label->setText("Enter the name");
    else if (ui->email_lineEdit->text() == "" && ui->phoneNumber_lineEdit->text() == "")
        ui->cartError_label->setText("Input email or phone number");
    else if (ui->email_lineEdit->text() != "" && !emailRx->exactMatch(ui->email_lineEdit->text()))
        ui->cartError_label->setText("Invalid email");
    else if (ui->phoneNumber_lineEdit->text() != "" && !phoneNumberRx->exactMatch(ui->phoneNumber_lineEdit->text()))
        ui->cartError_label->setText("Invalid phone number");
    else
    {
        ordersFile.setFileName("C:/Users/User/Documents/Coursework/orders.txt");
        ordersFile.open(QIODevice::Append);
        QTextStream out(&ordersFile);
        out << "ZHEPA\n";
        ordersFile.close();
        ui->cartError_label->setText("Order is processed");
    }
}

void MainWindow::reportAdmission_button_clicked()
{
    if (ui->name_lineEdit_2 == "")
        ui->wishlistError_label->setText("Enter the name");
    else if (ui->email_lineEdit->text() == "" && ui->phoneNumber_lineEdit->text() == "")
        ui->cartError_label->setText("Input email or phone number");
    else if (ui->email_lineEdit->text() != "" && !emailRx->exactMatch(ui->email_lineEdit->text()))
        ui->cartError_label->setText("Invalid email");
    else if (ui->phoneNumber_lineEdit->text() != "" && !phoneNumberRx->exactMatch(ui->phoneNumber_lineEdit->text()))
        ui->cartError_label->setText("Invalid phone number");
    else
    {
        ordersFile.setFileName("C:/Users/User/Documents/Coursework/orders.txt");
        ordersFile.open(QIODevice::Append);
        QTextStream out(&ordersFile);
        out << "ZHEPA\n";
        ordersFile.close();
        ui->cartError_label->setText("Order is processed");
    }
}

void MainWindow::showBook(Book &book, int &row)
{
    widget = new QWidget();
    main_layout = new QHBoxLayout();
    bookInformation_layout = new QVBoxLayout();
    main_layout->addLayout(bookInformation_layout);
    QPixmap bookPic(QString::fromStdString(book.get_PicPath()));
    bookPicLabel = new QLabel;
    bookPicLabel->setPixmap(bookPic.scaled(400, 300));
    main_layout->addWidget(bookPicLabel);
    widget->setLayout(main_layout);
    name_label = new QLabel;
    name_label->setText("Name: " + QString::fromStdString(book.get_Name()));
    author_label = new QLabel;
    author_label->setText("Author: " + QString::fromStdString(book.get_Author()));
    publishingHouse_label = new QLabel;
    publishingHouse_label->setText("Publishing house: " + QString::fromStdString(book.get_PublishingHouse()));
    genre_label = new QLabel;
    genre_label->setText("Genre: " + QString::fromStdString(book.get_Genre()));
    readerCategory_label = new QLabel;
    readerCategory_label->setText("Reader category: " + QString::fromStdString(book.get_ReaderCategory()));
    rating_label = new QLabel;
    rating_label->setText("Rating: " + QString::number(book.get_Rating()));
    price_label = new QLabel;
    price_label->setText("Price: " + QString::number(book.get_Price()));
    if (book.get_Count() == 0)
        addToCart_button = new QPushButton("ADD TO WISHLIST");
    else
    addToCart_button = new QPushButton("ADD TO CART");
    connect(addToCart_button, SIGNAL(clicked()), this, SLOT(addToCart_button_clicked()));
    bookInformation_layout->addWidget(name_label);
    bookInformation_layout->addWidget(author_label);
    bookInformation_layout->addWidget(publishingHouse_label);
    bookInformation_layout->addWidget(genre_label);
    bookInformation_layout->addWidget(readerCategory_label);
    bookInformation_layout->addWidget(rating_label);
    bookInformation_layout->addWidget(price_label);
    bookInformation_layout->addWidget(addToCart_button);
    item = new QListWidgetItem();
    ui->stock_list->insertItem(row++, item);
    item->setSizeHint(QSize(300, 300));
    item->setData(Qt::UserRole, book.get_Id());
    ui->stock_list->setItemWidget(item, widget);
}

void MainWindow::sortingBooks(int index)
{
    ui->stock_list->clear();
    if (index == 1) s->sortByNew(booksStock);
    else if (index == 2) s->sortByAuthorAZ(booksStock);
    else if (index == 3) s->sortByAuthorZA(booksStock);
    else if (index == 4) s->sortByNameAZ(booksStock);
    else if (index == 5) s->sortByNameZA(booksStock);
    else if (index == 6) s->sortByRating(booksStock);
    else if (index == 7) s->sortByPriceLH(booksStock);
    else if (index == 8) s->sortByPriceHL(booksStock);
    for (Book &book : booksStock)
        showBook(book, row);
}

void MainWindow::search_button_clicked()
{
    ui->stock_list->clear();
    if (ui->search_lineEdit->text() == "")
        for (Book &book : booksStock)
            showBook(book, row);
    else
    {
        bool isExisted = false;
        std::istringstream iss(ui->search_lineEdit->text().toStdString());
        std::vector<std::string> words(std::istream_iterator<std::string>{iss}, std::istream_iterator<std::string>());
        for (Book &book : booksStock)
        {
            for (std::string word : words)
            {
                if (word == book.get_Name() || word == book.get_Author())
                {
                    isExisted = true;
                    showBook(book, row);
                }
            }
        }
        if (isExisted == false)
        {
            QLabel* error_label = new QLabel;
            error_label->setText("Error: book doesn't exist");
            item = new QListWidgetItem(ui->stock_list);
            ui->stock_list->setItemWidget(item, error_label);
        }
    }
}

void MainWindow::applyFilters_button_clicked()
{
    bool rcVec = false;
    bool gVec = false;
    bool phVec = false;
    bool binVec = false;
    bool pVec = false;
    std::vector<Book> readerCategoryVec;
    std::vector<Book> genreVec;
    std::vector<Book> publishingHouseVec;
    std::vector<Book> bookIsNewVec;
    std::vector<Book> priceVec;
    std::vector<Book> temp1Vec;
    std::vector<Book> temp2Vec;
    std::vector<Book> temp3Vec;
    std::vector<Book> filteredBooksVec;
    for (int i = 1; i < 4; i++)
    {  
        if (ui->listWidget->item(i)->checkState() == 2)
        {
            rcVec = true;
            for (Book book : booksStock)
                if (book.get_ReaderCategory() == ui->listWidget->item(i)->text().toStdString())
                    readerCategoryVec.push_back(book);
        }
    }
    for (int i = 5; i < 9; i++)
    {
        if (ui->listWidget->item(i)->checkState() == 2)
        {
            gVec = true;
            for (Book book : booksStock)
                if (book.get_Genre() == ui->listWidget->item(i)->text().toStdString())
                    genreVec.push_back(book);
        }
    }
    for (int i = 10; i < 12; i++)
    {
        if (ui->listWidget->item(i)->checkState() == 2)
        {
            phVec = true;
            for (Book book : booksStock)
                if (book.get_PublishingHouse() == ui->listWidget->item(i)->text().toStdString())
                    publishingHouseVec.push_back(book);
        }
    }
    if (ui->listWidget->item(13)->checkState() == 2)
    {
        binVec = true;
        for (Book book : booksStock)
            if (book.get_IsBookNew())
                bookIsNewVec.push_back(book);
    }
    if (!(minPrice_lineEdit->text().toStdString().find_first_of("0123456789") != std::string::npos))
        minPrice_lineEdit->setText("0");
    if (!(maxPrice_lineEdit->text().toStdString().find_first_of("0123456789") != std::string::npos))
        maxPrice_lineEdit->setText("5000");
    pVec = true;
    for (Book book : booksStock)
        if (book.get_Price() >= minPrice_lineEdit->text().toInt() && book.get_Price() <= maxPrice_lineEdit->text().toInt())
            priceVec.push_back(book);

    if (readerCategoryVec.size() == 0 && rcVec == false)
        readerCategoryVec = booksStock;
    if (genreVec.size() == 0 && gVec == false)
        genreVec = booksStock;
    if (publishingHouseVec.size() == 0 && phVec == false)
        publishingHouseVec = booksStock;
    if (bookIsNewVec.size() == 0 && binVec == false)
        bookIsNewVec = booksStock;
    if (priceVec.size() == 0 && pVec == false)
        priceVec = booksStock;

    std::sort(readerCategoryVec.begin(), readerCategoryVec.end(), s->compareNamesAZ);
    std::sort(genreVec.begin(), genreVec.end(), s->compareNamesAZ);
    std::sort(publishingHouseVec.begin(), publishingHouseVec.end(), s->compareNamesAZ);
    std::sort(bookIsNewVec.begin(), bookIsNewVec.end(), s->compareNamesAZ);
    std::sort(priceVec.begin(), priceVec.end(), s->compareNamesAZ);
    std::set_intersection(readerCategoryVec.begin(), readerCategoryVec.end(), genreVec.begin(), genreVec.end(), std::back_inserter(temp1Vec), s->compareNamesAZ);
    std::set_intersection(publishingHouseVec.begin(), publishingHouseVec.end(), bookIsNewVec.begin(), bookIsNewVec.end(), std::back_inserter(temp2Vec), s->compareNamesAZ);
    std::set_intersection(temp1Vec.begin(), temp1Vec.end(), temp2Vec.begin(), temp2Vec.end(), std::back_inserter(temp3Vec), s->compareNamesAZ);
    std::set_intersection(temp3Vec.begin(), temp3Vec.end(), priceVec.begin(), priceVec.end(), std::back_inserter(filteredBooksVec), s->compareNamesAZ);
    ui->stock_list->clear();
    if (filteredBooksVec.size() == 0)
        ui->stock_list->addItem("Error. Can't find books that satisfy filters");
    else
        for (Book book : filteredBooksVec)
            showBook(book, row);
}

void MainWindow::currentTabChanged(int index)
{
    switch (index)
    {
        case 2:
            currentOrder->updateCartList(ui);
            break;
        case 3:
            currentOrder->updateWishList(ui);
            break;
    }
}
