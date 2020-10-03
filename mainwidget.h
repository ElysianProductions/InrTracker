#ifndef MAINWIDGET_H
#define MAINWIDGET_H
#include "QLayout"
#include "QPushButton"
#include "QLineEdit"
#include "QLabel"
#include "QCheckBox"
#include "QFormLayout"
#include "QButtonGroup"
#include "QStackedWidget"
#include "QWidget"


class MainWidget : public QWidget
{
    Q_OBJECT
public:
    MainWidget();


    QPushButton *edit_button;
    QPushButton *view_button;


    QWidget* initialize_widget();

private:

    //QWidget *primary_widget;
    QVBoxLayout *primary_layout;
    QWidget* create_widget(QPushButton *button_one, QPushButton *button_two, QVBoxLayout *layout);


};

#endif // MAINWIDGET_H
