#ifndef FOLDERSPROXYMODEL_H
#define FOLDERSPROXYMODEL_H

#include <QAbstractProxyModel>
#include <QFileSystemModel>
#include <QSortFilterProxyModel>


class  RootFileSysProxyModel: public QSortFilterProxyModel
{
	Q_OBJECT

public:
	RootFileSysProxyModel(QFileSystemModel* model, const QString& rootAbsPath, QObject* parent);

	virtual QModelIndex mapFromSource ( const QModelIndex & sourceIndex ) const;
	virtual QModelIndex mapToSource ( const QModelIndex & proxyIndex ) const;
	QModelIndex buddy(const QModelIndex &index) const;


	QModelIndex index(int row, int column, const QModelIndex & parent = QModelIndex()) const;
	QModelIndex parent(const QModelIndex&) const;
	bool hasChildren(const QModelIndex & parent = QModelIndex()) const ;

	int columnCount(const QModelIndex & parent = QModelIndex()) const;
	int rowCount(const QModelIndex & parent = QModelIndex()) const;
	QVariant	data(const QModelIndex & index, int role = Qt::DisplayRole) const;
	bool setData(const QModelIndex& index, const QVariant& value, int role = Qt::EditRole);

	void fetchMore(const QModelIndex & parent);
	bool canFetchMore(const QModelIndex & parent) const;

	QModelIndex	sibling ( int row, int column, const QModelIndex & index ) const;
	Qt::ItemFlags flags(const QModelIndex & index) const;

	QMimeData* mimeData(const QModelIndexList & indexes) const;
	QStringList mimeTypes() const;

	QVariant	headerData(int section, Qt::Orientation orientation, int role = Qt::DisplayRole) const;
	bool	setHeaderData(int section, Qt::Orientation orientation, const QVariant & value, int role = Qt::EditRole);

	QList<QFileInfo> checkedData(bool checked = true, int role = Qt::DisplayRole) const;

private:
	const QFileSystemModel* fsModel() const;
	QFileSystemModel* fsModel();
	QModelIndex rootIndex(int column) const;
	QModelIndex badSrcIndex() const;

private:
	QFileSystemModel* fsm;
	mutable QMap<void*, QModelIndex> ptrToSrcIdx;
	mutable QMap<void*, QModelIndex> ptrToProxyIdx;
	QMap<void*, bool> ptrToChecked;
};



#endif // FOLDERSPROXYMODEL_H
