#include "rockwidget.h"
#include <QLabel>

RockWidget::RockWidget(QWidget *parent) : QWidget(parent)
{
    QLabel * label = new QLabel("This is my label", this);
}
