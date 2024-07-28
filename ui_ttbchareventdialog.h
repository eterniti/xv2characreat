/********************************************************************************
** Form generated from reading UI file 'ttbchareventdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TTBCHAREVENTDIALOG_H
#define UI_TTBCHAREVENTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_TtbCharEventDialog
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label;
    QLineEdit *charEdit;
    QLabel *label_2;
    QLineEdit *costumeEdit;
    QLabel *label_3;
    QLineEdit *transEdit;
    QLabel *eventLabel;
    QComboBox *eventComboBox;
    QCheckBox *customCheck;
    QLabel *label_5;
    QComboBox *listenLangComboBox;
    QPushButton *listenButton;
    QLabel *label_6;
    QComboBox *subLangComboBox;
    QTextEdit *subsEdit;

    void setupUi(QDialog *TtbCharEventDialog)
    {
        if (TtbCharEventDialog->objectName().isEmpty())
            TtbCharEventDialog->setObjectName(QStringLiteral("TtbCharEventDialog"));
        TtbCharEventDialog->resize(490, 384);
        buttonBox = new QDialogButtonBox(TtbCharEventDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(0, 340, 491, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        buttonBox->setCenterButtons(true);
        label = new QLabel(TtbCharEventDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 30, 41, 16));
        charEdit = new QLineEdit(TtbCharEventDialog);
        charEdit->setObjectName(QStringLiteral("charEdit"));
        charEdit->setGeometry(QRect(65, 30, 70, 20));
        label_2 = new QLabel(TtbCharEventDialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(160, 30, 61, 16));
        costumeEdit = new QLineEdit(TtbCharEventDialog);
        costumeEdit->setObjectName(QStringLiteral("costumeEdit"));
        costumeEdit->setGeometry(QRect(220, 30, 70, 20));
        label_3 = new QLabel(TtbCharEventDialog);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(310, 30, 91, 16));
        transEdit = new QLineEdit(TtbCharEventDialog);
        transEdit->setObjectName(QStringLiteral("transEdit"));
        transEdit->setGeometry(QRect(400, 30, 70, 20));
        eventLabel = new QLabel(TtbCharEventDialog);
        eventLabel->setObjectName(QStringLiteral("eventLabel"));
        eventLabel->setGeometry(QRect(20, 70, 47, 13));
        eventComboBox = new QComboBox(TtbCharEventDialog);
        eventComboBox->setObjectName(QStringLiteral("eventComboBox"));
        eventComboBox->setGeometry(QRect(80, 68, 191, 22));
        customCheck = new QCheckBox(TtbCharEventDialog);
        customCheck->setObjectName(QStringLiteral("customCheck"));
        customCheck->setGeometry(QRect(300, 70, 171, 17));
        label_5 = new QLabel(TtbCharEventDialog);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(20, 110, 91, 16));
        listenLangComboBox = new QComboBox(TtbCharEventDialog);
        listenLangComboBox->setObjectName(QStringLiteral("listenLangComboBox"));
        listenLangComboBox->setGeometry(QRect(110, 108, 91, 22));
        listenButton = new QPushButton(TtbCharEventDialog);
        listenButton->setObjectName(QStringLiteral("listenButton"));
        listenButton->setGeometry(QRect(220, 108, 75, 23));
        label_6 = new QLabel(TtbCharEventDialog);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(15, 150, 101, 16));
        subLangComboBox = new QComboBox(TtbCharEventDialog);
        subLangComboBox->setObjectName(QStringLiteral("subLangComboBox"));
        subLangComboBox->setGeometry(QRect(110, 148, 91, 22));
        subsEdit = new QTextEdit(TtbCharEventDialog);
        subsEdit->setObjectName(QStringLiteral("subsEdit"));
        subsEdit->setGeometry(QRect(20, 190, 451, 131));

        retranslateUi(TtbCharEventDialog);
        QObject::connect(buttonBox, SIGNAL(rejected()), TtbCharEventDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(TtbCharEventDialog);
    } // setupUi

    void retranslateUi(QDialog *TtbCharEventDialog)
    {
        TtbCharEventDialog->setWindowTitle(QApplication::translate("TtbCharEventDialog", "Edit actor event", 0));
        label->setText(QApplication::translate("TtbCharEventDialog", "Char:", 0));
        label_2->setText(QApplication::translate("TtbCharEventDialog", "Costume:", 0));
        label_3->setText(QApplication::translate("TtbCharEventDialog", "Transformation:", 0));
        eventLabel->setText(QApplication::translate("TtbCharEventDialog", "Event:", 0));
        customCheck->setText(QApplication::translate("TtbCharEventDialog", "Use custom audio/subtitles", 0));
        label_5->setText(QApplication::translate("TtbCharEventDialog", "Listen language:", 0));
        listenLangComboBox->clear();
        listenLangComboBox->insertItems(0, QStringList()
         << QApplication::translate("TtbCharEventDialog", "Japanese", 0)
         << QApplication::translate("TtbCharEventDialog", "English", 0)
        );
        listenButton->setText(QApplication::translate("TtbCharEventDialog", "Listen", 0));
        label_6->setText(QApplication::translate("TtbCharEventDialog", "Subtitle language:", 0));
        subLangComboBox->clear();
        subLangComboBox->insertItems(0, QStringList()
         << QApplication::translate("TtbCharEventDialog", "English", 0)
         << QApplication::translate("TtbCharEventDialog", "Spanish (es)", 0)
         << QApplication::translate("TtbCharEventDialog", "Spanish (ca)", 0)
         << QApplication::translate("TtbCharEventDialog", "French", 0)
         << QApplication::translate("TtbCharEventDialog", "German", 0)
         << QApplication::translate("TtbCharEventDialog", "Italian", 0)
         << QApplication::translate("TtbCharEventDialog", "Portuguese", 0)
         << QApplication::translate("TtbCharEventDialog", "Polish", 0)
         << QApplication::translate("TtbCharEventDialog", "Russian", 0)
         << QApplication::translate("TtbCharEventDialog", "Chinese (tw)", 0)
         << QApplication::translate("TtbCharEventDialog", "Chinese (zh)", 0)
         << QApplication::translate("TtbCharEventDialog", "Korean", 0)
         << QApplication::translate("TtbCharEventDialog", "Japanese", 0)
        );
    } // retranslateUi

};

namespace Ui {
    class TtbCharEventDialog: public Ui_TtbCharEventDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TTBCHAREVENTDIALOG_H
