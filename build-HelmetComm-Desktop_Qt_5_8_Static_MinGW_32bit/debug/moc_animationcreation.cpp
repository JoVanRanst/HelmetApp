/****************************************************************************
** Meta object code from reading C++ file 'animationcreation.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../HelmetComm/animationcreation.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'animationcreation.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AnimationCreation_t {
    QByteArrayData data[11];
    char stringdata0[131];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AnimationCreation_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AnimationCreation_t qt_meta_stringdata_AnimationCreation = {
    {
QT_MOC_LITERAL(0, 0, 17), // "AnimationCreation"
QT_MOC_LITERAL(1, 18, 8), // "exitMenu"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 4), // "exit"
QT_MOC_LITERAL(4, 33, 14), // "matrixPagePrev"
QT_MOC_LITERAL(5, 48, 14), // "matrixPageNext"
QT_MOC_LITERAL(6, 63, 14), // "matrixPageSave"
QT_MOC_LITERAL(7, 78, 13), // "matrixPageAdd"
QT_MOC_LITERAL(8, 92, 16), // "matrixPageRemove"
QT_MOC_LITERAL(9, 109, 9), // "matrixRun"
QT_MOC_LITERAL(10, 119, 11) // "matrixClear"

    },
    "AnimationCreation\0exitMenu\0\0exit\0"
    "matrixPagePrev\0matrixPageNext\0"
    "matrixPageSave\0matrixPageAdd\0"
    "matrixPageRemove\0matrixRun\0matrixClear"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AnimationCreation[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   60,    2, 0x0a /* Public */,
       4,    0,   61,    2, 0x08 /* Private */,
       5,    0,   62,    2, 0x08 /* Private */,
       6,    0,   63,    2, 0x08 /* Private */,
       7,    0,   64,    2, 0x08 /* Private */,
       8,    0,   65,    2, 0x08 /* Private */,
       9,    0,   66,    2, 0x08 /* Private */,
      10,    0,   67,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

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

void AnimationCreation::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AnimationCreation *_t = static_cast<AnimationCreation *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->exitMenu(); break;
        case 1: _t->exit(); break;
        case 2: _t->matrixPagePrev(); break;
        case 3: _t->matrixPageNext(); break;
        case 4: _t->matrixPageSave(); break;
        case 5: _t->matrixPageAdd(); break;
        case 6: _t->matrixPageRemove(); break;
        case 7: _t->matrixRun(); break;
        case 8: _t->matrixClear(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (AnimationCreation::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AnimationCreation::exitMenu)) {
                *result = 0;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject AnimationCreation::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_AnimationCreation.data,
      qt_meta_data_AnimationCreation,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *AnimationCreation::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AnimationCreation::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_AnimationCreation.stringdata0))
        return static_cast<void*>(const_cast< AnimationCreation*>(this));
    return QWidget::qt_metacast(_clname);
}

int AnimationCreation::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void AnimationCreation::exitMenu()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
