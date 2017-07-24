#ifndef PACKAGESDIALOG_H
#define PACKAGESDIALOG_H

#include <QDialog>
#include <QRegExp>

namespace Ui {
class PackagesDialog;
}

/////////
class RootFileSysProxyModel;
/////////

/// \brief The PackagesDialog class
///
class PackagesDialog : public QDialog
{
    Q_OBJECT

public:
    explicit PackagesDialog(QWidget *parent = 0);
    ~PackagesDialog();
/////////
private slots:

    void onFileItemSelected();
    void on_runScriptButton_clicked();
    void on_selectOfficialReposButton_clicked();
    void on_selectUnofficialReposButton_clicked();
    void on_runSavedScriptListButton_clicked();
    void on_exportListButton_clicked();
    void on_openInTextEditorButton_clicked();
    void on_txtFilter_textChanged(const QString &arg1);
/////////

    void on_clearSelectionButton_clicked();

private:
    Ui::PackagesDialog *ui;
/////////
    RootFileSysProxyModel* fsModel ;
/////////
};

#endif // PACKAGESDIALOG_H
