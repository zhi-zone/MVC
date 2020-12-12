#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QStandardItemModel>
#include <QTableView>

class Widget : public QWidget
{
    Q_OBJECT

private:
    QStandardItemModel m_model;
    QTableView m_table;
public:
    Widget(QWidget *parent = 0);
    ~Widget();
};

#endif // WIDGET_H
