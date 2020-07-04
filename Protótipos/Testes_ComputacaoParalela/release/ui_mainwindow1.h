/********************************************************************************
** Form generated from reading UI file 'mainwindow1.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW1_H
#define UI_MAINWINDOW1_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow1
{
public:
    QWidget *centralwidget;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *pushButtonplay_2;
    QPushButton *pushButtonplay;
    QTabWidget *tabWidget;
    QWidget *tab;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QSpinBox *spinBox_4;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QComboBox *comboBox;
    QHBoxLayout *horizontalLayout_10;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_6;
    QComboBox *comboBox_2;
    QWidget *tab_2;
    QWidget *layoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_3;
    QSpinBox *spinBox_5;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_7;
    QComboBox *comboBox_3;
    QHBoxLayout *horizontalLayout_11;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_8;
    QComboBox *comboBox_4;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow1)
    {
        if (MainWindow1->objectName().isEmpty())
            MainWindow1->setObjectName(QString::fromUtf8("MainWindow1"));
        MainWindow1->resize(368, 245);
        centralwidget = new QWidget(MainWindow1);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(190, 160, 168, 27));
        horizontalLayout_7 = new QHBoxLayout(layoutWidget);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        pushButtonplay_2 = new QPushButton(layoutWidget);
        pushButtonplay_2->setObjectName(QString::fromUtf8("pushButtonplay_2"));

        horizontalLayout_7->addWidget(pushButtonplay_2);

        pushButtonplay = new QPushButton(layoutWidget);
        pushButtonplay->setObjectName(QString::fromUtf8("pushButtonplay"));

        horizontalLayout_7->addWidget(pushButtonplay);

        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(10, 20, 351, 131));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        widget = new QWidget(tab);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 20, 331, 67));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        spinBox_4 = new QSpinBox(widget);
        spinBox_4->setObjectName(QString::fromUtf8("spinBox_4"));

        horizontalLayout->addWidget(spinBox_4);


        horizontalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_5 = new QLabel(widget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_5->addWidget(label_5);

        comboBox = new QComboBox(widget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        horizontalLayout_5->addWidget(comboBox);


        horizontalLayout_2->addLayout(horizontalLayout_5);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_6 = new QLabel(widget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_6->addWidget(label_6);

        comboBox_2 = new QComboBox(widget);
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));

        horizontalLayout_6->addWidget(comboBox_2);


        horizontalLayout_10->addLayout(horizontalLayout_6);


        verticalLayout->addLayout(horizontalLayout_10);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        layoutWidget_2 = new QWidget(tab_2);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(10, 20, 331, 67));
        verticalLayout_2 = new QVBoxLayout(layoutWidget_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_3 = new QLabel(layoutWidget_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_4->addWidget(label_3);

        spinBox_5 = new QSpinBox(layoutWidget_2);
        spinBox_5->setObjectName(QString::fromUtf8("spinBox_5"));

        horizontalLayout_4->addWidget(spinBox_5);


        horizontalLayout_3->addLayout(horizontalLayout_4);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_7 = new QLabel(layoutWidget_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_8->addWidget(label_7);

        comboBox_3 = new QComboBox(layoutWidget_2);
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->setObjectName(QString::fromUtf8("comboBox_3"));

        horizontalLayout_8->addWidget(comboBox_3);


        horizontalLayout_3->addLayout(horizontalLayout_8);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        label_8 = new QLabel(layoutWidget_2);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        horizontalLayout_9->addWidget(label_8);

        comboBox_4 = new QComboBox(layoutWidget_2);
        comboBox_4->addItem(QString());
        comboBox_4->addItem(QString());
        comboBox_4->addItem(QString());
        comboBox_4->setObjectName(QString::fromUtf8("comboBox_4"));

        horizontalLayout_9->addWidget(comboBox_4);


        horizontalLayout_11->addLayout(horizontalLayout_9);


        verticalLayout_2->addLayout(horizontalLayout_11);

        tabWidget->addTab(tab_2, QString());
        MainWindow1->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow1);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 368, 22));
        MainWindow1->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow1);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow1->setStatusBar(statusbar);

        retranslateUi(MainWindow1);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow1);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow1)
    {
        MainWindow1->setWindowTitle(QCoreApplication::translate("MainWindow1", "Configura\303\247\303\265es da Imagem", nullptr));
        pushButtonplay_2->setText(QCoreApplication::translate("MainWindow1", "Cancelar", nullptr));
        pushButtonplay->setText(QCoreApplication::translate("MainWindow1", "Ok", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow1", "Tamanho:", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow1", "Tipo de M\303\241scara:", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("MainWindow1", "Rect", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("MainWindow1", "cross", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("MainWindow1", "Ellipse", nullptr));

        label_6->setText(QCoreApplication::translate("MainWindow1", "Opera\303\247\303\243o:", nullptr));
        comboBox_2->setItemText(0, QCoreApplication::translate("MainWindow1", "Eros\303\243o", nullptr));
        comboBox_2->setItemText(1, QCoreApplication::translate("MainWindow1", "Dilata\303\247\303\243o", nullptr));
        comboBox_2->setItemText(2, QCoreApplication::translate("MainWindow1", "Contorno", nullptr));

        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("MainWindow1", "Abertura", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow1", "Tamanho:", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow1", "Tipo de M\303\241scara:", nullptr));
        comboBox_3->setItemText(0, QCoreApplication::translate("MainWindow1", "Rect", nullptr));
        comboBox_3->setItemText(1, QCoreApplication::translate("MainWindow1", "cross", nullptr));
        comboBox_3->setItemText(2, QCoreApplication::translate("MainWindow1", "Ellipse", nullptr));

        label_8->setText(QCoreApplication::translate("MainWindow1", "Opera\303\247\303\243o:", nullptr));
        comboBox_4->setItemText(0, QCoreApplication::translate("MainWindow1", "Eros\303\243o", nullptr));
        comboBox_4->setItemText(1, QCoreApplication::translate("MainWindow1", "Dilata\303\247\303\243o", nullptr));
        comboBox_4->setItemText(2, QCoreApplication::translate("MainWindow1", "Contorno", nullptr));

        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("MainWindow1", "Fechamento", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow1: public Ui_MainWindow1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW1_H
