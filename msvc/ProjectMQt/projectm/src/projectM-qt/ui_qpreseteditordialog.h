/********************************************************************************
** Form generated from reading UI file 'qpreseteditordialog.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QPRESETEDITORDIALOG_H
#define UI_QPRESETEDITORDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QWidget>
#include "qpresettextedit.hpp"

QT_BEGIN_NAMESPACE

class Ui_QPresetEditorDialog
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *hboxLayout;
    QPresetTextEdit *presetTextEdit;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QPresetEditorDialog)
    {
        if (QPresetEditorDialog->objectName().isEmpty())
            QPresetEditorDialog->setObjectName(QString::fromUtf8("QPresetEditorDialog"));
        QPresetEditorDialog->resize(464, 383);
        QPresetEditorDialog->setAutoFillBackground(true);
        QPresetEditorDialog->setSizeGripEnabled(true);
        layoutWidget = new QWidget(QPresetEditorDialog);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(1, 1, 461, 381));
        hboxLayout = new QHBoxLayout(layoutWidget);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        presetTextEdit = new QPresetTextEdit(layoutWidget);
        presetTextEdit->setObjectName(QString::fromUtf8("presetTextEdit"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(2);
        sizePolicy.setHeightForWidth(presetTextEdit->sizePolicy().hasHeightForWidth());
        presetTextEdit->setSizePolicy(sizePolicy);
        presetTextEdit->setAcceptRichText(false);

        hboxLayout->addWidget(presetTextEdit);

        buttonBox = new QDialogButtonBox(layoutWidget);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Vertical);
        buttonBox->setStandardButtons(QDialogButtonBox::Apply|QDialogButtonBox::Close|QDialogButtonBox::Reset);

        hboxLayout->addWidget(buttonBox);


        retranslateUi(QPresetEditorDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), QPresetEditorDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), QPresetEditorDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(QPresetEditorDialog);
    } // setupUi

    void retranslateUi(QDialog *QPresetEditorDialog)
    {
        QPresetEditorDialog->setWindowTitle(QCoreApplication::translate("QPresetEditorDialog", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QPresetEditorDialog: public Ui_QPresetEditorDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QPRESETEDITORDIALOG_H
