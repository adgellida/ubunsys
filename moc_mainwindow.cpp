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
    QByteArrayData data[58];
    char stringdata0[1898];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 22), // "on_actionNew_triggered"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 23), // "on_actionOpen_triggered"
QT_MOC_LITERAL(4, 59, 23), // "on_actionSave_triggered"
QT_MOC_LITERAL(5, 83, 26), // "on_actionSave_as_triggered"
QT_MOC_LITERAL(6, 110, 24), // "on_actionAbout_triggered"
QT_MOC_LITERAL(7, 135, 27), // "on_actionTutorial_triggered"
QT_MOC_LITERAL(8, 163, 28), // "on_updateReposButton_clicked"
QT_MOC_LITERAL(9, 192, 33), // "on_updateAndUpgradeButton_cli..."
QT_MOC_LITERAL(10, 226, 29), // "on_upgradeReposButton_clicked"
QT_MOC_LITERAL(11, 256, 29), // "on_dist_upgradeButton_clicked"
QT_MOC_LITERAL(12, 286, 29), // "on_cleanKernelsButton_clicked"
QT_MOC_LITERAL(13, 316, 31), // "on_integrityCheckButton_clicked"
QT_MOC_LITERAL(14, 348, 37), // "on_basicPackagesInstallButton..."
QT_MOC_LITERAL(15, 386, 22), // "on_cleanButton_clicked"
QT_MOC_LITERAL(16, 409, 36), // "on_fixBrokenPackagesButton_1_..."
QT_MOC_LITERAL(17, 446, 36), // "on_fixBrokenPackagesButton_2_..."
QT_MOC_LITERAL(18, 483, 36), // "on_fixBrokenPackagesButton_3_..."
QT_MOC_LITERAL(19, 520, 36), // "on_fixBrokenPackagesButton_4_..."
QT_MOC_LITERAL(20, 557, 36), // "on_fixBrokenPackagesButton_5_..."
QT_MOC_LITERAL(21, 594, 36), // "on_fixBrokenPackagesButton_6_..."
QT_MOC_LITERAL(22, 631, 30), // "on_repairNetworkButton_clicked"
QT_MOC_LITERAL(23, 662, 24), // "on_repairGPGKeys_clicked"
QT_MOC_LITERAL(24, 687, 28), // "on_unselectAllButton_clicked"
QT_MOC_LITERAL(25, 716, 26), // "on_selectAllButton_clicked"
QT_MOC_LITERAL(26, 743, 40), // "on_installSelectedPackagesBut..."
QT_MOC_LITERAL(27, 784, 42), // "on_uninstallSelectedPackagesB..."
QT_MOC_LITERAL(28, 827, 30), // "on_loadSelectionButton_clicked"
QT_MOC_LITERAL(29, 858, 30), // "on_saveSelectionButton_clicked"
QT_MOC_LITERAL(30, 889, 36), // "on_upgradeLatestStableButton_..."
QT_MOC_LITERAL(31, 926, 33), // "on_upgradeLatestDevButton_cli..."
QT_MOC_LITERAL(32, 960, 33), // "on_installTemplatesButton_cli..."
QT_MOC_LITERAL(33, 994, 35), // "on_doVisibleAsterisksButton_c..."
QT_MOC_LITERAL(34, 1030, 37), // "on_doInvisibleAsterisksButton..."
QT_MOC_LITERAL(35, 1068, 33), // "on_openSourcesListDButton_cli..."
QT_MOC_LITERAL(36, 1102, 34), // "on_enableHibernationButton_cl..."
QT_MOC_LITERAL(37, 1137, 35), // "on_disableHibernationButton_c..."
QT_MOC_LITERAL(38, 1173, 38), // "on_enableSudoWithoutPassButto..."
QT_MOC_LITERAL(39, 1212, 39), // "on_disableSudoWithoutPassButt..."
QT_MOC_LITERAL(40, 1252, 32), // "on_openSudoersFileButton_clicked"
QT_MOC_LITERAL(41, 1285, 34), // "on_backupSudoersFileButton_cl..."
QT_MOC_LITERAL(42, 1320, 42), // "on_reduceTo5sShutdownTimeoutB..."
QT_MOC_LITERAL(43, 1363, 48), // "on_setToDefaults90sShutdownTi..."
QT_MOC_LITERAL(44, 1412, 31), // "on_enableFirewallButton_clicked"
QT_MOC_LITERAL(45, 1444, 32), // "on_disableFirewallButton_clicked"
QT_MOC_LITERAL(46, 1477, 30), // "on_updateScriptsButton_clicked"
QT_MOC_LITERAL(47, 1508, 26), // "on_updateAppButton_clicked"
QT_MOC_LITERAL(48, 1535, 34), // "on_importSudoersFileButton_cl..."
QT_MOC_LITERAL(49, 1570, 32), // "on_installMainlineKernel_clicked"
QT_MOC_LITERAL(50, 1603, 34), // "on_runGrubcustomizerButton_cl..."
QT_MOC_LITERAL(51, 1638, 34), // "on_enableLockScreenlButton_cl..."
QT_MOC_LITERAL(52, 1673, 34), // "on_disableLockScrennButton_cl..."
QT_MOC_LITERAL(53, 1708, 39), // "on_showHiddenStartupItemsButt..."
QT_MOC_LITERAL(54, 1748, 41), // "on_unshowHiddenStartupItemsBu..."
QT_MOC_LITERAL(55, 1790, 33), // "on_enableLoginSoundButton_cli..."
QT_MOC_LITERAL(56, 1824, 34), // "on_disableLoginSoundButton_cl..."
QT_MOC_LITERAL(57, 1859, 38) // "on_openSudoersUbunsysModButto..."

    },
    "MainWindow\0on_actionNew_triggered\0\0"
    "on_actionOpen_triggered\0on_actionSave_triggered\0"
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
    "on_unselectAllButton_clicked\0"
    "on_selectAllButton_clicked\0"
    "on_installSelectedPackagesButton_clicked\0"
    "on_uninstallSelectedPackagesButton_clicked\0"
    "on_loadSelectionButton_clicked\0"
    "on_saveSelectionButton_clicked\0"
    "on_upgradeLatestStableButton_clicked\0"
    "on_upgradeLatestDevButton_clicked\0"
    "on_installTemplatesButton_clicked\0"
    "on_doVisibleAsterisksButton_clicked\0"
    "on_doInvisibleAsterisksButton_clicked\0"
    "on_openSourcesListDButton_clicked\0"
    "on_enableHibernationButton_clicked\0"
    "on_disableHibernationButton_clicked\0"
    "on_enableSudoWithoutPassButton_clicked\0"
    "on_disableSudoWithoutPassButton_clicked\0"
    "on_openSudoersFileButton_clicked\0"
    "on_backupSudoersFileButton_clicked\0"
    "on_reduceTo5sShutdownTimeoutButton_clicked\0"
    "on_setToDefaults90sShutdownTimeoutButton_clicked\0"
    "on_enableFirewallButton_clicked\0"
    "on_disableFirewallButton_clicked\0"
    "on_updateScriptsButton_clicked\0"
    "on_updateAppButton_clicked\0"
    "on_importSudoersFileButton_clicked\0"
    "on_installMainlineKernel_clicked\0"
    "on_runGrubcustomizerButton_clicked\0"
    "on_enableLockScreenlButton_clicked\0"
    "on_disableLockScrennButton_clicked\0"
    "on_showHiddenStartupItemsButton_clicked\0"
    "on_unshowHiddenStartupItemsButton_clicked\0"
    "on_enableLoginSoundButton_clicked\0"
    "on_disableLoginSoundButton_clicked\0"
    "on_openSudoersUbunsysModButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      56,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  294,    2, 0x08 /* Private */,
       3,    0,  295,    2, 0x08 /* Private */,
       4,    0,  296,    2, 0x08 /* Private */,
       5,    0,  297,    2, 0x08 /* Private */,
       6,    0,  298,    2, 0x08 /* Private */,
       7,    0,  299,    2, 0x08 /* Private */,
       8,    0,  300,    2, 0x08 /* Private */,
       9,    0,  301,    2, 0x08 /* Private */,
      10,    0,  302,    2, 0x08 /* Private */,
      11,    0,  303,    2, 0x08 /* Private */,
      12,    0,  304,    2, 0x08 /* Private */,
      13,    0,  305,    2, 0x08 /* Private */,
      14,    0,  306,    2, 0x08 /* Private */,
      15,    0,  307,    2, 0x08 /* Private */,
      16,    0,  308,    2, 0x08 /* Private */,
      17,    0,  309,    2, 0x08 /* Private */,
      18,    0,  310,    2, 0x08 /* Private */,
      19,    0,  311,    2, 0x08 /* Private */,
      20,    0,  312,    2, 0x08 /* Private */,
      21,    0,  313,    2, 0x08 /* Private */,
      22,    0,  314,    2, 0x08 /* Private */,
      23,    0,  315,    2, 0x08 /* Private */,
      24,    0,  316,    2, 0x08 /* Private */,
      25,    0,  317,    2, 0x08 /* Private */,
      26,    0,  318,    2, 0x08 /* Private */,
      27,    0,  319,    2, 0x08 /* Private */,
      28,    0,  320,    2, 0x08 /* Private */,
      29,    0,  321,    2, 0x08 /* Private */,
      30,    0,  322,    2, 0x08 /* Private */,
      31,    0,  323,    2, 0x08 /* Private */,
      32,    0,  324,    2, 0x08 /* Private */,
      33,    0,  325,    2, 0x08 /* Private */,
      34,    0,  326,    2, 0x08 /* Private */,
      35,    0,  327,    2, 0x08 /* Private */,
      36,    0,  328,    2, 0x08 /* Private */,
      37,    0,  329,    2, 0x08 /* Private */,
      38,    0,  330,    2, 0x08 /* Private */,
      39,    0,  331,    2, 0x08 /* Private */,
      40,    0,  332,    2, 0x08 /* Private */,
      41,    0,  333,    2, 0x08 /* Private */,
      42,    0,  334,    2, 0x08 /* Private */,
      43,    0,  335,    2, 0x08 /* Private */,
      44,    0,  336,    2, 0x08 /* Private */,
      45,    0,  337,    2, 0x08 /* Private */,
      46,    0,  338,    2, 0x08 /* Private */,
      47,    0,  339,    2, 0x08 /* Private */,
      48,    0,  340,    2, 0x08 /* Private */,
      49,    0,  341,    2, 0x08 /* Private */,
      50,    0,  342,    2, 0x08 /* Private */,
      51,    0,  343,    2, 0x08 /* Private */,
      52,    0,  344,    2, 0x08 /* Private */,
      53,    0,  345,    2, 0x08 /* Private */,
      54,    0,  346,    2, 0x08 /* Private */,
      55,    0,  347,    2, 0x08 /* Private */,
      56,    0,  348,    2, 0x08 /* Private */,
      57,    0,  349,    2, 0x08 /* Private */,

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

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_actionNew_triggered(); break;
        case 1: _t->on_actionOpen_triggered(); break;
        case 2: _t->on_actionSave_triggered(); break;
        case 3: _t->on_actionSave_as_triggered(); break;
        case 4: _t->on_actionAbout_triggered(); break;
        case 5: _t->on_actionTutorial_triggered(); break;
        case 6: _t->on_updateReposButton_clicked(); break;
        case 7: _t->on_updateAndUpgradeButton_clicked(); break;
        case 8: _t->on_upgradeReposButton_clicked(); break;
        case 9: _t->on_dist_upgradeButton_clicked(); break;
        case 10: _t->on_cleanKernelsButton_clicked(); break;
        case 11: _t->on_integrityCheckButton_clicked(); break;
        case 12: _t->on_basicPackagesInstallButton_clicked(); break;
        case 13: _t->on_cleanButton_clicked(); break;
        case 14: _t->on_fixBrokenPackagesButton_1_clicked(); break;
        case 15: _t->on_fixBrokenPackagesButton_2_clicked(); break;
        case 16: _t->on_fixBrokenPackagesButton_3_clicked(); break;
        case 17: _t->on_fixBrokenPackagesButton_4_clicked(); break;
        case 18: _t->on_fixBrokenPackagesButton_5_clicked(); break;
        case 19: _t->on_fixBrokenPackagesButton_6_clicked(); break;
        case 20: _t->on_repairNetworkButton_clicked(); break;
        case 21: _t->on_repairGPGKeys_clicked(); break;
        case 22: _t->on_unselectAllButton_clicked(); break;
        case 23: _t->on_selectAllButton_clicked(); break;
        case 24: _t->on_installSelectedPackagesButton_clicked(); break;
        case 25: _t->on_uninstallSelectedPackagesButton_clicked(); break;
        case 26: _t->on_loadSelectionButton_clicked(); break;
        case 27: _t->on_saveSelectionButton_clicked(); break;
        case 28: _t->on_upgradeLatestStableButton_clicked(); break;
        case 29: _t->on_upgradeLatestDevButton_clicked(); break;
        case 30: _t->on_installTemplatesButton_clicked(); break;
        case 31: _t->on_doVisibleAsterisksButton_clicked(); break;
        case 32: _t->on_doInvisibleAsterisksButton_clicked(); break;
        case 33: _t->on_openSourcesListDButton_clicked(); break;
        case 34: _t->on_enableHibernationButton_clicked(); break;
        case 35: _t->on_disableHibernationButton_clicked(); break;
        case 36: _t->on_enableSudoWithoutPassButton_clicked(); break;
        case 37: _t->on_disableSudoWithoutPassButton_clicked(); break;
        case 38: _t->on_openSudoersFileButton_clicked(); break;
        case 39: _t->on_backupSudoersFileButton_clicked(); break;
        case 40: _t->on_reduceTo5sShutdownTimeoutButton_clicked(); break;
        case 41: _t->on_setToDefaults90sShutdownTimeoutButton_clicked(); break;
        case 42: _t->on_enableFirewallButton_clicked(); break;
        case 43: _t->on_disableFirewallButton_clicked(); break;
        case 44: _t->on_updateScriptsButton_clicked(); break;
        case 45: _t->on_updateAppButton_clicked(); break;
        case 46: _t->on_importSudoersFileButton_clicked(); break;
        case 47: _t->on_installMainlineKernel_clicked(); break;
        case 48: _t->on_runGrubcustomizerButton_clicked(); break;
        case 49: _t->on_enableLockScreenlButton_clicked(); break;
        case 50: _t->on_disableLockScrennButton_clicked(); break;
        case 51: _t->on_showHiddenStartupItemsButton_clicked(); break;
        case 52: _t->on_unshowHiddenStartupItemsButton_clicked(); break;
        case 53: _t->on_enableLoginSoundButton_clicked(); break;
        case 54: _t->on_disableLoginSoundButton_clicked(); break;
        case 55: _t->on_openSudoersUbunsysModButton_clicked(); break;
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
        if (_id < 56)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 56;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 56)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 56;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
