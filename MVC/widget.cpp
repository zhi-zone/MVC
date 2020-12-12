#include "widget.h"
#include <QStandardItem>
#include <QDebug>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    m_model.setParent(this);
    m_model.setRowCount(8);
    m_model.setColumnCount(10);

    QStandardItem* item[8][10];

    for (int row = 0; row < 8; ++row) {
          for (int col = 0; col < 10; ++col) {
              int index = 10 * row + col + 1;
              item[row][col] = new QStandardItem(QString("%0").arg(index));
              m_model.setItem(row, col, item[row][col]);
          }
     }

    m_table.setParent(this);
    m_table.move(100, 100);

    m_table.setModel(&m_model);
    m_table.setFixedSize(400, 320);
    for (int row = 0; row < 8; row+=2) {
        m_table.setRowHeight(row, 100);
     }

}

Widget::~Widget()
{

}
