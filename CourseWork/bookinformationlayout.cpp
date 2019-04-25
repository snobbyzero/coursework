#include "bookinformationlayout.h"
#include "ui_bookinformationlayout.h"

BookInformationLayout::BookInformationLayout(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::BookInformationLayout)
{
    ui->setupUi(this);

}

BookInformationLayout::~BookInformationLayout()
{
    delete ui;
}
