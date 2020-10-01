#include "mainwidget.h"

MainWidget::MainWidget()
{

}


QWidget* MainWidget::initialize_widget()
{
    return create_widget(edit_button, view_button);
}


QWidget* MainWidget::create_widget(QPushButton *edit_button, QPushButton *view_button)
{
    QVBoxLayout *primary_layout  = new QVBoxLayout();
    QWidget *main_widget = new QWidget();
    edit_button->setText("Input");
    edit_button->setToolTip("Clicking this button will bring you to a new page. You can enter your values on that page.");
    view_button->setToolTip("Clicking this button will bring you to a new page. On that page you can choose how to view your data and then view it.");
    view_button->setText("View");
    primary_layout->addWidget(edit_button);
    primary_layout->addWidget(view_button);

    return main_widget;
}
