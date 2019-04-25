#ifndef BOOKINFORMATIONLAYOUT_H
#define BOOKINFORMATIONLAYOUT_H

#include <QWidget>

namespace Ui {
class BookInformationLayout;
}

class BookInformationLayout: public QWidget
{
    Q_OBJECT

public:
    explicit BookInformationLayout(QWidget *parent = nullptr);
    ~BookInformationLayout();

private:
    Ui::BookInformationLayout *ui;
};

#endif // BOOKINFORMATIONLAYOUT_H
