#include "aboutdialog.h"
#include "ui_aboutdialog.h"
#include "clientmodel.h"
#include <QDesktopServices>
#include <QUrl>

#include "version.h"

AboutDialog::AboutDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AboutDialog)
{
    ui->setupUi(this);
}

void AboutDialog::setModel(ClientModel *model)
{
    if(model)
    {
        ui->versionLabel->setText(model->formatFullVersion());
    }
}

AboutDialog::~AboutDialog()
{
    delete ui;
}

void AboutDialog::on_buttonBox_accepted()
{
    close();
}

void AboutDialog::on_label_6_linkActivated(const QString &link)
{
    QDesktopServices::openUrl(QUrl(link));
}

void AboutDialog::on_label_3_linkActivated(const QString &link)
{
    QDesktopServices::openUrl(QUrl(link));
}

void AboutDialog::on_label_5_linkActivated(const QString &link)
{
    QDesktopServices::openUrl(QUrl(link));
}

void AboutDialog::on_label_4_linkActivated(const QString &link)
{
    QDesktopServices::openUrl(QUrl(link));
}
