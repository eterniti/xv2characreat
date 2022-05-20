/********************************************************************************
** Form generated from reading UI file 'embdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EMBDIALOG_H
#define UI_EMBDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListWidget>

QT_BEGIN_NAMESPACE

class Ui_EmbDialog
{
public:
    QDialogButtonBox *buttonBox;
    QListWidget *listWidget;

    void setupUi(QDialog *EmbDialog)
    {
        if (EmbDialog->objectName().isEmpty())
            EmbDialog->setObjectName(QStringLiteral("EmbDialog"));
        EmbDialog->resize(312, 351);
        buttonBox = new QDialogButtonBox(EmbDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(81, 300, 151, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        listWidget = new QListWidget(EmbDialog);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(28, 20, 256, 261));
        listWidget->setIconSize(QSize(90, 90));

        retranslateUi(EmbDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), EmbDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), EmbDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(EmbDialog);
    } // setupUi

    void retranslateUi(QDialog *EmbDialog)
    {
        EmbDialog->setWindowTitle(QApplication::translate("EmbDialog", "Select", 0));
    } // retranslateUi

};

namespace Ui {
    class EmbDialog: public Ui_EmbDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EMBDIALOG_H
