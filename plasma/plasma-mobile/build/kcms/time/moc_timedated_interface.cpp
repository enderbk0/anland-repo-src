/****************************************************************************
** Meta object code from reading C++ file 'timedated_interface.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "timedated_interface.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'timedated_interface.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN32OrgFreedesktopTimedate1InterfaceE_t {};
} // unnamed namespace

template <> constexpr inline auto OrgFreedesktopTimedate1Interface::qt_create_metaobjectdata<qt_meta_tag_ZN32OrgFreedesktopTimedate1InterfaceE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "OrgFreedesktopTimedate1Interface",
        "SetLocalRTC",
        "QDBusPendingReply<>",
        "",
        "in0",
        "in1",
        "in2",
        "SetNTP",
        "SetTime",
        "SetTimezone",
        "CanNTP",
        "LocalRTC",
        "NTP",
        "NTPSynchronized",
        "RTCTimeUSec",
        "TimeUSec",
        "Timezone"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'SetLocalRTC'
        QtMocHelpers::SlotData<QDBusPendingReply<>(bool, bool, bool)>(1, 3, QMC::AccessPublic, 0x80000000 | 2, {{
            { QMetaType::Bool, 4 }, { QMetaType::Bool, 5 }, { QMetaType::Bool, 6 },
        }}),
        // Slot 'SetNTP'
        QtMocHelpers::SlotData<QDBusPendingReply<>(bool, bool)>(7, 3, QMC::AccessPublic, 0x80000000 | 2, {{
            { QMetaType::Bool, 4 }, { QMetaType::Bool, 5 },
        }}),
        // Slot 'SetTime'
        QtMocHelpers::SlotData<QDBusPendingReply<>(qlonglong, bool, bool)>(8, 3, QMC::AccessPublic, 0x80000000 | 2, {{
            { QMetaType::LongLong, 4 }, { QMetaType::Bool, 5 }, { QMetaType::Bool, 6 },
        }}),
        // Slot 'SetTimezone'
        QtMocHelpers::SlotData<QDBusPendingReply<>(const QString &, bool)>(9, 3, QMC::AccessPublic, 0x80000000 | 2, {{
            { QMetaType::QString, 4 }, { QMetaType::Bool, 5 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'CanNTP'
        QtMocHelpers::PropertyData<bool>(10, QMetaType::Bool, QMC::DefaultPropertyFlags),
        // property 'LocalRTC'
        QtMocHelpers::PropertyData<bool>(11, QMetaType::Bool, QMC::DefaultPropertyFlags),
        // property 'NTP'
        QtMocHelpers::PropertyData<bool>(12, QMetaType::Bool, QMC::DefaultPropertyFlags),
        // property 'NTPSynchronized'
        QtMocHelpers::PropertyData<bool>(13, QMetaType::Bool, QMC::DefaultPropertyFlags),
        // property 'RTCTimeUSec'
        QtMocHelpers::PropertyData<qulonglong>(14, QMetaType::ULongLong, QMC::DefaultPropertyFlags),
        // property 'TimeUSec'
        QtMocHelpers::PropertyData<qulonglong>(15, QMetaType::ULongLong, QMC::DefaultPropertyFlags),
        // property 'Timezone'
        QtMocHelpers::PropertyData<QString>(16, QMetaType::QString, QMC::DefaultPropertyFlags),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<OrgFreedesktopTimedate1Interface, qt_meta_tag_ZN32OrgFreedesktopTimedate1InterfaceE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject OrgFreedesktopTimedate1Interface::staticMetaObject = { {
    QMetaObject::SuperData::link<QDBusAbstractInterface::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN32OrgFreedesktopTimedate1InterfaceE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN32OrgFreedesktopTimedate1InterfaceE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN32OrgFreedesktopTimedate1InterfaceE_t>.metaTypes,
    nullptr
} };

void OrgFreedesktopTimedate1Interface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<OrgFreedesktopTimedate1Interface *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: { QDBusPendingReply<> _r = _t->SetLocalRTC((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[3])));
            if (_a[0]) *reinterpret_cast<QDBusPendingReply<>*>(_a[0]) = std::move(_r); }  break;
        case 1: { QDBusPendingReply<> _r = _t->SetNTP((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[2])));
            if (_a[0]) *reinterpret_cast<QDBusPendingReply<>*>(_a[0]) = std::move(_r); }  break;
        case 2: { QDBusPendingReply<> _r = _t->SetTime((*reinterpret_cast<std::add_pointer_t<qlonglong>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[3])));
            if (_a[0]) *reinterpret_cast<QDBusPendingReply<>*>(_a[0]) = std::move(_r); }  break;
        case 3: { QDBusPendingReply<> _r = _t->SetTimezone((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[2])));
            if (_a[0]) *reinterpret_cast<QDBusPendingReply<>*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<bool*>(_v) = _t->canNTP(); break;
        case 1: *reinterpret_cast<bool*>(_v) = _t->localRTC(); break;
        case 2: *reinterpret_cast<bool*>(_v) = _t->nTP(); break;
        case 3: *reinterpret_cast<bool*>(_v) = _t->nTPSynchronized(); break;
        case 4: *reinterpret_cast<qulonglong*>(_v) = _t->rTCTimeUSec(); break;
        case 5: *reinterpret_cast<qulonglong*>(_v) = _t->timeUSec(); break;
        case 6: *reinterpret_cast<QString*>(_v) = _t->timezone(); break;
        default: break;
        }
    }
}

const QMetaObject *OrgFreedesktopTimedate1Interface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OrgFreedesktopTimedate1Interface::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN32OrgFreedesktopTimedate1InterfaceE_t>.strings))
        return static_cast<void*>(this);
    return QDBusAbstractInterface::qt_metacast(_clname);
}

int OrgFreedesktopTimedate1Interface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDBusAbstractInterface::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 4;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
