/********************************************************************************
** Form generated from reading UI file 'qprojectm_mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QPROJECTM_MAINWINDOW_H
#define UI_QPROJECTM_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>
#include "qplaylisttableview.hpp"

QT_BEGIN_NAMESPACE

class Ui_QProjectM_MainWindow
{
public:
    QAction *actionAddPresets;
    QAction *actionAbout_projectM;
    QAction *actionAbout_Qt;
    QAction *actionExit;
    QAction *actionSave_play_list;
    QAction *actionSave_play_list_as;
    QAction *actionConfigure_projectM;
    QAction *actionOpen_Play_List;
    QAction *actionLockPreset;
    QAction *actionHotkey_Reference;
    QAction *actionEdit_this_preset;
    QAction *actionRemove_selection;
    QAction *actionInsert_presets;
    QAction *actionHard_cut_to_this_preset;
    QAction *actionSoft_cut_to_this_preset;
    QWidget *centralwidget;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuAbout;
    QMenu *menuSettings;
    QStatusBar *statusbar;
    QDockWidget *presetPlayListDockWidget;
    QWidget *dockWidgetContents;
    QGridLayout *gridLayout;
    QPushButton *presetOpenPushButton;
    QPushButton *presetSavePushButton;
    QPushButton *clearPresetList_PushButton;
    QLineEdit *presetSearchBarLineEdit;
    QPlaylistTableView *tableView;
    QCheckBox *shuffleEnabledCheckBox;
    QCheckBox *lockPresetCheckBox;
    QPushButton *loadPlaylistPushButton;

    void setupUi(QMainWindow *QProjectM_MainWindow)
    {
        if (QProjectM_MainWindow->objectName().isEmpty())
            QProjectM_MainWindow->setObjectName(QString::fromUtf8("QProjectM_MainWindow"));
        QProjectM_MainWindow->resize(787, 568);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/icons/prjm16-transparent.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QProjectM_MainWindow->setWindowIcon(icon);
        actionAddPresets = new QAction(QProjectM_MainWindow);
        actionAddPresets->setObjectName(QString::fromUtf8("actionAddPresets"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/icons/hi16-action-projectm_add_playlist.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAddPresets->setIcon(icon1);
        actionAbout_projectM = new QAction(QProjectM_MainWindow);
        actionAbout_projectM->setObjectName(QString::fromUtf8("actionAbout_projectM"));
        actionAbout_Qt = new QAction(QProjectM_MainWindow);
        actionAbout_Qt->setObjectName(QString::fromUtf8("actionAbout_Qt"));
        actionExit = new QAction(QProjectM_MainWindow);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        actionSave_play_list = new QAction(QProjectM_MainWindow);
        actionSave_play_list->setObjectName(QString::fromUtf8("actionSave_play_list"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/icons/hi16-action-projectm_save.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave_play_list->setIcon(icon2);
        actionSave_play_list_as = new QAction(QProjectM_MainWindow);
        actionSave_play_list_as->setObjectName(QString::fromUtf8("actionSave_play_list_as"));
        actionConfigure_projectM = new QAction(QProjectM_MainWindow);
        actionConfigure_projectM->setObjectName(QString::fromUtf8("actionConfigure_projectM"));
        actionOpen_Play_List = new QAction(QProjectM_MainWindow);
        actionOpen_Play_List->setObjectName(QString::fromUtf8("actionOpen_Play_List"));
        actionLockPreset = new QAction(QProjectM_MainWindow);
        actionLockPreset->setObjectName(QString::fromUtf8("actionLockPreset"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/icons/hi16-action-projectm_lock.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionLockPreset->setIcon(icon3);
        actionHotkey_Reference = new QAction(QProjectM_MainWindow);
        actionHotkey_Reference->setObjectName(QString::fromUtf8("actionHotkey_Reference"));
        actionEdit_this_preset = new QAction(QProjectM_MainWindow);
        actionEdit_this_preset->setObjectName(QString::fromUtf8("actionEdit_this_preset"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/icons/hi16-action-projectm_edit.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionEdit_this_preset->setIcon(icon4);
        actionRemove_selection = new QAction(QProjectM_MainWindow);
        actionRemove_selection->setObjectName(QString::fromUtf8("actionRemove_selection"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/images/icons/hi16-action-projectm_remove.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRemove_selection->setIcon(icon5);
        actionInsert_presets = new QAction(QProjectM_MainWindow);
        actionInsert_presets->setObjectName(QString::fromUtf8("actionInsert_presets"));
        actionInsert_presets->setIcon(icon1);
        actionHard_cut_to_this_preset = new QAction(QProjectM_MainWindow);
        actionHard_cut_to_this_preset->setObjectName(QString::fromUtf8("actionHard_cut_to_this_preset"));
        actionSoft_cut_to_this_preset = new QAction(QProjectM_MainWindow);
        actionSoft_cut_to_this_preset->setObjectName(QString::fromUtf8("actionSoft_cut_to_this_preset"));
        centralwidget = new QWidget(QProjectM_MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setFocusPolicy(Qt::ClickFocus);
        QProjectM_MainWindow->setCentralWidget(centralwidget);
        menuBar = new QMenuBar(QProjectM_MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 787, 26));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuAbout = new QMenu(menuBar);
        menuAbout->setObjectName(QString::fromUtf8("menuAbout"));
        menuSettings = new QMenu(menuBar);
        menuSettings->setObjectName(QString::fromUtf8("menuSettings"));
        QProjectM_MainWindow->setMenuBar(menuBar);
        statusbar = new QStatusBar(QProjectM_MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        QProjectM_MainWindow->setStatusBar(statusbar);
        presetPlayListDockWidget = new QDockWidget(QProjectM_MainWindow);
        presetPlayListDockWidget->setObjectName(QString::fromUtf8("presetPlayListDockWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(1);
        sizePolicy.setHeightForWidth(presetPlayListDockWidget->sizePolicy().hasHeightForWidth());
        presetPlayListDockWidget->setSizePolicy(sizePolicy);
        presetPlayListDockWidget->setMinimumSize(QSize(315, 111));
        presetPlayListDockWidget->setBaseSize(QSize(300, 0));
        presetPlayListDockWidget->setFeatures(QDockWidget::DockWidgetFloatable|QDockWidget::DockWidgetMovable);
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QString::fromUtf8("dockWidgetContents"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(1);
        sizePolicy1.setVerticalStretch(1);
        sizePolicy1.setHeightForWidth(dockWidgetContents->sizePolicy().hasHeightForWidth());
        dockWidgetContents->setSizePolicy(sizePolicy1);
        gridLayout = new QGridLayout(dockWidgetContents);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        presetOpenPushButton = new QPushButton(dockWidgetContents);
        presetOpenPushButton->setObjectName(QString::fromUtf8("presetOpenPushButton"));
        QSizePolicy sizePolicy2(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(presetOpenPushButton->sizePolicy().hasHeightForWidth());
        presetOpenPushButton->setSizePolicy(sizePolicy2);
        presetOpenPushButton->setIcon(icon1);

        gridLayout->addWidget(presetOpenPushButton, 0, 0, 1, 2);

        presetSavePushButton = new QPushButton(dockWidgetContents);
        presetSavePushButton->setObjectName(QString::fromUtf8("presetSavePushButton"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(presetSavePushButton->sizePolicy().hasHeightForWidth());
        presetSavePushButton->setSizePolicy(sizePolicy3);
        presetSavePushButton->setIcon(icon2);

        gridLayout->addWidget(presetSavePushButton, 0, 3, 1, 1);

        clearPresetList_PushButton = new QPushButton(dockWidgetContents);
        clearPresetList_PushButton->setObjectName(QString::fromUtf8("clearPresetList_PushButton"));
        sizePolicy2.setHeightForWidth(clearPresetList_PushButton->sizePolicy().hasHeightForWidth());
        clearPresetList_PushButton->setSizePolicy(sizePolicy2);
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/images/icons/hi16-action-projectm_playlist_clear.png"), QSize(), QIcon::Normal, QIcon::Off);
        clearPresetList_PushButton->setIcon(icon6);

        gridLayout->addWidget(clearPresetList_PushButton, 0, 4, 1, 1);

        presetSearchBarLineEdit = new QLineEdit(dockWidgetContents);
        presetSearchBarLineEdit->setObjectName(QString::fromUtf8("presetSearchBarLineEdit"));
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(30);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(presetSearchBarLineEdit->sizePolicy().hasHeightForWidth());
        presetSearchBarLineEdit->setSizePolicy(sizePolicy4);

        gridLayout->addWidget(presetSearchBarLineEdit, 0, 5, 1, 1);

        tableView = new QPlaylistTableView(dockWidgetContents);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        QSizePolicy sizePolicy5(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy5.setHorizontalStretch(2);
        sizePolicy5.setVerticalStretch(4);
        sizePolicy5.setHeightForWidth(tableView->sizePolicy().hasHeightForWidth());
        tableView->setSizePolicy(sizePolicy5);
        tableView->setMinimumSize(QSize(5, 5));
        tableView->setBaseSize(QSize(200, 0));
        tableView->setContextMenuPolicy(Qt::ActionsContextMenu);
        tableView->setAcceptDrops(true);
        tableView->setAutoFillBackground(false);
        tableView->setFrameShape(QFrame::StyledPanel);
        tableView->setFrameShadow(QFrame::Sunken);
        tableView->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        tableView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        tableView->setDragEnabled(true);
        tableView->setDragDropOverwriteMode(false);
        tableView->setDragDropMode(QAbstractItemView::DragDrop);
        tableView->setAlternatingRowColors(false);
        tableView->setSelectionMode(QAbstractItemView::ExtendedSelection);
        tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableView->setShowGrid(false);
        tableView->setGridStyle(Qt::DashDotDotLine);

        gridLayout->addWidget(tableView, 1, 0, 1, 6);

        shuffleEnabledCheckBox = new QCheckBox(dockWidgetContents);
        shuffleEnabledCheckBox->setObjectName(QString::fromUtf8("shuffleEnabledCheckBox"));
        shuffleEnabledCheckBox->setEnabled(true);
        QSizePolicy sizePolicy6(QSizePolicy::Fixed, QSizePolicy::Minimum);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(shuffleEnabledCheckBox->sizePolicy().hasHeightForWidth());
        shuffleEnabledCheckBox->setSizePolicy(sizePolicy6);
        shuffleEnabledCheckBox->setCursor(QCursor(Qt::PointingHandCursor));
        shuffleEnabledCheckBox->setChecked(true);
        shuffleEnabledCheckBox->setAutoRepeat(true);

        gridLayout->addWidget(shuffleEnabledCheckBox, 2, 0, 1, 1);

        lockPresetCheckBox = new QCheckBox(dockWidgetContents);
        lockPresetCheckBox->setObjectName(QString::fromUtf8("lockPresetCheckBox"));
        lockPresetCheckBox->setEnabled(true);
        QSizePolicy sizePolicy7(QSizePolicy::Expanding, QSizePolicy::Minimum);
        sizePolicy7.setHorizontalStretch(1);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(lockPresetCheckBox->sizePolicy().hasHeightForWidth());
        lockPresetCheckBox->setSizePolicy(sizePolicy7);
        lockPresetCheckBox->setCursor(QCursor(Qt::PointingHandCursor));
        lockPresetCheckBox->setChecked(false);
        lockPresetCheckBox->setAutoRepeat(true);

        gridLayout->addWidget(lockPresetCheckBox, 2, 1, 1, 5);

        loadPlaylistPushButton = new QPushButton(dockWidgetContents);
        loadPlaylistPushButton->setObjectName(QString::fromUtf8("loadPlaylistPushButton"));
        sizePolicy2.setHeightForWidth(loadPlaylistPushButton->sizePolicy().hasHeightForWidth());
        loadPlaylistPushButton->setSizePolicy(sizePolicy2);
        loadPlaylistPushButton->setIcon(icon4);

        gridLayout->addWidget(loadPlaylistPushButton, 0, 2, 1, 1);

        presetPlayListDockWidget->setWidget(dockWidgetContents);
        QProjectM_MainWindow->addDockWidget(Qt::LeftDockWidgetArea, presetPlayListDockWidget);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuSettings->menuAction());
        menuBar->addAction(menuAbout->menuAction());
        menuFile->addAction(actionOpen_Play_List);
        menuFile->addAction(actionAddPresets);
        menuFile->addSeparator();
        menuFile->addAction(actionSave_play_list);
        menuFile->addAction(actionSave_play_list_as);
        menuFile->addSeparator();
        menuFile->addAction(actionExit);
        menuAbout->addAction(actionAbout_projectM);
        menuAbout->addAction(actionAbout_Qt);
        menuAbout->addAction(actionHotkey_Reference);
        menuSettings->addAction(actionConfigure_projectM);

        retranslateUi(QProjectM_MainWindow);
        QObject::connect(presetOpenPushButton, SIGNAL(clicked()), actionAddPresets, SLOT(trigger()));
        QObject::connect(presetSavePushButton, SIGNAL(clicked()), actionSave_play_list, SLOT(trigger()));
        QObject::connect(loadPlaylistPushButton, SIGNAL(clicked()), actionOpen_Play_List, SLOT(trigger()));

        QMetaObject::connectSlotsByName(QProjectM_MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *QProjectM_MainWindow)
    {
        QProjectM_MainWindow->setWindowTitle(QCoreApplication::translate("QProjectM_MainWindow", "projectM", nullptr));
#if QT_CONFIG(whatsthis)
        QProjectM_MainWindow->setWhatsThis(QString());
#endif // QT_CONFIG(whatsthis)
        actionAddPresets->setText(QCoreApplication::translate("QProjectM_MainWindow", "&Add Presets...", nullptr));
        actionAbout_projectM->setText(QCoreApplication::translate("QProjectM_MainWindow", "About projectM", nullptr));
        actionAbout_Qt->setText(QCoreApplication::translate("QProjectM_MainWindow", "About Qt", nullptr));
        actionExit->setText(QCoreApplication::translate("QProjectM_MainWindow", "&Quit", nullptr));
        actionSave_play_list->setText(QCoreApplication::translate("QProjectM_MainWindow", "&Save Playlist", nullptr));
        actionSave_play_list_as->setText(QCoreApplication::translate("QProjectM_MainWindow", "Save Playlist &As...", nullptr));
        actionConfigure_projectM->setText(QCoreApplication::translate("QProjectM_MainWindow", "Configure projectM...", nullptr));
        actionOpen_Play_List->setText(QCoreApplication::translate("QProjectM_MainWindow", "&Open Playlist...", nullptr));
        actionLockPreset->setText(QCoreApplication::translate("QProjectM_MainWindow", "Lock Active Preset", nullptr));
        actionHotkey_Reference->setText(QCoreApplication::translate("QProjectM_MainWindow", "Hotkey reference", nullptr));
        actionEdit_this_preset->setText(QCoreApplication::translate("QProjectM_MainWindow", "Edit preset", nullptr));
        actionRemove_selection->setText(QCoreApplication::translate("QProjectM_MainWindow", "Remove selection", nullptr));
        actionInsert_presets->setText(QCoreApplication::translate("QProjectM_MainWindow", "Insert presets...", nullptr));
        actionHard_cut_to_this_preset->setText(QCoreApplication::translate("QProjectM_MainWindow", "Hard cut to this preset", nullptr));
#if QT_CONFIG(tooltip)
        actionHard_cut_to_this_preset->setToolTip(QCoreApplication::translate("QProjectM_MainWindow", "Switches to this preset immediately.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionSoft_cut_to_this_preset->setText(QCoreApplication::translate("QProjectM_MainWindow", "Soft cut to this preset", nullptr));
#if QT_CONFIG(tooltip)
        actionSoft_cut_to_this_preset->setToolTip(QCoreApplication::translate("QProjectM_MainWindow", "Executes a smooth transition to this preset from the current prese.t", nullptr));
#endif // QT_CONFIG(tooltip)
        menuFile->setTitle(QCoreApplication::translate("QProjectM_MainWindow", "&Playlist", nullptr));
        menuAbout->setTitle(QCoreApplication::translate("QProjectM_MainWindow", "&Help", nullptr));
        menuSettings->setTitle(QCoreApplication::translate("QProjectM_MainWindow", "&Settings", nullptr));
#if QT_CONFIG(whatsthis)
        presetPlayListDockWidget->setWhatsThis(QCoreApplication::translate("QProjectM_MainWindow", "<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">This dock panel provides a convenient interface to manage a list of presets for projectM to render. The behavior is very similar to a music player playlist.</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        presetPlayListDockWidget->setWindowTitle(QCoreApplication::translate("QProjectM_MainWindow", "Preset Playlist", "This is the preset playlist dock widget."));
#if QT_CONFIG(tooltip)
        presetOpenPushButton->setToolTip(QCoreApplication::translate("QProjectM_MainWindow", "<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Click here to add presets to the current playlist.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        presetOpenPushButton->setText(QString());
#if QT_CONFIG(tooltip)
        presetSavePushButton->setToolTip(QCoreApplication::translate("QProjectM_MainWindow", "<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Saves the currently loaded play list</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        presetSavePushButton->setStyleSheet(QString());
        presetSavePushButton->setText(QString());
#if QT_CONFIG(tooltip)
        clearPresetList_PushButton->setToolTip(QCoreApplication::translate("QProjectM_MainWindow", "<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Clears<span style=\" font-style:italic;\"> all </span>presets<span style=\" font-style:italic;\"> </span>in the playlist.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        clearPresetList_PushButton->setText(QString());
#if QT_CONFIG(statustip)
        presetSearchBarLineEdit->setStatusTip(QCoreApplication::translate("QProjectM_MainWindow", "Start typing in a filter to crop the play list.", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        presetSearchBarLineEdit->setWhatsThis(QCoreApplication::translate("QProjectM_MainWindow", "<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Use this search bar to crop your preset play list. Only the presets that match your search criteria will be queued.</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(statustip)
        tableView->setStatusTip(QCoreApplication::translate("QProjectM_MainWindow", "Double click on a preset to render it, or drag presets to change the preset order.", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(tooltip)
        shuffleEnabledCheckBox->setToolTip(QCoreApplication::translate("QProjectM_MainWindow", "<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">When the dice is activated, projectM will randomly select presets weighted by your rating preferences.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        shuffleEnabledCheckBox->setStatusTip(QCoreApplication::translate("QProjectM_MainWindow", "Enable / Disable Shuffle Mode", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        shuffleEnabledCheckBox->setWhatsThis(QString());
#endif // QT_CONFIG(whatsthis)
        shuffleEnabledCheckBox->setStyleSheet(QCoreApplication::translate("QProjectM_MainWindow", "QCheckBox::indicator:checked {\n"
"image: url(:/images/icons/hi16-action-projectm_random.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:unchecked{\n"
"image: url(:/images/icons/hi16-action-projectm_random_no.png);\n"
"}", nullptr));
        shuffleEnabledCheckBox->setText(QString());
#if QT_CONFIG(tooltip)
        lockPresetCheckBox->setToolTip(QCoreApplication::translate("QProjectM_MainWindow", "<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">When the locked icon is shown, projectM will not automatically switch to another preset.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        lockPresetCheckBox->setStatusTip(QCoreApplication::translate("QProjectM_MainWindow", "Lock / Unlock the selected preset", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        lockPresetCheckBox->setWhatsThis(QString());
#endif // QT_CONFIG(whatsthis)
        lockPresetCheckBox->setStyleSheet(QCoreApplication::translate("QProjectM_MainWindow", "QCheckBox::indicator:checked {image: url(:/images/icons/hi16-action-projectm_lock.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:unchecked{\n"
"image: url(:/images/icons/hi16-action-projectm_unlock.png);\n"
"}", nullptr));
        lockPresetCheckBox->setText(QString());
#if QT_CONFIG(tooltip)
        loadPlaylistPushButton->setToolTip(QCoreApplication::translate("QProjectM_MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Sans Serif'; font-size:9pt;\">Open the file browser to load a playlist.</span></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        loadPlaylistPushButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class QProjectM_MainWindow: public Ui_QProjectM_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QPROJECTM_MAINWINDOW_H
