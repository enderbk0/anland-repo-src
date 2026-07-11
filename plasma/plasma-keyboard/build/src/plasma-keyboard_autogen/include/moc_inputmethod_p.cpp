/****************************************************************************
** Meta object code from reading C++ file 'inputmethod_p.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/inputmethod_p.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'inputmethod_p.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN11InputMethodE_t {};
} // unnamed namespace

template <> constexpr inline auto InputMethod::qt_create_metaobjectdata<qt_meta_tag_ZN11InputMethodE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "InputMethod",
        "activate",
        "",
        "deactivate",
        "activityChanged",
        "active"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'activate'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'deactivate'
        QtMocHelpers::SignalData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'activityChanged'
        QtMocHelpers::SignalData<void(bool)>(4, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 5 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<InputMethod, qt_meta_tag_ZN11InputMethodE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject InputMethod::staticMetaObject = { {
    QMetaObject::SuperData::link<QWaylandClientExtensionTemplate<InputMethod>::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN11InputMethodE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN11InputMethodE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN11InputMethodE_t>.metaTypes,
    nullptr
} };

void InputMethod::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<InputMethod *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->activate(); break;
        case 1: _t->deactivate(); break;
        case 2: _t->activityChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (InputMethod::*)()>(_a, &InputMethod::activate, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (InputMethod::*)()>(_a, &InputMethod::deactivate, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (InputMethod::*)(bool )>(_a, &InputMethod::activityChanged, 2))
            return;
    }
}

const QMetaObject *InputMethod::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *InputMethod::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN11InputMethodE_t>.strings))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QtWayland::zwp_input_method_v1"))
        return static_cast< QtWayland::zwp_input_method_v1*>(this);
    return QWaylandClientExtensionTemplate<InputMethod>::qt_metacast(_clname);
}

int InputMethod::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWaylandClientExtensionTemplate<InputMethod>::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void InputMethod::activate()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void InputMethod::deactivate()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void InputMethod::activityChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1);
}
namespace {
struct qt_meta_tag_ZN18InputMethodContextE_t {};
} // unnamed namespace

template <> constexpr inline auto InputMethodContext::qt_create_metaobjectdata<qt_meta_tag_ZN18InputMethodContextE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "InputMethodContext",
        "reset",
        "",
        "contentTypeChanged",
        "preferredLanguageChanged",
        "language",
        "surroundingTextChanged",
        "surroundingText",
        "uint32_t",
        "cursor",
        "anchor",
        "receivedCommit"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'reset'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'contentTypeChanged'
        QtMocHelpers::SignalData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'preferredLanguageChanged'
        QtMocHelpers::SignalData<void(const QString &)>(4, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 5 },
        }}),
        // Signal 'surroundingTextChanged'
        QtMocHelpers::SignalData<void(const QString &, uint32_t, uint32_t)>(6, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 7 }, { 0x80000000 | 8, 9 }, { 0x80000000 | 8, 10 },
        }}),
        // Signal 'receivedCommit'
        QtMocHelpers::SignalData<void()>(11, 2, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<InputMethodContext, qt_meta_tag_ZN18InputMethodContextE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject InputMethodContext::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN18InputMethodContextE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN18InputMethodContextE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN18InputMethodContextE_t>.metaTypes,
    nullptr
} };

void InputMethodContext::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<InputMethodContext *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->reset(); break;
        case 1: _t->contentTypeChanged(); break;
        case 2: _t->preferredLanguageChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 3: _t->surroundingTextChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<uint32_t>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<uint32_t>>(_a[3]))); break;
        case 4: _t->receivedCommit(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (InputMethodContext::*)()>(_a, &InputMethodContext::reset, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (InputMethodContext::*)()>(_a, &InputMethodContext::contentTypeChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (InputMethodContext::*)(const QString & )>(_a, &InputMethodContext::preferredLanguageChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (InputMethodContext::*)(const QString & , uint32_t , uint32_t )>(_a, &InputMethodContext::surroundingTextChanged, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (InputMethodContext::*)()>(_a, &InputMethodContext::receivedCommit, 4))
            return;
    }
}

const QMetaObject *InputMethodContext::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *InputMethodContext::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN18InputMethodContextE_t>.strings))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QtWayland::zwp_input_method_context_v1"))
        return static_cast< QtWayland::zwp_input_method_context_v1*>(this);
    return QObject::qt_metacast(_clname);
}

int InputMethodContext::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void InputMethodContext::reset()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void InputMethodContext::contentTypeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void InputMethodContext::preferredLanguageChanged(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1);
}

// SIGNAL 3
void InputMethodContext::surroundingTextChanged(const QString & _t1, uint32_t _t2, uint32_t _t3)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 3, nullptr, _t1, _t2, _t3);
}

// SIGNAL 4
void InputMethodContext::receivedCommit()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}
namespace {
struct qt_meta_tag_ZN8KeyboardE_t {};
} // unnamed namespace

template <> constexpr inline auto Keyboard::qt_create_metaobjectdata<qt_meta_tag_ZN8KeyboardE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "Keyboard",
        "keyPressed",
        "",
        "QKeyEvent*",
        "keyEvent",
        "keyReleased"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'keyPressed'
        QtMocHelpers::SignalData<void(QKeyEvent *)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Signal 'keyReleased'
        QtMocHelpers::SignalData<void(QKeyEvent *)>(5, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<Keyboard, qt_meta_tag_ZN8KeyboardE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject Keyboard::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN8KeyboardE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN8KeyboardE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN8KeyboardE_t>.metaTypes,
    nullptr
} };

void Keyboard::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<Keyboard *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->keyPressed((*reinterpret_cast<std::add_pointer_t<QKeyEvent*>>(_a[1]))); break;
        case 1: _t->keyReleased((*reinterpret_cast<std::add_pointer_t<QKeyEvent*>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (Keyboard::*)(QKeyEvent * )>(_a, &Keyboard::keyPressed, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (Keyboard::*)(QKeyEvent * )>(_a, &Keyboard::keyReleased, 1))
            return;
    }
}

const QMetaObject *Keyboard::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Keyboard::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN8KeyboardE_t>.strings))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QtWayland::wl_keyboard"))
        return static_cast< QtWayland::wl_keyboard*>(this);
    return QObject::qt_metacast(_clname);
}

int Keyboard::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
    return _id;
}

// SIGNAL 0
void Keyboard::keyPressed(QKeyEvent * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void Keyboard::keyReleased(QKeyEvent * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}
QT_WARNING_POP
