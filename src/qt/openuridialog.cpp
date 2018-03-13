// Copyright (c) 2011-2014 The Bitcoin Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#include "openuridialog.h"
#include "ui_openuridialog.h"

#include "guiutil.h"
#include "walletmodel.h"

#include <QUrl>

OpenURIDialog::OpenURIDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::OpenURIDialog)
{
    ui->setupUi(this);
#if QT_VERSION >= 0x040700
<<<<<<< HEAD
    ui->uriEdit->setPlaceholderText("defcoin:");
=======
    ui->uriEdit->setPlaceholderText("litecoin:");
>>>>>>> 567c0d737f0f3ab65977fcabaa1483e449d69702
#endif
}

OpenURIDialog::~OpenURIDialog()
{
    delete ui;
}

QString OpenURIDialog::getURI()
{
    return ui->uriEdit->text();
}

void OpenURIDialog::accept()
{
    SendCoinsRecipient rcp;
    if(GUIUtil::parseBitcoinURI(getURI(), &rcp))
    {
        /* Only accept value URIs */
        QDialog::accept();
    } else {
        ui->uriEdit->setValid(false);
    }
}

void OpenURIDialog::on_selectFileButton_clicked()
{
    QString filename = GUIUtil::getOpenFileName(this, tr("Select payment request file to open"), "", "", nullptr);
    if(filename.isEmpty())
        return;
    QUrl fileUri = QUrl::fromLocalFile(filename);
<<<<<<< HEAD
    ui->uriEdit->setText("defcoin:?r=" + QUrl::toPercentEncoding(fileUri.toString()));
=======
    ui->uriEdit->setText("litecoin:?r=" + QUrl::toPercentEncoding(fileUri.toString()));
>>>>>>> 567c0d737f0f3ab65977fcabaa1483e449d69702
}
