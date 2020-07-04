/****************************************************************************
** Meta object code from reading C++ file 'mainwindow1.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../Teste_CompParallel-X-Serial/mainwindow1.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow1.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow1_t {
    QByteArrayData data[16];
    char stringdata0[213];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow1_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow1_t qt_meta_stringdata_MainWindow1 = {
    {
QT_MOC_LITERAL(0, 0, 11), // "MainWindow1"
QT_MOC_LITERAL(1, 12, 14), // "update_mascara"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 7), // "tamanho"
QT_MOC_LITERAL(4, 36, 5), // "valor"
QT_MOC_LITERAL(5, 42, 8), // "typeMask"
QT_MOC_LITERAL(6, 51, 6), // "indice"
QT_MOC_LITERAL(7, 58, 13), // "TypeOperation"
QT_MOC_LITERAL(8, 72, 7), // "indice1"
QT_MOC_LITERAL(9, 80, 12), // "SendSettings"
QT_MOC_LITERAL(10, 93, 14), // "CancelSettings"
QT_MOC_LITERAL(11, 108, 25), // "on_spinBox_5_valueChanged"
QT_MOC_LITERAL(12, 134, 4), // "arg1"
QT_MOC_LITERAL(13, 139, 33), // "on_comboBox_3_currentIndexCha..."
QT_MOC_LITERAL(14, 173, 5), // "index"
QT_MOC_LITERAL(15, 179, 33) // "on_comboBox_4_currentIndexCha..."

    },
    "MainWindow1\0update_mascara\0\0tamanho\0"
    "valor\0typeMask\0indice\0TypeOperation\0"
    "indice1\0SendSettings\0CancelSettings\0"
    "on_spinBox_5_valueChanged\0arg1\0"
    "on_comboBox_3_currentIndexChanged\0"
    "index\0on_comboBox_4_currentIndexChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow1[] = {

 // content:
       8,       // revision
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
       3,    1,   60,    2, 0x08 /* Private */,
       5,    1,   63,    2, 0x08 /* Private */,
       7,    1,   66,    2, 0x08 /* Private */,
       9,    0,   69,    2, 0x08 /* Private */,
      10,    0,   70,    2, 0x08 /* Private */,
      11,    1,   71,    2, 0x08 /* Private */,
      13,    1,   74,    2, 0x08 /* Private */,
      15,    1,   77,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Void, QMetaType::Int,   14,

       0        // eod
};

void MainWindow1::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow1 *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->update_mascara(); break;
        case 1: _t->tamanho((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->typeMask((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->TypeOperation((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->SendSettings(); break;
        case 5: _t->CancelSettings(); break;
        case 6: _t->on_spinBox_5_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->on_comboBox_3_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->on_comboBox_4_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MainWindow1::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow1::update_mascara)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindow1::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MainWindow1.data,
    qt_meta_data_MainWindow1,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MainWindow1::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow1::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow1.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow1::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
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
void MainWindow1::update_mascara()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
