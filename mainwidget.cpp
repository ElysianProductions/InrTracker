#include "mainwidget.h"

MainWidget::MainWidget()
{
  edit_button = new QPushButton();
  view_button = new QPushButton();
  primary_layout  = new QVBoxLayout();
}


QWidget* MainWidget::initialize_widget()
{
    return create_widget(edit_button, view_button, primary_layout);
}


QWidget* MainWidget::create_widget(QPushButton *button_one, QPushButton *button_two, QVBoxLayout *layout)
{

    button_one->setText("Input");
    button_one->setToolTip("Clicking this button will bring you to a new page. You can enter your values on that page.");

    button_two->setText("View");
    button_two->setToolTip("Clicking this button will bring you to a new page. On that page you can choose how to view your data and then view it.");

    layout->addWidget(button_one);
    layout->addWidget(button_two);

    QWidget *main_widget = new QWidget();
    main_widget->setLayout(layout);
    primary_layout->setAlignment(Qt::AlignHCenter);
    return main_widget;
}
