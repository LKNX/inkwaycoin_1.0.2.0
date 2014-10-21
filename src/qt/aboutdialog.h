#ifndef ABOUTDIALOG_H
#define ABOUTDIALOG_H

#include <QDialog>
#include <QDesktopServices>
#include <QUrl>

namespace Ui {
    class AboutDialog;
}
class ClientModel;

/** "About" dialog box */
class AboutDialog : public QDialog
{
    Q_OBJECT

public:
    explicit AboutDialog(QWidget *parent = 0);
    ~AboutDialog();

    void setModel(ClientModel *model);
private:
    Ui::AboutDialog *ui;

private slots:
    void on_buttonBox_accepted();
    void on_label_6_linkActivated(const QString &link);
    void on_label_3_linkActivated(const QString &link);
    void on_label_5_linkActivated(const QString &link);
    void on_label_4_linkActivated(const QString &link);
};

#endif // ABOUTDIALOG_H
