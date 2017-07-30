#ifndef UPDATESCRIPTSDIALOG_H
#define UPDATESCRIPTSDIALOG_H

#include <QDialog>

namespace Ui {
class UpdateScriptsDialog;
}

class UpdateScriptsDialog : public QDialog
{
    Q_OBJECT

public:
    explicit UpdateScriptsDialog(QWidget *parent = 0);
    ~UpdateScriptsDialog();

private slots:
    void on_pushButton_clicked();

private:
    Ui::UpdateScriptsDialog *ui;
};

#endif // UPDATESCRIPTSDIALOG_H
