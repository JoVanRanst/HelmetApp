/****************************************************************************
** Meta object code from reading C++ file 'animationmenu.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../HelmetComm/animationmenu.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'animationmenu.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AnimationMenu_t {
    QByteArrayData data[9];
    char stringdata0[77];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AnimationMenu_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AnimationMenu_t qt_meta_stringdata_AnimationMenu = {
    {
QT_MOC_LITERAL(0, 0, 13), // "AnimationMenu"
QT_MOC_LITERAL(1, 14, 10), // "openCreate"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 8), // "exitMenu"
QT_MOC_LITERAL(4, 35, 8), // "loadAnim"
QT_MOC_LITERAL(5, 44, 5), // "index"
QT_MOC_LITERAL(6, 50, 10), // "uploadAnim"
QT_MOC_LITERAL(7, 61, 10), // "createAnim"
QT_MOC_LITERAL(8, 72, 4) // "exit"

    },
    "AnimationMenu\0openCreate\0\0exitMenu\0"
    "loadAnim\0index\0uploadAnim\0createAnim\0"
    "exit"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AnimationMenu[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06 /* Public */,
       3,    0,   45,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   46,    2, 0x0a /* Public */,
       6,    0,   49,    2, 0x0a /* Public */,
       7,    0,   50,    2, 0x0a /* Public */,
       8,    0,   51,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void AnimationMenu::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AnimationMenu *_t = static_cast<AnimationMenu *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->openCreate(); break;
        case 1: _t->exitMenu(); break;
        case 2: _t->loadAnim((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->uploadAnim(); break;
        case 4: _t->createAnim(); break;
        case 5: _t->exit(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (AnimationMenu::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AnimationMenu::openCreate)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (AnimationMenu::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AnimationMenu::exitMenu)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject AnimationMenu::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_AnimationMenu.data,
      qt_meta_data_AnimationMenu,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *AnimationMenu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AnimationMenu::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_AnimationMenu.stringdata0))
        return static_cast<void*>(const_cast< AnimationMenu*>(this));
    return QWidget::qt_metacast(_clname);
}

int AnimationMenu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void AnimationMenu::openCreate()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void AnimationMenu::exitMenu()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
