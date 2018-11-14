/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[16];
    char stringdata0[429];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 37), // "on_pushButton_viewConferences..."
QT_MOC_LITERAL(2, 49, 0), // ""
QT_MOC_LITERAL(3, 50, 26), // "on_pushButton_home_clicked"
QT_MOC_LITERAL(4, 77, 29), // "on_pushButton_viewAFC_clicked"
QT_MOC_LITERAL(5, 107, 29), // "on_pushButton_viewNFC_clicked"
QT_MOC_LITERAL(6, 137, 30), // "on_pushButton_northDiv_clicked"
QT_MOC_LITERAL(7, 168, 30), // "on_pushButton_southDiv_clicked"
QT_MOC_LITERAL(8, 199, 29), // "on_pushButton_eastDiv_clicked"
QT_MOC_LITERAL(9, 229, 29), // "on_pushButton_westDiv_clicked"
QT_MOC_LITERAL(10, 259, 30), // "on_pushButton_Stadiums_clicked"
QT_MOC_LITERAL(11, 290, 28), // "on_pushButton_home_2_clicked"
QT_MOC_LITERAL(12, 319, 28), // "on_pushButton_home_3_clicked"
QT_MOC_LITERAL(13, 348, 30), // "on_pushButton_TeamInfo_clicked"
QT_MOC_LITERAL(14, 379, 44), // "on_comboBox_teamDropdown_curr..."
QT_MOC_LITERAL(15, 424, 4) // "arg1"

    },
    "MainWindow\0on_pushButton_viewConferences_clicked\0"
    "\0on_pushButton_home_clicked\0"
    "on_pushButton_viewAFC_clicked\0"
    "on_pushButton_viewNFC_clicked\0"
    "on_pushButton_northDiv_clicked\0"
    "on_pushButton_southDiv_clicked\0"
    "on_pushButton_eastDiv_clicked\0"
    "on_pushButton_westDiv_clicked\0"
    "on_pushButton_Stadiums_clicked\0"
    "on_pushButton_home_2_clicked\0"
    "on_pushButton_home_3_clicked\0"
    "on_pushButton_TeamInfo_clicked\0"
    "on_comboBox_teamDropdown_currentIndexChanged\0"
    "arg1"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x08 /* Private */,
       3,    0,   80,    2, 0x08 /* Private */,
       4,    0,   81,    2, 0x08 /* Private */,
       5,    0,   82,    2, 0x08 /* Private */,
       6,    0,   83,    2, 0x08 /* Private */,
       7,    0,   84,    2, 0x08 /* Private */,
       8,    0,   85,    2, 0x08 /* Private */,
       9,    0,   86,    2, 0x08 /* Private */,
      10,    0,   87,    2, 0x08 /* Private */,
      11,    0,   88,    2, 0x08 /* Private */,
      12,    0,   89,    2, 0x08 /* Private */,
      13,    0,   90,    2, 0x08 /* Private */,
      14,    1,   91,    2, 0x08 /* Private */,

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
    QMetaType::Void, QMetaType::QString,   15,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_pushButton_viewConferences_clicked(); break;
        case 1: _t->on_pushButton_home_clicked(); break;
        case 2: _t->on_pushButton_viewAFC_clicked(); break;
        case 3: _t->on_pushButton_viewNFC_clicked(); break;
        case 4: _t->on_pushButton_northDiv_clicked(); break;
        case 5: _t->on_pushButton_southDiv_clicked(); break;
        case 6: _t->on_pushButton_eastDiv_clicked(); break;
        case 7: _t->on_pushButton_westDiv_clicked(); break;
        case 8: _t->on_pushButton_Stadiums_clicked(); break;
        case 9: _t->on_pushButton_home_2_clicked(); break;
        case 10: _t->on_pushButton_home_3_clicked(); break;
        case 11: _t->on_pushButton_TeamInfo_clicked(); break;
        case 12: _t->on_comboBox_teamDropdown_currentIndexChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
