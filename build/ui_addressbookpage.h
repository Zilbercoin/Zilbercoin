/********************************************************************************
** Form generated from reading UI file 'addressbookpage.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDRESSBOOKPAGE_H
#define UI_ADDRESSBOOKPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddressBookPage
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *labelExplanation;
    QTableView *tableView;
    QHBoxLayout *horizontalLayout;
    QPushButton *newAddressButton;
    QPushButton *copyToClipboard;
    QPushButton *showQRCode;
    QPushButton *signMessage;
    QPushButton *verifyMessage;
    QPushButton *deleteButton;
    QSpacerItem *horizontalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QWidget *AddressBookPage)
    {
        if (AddressBookPage->objectName().isEmpty())
            AddressBookPage->setObjectName(QString::fromUtf8("AddressBookPage"));
        AddressBookPage->resize(760, 380);
        verticalLayout = new QVBoxLayout(AddressBookPage);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        labelExplanation = new QLabel(AddressBookPage);
        labelExplanation->setObjectName(QString::fromUtf8("labelExplanation"));
        labelExplanation->setTextFormat(Qt::PlainText);
        labelExplanation->setWordWrap(true);

        verticalLayout->addWidget(labelExplanation);

        tableView = new QTableView(AddressBookPage);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setContextMenuPolicy(Qt::CustomContextMenu);
        tableView->setTabKeyNavigation(false);
        tableView->setSelectionMode(QAbstractItemView::SingleSelection);
        tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableView->setSortingEnabled(true);
        tableView->verticalHeader()->setVisible(false);

        verticalLayout->addWidget(tableView);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        newAddressButton = new QPushButton(AddressBookPage);
        newAddressButton->setObjectName(QString::fromUtf8("newAddressButton"));

        horizontalLayout->addWidget(newAddressButton);

        copyToClipboard = new QPushButton(AddressBookPage);
        copyToClipboard->setObjectName(QString::fromUtf8("copyToClipboard"));

        horizontalLayout->addWidget(copyToClipboard);

        showQRCode = new QPushButton(AddressBookPage);
        showQRCode->setObjectName(QString::fromUtf8("showQRCode"));

        horizontalLayout->addWidget(showQRCode);

        signMessage = new QPushButton(AddressBookPage);
        signMessage->setObjectName(QString::fromUtf8("signMessage"));

        horizontalLayout->addWidget(signMessage);

        verifyMessage = new QPushButton(AddressBookPage);
        verifyMessage->setObjectName(QString::fromUtf8("verifyMessage"));

        horizontalLayout->addWidget(verifyMessage);

        deleteButton = new QPushButton(AddressBookPage);
        deleteButton->setObjectName(QString::fromUtf8("deleteButton"));

        horizontalLayout->addWidget(deleteButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        buttonBox = new QDialogButtonBox(AddressBookPage);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(buttonBox->sizePolicy().hasHeightForWidth());
        buttonBox->setSizePolicy(sizePolicy);
        buttonBox->setStandardButtons(QDialogButtonBox::Ok);

        horizontalLayout->addWidget(buttonBox);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(AddressBookPage);

        QMetaObject::connectSlotsByName(AddressBookPage);
    } // setupUi

    void retranslateUi(QWidget *AddressBookPage)
    {
        AddressBookPage->setWindowTitle(QCoreApplication::translate("AddressBookPage", "Address Book", nullptr));
        labelExplanation->setText(QCoreApplication::translate("AddressBookPage", "These are your Zilbercoin addresses for receiving payments. You may want to give a different one to each sender so you can keep track of who is paying you.", nullptr));
#if QT_CONFIG(tooltip)
        tableView->setToolTip(QCoreApplication::translate("AddressBookPage", "Double-click to edit address or label", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        newAddressButton->setToolTip(QCoreApplication::translate("AddressBookPage", "Create a new address", nullptr));
#endif // QT_CONFIG(tooltip)
        newAddressButton->setText(QCoreApplication::translate("AddressBookPage", "&New Address", nullptr));
#if QT_CONFIG(tooltip)
        copyToClipboard->setToolTip(QCoreApplication::translate("AddressBookPage", "Copy the currently selected address to the system clipboard", nullptr));
#endif // QT_CONFIG(tooltip)
        copyToClipboard->setText(QCoreApplication::translate("AddressBookPage", "&Copy Address", nullptr));
        showQRCode->setText(QCoreApplication::translate("AddressBookPage", "Show &QR Code", nullptr));
#if QT_CONFIG(tooltip)
        signMessage->setToolTip(QCoreApplication::translate("AddressBookPage", "Sign a message to prove you own a Zilbercoin address", nullptr));
#endif // QT_CONFIG(tooltip)
        signMessage->setText(QCoreApplication::translate("AddressBookPage", "Sign &Message", nullptr));
#if QT_CONFIG(tooltip)
        verifyMessage->setToolTip(QCoreApplication::translate("AddressBookPage", "Verify a message to ensure it was signed with a specified Zilbercoin address", nullptr));
#endif // QT_CONFIG(tooltip)
        verifyMessage->setText(QCoreApplication::translate("AddressBookPage", "&Verify Message", nullptr));
#if QT_CONFIG(tooltip)
        deleteButton->setToolTip(QCoreApplication::translate("AddressBookPage", "Delete the currently selected address from the list", nullptr));
#endif // QT_CONFIG(tooltip)
        deleteButton->setText(QCoreApplication::translate("AddressBookPage", "&Delete", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddressBookPage: public Ui_AddressBookPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDRESSBOOKPAGE_H
