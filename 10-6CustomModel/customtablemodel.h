#ifndef CUSTOMTABLEMODEL_H
#define CUSTOMTABLEMODEL_H

#include <QAbstractTableModel>
#include <QObject>

class CustomTableModel : public QAbstractTableModel
{
    Q_OBJECT
public:
    explicit CustomTableModel(QObject *parent = nullptr);

    int rowCount(const QModelIndex &parent) const;
    int columCount(const QModelIndex &parent) const;

    virtual QVariant data(const QModelIndex &index, int role) const; // Controls the data that is shown in each cell
};

#endif // CUSTOMTABLEMODEL_H
