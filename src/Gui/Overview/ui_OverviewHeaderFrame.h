/********************************************************************************
** Form generated from reading UI file 'OverviewHeaderFrame.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OVERVIEWHEADERFRAME_H
#define UI_OVERVIEWHEADERFRAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include "Gui/Common/CopyMagicLabel.h"
#include "Gui/Common/WalletTextLabel.h"
#include "Gui/Overview/OverviewTransactionPoolTreeView.h"

QT_BEGIN_NAMESPACE

class Ui_OverviewHeaderFrame
{
public:
    QHBoxLayout *horizontalLayout;
    QFrame *m_overviewBalanceFrame;
    QGridLayout *gridLayout;
    WalletGui::WalletNormalGreenBoldTextLabel *m_overviewTotalBalanceTickerLabel;
    WalletGui::WalletNormalGreenBoldTextLabel *m_overviewTotalBalanceLabel;
    WalletGui::CopyMagicLabel *m_lockedBalanceCopyLabel;
    WalletGui::WalletNormalGrayTextLabel *m_overviewLockedBalanceTickerLabel;
    WalletGui::WalletHeaderLabel *label;
    QSpacerItem *verticalSpacer_2;
    WalletGui::WalletNormalGrayTextLabel *m_overviewLockedBalanceLabel;
    WalletGui::CopyMagicLabel *m_availableBalanceCopyLabel;
    WalletGui::WalletNormalGrayTextLabel *m_overviewAvailableBalanceLabel;
    QSpacerItem *verticalSpacer_8;
    WalletGui::WalletSmallGrayTextLabel *m_overviewLockedBalanceTextLabel;
    QSpacerItem *horizontalSpacer;
    WalletGui::WalletSmallGreenBoldTextLabel *m_overviewTotalBalanceTextLabel;
    WalletGui::WalletSmallGrayTextLabel *m_overviewAvailableBalanceTextLabel;
    QSpacerItem *verticalSpacer;
    WalletGui::CopyMagicLabel *m_totalBalanceCopyLabel;
    WalletGui::WalletNormalGrayTextLabel *m_overviewAvailableBalanceTickerLabel;
    QSpacerItem *horizontalSpacer_4;
    QLabel *m_overviewBalanceIconLabel;
    QFrame *m_overviewPoolFrame;
    QGridLayout *gridLayout_3;
    QSpacerItem *verticalSpacer_6;
    WalletGui::WalletHeaderLabel *label_9;
    QSpacerItem *verticalSpacer_9;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *verticalSpacer_5;
    WalletGui::OverviewTransactionPoolTreeView *m_overviewTransactionPoolView;
    WalletGui::WalletNormalBlackTextLabel *m_overviewPoolSizeLabel;
    QLabel *m_overviewPoolIconLabel;
    QSpacerItem *horizontalSpacer_6;

    void setupUi(QFrame *OverviewHeaderFrame)
    {
        if (OverviewHeaderFrame->objectName().isEmpty())
            OverviewHeaderFrame->setObjectName(QStringLiteral("OverviewHeaderFrame"));
        OverviewHeaderFrame->resize(1068, 155);
        OverviewHeaderFrame->setFrameShape(QFrame::NoFrame);
        OverviewHeaderFrame->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(OverviewHeaderFrame);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        m_overviewBalanceFrame = new QFrame(OverviewHeaderFrame);
        m_overviewBalanceFrame->setObjectName(QStringLiteral("m_overviewBalanceFrame"));
        m_overviewBalanceFrame->setFrameShape(QFrame::NoFrame);
        m_overviewBalanceFrame->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(m_overviewBalanceFrame);
        gridLayout->setSpacing(5);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(30, 25, -1, 15);
        m_overviewTotalBalanceTickerLabel = new WalletGui::WalletNormalGreenBoldTextLabel(m_overviewBalanceFrame);
        m_overviewTotalBalanceTickerLabel->setObjectName(QStringLiteral("m_overviewTotalBalanceTickerLabel"));
        m_overviewTotalBalanceTickerLabel->setIndent(0);

        gridLayout->addWidget(m_overviewTotalBalanceTickerLabel, 5, 4, 1, 1);

        m_overviewTotalBalanceLabel = new WalletGui::WalletNormalGreenBoldTextLabel(m_overviewBalanceFrame);
        m_overviewTotalBalanceLabel->setObjectName(QStringLiteral("m_overviewTotalBalanceLabel"));
        m_overviewTotalBalanceLabel->setCursor(QCursor(Qt::PointingHandCursor));
        m_overviewTotalBalanceLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(m_overviewTotalBalanceLabel, 5, 3, 1, 1);

        m_lockedBalanceCopyLabel = new WalletGui::CopyMagicLabel(m_overviewBalanceFrame);
        m_lockedBalanceCopyLabel->setObjectName(QStringLiteral("m_lockedBalanceCopyLabel"));
        m_lockedBalanceCopyLabel->setIndent(0);

        gridLayout->addWidget(m_lockedBalanceCopyLabel, 4, 5, 1, 1);

        m_overviewLockedBalanceTickerLabel = new WalletGui::WalletNormalGrayTextLabel(m_overviewBalanceFrame);
        m_overviewLockedBalanceTickerLabel->setObjectName(QStringLiteral("m_overviewLockedBalanceTickerLabel"));
        m_overviewLockedBalanceTickerLabel->setIndent(0);

        gridLayout->addWidget(m_overviewLockedBalanceTickerLabel, 4, 4, 1, 1, Qt::AlignLeft);

        label = new WalletGui::WalletHeaderLabel(m_overviewBalanceFrame);
        label->setObjectName(QStringLiteral("label"));
        label->setIndent(0);

        gridLayout->addWidget(label, 1, 2, 1, 5);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 0, 0, 1, 7);

        m_overviewLockedBalanceLabel = new WalletGui::WalletNormalGrayTextLabel(m_overviewBalanceFrame);
        m_overviewLockedBalanceLabel->setObjectName(QStringLiteral("m_overviewLockedBalanceLabel"));
        m_overviewLockedBalanceLabel->setCursor(QCursor(Qt::PointingHandCursor));
        m_overviewLockedBalanceLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(m_overviewLockedBalanceLabel, 4, 3, 1, 1);

        m_availableBalanceCopyLabel = new WalletGui::CopyMagicLabel(m_overviewBalanceFrame);
        m_availableBalanceCopyLabel->setObjectName(QStringLiteral("m_availableBalanceCopyLabel"));
        m_availableBalanceCopyLabel->setIndent(0);

        gridLayout->addWidget(m_availableBalanceCopyLabel, 3, 5, 1, 1);

        m_overviewAvailableBalanceLabel = new WalletGui::WalletNormalGrayTextLabel(m_overviewBalanceFrame);
        m_overviewAvailableBalanceLabel->setObjectName(QStringLiteral("m_overviewAvailableBalanceLabel"));
        m_overviewAvailableBalanceLabel->setCursor(QCursor(Qt::PointingHandCursor));
        m_overviewAvailableBalanceLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(m_overviewAvailableBalanceLabel, 3, 3, 1, 1);

        verticalSpacer_8 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer_8, 2, 2, 1, 4);

        m_overviewLockedBalanceTextLabel = new WalletGui::WalletSmallGrayTextLabel(m_overviewBalanceFrame);
        m_overviewLockedBalanceTextLabel->setObjectName(QStringLiteral("m_overviewLockedBalanceTextLabel"));
        m_overviewLockedBalanceTextLabel->setIndent(0);

        gridLayout->addWidget(m_overviewLockedBalanceTextLabel, 4, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 3, 6, 3, 1);

        m_overviewTotalBalanceTextLabel = new WalletGui::WalletSmallGreenBoldTextLabel(m_overviewBalanceFrame);
        m_overviewTotalBalanceTextLabel->setObjectName(QStringLiteral("m_overviewTotalBalanceTextLabel"));
        m_overviewTotalBalanceTextLabel->setIndent(0);

        gridLayout->addWidget(m_overviewTotalBalanceTextLabel, 5, 2, 1, 1);

        m_overviewAvailableBalanceTextLabel = new WalletGui::WalletSmallGrayTextLabel(m_overviewBalanceFrame);
        m_overviewAvailableBalanceTextLabel->setObjectName(QStringLiteral("m_overviewAvailableBalanceTextLabel"));
        m_overviewAvailableBalanceTextLabel->setIndent(0);

        gridLayout->addWidget(m_overviewAvailableBalanceTextLabel, 3, 2, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 6, 0, 1, 7);

        m_totalBalanceCopyLabel = new WalletGui::CopyMagicLabel(m_overviewBalanceFrame);
        m_totalBalanceCopyLabel->setObjectName(QStringLiteral("m_totalBalanceCopyLabel"));
        m_totalBalanceCopyLabel->setIndent(0);

        gridLayout->addWidget(m_totalBalanceCopyLabel, 5, 5, 1, 1);

        m_overviewAvailableBalanceTickerLabel = new WalletGui::WalletNormalGrayTextLabel(m_overviewBalanceFrame);
        m_overviewAvailableBalanceTickerLabel->setObjectName(QStringLiteral("m_overviewAvailableBalanceTickerLabel"));
        m_overviewAvailableBalanceTickerLabel->setIndent(0);

        gridLayout->addWidget(m_overviewAvailableBalanceTickerLabel, 3, 4, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_4, 1, 1, 5, 1);

        m_overviewBalanceIconLabel = new QLabel(m_overviewBalanceFrame);
        m_overviewBalanceIconLabel->setObjectName(QStringLiteral("m_overviewBalanceIconLabel"));
        m_overviewBalanceIconLabel->setPixmap(QPixmap(QString::fromUtf8(":/icons/actual_balance")));

        gridLayout->addWidget(m_overviewBalanceIconLabel, 1, 0, 5, 1);


        horizontalLayout->addWidget(m_overviewBalanceFrame);

        m_overviewPoolFrame = new QFrame(OverviewHeaderFrame);
        m_overviewPoolFrame->setObjectName(QStringLiteral("m_overviewPoolFrame"));
        m_overviewPoolFrame->setFrameShape(QFrame::NoFrame);
        m_overviewPoolFrame->setFrameShadow(QFrame::Raised);
        gridLayout_3 = new QGridLayout(m_overviewPoolFrame);
        gridLayout_3->setSpacing(5);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setContentsMargins(30, 25, -1, -1);
        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer_6, 4, 0, 1, 5);

        label_9 = new WalletGui::WalletHeaderLabel(m_overviewPoolFrame);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setIndent(0);

        gridLayout_3->addWidget(label_9, 1, 2, 1, 1, Qt::AlignLeft);

        verticalSpacer_9 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_3->addItem(verticalSpacer_9, 2, 2, 1, 2);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_3, 3, 4, 1, 1);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer_5, 0, 0, 1, 5);

        m_overviewTransactionPoolView = new WalletGui::OverviewTransactionPoolTreeView(m_overviewPoolFrame);
        m_overviewTransactionPoolView->setObjectName(QStringLiteral("m_overviewTransactionPoolView"));
        m_overviewTransactionPoolView->setFrameShape(QFrame::NoFrame);
        m_overviewTransactionPoolView->setSelectionMode(QAbstractItemView::NoSelection);
        m_overviewTransactionPoolView->setTextElideMode(Qt::ElideMiddle);
        m_overviewTransactionPoolView->setRootIsDecorated(false);
        m_overviewTransactionPoolView->setUniformRowHeights(true);
        m_overviewTransactionPoolView->setItemsExpandable(false);
        m_overviewTransactionPoolView->header()->setVisible(false);
        m_overviewTransactionPoolView->header()->setStretchLastSection(false);

        gridLayout_3->addWidget(m_overviewTransactionPoolView, 3, 2, 1, 2);

        m_overviewPoolSizeLabel = new WalletGui::WalletNormalBlackTextLabel(m_overviewPoolFrame);
        m_overviewPoolSizeLabel->setObjectName(QStringLiteral("m_overviewPoolSizeLabel"));
        m_overviewPoolSizeLabel->setIndent(0);

        gridLayout_3->addWidget(m_overviewPoolSizeLabel, 1, 3, 1, 2);

        m_overviewPoolIconLabel = new QLabel(m_overviewPoolFrame);
        m_overviewPoolIconLabel->setObjectName(QStringLiteral("m_overviewPoolIconLabel"));
        m_overviewPoolIconLabel->setPixmap(QPixmap(QString::fromUtf8(":/icons/pool-stats")));

        gridLayout_3->addWidget(m_overviewPoolIconLabel, 1, 0, 3, 1);

        horizontalSpacer_6 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_6, 1, 1, 3, 1);


        horizontalLayout->addWidget(m_overviewPoolFrame);


        retranslateUi(OverviewHeaderFrame);
        QObject::connect(m_overviewTransactionPoolView, SIGNAL(doubleClicked(QModelIndex)), OverviewHeaderFrame, SLOT(poolTransactionClicked(QModelIndex)));

        QMetaObject::connectSlotsByName(OverviewHeaderFrame);
    } // setupUi

    void retranslateUi(QFrame *OverviewHeaderFrame)
    {
        OverviewHeaderFrame->setWindowTitle(QApplication::translate("OverviewHeaderFrame", "Frame", 0));
        m_overviewTotalBalanceTickerLabel->setText(QApplication::translate("OverviewHeaderFrame", "TextLabel", 0));
#ifndef QT_NO_TOOLTIP
        m_overviewTotalBalanceLabel->setToolTip(QApplication::translate("OverviewHeaderFrame", "Click to copy", 0));
#endif // QT_NO_TOOLTIP
        m_overviewTotalBalanceLabel->setText(QApplication::translate("OverviewHeaderFrame", "TextLabel", 0));
        m_lockedBalanceCopyLabel->setText(QApplication::translate("OverviewHeaderFrame", "Copied!", 0));
        m_overviewLockedBalanceTickerLabel->setText(QApplication::translate("OverviewHeaderFrame", "TextLabel", 0));
        label->setText(QApplication::translate("OverviewHeaderFrame", "Balance", 0));
#ifndef QT_NO_TOOLTIP
        m_overviewLockedBalanceLabel->setToolTip(QApplication::translate("OverviewHeaderFrame", "Click to copy", 0));
#endif // QT_NO_TOOLTIP
        m_overviewLockedBalanceLabel->setText(QApplication::translate("OverviewHeaderFrame", "TextLabel", 0));
        m_availableBalanceCopyLabel->setText(QApplication::translate("OverviewHeaderFrame", "Copied!", 0));
#ifndef QT_NO_TOOLTIP
        m_overviewAvailableBalanceLabel->setToolTip(QApplication::translate("OverviewHeaderFrame", "Click to copy", 0));
#endif // QT_NO_TOOLTIP
        m_overviewAvailableBalanceLabel->setText(QApplication::translate("OverviewHeaderFrame", "TextLabel", 0));
        m_overviewLockedBalanceTextLabel->setText(QApplication::translate("OverviewHeaderFrame", "Locked", 0));
        m_overviewTotalBalanceTextLabel->setText(QApplication::translate("OverviewHeaderFrame", "Total", 0));
        m_overviewAvailableBalanceTextLabel->setText(QApplication::translate("OverviewHeaderFrame", "Available", 0));
        m_totalBalanceCopyLabel->setText(QApplication::translate("OverviewHeaderFrame", "Copied!", 0));
        m_overviewAvailableBalanceTickerLabel->setText(QApplication::translate("OverviewHeaderFrame", "TextLabel", 0));
        m_overviewBalanceIconLabel->setText(QString());
        label_9->setText(QApplication::translate("OverviewHeaderFrame", "Ledger", 0));
        m_overviewPoolSizeLabel->setText(QApplication::translate("OverviewHeaderFrame", "0 transactions", 0));
        m_overviewPoolIconLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class OverviewHeaderFrame: public Ui_OverviewHeaderFrame {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OVERVIEWHEADERFRAME_H
