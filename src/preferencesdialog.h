#ifndef PREFERENCESDIALOG_H
#define PREFERENCESDIALOG_H

#include <QDialog>

namespace Ui {
class PreferencesDialog;
}

class PreferencesDialog : public QDialog
{
    Q_OBJECT

public:
    explicit PreferencesDialog(QWidget *parent = 0);
    ~PreferencesDialog();

signals:
    void CloseClicked();///////////

private slots:
    void on_closePreferencesDialogButton_clicked();

    void closeEvent(QCloseEvent *event);

    void on_restoreDefaultTextEditorButton_clicked();

private:
    Ui::PreferencesDialog *ui;

};

#endif // PREFERENCESDIALOG_H
