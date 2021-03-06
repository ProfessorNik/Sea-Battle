#include "shipwidget.h"

ShipWidget::ShipWidget(int size, QWidget *parent) : QWidget(parent){
    this->size = size;
    setFixedSize(40, size * 30 + 10);
}

void ShipWidget::paintEvent(QPaintEvent *event){
    QPainter qp(this);
    for (int i = 0; i < size; i++){
        drawBlueSquare(&qp, i);
    }
}

void ShipWidget::drawBlueSquare(QPainter *qp, int pos){
    qp->save();
    qp->setBrush(QBrush(SHIP_INLINE_COLOR));
    qp->setPen(QPen(QBrush(SHIP_OUTLINE_COLOR), 3, Qt::SolidLine));
    qp->drawRect(2, 2 + pos * 30, 30, 30);
    qp->restore();
}

void ShipWidget::mousePressEvent(QMouseEvent *event)
{
    emit shipSelected(size);
}
