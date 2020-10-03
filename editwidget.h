#ifndef EDITWIDGET_H
#define EDITWIDGET_H
#include "QLayout"
#include "QPushButton"
#include "QLineEdit"
#include "QLabel"
#include "QCheckBox"
#include "QFormLayout"
#include "QButtonGroup"
#include "QStackedWidget"
#include "QWidget"

class EditWidget : public QWidget
{
    Q_OBJECT
public:
    EditWidget();
    QWidget* initialize_widget();

private:
    QWidget* create_widget();
};

#endif // EDITWIDGET_H
