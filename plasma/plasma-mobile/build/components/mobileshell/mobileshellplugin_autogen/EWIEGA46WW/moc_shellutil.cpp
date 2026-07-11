/****************************************************************************
** Meta object code from reading C++ file 'shellutil.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../components/mobileshell/shellutil.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'shellutil.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 69
#error "This file was generated using the moc from 6.11.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {
struct qt_meta_tag_ZN9ShellUtilE_t {};
} // unnamed namespace

template <> constexpr inline auto ShellUtil::qt_create_metaobjectdata<qt_meta_tag_ZN9ShellUtilE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "ShellUtil",
        "QML.Element",
        "auto",
        "QML.Singleton",
        "true",
        "isSystem24HourFormatChanged",
        "",
        "stackItemBefore",
        "QQuickItem*",
        "item1",
        "item2",
        "stackItemAfter",
        "executeCommand",
        "command",
        "launchApp",
        "storageId",
        "isSystem24HourFormat",
        "setInputTransparent",
        "QQuickWindow*",
        "window",
        "transparent",
        "setWindowLayer",
        "LayerShellQt::Window::Layer",
        "layer",
        "setInputRegion",
        "QWindow*",
        "QRect",
        "region",
        "toPlainText",
        "htmlString"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'isSystem24HourFormatChanged'
        QtMocHelpers::SignalData<void()>(5, 6, QMC::AccessPublic, QMetaType::Void),
        // Method 'stackItemBefore'
        QtMocHelpers::MethodData<void(QQuickItem *, QQuickItem *)>(7, 6, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 8, 9 }, { 0x80000000 | 8, 10 },
        }}),
        // Method 'stackItemAfter'
        QtMocHelpers::MethodData<void(QQuickItem *, QQuickItem *)>(11, 6, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 8, 9 }, { 0x80000000 | 8, 10 },
        }}),
        // Method 'executeCommand'
        QtMocHelpers::MethodData<void(const QString &)>(12, 6, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 13 },
        }}),
        // Method 'launchApp'
        QtMocHelpers::MethodData<void(const QString &)>(14, 6, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 15 },
        }}),
        // Method 'isSystem24HourFormat'
        QtMocHelpers::MethodData<bool()>(16, 6, QMC::AccessPublic, QMetaType::Bool),
        // Method 'setInputTransparent'
        QtMocHelpers::MethodData<void(QQuickWindow *, bool)>(17, 6, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 18, 19 }, { QMetaType::Bool, 20 },
        }}),
        // Method 'setWindowLayer'
        QtMocHelpers::MethodData<void(QQuickWindow *, LayerShellQt::Window::Layer)>(21, 6, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 18, 19 }, { 0x80000000 | 22, 23 },
        }}),
        // Method 'setInputRegion'
        QtMocHelpers::MethodData<void(QWindow *, const QRect &)>(24, 6, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 25, 19 }, { 0x80000000 | 26, 27 },
        }}),
        // Method 'toPlainText'
        QtMocHelpers::MethodData<QString(QString)>(28, 6, QMC::AccessPublic, QMetaType::QString, {{
            { QMetaType::QString, 29 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'isSystem24HourFormat'
        QtMocHelpers::PropertyData<bool>(16, QMetaType::Bool, QMC::DefaultPropertyFlags, 0),
    };
    QtMocHelpers::UintData qt_enums {
    };
    QtMocHelpers::UintData qt_constructors {};
    QtMocHelpers::ClassInfos qt_classinfo({
            {    1,    2 },
            {    3,    4 },
    });
    return QtMocHelpers::metaObjectData<ShellUtil, void>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums, qt_constructors, qt_classinfo);
}
Q_CONSTINIT const QMetaObject ShellUtil::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN9ShellUtilE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN9ShellUtilE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN9ShellUtilE_t>.metaTypes,
    nullptr
} };

void ShellUtil::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<ShellUtil *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->isSystem24HourFormatChanged(); break;
        case 1: _t->stackItemBefore((*reinterpret_cast<std::add_pointer_t<QQuickItem*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QQuickItem*>>(_a[2]))); break;
        case 2: _t->stackItemAfter((*reinterpret_cast<std::add_pointer_t<QQuickItem*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QQuickItem*>>(_a[2]))); break;
        case 3: _t->executeCommand((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 4: _t->launchApp((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 5: { bool _r = _t->isSystem24HourFormat();
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 6: _t->setInputTransparent((*reinterpret_cast<std::add_pointer_t<QQuickWindow*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[2]))); break;
        case 7: _t->setWindowLayer((*reinterpret_cast<std::add_pointer_t<QQuickWindow*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<LayerShellQt::Window::Layer>>(_a[2]))); break;
        case 8: _t->setInputRegion((*reinterpret_cast<std::add_pointer_t<QWindow*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QRect>>(_a[2]))); break;
        case 9: { QString _r = _t->toPlainText((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QString*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QQuickItem* >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QQuickItem* >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QQuickWindow* >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QQuickWindow* >(); break;
            }
            break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QWindow* >(); break;
            }
            break;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (ShellUtil::*)()>(_a, &ShellUtil::isSystem24HourFormatChanged, 0))
            return;
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<bool*>(_v) = _t->isSystem24HourFormat(); break;
        default: break;
        }
    }
}

const QMetaObject *ShellUtil::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ShellUtil::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN9ShellUtilE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ShellUtil::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void ShellUtil::isSystem24HourFormatChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
