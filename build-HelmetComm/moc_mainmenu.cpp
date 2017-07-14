/****************************************************************************
** Meta object code from reading C++ file 'mainmenu.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../HelmetComm/mainmenu.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainmenu.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainMenu_t {
    QByteArrayData data[10];
    char stringdata0[156];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainMenu_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainMenu_t qt_meta_stringdata_MainMenu = {
    {
QT_MOC_LITERAL(0, 0, 8), // "MainMenu"
QT_MOC_LITERAL(1, 9, 19), // "openAnimationWindow"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 21), // "returnAnimationWindow"
QT_MOC_LITERAL(4, 52, 14), // "openTextWindow"
QT_MOC_LITERAL(5, 67, 16), // "returnTextWindow"
QT_MOC_LITERAL(6, 84, 15), // "openSoundWindow"
QT_MOC_LITERAL(7, 100, 17), // "returnSoundWindow"
QT_MOC_LITERAL(8, 118, 17), // "openOptionsWindow"
QT_MOC_LITERAL(9, 136, 19) // "returnOptionsWindow"

    },
    "MainMenu\0openAnimationWindow\0\0"
    "returnAnimationWindow\0openTextWindow\0"
    "returnTextWindow\0openSoundWindow\0"
    "returnSoundWindow\0openOptionsWindow\0"
    "returnOptionsWindow"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainMenu[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x0a /* Public */,
       3,    0,   55,    2, 0x0a /* Public */,
       4,    0,   56,    2, 0x0a /* Public */,
       5,    0,   57,    2, 0x0a /* Public */,
       6,    0,   58,    2, 0x0a /* Public */,
       7,    0,   59,    2, 0x0a /* Public */,
       8,    0,   60,    2, 0x0a /* Public */,
       9,    0,   61,    2, 0x0a /* Public */,

 // slots: parameters
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

void MainMenu::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainMenu *_t = static_cast<MainMenu *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->openAnimationWindow(); break;
        case 1: _t->returnAnimationWindow(); break;
        case 2: _t->openTextWindow(); break;
        case 3: _t->returnTextWindow(); break;
        case 4: _t->openSoundWindow(); break;
        case 5: _t->returnSoundWindow(); break;
        case 6: _t->openOptionsWindow(); break;
        case 7: _t->returnOptionsWindow(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject MainMenu::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainMenu.data,
      qt_meta_data_MainMenu,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MainMenu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainMenu::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MainMenu.stringdata0))
        return static_cast<void*>(const_cast< MainMenu*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainMenu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
