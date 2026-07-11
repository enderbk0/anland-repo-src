/****************************************************************************
** Meta object code from reading C++ file 'windowlistener.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../components/mobileshellstate/windowlistener.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'windowlistener.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN14WindowListenerE_t {};
} // unnamed namespace

template <> constexpr inline auto WindowListener::qt_create_metaobjectdata<qt_meta_tag_ZN14WindowListenerE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "WindowListener",
        "windowCreated",
        "",
        "KWayland::Client::PlasmaWindow*",
        "window",
        "plasmaWindowCreated",
        "windowRemoved",
        "storageId",
        "activeWindowChanged",
        "activeWindow",
        "onWindowCreated"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'windowCreated'
        QtMocHelpers::SignalData<void(KWayland::Client::PlasmaWindow *)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Signal 'plasmaWindowCreated'
        QtMocHelpers::SignalData<void(KWayland::Client::PlasmaWindow *)>(5, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Signal 'windowRemoved'
        QtMocHelpers::SignalData<void(QString)>(6, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 7 },
        }}),
        // Signal 'activeWindowChanged'
        QtMocHelpers::SignalData<void(KWayland::Client::PlasmaWindow *)>(8, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 9 },
        }}),
        // Slot 'onWindowCreated'
        QtMocHelpers::SlotData<void(KWayland::Client::PlasmaWindow *)>(10, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<WindowListener, qt_meta_tag_ZN14WindowListenerE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject WindowListener::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN14WindowListenerE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN14WindowListenerE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN14WindowListenerE_t>.metaTypes,
    nullptr
} };

void WindowListener::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<WindowListener *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->windowCreated((*reinterpret_cast<std::add_pointer_t<KWayland::Client::PlasmaWindow*>>(_a[1]))); break;
        case 1: _t->plasmaWindowCreated((*reinterpret_cast<std::add_pointer_t<KWayland::Client::PlasmaWindow*>>(_a[1]))); break;
        case 2: _t->windowRemoved((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 3: _t->activeWindowChanged((*reinterpret_cast<std::add_pointer_t<KWayland::Client::PlasmaWindow*>>(_a[1]))); break;
        case 4: _t->onWindowCreated((*reinterpret_cast<std::add_pointer_t<KWayland::Client::PlasmaWindow*>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< KWayland::Client::PlasmaWindow* >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< KWayland::Client::PlasmaWindow* >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< KWayland::Client::PlasmaWindow* >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< KWayland::Client::PlasmaWindow* >(); break;
            }
            break;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (WindowListener::*)(KWayland::Client::PlasmaWindow * )>(_a, &WindowListener::windowCreated, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (WindowListener::*)(KWayland::Client::PlasmaWindow * )>(_a, &WindowListener::plasmaWindowCreated, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (WindowListener::*)(QString )>(_a, &WindowListener::windowRemoved, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (WindowListener::*)(KWayland::Client::PlasmaWindow * )>(_a, &WindowListener::activeWindowChanged, 3))
            return;
    }
}

const QMetaObject *WindowListener::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WindowListener::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN14WindowListenerE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int WindowListener::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void WindowListener::windowCreated(KWayland::Client::PlasmaWindow * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void WindowListener::plasmaWindowCreated(KWayland::Client::PlasmaWindow * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}

// SIGNAL 2
void WindowListener::windowRemoved(QString _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1);
}

// SIGNAL 3
void WindowListener::activeWindowChanged(KWayland::Client::PlasmaWindow * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 3, nullptr, _t1);
}
QT_WARNING_POP
