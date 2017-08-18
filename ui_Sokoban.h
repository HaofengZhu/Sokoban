#ifndef UI_SOKOBAN_H
#define UI_SOKOBAN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QpushBoxClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *QpushBoxClass)
    {
        if (QpushBoxClass->objectName().isEmpty())
            QpushBoxClass->setObjectName(QStringLiteral("QpushBoxClass"));
        QpushBoxClass->resize(600, 400);
        menuBar = new QMenuBar(QpushBoxClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        QpushBoxClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(QpushBoxClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        QpushBoxClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(QpushBoxClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        QpushBoxClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(QpushBoxClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        QpushBoxClass->setStatusBar(statusBar);

        retranslateUi(QpushBoxClass);

        QMetaObject::connectSlotsByName(QpushBoxClass);
    } // setupUi

    void retranslateUi(QMainWindow *QpushBoxClass)
    {
        QpushBoxClass->setWindowTitle
                (QApplication::translate("QpushBoxClass", "QpushBox", 0));
    } // retranslateUi

};

namespace Ui {
    class QpushBoxClass: public Ui_QpushBoxClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SOKOBAN_H
