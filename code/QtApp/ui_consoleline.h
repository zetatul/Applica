/********************************************************************************
** Form generated from reading UI file 'consoleline.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONSOLELINE_H
#define UI_CONSOLELINE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ConsoleLine
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QTextEdit *inLine;
    QLineEdit *outLine;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *ConsoleLine)
    {
        if (ConsoleLine->objectName().isEmpty())
            ConsoleLine->setObjectName(QString::fromUtf8("ConsoleLine"));
        ConsoleLine->resize(596, 539);
        centralwidget = new QWidget(ConsoleLine);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setMinimumSize(QSize(600, 480));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setSpacing(1);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(1, 1, 1, 1);
        inLine = new QTextEdit(centralwidget);
        inLine->setObjectName(QString::fromUtf8("inLine"));
        inLine->setEnabled(false);
        inLine->setReadOnly(true);

        verticalLayout->addWidget(inLine);

        outLine = new QLineEdit(centralwidget);
        outLine->setObjectName(QString::fromUtf8("outLine"));

        verticalLayout->addWidget(outLine);

        ConsoleLine->setCentralWidget(centralwidget);
        menubar = new QMenuBar(ConsoleLine);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 596, 21));
        ConsoleLine->setMenuBar(menubar);
        statusbar = new QStatusBar(ConsoleLine);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        ConsoleLine->setStatusBar(statusbar);

        retranslateUi(ConsoleLine);

        QMetaObject::connectSlotsByName(ConsoleLine);
    } // setupUi

    void retranslateUi(QMainWindow *ConsoleLine)
    {
        ConsoleLine->setWindowTitle(QCoreApplication::translate("ConsoleLine", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ConsoleLine: public Ui_ConsoleLine {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONSOLELINE_H
