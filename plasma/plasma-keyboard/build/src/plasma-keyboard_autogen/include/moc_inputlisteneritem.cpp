/****************************************************************************
** Meta object code from reading C++ file 'inputlisteneritem.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/inputlisteneritem.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'inputlisteneritem.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN17InputListenerItemE_t {};
} // unnamed namespace

template <> constexpr inline auto InputListenerItem::qt_create_metaobjectdata<qt_meta_tag_ZN17InputListenerItemE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "InputListenerItem",
        "QML.Element",
        "auto",
        "keyNavigationPressed",
        "",
        "key",
        "keyNavigationReleased",
        "engine",
        "QVirtualKeyboardInputEngine*",
        "keyboardNavigationActive",
        "overlayController",
        "OverlayController*"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'keyNavigationPressed'
        QtMocHelpers::SignalData<void(int)>(3, 4, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 5 },
        }}),
        // Signal 'keyNavigationReleased'
        QtMocHelpers::SignalData<void(int)>(6, 4, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 5 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'engine'
        QtMocHelpers::PropertyData<QVirtualKeyboardInputEngine*>(7, 0x80000000 | 8, QMC::Writable | QMC::Designable | QMC::Scriptable | QMC::Stored | QMC::EnumOrFlag | QMC::StdCppSet),
        // property 'keyboardNavigationActive'
        QtMocHelpers::PropertyData<bool>(9, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable),
        // property 'overlayController'
        QtMocHelpers::PropertyData<OverlayController*>(10, 0x80000000 | 11, QMC::DefaultPropertyFlags | QMC::EnumOrFlag | QMC::Constant),
    };
    QtMocHelpers::UintData qt_enums {
    };
    QtMocHelpers::UintData qt_constructors {};
    QtMocHelpers::ClassInfos qt_classinfo({
            {    1,    2 },
    });
    return QtMocHelpers::metaObjectData<InputListenerItem, void>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums, qt_constructors, qt_classinfo);
}
Q_CONSTINIT const QMetaObject InputListenerItem::staticMetaObject = { {
    QMetaObject::SuperData::link<QQuickItem::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN17InputListenerItemE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN17InputListenerItemE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN17InputListenerItemE_t>.metaTypes,
    nullptr
} };

void InputListenerItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<InputListenerItem *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->keyNavigationPressed((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 1: _t->keyNavigationReleased((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (InputListenerItem::*)(int )>(_a, &InputListenerItem::keyNavigationPressed, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (InputListenerItem::*)(int )>(_a, &InputListenerItem::keyNavigationReleased, 1))
            return;
    }
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVirtualKeyboardInputEngine* >(); break;
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 1: *reinterpret_cast<bool*>(_v) = _t->m_keyboardNavigationActive; break;
        case 2: *reinterpret_cast<OverlayController**>(_v) = _t->overlayController(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setEngine(*reinterpret_cast<QVirtualKeyboardInputEngine**>(_v)); break;
        case 1: QtMocHelpers::setProperty(_t->m_keyboardNavigationActive, *reinterpret_cast<bool*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *InputListenerItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *InputListenerItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN17InputListenerItemE_t>.strings))
        return static_cast<void*>(this);
    return QQuickItem::qt_metacast(_clname);
}

int InputListenerItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 2;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void InputListenerItem::keyNavigationPressed(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void InputListenerItem::keyNavigationReleased(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}
QT_WARNING_POP
