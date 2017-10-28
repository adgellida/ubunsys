/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[67];
    char stringdata0[2190];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 17), // "closeUpdateDialog"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 36), // "on_manualUpdateDialogButton_r..."
QT_MOC_LITERAL(4, 67, 22), // "on_actionNew_triggered"
QT_MOC_LITERAL(5, 90, 23), // "on_actionOpen_triggered"
QT_MOC_LITERAL(6, 114, 23), // "on_actionSave_triggered"
QT_MOC_LITERAL(7, 138, 26), // "on_actionSave_as_triggered"
QT_MOC_LITERAL(8, 165, 24), // "on_actionAbout_triggered"
QT_MOC_LITERAL(9, 190, 27), // "on_actionTutorial_triggered"
QT_MOC_LITERAL(10, 218, 28), // "on_updateReposButton_clicked"
QT_MOC_LITERAL(11, 247, 33), // "on_updateAndUpgradeButton_cli..."
QT_MOC_LITERAL(12, 281, 29), // "on_upgradeReposButton_clicked"
QT_MOC_LITERAL(13, 311, 29), // "on_dist_upgradeButton_clicked"
QT_MOC_LITERAL(14, 341, 29), // "on_cleanKernelsButton_clicked"
QT_MOC_LITERAL(15, 371, 31), // "on_integrityCheckButton_clicked"
QT_MOC_LITERAL(16, 403, 37), // "on_basicPackagesInstallButton..."
QT_MOC_LITERAL(17, 441, 22), // "on_cleanButton_clicked"
QT_MOC_LITERAL(18, 464, 36), // "on_fixBrokenPackagesButton_1_..."
QT_MOC_LITERAL(19, 501, 36), // "on_fixBrokenPackagesButton_2_..."
QT_MOC_LITERAL(20, 538, 36), // "on_fixBrokenPackagesButton_3_..."
QT_MOC_LITERAL(21, 575, 36), // "on_fixBrokenPackagesButton_4_..."
QT_MOC_LITERAL(22, 612, 36), // "on_fixBrokenPackagesButton_5_..."
QT_MOC_LITERAL(23, 649, 36), // "on_fixBrokenPackagesButton_6_..."
QT_MOC_LITERAL(24, 686, 30), // "on_repairNetworkButton_clicked"
QT_MOC_LITERAL(25, 717, 24), // "on_repairGPGKeys_clicked"
QT_MOC_LITERAL(26, 742, 36), // "on_upgradeLatestStableButton_..."
QT_MOC_LITERAL(27, 779, 33), // "on_upgradeLatestDevButton_cli..."
QT_MOC_LITERAL(28, 813, 33), // "on_installTemplatesButton_cli..."
QT_MOC_LITERAL(29, 847, 35), // "on_doVisibleAsterisksButton_c..."
QT_MOC_LITERAL(30, 883, 37), // "on_doInvisibleAsterisksButton..."
QT_MOC_LITERAL(31, 921, 33), // "on_openSourcesListDButton_cli..."
QT_MOC_LITERAL(32, 955, 34), // "on_enableHibernationButton_cl..."
QT_MOC_LITERAL(33, 990, 35), // "on_disableHibernationButton_c..."
QT_MOC_LITERAL(34, 1026, 41), // "on_enableSudoWithoutPassAllBu..."
QT_MOC_LITERAL(35, 1068, 42), // "on_disableSudoWithoutPassAllB..."
QT_MOC_LITERAL(36, 1111, 46), // "on_enableSudoWithoutPassSpeci..."
QT_MOC_LITERAL(37, 1158, 47), // "on_disableSudoWithoutPassSpec..."
QT_MOC_LITERAL(38, 1206, 32), // "on_openSudoersFileButton_clicked"
QT_MOC_LITERAL(39, 1239, 34), // "on_backupSudoersFileButton_cl..."
QT_MOC_LITERAL(40, 1274, 42), // "on_reduceTo5sShutdownTimeoutB..."
QT_MOC_LITERAL(41, 1317, 48), // "on_setToDefaults90sShutdownTi..."
QT_MOC_LITERAL(42, 1366, 31), // "on_enableFirewallButton_clicked"
QT_MOC_LITERAL(43, 1398, 32), // "on_disableFirewallButton_clicked"
QT_MOC_LITERAL(44, 1431, 26), // "on_updateAppButton_clicked"
QT_MOC_LITERAL(45, 1458, 34), // "on_importSudoersFileButton_cl..."
QT_MOC_LITERAL(46, 1493, 33), // "on_installMainlineKernels_cli..."
QT_MOC_LITERAL(47, 1527, 34), // "on_runGrubcustomizerButton_cl..."
QT_MOC_LITERAL(48, 1562, 33), // "on_enableLockScreenButton_cli..."
QT_MOC_LITERAL(49, 1596, 34), // "on_disableLockScrennButton_cl..."
QT_MOC_LITERAL(50, 1631, 39), // "on_showHiddenStartupItemsButt..."
QT_MOC_LITERAL(51, 1671, 41), // "on_unshowHiddenStartupItemsBu..."
QT_MOC_LITERAL(52, 1713, 33), // "on_enableLoginSoundButton_cli..."
QT_MOC_LITERAL(53, 1747, 34), // "on_disableLoginSoundButton_cl..."
QT_MOC_LITERAL(54, 1782, 23), // "on_aptselect_US_clicked"
QT_MOC_LITERAL(55, 1806, 23), // "on_aptselect_ES_clicked"
QT_MOC_LITERAL(56, 1830, 32), // "on_openSourcesListButton_clicked"
QT_MOC_LITERAL(57, 1863, 34), // "on_backupSourcesListButton_cl..."
QT_MOC_LITERAL(58, 1898, 34), // "on_importSourcesListButton_cl..."
QT_MOC_LITERAL(59, 1933, 31), // "on_openMainBackupButton_clicked"
QT_MOC_LITERAL(60, 1965, 32), // "on_openMainRestoreButton_clicked"
QT_MOC_LITERAL(61, 1998, 28), // "on_runScriptsManager_clicked"
QT_MOC_LITERAL(62, 2027, 29), // "on_openSudoersDButton_clicked"
QT_MOC_LITERAL(63, 2057, 28), // "on_seeReleasesButton_clicked"
QT_MOC_LITERAL(64, 2086, 35), // "on_installMainlineKernels_2_c..."
QT_MOC_LITERAL(65, 2122, 35), // "on_installMainlineKernels_3_c..."
QT_MOC_LITERAL(66, 2158, 31) // "on_toggleFirewallButton_clicked"

    },
    "MainWindow\0closeUpdateDialog\0\0"
    "on_manualUpdateDialogButton_released\0"
    "on_actionNew_triggered\0on_actionOpen_triggered\0"
    "on_actionSave_triggered\0"
    "on_actionSave_as_triggered\0"
    "on_actionAbout_triggered\0"
    "on_actionTutorial_triggered\0"
    "on_updateReposButton_clicked\0"
    "on_updateAndUpgradeButton_clicked\0"
    "on_upgradeReposButton_clicked\0"
    "on_dist_upgradeButton_clicked\0"
    "on_cleanKernelsButton_clicked\0"
    "on_integrityCheckButton_clicked\0"
    "on_basicPackagesInstallButton_clicked\0"
    "on_cleanButton_clicked\0"
    "on_fixBrokenPackagesButton_1_clicked\0"
    "on_fixBrokenPackagesButton_2_clicked\0"
    "on_fixBrokenPackagesButton_3_clicked\0"
    "on_fixBrokenPackagesButton_4_clicked\0"
    "on_fixBrokenPackagesButton_5_clicked\0"
    "on_fixBrokenPackagesButton_6_clicked\0"
    "on_repairNetworkButton_clicked\0"
    "on_repairGPGKeys_clicked\0"
    "on_upgradeLatestStableButton_clicked\0"
    "on_upgradeLatestDevButton_clicked\0"
    "on_installTemplatesButton_clicked\0"
    "on_doVisibleAsterisksButton_clicked\0"
    "on_doInvisibleAsterisksButton_clicked\0"
    "on_openSourcesListDButton_clicked\0"
    "on_enableHibernationButton_clicked\0"
    "on_disableHibernationButton_clicked\0"
    "on_enableSudoWithoutPassAllButton_clicked\0"
    "on_disableSudoWithoutPassAllButton_clicked\0"
    "on_enableSudoWithoutPassSpecificButton_clicked\0"
    "on_disableSudoWithoutPassSpecificButton_clicked\0"
    "on_openSudoersFileButton_clicked\0"
    "on_backupSudoersFileButton_clicked\0"
    "on_reduceTo5sShutdownTimeoutButton_clicked\0"
    "on_setToDefaults90sShutdownTimeoutButton_clicked\0"
    "on_enableFirewallButton_clicked\0"
    "on_disableFirewallButton_clicked\0"
    "on_updateAppButton_clicked\0"
    "on_importSudoersFileButton_clicked\0"
    "on_installMainlineKernels_clicked\0"
    "on_runGrubcustomizerButton_clicked\0"
    "on_enableLockScreenButton_clicked\0"
    "on_disableLockScrennButton_clicked\0"
    "on_showHiddenStartupItemsButton_clicked\0"
    "on_unshowHiddenStartupItemsButton_clicked\0"
    "on_enableLoginSoundButton_clicked\0"
    "on_disableLoginSoundButton_clicked\0"
    "on_aptselect_US_clicked\0on_aptselect_ES_clicked\0"
    "on_openSourcesListButton_clicked\0"
    "on_backupSourcesListButton_clicked\0"
    "on_importSourcesListButton_clicked\0"
    "on_openMainBackupButton_clicked\0"
    "on_openMainRestoreButton_clicked\0"
    "on_runScriptsManager_clicked\0"
    "on_openSudoersDButton_clicked\0"
    "on_seeReleasesButton_clicked\0"
    "on_installMainlineKernels_2_clicked\0"
    "on_installMainlineKernels_3_clicked\0"
    "on_toggleFirewallButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      65,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  339,    2, 0x0a /* Public */,
       3,    0,  340,    2, 0x08 /* Private */,
       4,    0,  341,    2, 0x08 /* Private */,
       5,    0,  342,    2, 0x08 /* Private */,
       6,    0,  343,    2, 0x08 /* Private */,
       7,    0,  344,    2, 0x08 /* Private */,
       8,    0,  345,    2, 0x08 /* Private */,
       9,    0,  346,    2, 0x08 /* Private */,
      10,    0,  347,    2, 0x08 /* Private */,
      11,    0,  348,    2, 0x08 /* Private */,
      12,    0,  349,    2, 0x08 /* Private */,
      13,    0,  350,    2, 0x08 /* Private */,
      14,    0,  351,    2, 0x08 /* Private */,
      15,    0,  352,    2, 0x08 /* Private */,
      16,    0,  353,    2, 0x08 /* Private */,
      17,    0,  354,    2, 0x08 /* Private */,
      18,    0,  355,    2, 0x08 /* Private */,
      19,    0,  356,    2, 0x08 /* Private */,
      20,    0,  357,    2, 0x08 /* Private */,
      21,    0,  358,    2, 0x08 /* Private */,
      22,    0,  359,    2, 0x08 /* Private */,
      23,    0,  360,    2, 0x08 /* Private */,
      24,    0,  361,    2, 0x08 /* Private */,
      25,    0,  362,    2, 0x08 /* Private */,
      26,    0,  363,    2, 0x08 /* Private */,
      27,    0,  364,    2, 0x08 /* Private */,
      28,    0,  365,    2, 0x08 /* Private */,
      29,    0,  366,    2, 0x08 /* Private */,
      30,    0,  367,    2, 0x08 /* Private */,
      31,    0,  368,    2, 0x08 /* Private */,
      32,    0,  369,    2, 0x08 /* Private */,
      33,    0,  370,    2, 0x08 /* Private */,
      34,    0,  371,    2, 0x08 /* Private */,
      35,    0,  372,    2, 0x08 /* Private */,
      36,    0,  373,    2, 0x08 /* Private */,
      37,    0,  374,    2, 0x08 /* Private */,
      38,    0,  375,    2, 0x08 /* Private */,
      39,    0,  376,    2, 0x08 /* Private */,
      40,    0,  377,    2, 0x08 /* Private */,
      41,    0,  378,    2, 0x08 /* Private */,
      42,    0,  379,    2, 0x08 /* Private */,
      43,    0,  380,    2, 0x08 /* Private */,
      44,    0,  381,    2, 0x08 /* Private */,
      45,    0,  382,    2, 0x08 /* Private */,
      46,    0,  383,    2, 0x08 /* Private */,
      47,    0,  384,    2, 0x08 /* Private */,
      48,    0,  385,    2, 0x08 /* Private */,
      49,    0,  386,    2, 0x08 /* Private */,
      50,    0,  387,    2, 0x08 /* Private */,
      51,    0,  388,    2, 0x08 /* Private */,
      52,    0,  389,    2, 0x08 /* Private */,
      53,    0,  390,    2, 0x08 /* Private */,
      54,    0,  391,    2, 0x08 /* Private */,
      55,    0,  392,    2, 0x08 /* Private */,
      56,    0,  393,    2, 0x08 /* Private */,
      57,    0,  394,    2, 0x08 /* Private */,
      58,    0,  395,    2, 0x08 /* Private */,
      59,    0,  396,    2, 0x08 /* Private */,
      60,    0,  397,    2, 0x08 /* Private */,
      61,    0,  398,    2, 0x08 /* Private */,
      62,    0,  399,    2, 0x08 /* Private */,
      63,    0,  400,    2, 0x08 /* Private */,
      64,    0,  401,    2, 0x08 /* Private */,
      65,    0,  402,    2, 0x08 /* Private */,
      66,    0,  403,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->closeUpdateDialog(); break;
        case 1: _t->on_manualUpdateDialogButton_released(); break;
        case 2: _t->on_actionNew_triggered(); break;
        case 3: _t->on_actionOpen_triggered(); break;
        case 4: _t->on_actionSave_triggered(); break;
        case 5: _t->on_actionSave_as_triggered(); break;
        case 6: _t->on_actionAbout_triggered(); break;
        case 7: _t->on_actionTutorial_triggered(); break;
        case 8: _t->on_updateReposButton_clicked(); break;
        case 9: _t->on_updateAndUpgradeButton_clicked(); break;
        case 10: _t->on_upgradeReposButton_clicked(); break;
        case 11: _t->on_dist_upgradeButton_clicked(); break;
        case 12: _t->on_cleanKernelsButton_clicked(); break;
        case 13: _t->on_integrityCheckButton_clicked(); break;
        case 14: _t->on_basicPackagesInstallButton_clicked(); break;
        case 15: _t->on_cleanButton_clicked(); break;
        case 16: _t->on_fixBrokenPackagesButton_1_clicked(); break;
        case 17: _t->on_fixBrokenPackagesButton_2_clicked(); break;
        case 18: _t->on_fixBrokenPackagesButton_3_clicked(); break;
        case 19: _t->on_fixBrokenPackagesButton_4_clicked(); break;
        case 20: _t->on_fixBrokenPackagesButton_5_clicked(); break;
        case 21: _t->on_fixBrokenPackagesButton_6_clicked(); break;
        case 22: _t->on_repairNetworkButton_clicked(); break;
        case 23: _t->on_repairGPGKeys_clicked(); break;
        case 24: _t->on_upgradeLatestStableButton_clicked(); break;
        case 25: _t->on_upgradeLatestDevButton_clicked(); break;
        case 26: _t->on_installTemplatesButton_clicked(); break;
        case 27: _t->on_doVisibleAsterisksButton_clicked(); break;
        case 28: _t->on_doInvisibleAsterisksButton_clicked(); break;
        case 29: _t->on_openSourcesListDButton_clicked(); break;
        case 30: _t->on_enableHibernationButton_clicked(); break;
        case 31: _t->on_disableHibernationButton_clicked(); break;
        case 32: _t->on_enableSudoWithoutPassAllButton_clicked(); break;
        case 33: _t->on_disableSudoWithoutPassAllButton_clicked(); break;
        case 34: _t->on_enableSudoWithoutPassSpecificButton_clicked(); break;
        case 35: _t->on_disableSudoWithoutPassSpecificButton_clicked(); break;
        case 36: _t->on_openSudoersFileButton_clicked(); break;
        case 37: _t->on_backupSudoersFileButton_clicked(); break;
        case 38: _t->on_reduceTo5sShutdownTimeoutButton_clicked(); break;
        case 39: _t->on_setToDefaults90sShutdownTimeoutButton_clicked(); break;
        case 40: _t->on_enableFirewallButton_clicked(); break;
        case 41: _t->on_disableFirewallButton_clicked(); break;
        case 42: _t->on_updateAppButton_clicked(); break;
        case 43: _t->on_importSudoersFileButton_clicked(); break;
        case 44: _t->on_installMainlineKernels_clicked(); break;
        case 45: _t->on_runGrubcustomizerButton_clicked(); break;
        case 46: _t->on_enableLockScreenButton_clicked(); break;
        case 47: _t->on_disableLockScrennButton_clicked(); break;
        case 48: _t->on_showHiddenStartupItemsButton_clicked(); break;
        case 49: _t->on_unshowHiddenStartupItemsButton_clicked(); break;
        case 50: _t->on_enableLoginSoundButton_clicked(); break;
        case 51: _t->on_disableLoginSoundButton_clicked(); break;
        case 52: _t->on_aptselect_US_clicked(); break;
        case 53: _t->on_aptselect_ES_clicked(); break;
        case 54: _t->on_openSourcesListButton_clicked(); break;
        case 55: _t->on_backupSourcesListButton_clicked(); break;
        case 56: _t->on_importSourcesListButton_clicked(); break;
        case 57: _t->on_openMainBackupButton_clicked(); break;
        case 58: _t->on_openMainRestoreButton_clicked(); break;
        case 59: _t->on_runScriptsManager_clicked(); break;
        case 60: _t->on_openSudoersDButton_clicked(); break;
        case 61: _t->on_seeReleasesButton_clicked(); break;
        case 62: _t->on_installMainlineKernels_2_clicked(); break;
        case 63: _t->on_installMainlineKernels_3_clicked(); break;
        case 64: _t->on_toggleFirewallButton_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 65)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 65;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 65)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 65;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
