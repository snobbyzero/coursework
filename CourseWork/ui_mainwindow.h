/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QTabWidget *tabs;
    QWidget *mainpage_tab;
    QLineEdit *search_lineEdit;
    QPushButton *search_button;
    QListWidget *listWidget;
    QPushButton *applyFilters_button;
    QListWidget *stock_list;
    QComboBox *sort_combobox;
    QWidget *purchasehistory_tab;
    QWidget *cart_tab;
    QTableWidget *cart_list;
    QLabel *totalPrice_label;
    QLineEdit *email_lineEdit;
    QLineEdit *phoneNumber_lineEdit;
    QLineEdit *name_lineEdit;
    QLabel *cartError_label;
    QPushButton *order_button;
    QLabel *label;
    QWidget *wishlist_tab;
    QTableWidget *wishList_list;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1000, 679);
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(1000, 679));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(centralWidget->sizePolicy().hasHeightForWidth());
        centralWidget->setSizePolicy(sizePolicy1);
        centralWidget->setMinimumSize(QSize(1000, 614));
        tabs = new QTabWidget(centralWidget);
        tabs->setObjectName(QString::fromUtf8("tabs"));
        tabs->setGeometry(QRect(0, 0, 1000, 611));
        tabs->setMinimumSize(QSize(1000, 530));
        mainpage_tab = new QWidget();
        mainpage_tab->setObjectName(QString::fromUtf8("mainpage_tab"));
        mainpage_tab->setMinimumSize(QSize(994, 501));
        search_lineEdit = new QLineEdit(mainpage_tab);
        search_lineEdit->setObjectName(QString::fromUtf8("search_lineEdit"));
        search_lineEdit->setGeometry(QRect(0, 30, 591, 31));
        search_button = new QPushButton(mainpage_tab);
        search_button->setObjectName(QString::fromUtf8("search_button"));
        search_button->setGeometry(QRect(590, 30, 110, 31));
        listWidget = new QListWidget(mainpage_tab);
        QListWidgetItem *__qlistwidgetitem = new QListWidgetItem(listWidget);
        __qlistwidgetitem->setFlags(Qt::ItemIsDragEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        QListWidgetItem *__qlistwidgetitem1 = new QListWidgetItem(listWidget);
        __qlistwidgetitem1->setCheckState(Qt::Unchecked);
        QListWidgetItem *__qlistwidgetitem2 = new QListWidgetItem(listWidget);
        __qlistwidgetitem2->setCheckState(Qt::Unchecked);
        QListWidgetItem *__qlistwidgetitem3 = new QListWidgetItem(listWidget);
        __qlistwidgetitem3->setCheckState(Qt::Unchecked);
        QListWidgetItem *__qlistwidgetitem4 = new QListWidgetItem(listWidget);
        __qlistwidgetitem4->setFlags(Qt::ItemIsDragEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        QListWidgetItem *__qlistwidgetitem5 = new QListWidgetItem(listWidget);
        __qlistwidgetitem5->setCheckState(Qt::Unchecked);
        QListWidgetItem *__qlistwidgetitem6 = new QListWidgetItem(listWidget);
        __qlistwidgetitem6->setCheckState(Qt::Unchecked);
        QListWidgetItem *__qlistwidgetitem7 = new QListWidgetItem(listWidget);
        __qlistwidgetitem7->setCheckState(Qt::Unchecked);
        QListWidgetItem *__qlistwidgetitem8 = new QListWidgetItem(listWidget);
        __qlistwidgetitem8->setCheckState(Qt::Unchecked);
        QListWidgetItem *__qlistwidgetitem9 = new QListWidgetItem(listWidget);
        __qlistwidgetitem9->setFlags(Qt::ItemIsDragEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        QListWidgetItem *__qlistwidgetitem10 = new QListWidgetItem(listWidget);
        __qlistwidgetitem10->setCheckState(Qt::Unchecked);
        QListWidgetItem *__qlistwidgetitem11 = new QListWidgetItem(listWidget);
        __qlistwidgetitem11->setCheckState(Qt::Unchecked);
        QListWidgetItem *__qlistwidgetitem12 = new QListWidgetItem(listWidget);
        __qlistwidgetitem12->setFlags(Qt::ItemIsDragEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        QListWidgetItem *__qlistwidgetitem13 = new QListWidgetItem(listWidget);
        __qlistwidgetitem13->setCheckState(Qt::Unchecked);
        new QListWidgetItem(listWidget);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(740, 110, 256, 431));
        sizePolicy1.setHeightForWidth(listWidget->sizePolicy().hasHeightForWidth());
        listWidget->setSizePolicy(sizePolicy1);
        listWidget->setProperty("isWrapping", QVariant(false));
        applyFilters_button = new QPushButton(mainpage_tab);
        applyFilters_button->setObjectName(QString::fromUtf8("applyFilters_button"));
        applyFilters_button->setGeometry(QRect(740, 550, 251, 28));
        stock_list = new QListWidget(mainpage_tab);
        stock_list->setObjectName(QString::fromUtf8("stock_list"));
        stock_list->setGeometry(QRect(0, 110, 731, 471));
        stock_list->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        stock_list->setAlternatingRowColors(false);
        stock_list->setVerticalScrollMode(QAbstractItemView::ScrollPerItem);
        stock_list->setMovement(QListView::Static);
        stock_list->setFlow(QListView::TopToBottom);
        stock_list->setProperty("isWrapping", QVariant(false));
        stock_list->setLayoutMode(QListView::SinglePass);
        stock_list->setViewMode(QListView::ListMode);
        stock_list->setUniformItemSizes(false);
        sort_combobox = new QComboBox(mainpage_tab);
        sort_combobox->addItem(QString());
        sort_combobox->addItem(QString());
        sort_combobox->addItem(QString());
        sort_combobox->addItem(QString());
        sort_combobox->addItem(QString());
        sort_combobox->addItem(QString());
        sort_combobox->addItem(QString());
        sort_combobox->addItem(QString());
        sort_combobox->addItem(QString());
        sort_combobox->setObjectName(QString::fromUtf8("sort_combobox"));
        sort_combobox->setGeometry(QRect(10, 80, 216, 22));
        sort_combobox->setFocusPolicy(Qt::TabFocus);
        sort_combobox->setEditable(false);
        sort_combobox->setMaxVisibleItems(10);
        tabs->addTab(mainpage_tab, QString());
        purchasehistory_tab = new QWidget();
        purchasehistory_tab->setObjectName(QString::fromUtf8("purchasehistory_tab"));
        purchasehistory_tab->setMinimumSize(QSize(994, 501));
        tabs->addTab(purchasehistory_tab, QString());
        cart_tab = new QWidget();
        cart_tab->setObjectName(QString::fromUtf8("cart_tab"));
        cart_tab->setMinimumSize(QSize(994, 501));
        cart_list = new QTableWidget(cart_tab);
        if (cart_list->columnCount() < 5)
            cart_list->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        cart_list->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        cart_list->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        cart_list->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        cart_list->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        cart_list->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        cart_list->setObjectName(QString::fromUtf8("cart_list"));
        cart_list->setGeometry(QRect(0, 10, 631, 311));
        totalPrice_label = new QLabel(cart_tab);
        totalPrice_label->setObjectName(QString::fromUtf8("totalPrice_label"));
        totalPrice_label->setGeometry(QRect(520, 330, 81, 31));
        totalPrice_label->setLayoutDirection(Qt::LeftToRight);
        totalPrice_label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        totalPrice_label->setWordWrap(false);
        email_lineEdit = new QLineEdit(cart_tab);
        email_lineEdit->setObjectName(QString::fromUtf8("email_lineEdit"));
        email_lineEdit->setGeometry(QRect(650, 10, 291, 31));
        phoneNumber_lineEdit = new QLineEdit(cart_tab);
        phoneNumber_lineEdit->setObjectName(QString::fromUtf8("phoneNumber_lineEdit"));
        phoneNumber_lineEdit->setGeometry(QRect(650, 70, 291, 31));
        name_lineEdit = new QLineEdit(cart_tab);
        name_lineEdit->setObjectName(QString::fromUtf8("name_lineEdit"));
        name_lineEdit->setGeometry(QRect(650, 130, 291, 31));
        cartError_label = new QLabel(cart_tab);
        cartError_label->setObjectName(QString::fromUtf8("cartError_label"));
        cartError_label->setGeometry(QRect(650, 250, 291, 61));
        QPalette palette;
        QBrush brush(QColor(255, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        QBrush brush1(QColor(120, 120, 120, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        cartError_label->setPalette(palette);
        order_button = new QPushButton(cart_tab);
        order_button->setObjectName(QString::fromUtf8("order_button"));
        order_button->setGeometry(QRect(650, 190, 291, 51));
        label = new QLabel(cart_tab);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(610, 330, 21, 31));
        tabs->addTab(cart_tab, QString());
        wishlist_tab = new QWidget();
        wishlist_tab->setObjectName(QString::fromUtf8("wishlist_tab"));
        wishlist_tab->setMinimumSize(QSize(994, 501));
        wishList_list = new QTableWidget(wishlist_tab);
        if (wishList_list->columnCount() < 5)
            wishList_list->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        wishList_list->setHorizontalHeaderItem(0, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        wishList_list->setHorizontalHeaderItem(1, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        wishList_list->setHorizontalHeaderItem(2, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        wishList_list->setHorizontalHeaderItem(3, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        wishList_list->setHorizontalHeaderItem(4, __qtablewidgetitem9);
        wishList_list->setObjectName(QString::fromUtf8("wishList_list"));
        wishList_list->setGeometry(QRect(0, 10, 631, 311));
        tabs->addTab(wishlist_tab, QString());
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1000, 26));
        menuBar->setMinimumSize(QSize(0, 0));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        tabs->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        search_button->setText(QApplication::translate("MainWindow", "SEARCH", nullptr));

        const bool __sortingEnabled = listWidget->isSortingEnabled();
        listWidget->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = listWidget->item(0);
        ___qlistwidgetitem->setText(QApplication::translate("MainWindow", "Reader category", nullptr));
        QListWidgetItem *___qlistwidgetitem1 = listWidget->item(1);
        ___qlistwidgetitem1->setText(QApplication::translate("MainWindow", "For children", nullptr));
        QListWidgetItem *___qlistwidgetitem2 = listWidget->item(2);
        ___qlistwidgetitem2->setText(QApplication::translate("MainWindow", "For students", nullptr));
        QListWidgetItem *___qlistwidgetitem3 = listWidget->item(3);
        ___qlistwidgetitem3->setText(QApplication::translate("MainWindow", "For adults", nullptr));
        QListWidgetItem *___qlistwidgetitem4 = listWidget->item(4);
        ___qlistwidgetitem4->setText(QApplication::translate("MainWindow", "Genre", nullptr));
        QListWidgetItem *___qlistwidgetitem5 = listWidget->item(5);
        ___qlistwidgetitem5->setText(QApplication::translate("MainWindow", "Fantasy", nullptr));
        QListWidgetItem *___qlistwidgetitem6 = listWidget->item(6);
        ___qlistwidgetitem6->setText(QApplication::translate("MainWindow", "Thriller", nullptr));
        QListWidgetItem *___qlistwidgetitem7 = listWidget->item(7);
        ___qlistwidgetitem7->setText(QApplication::translate("MainWindow", "Novel", nullptr));
        QListWidgetItem *___qlistwidgetitem8 = listWidget->item(8);
        ___qlistwidgetitem8->setText(QApplication::translate("MainWindow", "Fiction", nullptr));
        QListWidgetItem *___qlistwidgetitem9 = listWidget->item(9);
        ___qlistwidgetitem9->setText(QApplication::translate("MainWindow", "Publishing house", nullptr));
        QListWidgetItem *___qlistwidgetitem10 = listWidget->item(10);
        ___qlistwidgetitem10->setText(QApplication::translate("MainWindow", "AST", nullptr));
        QListWidgetItem *___qlistwidgetitem11 = listWidget->item(11);
        ___qlistwidgetitem11->setText(QApplication::translate("MainWindow", "Exmo", nullptr));
        QListWidgetItem *___qlistwidgetitem12 = listWidget->item(12);
        ___qlistwidgetitem12->setText(QApplication::translate("MainWindow", "Other", nullptr));
        QListWidgetItem *___qlistwidgetitem13 = listWidget->item(13);
        ___qlistwidgetitem13->setText(QApplication::translate("MainWindow", "New Book", nullptr));
        QListWidgetItem *___qlistwidgetitem14 = listWidget->item(14);
        ___qlistwidgetitem14->setText(QApplication::translate("MainWindow", "Minimal price", nullptr));
        listWidget->setSortingEnabled(__sortingEnabled);

        applyFilters_button->setText(QApplication::translate("MainWindow", "APPLY FILTERS", nullptr));
        sort_combobox->setItemText(0, QApplication::translate("MainWindow", "\320\241\320\236\320\240\320\242\320\230\320\240\320\236\320\222\320\220\320\242\320\254 \320\237\320\236", nullptr));
        sort_combobox->setItemText(1, QApplication::translate("MainWindow", "\320\241\320\235\320\220\320\247\320\220\320\233\320\220 \320\235\320\236\320\222\320\230\320\235\320\232\320\230", nullptr));
        sort_combobox->setItemText(2, QApplication::translate("MainWindow", "\320\237\320\236 \320\220\320\222\320\242\320\236\320\240\320\243 (\320\220 -> \320\257)", nullptr));
        sort_combobox->setItemText(3, QApplication::translate("MainWindow", "\320\237\320\236 \320\220\320\222\320\242\320\236\320\240\320\243 (\320\257 -> \320\220)", nullptr));
        sort_combobox->setItemText(4, QApplication::translate("MainWindow", "\320\237\320\236 \320\235\320\220\320\227\320\222\320\220\320\235\320\230\320\256 (\320\220 -> \320\257)", nullptr));
        sort_combobox->setItemText(5, QApplication::translate("MainWindow", "\320\237\320\236 \320\235\320\220\320\227\320\222\320\220\320\235\320\230\320\256 (\320\257 -> \320\220)", nullptr));
        sort_combobox->setItemText(6, QApplication::translate("MainWindow", "\320\237\320\236 \320\240\320\225\320\231\320\242\320\230\320\235\320\223\320\243", nullptr));
        sort_combobox->setItemText(7, QApplication::translate("MainWindow", "\320\237\320\236 \320\246\320\225\320\235\320\225 (\320\241\320\235\320\220\320\247\320\220\320\233\320\220 \320\224\320\225\320\250\320\225\320\222\320\253\320\225)", nullptr));
        sort_combobox->setItemText(8, QApplication::translate("MainWindow", "\320\237\320\236 \320\246\320\225\320\235\320\225 (\320\241\320\235\320\220\320\247\320\220\320\233\320\220 \320\224\320\236\320\240\320\236\320\223\320\230\320\225)", nullptr));

        sort_combobox->setCurrentText(QApplication::translate("MainWindow", "\320\241\320\236\320\240\320\242\320\230\320\240\320\236\320\222\320\220\320\242\320\254 \320\237\320\236", nullptr));
        tabs->setTabText(tabs->indexOf(mainpage_tab), QApplication::translate("MainWindow", "MAIN PAGE", nullptr));
        tabs->setTabText(tabs->indexOf(purchasehistory_tab), QApplication::translate("MainWindow", "PURCHASE HISTORY", nullptr));
        QTableWidgetItem *___qtablewidgetitem = cart_list->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindow", "Id", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = cart_list->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MainWindow", "Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = cart_list->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("MainWindow", "Author", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = cart_list->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("MainWindow", "Price", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = cart_list->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("MainWindow", "Count", nullptr));
        totalPrice_label->setText(QApplication::translate("MainWindow", "0", nullptr));
        email_lineEdit->setPlaceholderText(QApplication::translate("MainWindow", "email", nullptr));
        phoneNumber_lineEdit->setPlaceholderText(QApplication::translate("MainWindow", "phone number", nullptr));
        name_lineEdit->setPlaceholderText(QApplication::translate("MainWindow", "Name", nullptr));
        cartError_label->setText(QString());
        order_button->setText(QApplication::translate("MainWindow", "ORDER", nullptr));
        label->setText(QApplication::translate("MainWindow", "rub", nullptr));
        tabs->setTabText(tabs->indexOf(cart_tab), QApplication::translate("MainWindow", "CART", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = wishList_list->horizontalHeaderItem(0);
        ___qtablewidgetitem5->setText(QApplication::translate("MainWindow", "Id", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = wishList_list->horizontalHeaderItem(1);
        ___qtablewidgetitem6->setText(QApplication::translate("MainWindow", "Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = wishList_list->horizontalHeaderItem(2);
        ___qtablewidgetitem7->setText(QApplication::translate("MainWindow", "Author", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = wishList_list->horizontalHeaderItem(3);
        ___qtablewidgetitem8->setText(QApplication::translate("MainWindow", "Price", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = wishList_list->horizontalHeaderItem(4);
        ___qtablewidgetitem9->setText(QApplication::translate("MainWindow", "Count", nullptr));
        tabs->setTabText(tabs->indexOf(wishlist_tab), QApplication::translate("MainWindow", "WISH LIST", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
