/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[38];
    char stringdata0[1167];
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
QT_MOC_LITERAL(7, 135, 28), // "on_updateReposButton_clicked"
QT_MOC_LITERAL(8, 164, 24), // "on_upgradeButton_clicked"
QT_MOC_LITERAL(9, 189, 29), // "on_upgradeReposButton_clicked"
QT_MOC_LITERAL(10, 219, 29), // "on_dist_upgradeButton_clicked"
QT_MOC_LITERAL(11, 249, 30), // "on_upgradeKernelButton_clicked"
QT_MOC_LITERAL(12, 280, 29), // "on_cleanKernelsButton_clicked"
QT_MOC_LITERAL(13, 310, 31), // "on_integrityCheckButton_clicked"
QT_MOC_LITERAL(14, 342, 37), // "on_basicPackagesInstallButton..."
QT_MOC_LITERAL(15, 380, 22), // "on_cleanButton_clicked"
QT_MOC_LITERAL(16, 403, 36), // "on_fixBrokenPackagesButton_1_..."
QT_MOC_LITERAL(17, 440, 36), // "on_fixBrokenPackagesButton_2_..."
QT_MOC_LITERAL(18, 477, 36), // "on_fixBrokenPackagesButton_3_..."
QT_MOC_LITERAL(19, 514, 36), // "on_fixBrokenPackagesButton_4_..."
QT_MOC_LITERAL(20, 551, 36), // "on_fixBrokenPackagesButton_5_..."
QT_MOC_LITERAL(21, 588, 36), // "on_fixBrokenPackagesButton_6_..."
QT_MOC_LITERAL(22, 625, 30), // "on_repairNetworkButton_clicked"
QT_MOC_LITERAL(23, 656, 24), // "on_repairGPGKeys_clicked"
QT_MOC_LITERAL(24, 681, 28), // "on_unselectAllButton_clicked"
QT_MOC_LITERAL(25, 710, 26), // "on_selectAllButton_clicked"
QT_MOC_LITERAL(26, 737, 40), // "on_installSelectedPackagesBut..."
QT_MOC_LITERAL(27, 778, 42), // "on_uninstallSelectedPackagesB..."
QT_MOC_LITERAL(28, 821, 30), // "on_loadSelectionButton_clicked"
QT_MOC_LITERAL(29, 852, 30), // "on_saveSelectionButton_clicked"
QT_MOC_LITERAL(30, 883, 36), // "on_upgradeLatestStableButton_..."
QT_MOC_LITERAL(31, 920, 33), // "on_upgradeLatestDevButton_cli..."
QT_MOC_LITERAL(32, 954, 33), // "on_installTemplatesButton_cli..."
QT_MOC_LITERAL(33, 988, 35), // "on_doVisibleAsterisksButton_c..."
QT_MOC_LITERAL(34, 1024, 37), // "on_doInvisibleAsterisksButton..."
QT_MOC_LITERAL(35, 1062, 33), // "on_openSourcesListDButton_cli..."
QT_MOC_LITERAL(36, 1096, 34), // "on_enableHibernationButton_cl..."
QT_MOC_LITERAL(37, 1131, 35) // "on_disableHibernationButton_c..."

    },
    "MainWindow\0on_actionNew_triggered\0\0"
    "on_actionOpen_triggered\0on_actionSave_triggered\0"
    "on_actionSave_as_triggered\0"
    "on_actionAbout_triggered\0"
    "on_updateReposButton_clicked\0"
    "on_upgradeButton_clicked\0"
    "on_upgradeReposButton_clicked\0"
    "on_dist_upgradeButton_clicked\0"
    "on_upgradeKernelButton_clicked\0"
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
    "on_disableHibernationButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      36,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  194,    2, 0x08 /* Private */,
       3,    0,  195,    2, 0x08 /* Private */,
       4,    0,  196,    2, 0x08 /* Private */,
       5,    0,  197,    2, 0x08 /* Private */,
       6,    0,  198,    2, 0x08 /* Private */,
       7,    0,  199,    2, 0x08 /* Private */,
       8,    0,  200,    2, 0x08 /* Private */,
       9,    0,  201,    2, 0x08 /* Private */,
      10,    0,  202,    2, 0x08 /* Private */,
      11,    0,  203,    2, 0x08 /* Private */,
      12,    0,  204,    2, 0x08 /* Private */,
      13,    0,  205,    2, 0x08 /* Private */,
      14,    0,  206,    2, 0x08 /* Private */,
      15,    0,  207,    2, 0x08 /* Private */,
      16,    0,  208,    2, 0x08 /* Private */,
      17,    0,  209,    2, 0x08 /* Private */,
      18,    0,  210,    2, 0x08 /* Private */,
      19,    0,  211,    2, 0x08 /* Private */,
      20,    0,  212,    2, 0x08 /* Private */,
      21,    0,  213,    2, 0x08 /* Private */,
      22,    0,  214,    2, 0x08 /* Private */,
      23,    0,  215,    2, 0x08 /* Private */,
      24,    0,  216,    2, 0x08 /* Private */,
      25,    0,  217,    2, 0x08 /* Private */,
      26,    0,  218,    2, 0x08 /* Private */,
      27,    0,  219,    2, 0x08 /* Private */,
      28,    0,  220,    2, 0x08 /* Private */,
      29,    0,  221,    2, 0x08 /* Private */,
      30,    0,  222,    2, 0x08 /* Private */,
      31,    0,  223,    2, 0x08 /* Private */,
      32,    0,  224,    2, 0x08 /* Private */,
      33,    0,  225,    2, 0x08 /* Private */,
      34,    0,  226,    2, 0x08 /* Private */,
      35,    0,  227,    2, 0x08 /* Private */,
      36,    0,  228,    2, 0x08 /* Private */,
      37,    0,  229,    2, 0x08 /* Private */,

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
        case 5: _t->on_updateReposButton_clicked(); break;
        case 6: _t->on_upgradeButton_clicked(); break;
        case 7: _t->on_upgradeReposButton_clicked(); break;
        case 8: _t->on_dist_upgradeButton_clicked(); break;
        case 9: _t->on_upgradeKernelButton_clicked(); break;
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
        if (_id < 36)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 36;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 36)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 36;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
