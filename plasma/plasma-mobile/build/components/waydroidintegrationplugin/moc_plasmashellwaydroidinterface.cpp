/****************************************************************************
** Meta object code from reading C++ file 'plasmashellwaydroidinterface.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "plasmashellwaydroidinterface.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'plasmashellwaydroidinterface.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN34OrgKdePlasmashellWaydroidInterfaceE_t {};
} // unnamed namespace

template <> constexpr inline auto OrgKdePlasmashellWaydroidInterface::qt_create_metaobjectdata<qt_meta_tag_ZN34OrgKdePlasmashellWaydroidInterfaceE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "OrgKdePlasmashellWaydroidInterface",
        "actionFailed",
        "",
        "message",
        "actionFinished",
        "androidIdChanged",
        "applicationAdded",
        "QDBusObjectPath",
        "path",
        "applicationRemoved",
        "downloadStatusChanged",
        "downloaded",
        "total",
        "speed",
        "errorOccurred",
        "title",
        "ipAddressChanged",
        "multiWindowsChanged",
        "sessionStatusChanged",
        "statusChanged",
        "suspendChanged",
        "systemTypeChanged",
        "ueventChanged",
        "androidId",
        "QDBusPendingReply<QString>",
        "applications",
        "QDBusPendingReply<QList<QDBusObjectPath>>",
        "deleteApplication",
        "QDBusPendingReply<>",
        "appId",
        "initialize",
        "systemType",
        "romType",
        "forced",
        "installApk",
        "apkFile",
        "ipAddress",
        "multiWindows",
        "QDBusPendingReply<bool>",
        "refreshAndroidId",
        "refreshApplications",
        "refreshSessionInfo",
        "resetWaydroid",
        "sessionStatus",
        "QDBusPendingReply<int>",
        "setMultiWindows",
        "setSuspend",
        "suspend",
        "setUevent",
        "uevent",
        "startSession",
        "status",
        "stopSession"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'actionFailed'
        QtMocHelpers::SignalData<void(const QString &)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 3 },
        }}),
        // Signal 'actionFinished'
        QtMocHelpers::SignalData<void(const QString &)>(4, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 3 },
        }}),
        // Signal 'androidIdChanged'
        QtMocHelpers::SignalData<void()>(5, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'applicationAdded'
        QtMocHelpers::SignalData<void(const QDBusObjectPath &)>(6, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 7, 8 },
        }}),
        // Signal 'applicationRemoved'
        QtMocHelpers::SignalData<void(const QDBusObjectPath &)>(9, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 7, 8 },
        }}),
        // Signal 'downloadStatusChanged'
        QtMocHelpers::SignalData<void(double, double, double)>(10, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Double, 11 }, { QMetaType::Double, 12 }, { QMetaType::Double, 13 },
        }}),
        // Signal 'errorOccurred'
        QtMocHelpers::SignalData<void(const QString &, const QString &)>(14, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 15 }, { QMetaType::QString, 3 },
        }}),
        // Signal 'ipAddressChanged'
        QtMocHelpers::SignalData<void()>(16, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'multiWindowsChanged'
        QtMocHelpers::SignalData<void()>(17, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'sessionStatusChanged'
        QtMocHelpers::SignalData<void()>(18, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'statusChanged'
        QtMocHelpers::SignalData<void()>(19, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'suspendChanged'
        QtMocHelpers::SignalData<void()>(20, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'systemTypeChanged'
        QtMocHelpers::SignalData<void()>(21, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'ueventChanged'
        QtMocHelpers::SignalData<void()>(22, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'androidId'
        QtMocHelpers::SlotData<QDBusPendingReply<QString>()>(23, 2, QMC::AccessPublic, 0x80000000 | 24),
        // Slot 'applications'
        QtMocHelpers::SlotData<QDBusPendingReply<QList<QDBusObjectPath> >()>(25, 2, QMC::AccessPublic, 0x80000000 | 26),
        // Slot 'deleteApplication'
        QtMocHelpers::SlotData<QDBusPendingReply<>(const QString &)>(27, 2, QMC::AccessPublic, 0x80000000 | 28, {{
            { QMetaType::QString, 29 },
        }}),
        // Slot 'initialize'
        QtMocHelpers::SlotData<QDBusPendingReply<>(int, int)>(30, 2, QMC::AccessPublic, 0x80000000 | 28, {{
            { QMetaType::Int, 31 }, { QMetaType::Int, 32 },
        }}),
        // Slot 'initialize'
        QtMocHelpers::SlotData<QDBusPendingReply<>(int, int, bool)>(30, 2, QMC::AccessPublic, 0x80000000 | 28, {{
            { QMetaType::Int, 31 }, { QMetaType::Int, 32 }, { QMetaType::Bool, 33 },
        }}),
        // Slot 'installApk'
        QtMocHelpers::SlotData<QDBusPendingReply<>(const QString &)>(34, 2, QMC::AccessPublic, 0x80000000 | 28, {{
            { QMetaType::QString, 35 },
        }}),
        // Slot 'ipAddress'
        QtMocHelpers::SlotData<QDBusPendingReply<QString>()>(36, 2, QMC::AccessPublic, 0x80000000 | 24),
        // Slot 'multiWindows'
        QtMocHelpers::SlotData<QDBusPendingReply<bool>()>(37, 2, QMC::AccessPublic, 0x80000000 | 38),
        // Slot 'refreshAndroidId'
        QtMocHelpers::SlotData<QDBusPendingReply<>()>(39, 2, QMC::AccessPublic, 0x80000000 | 28),
        // Slot 'refreshApplications'
        QtMocHelpers::SlotData<QDBusPendingReply<>()>(40, 2, QMC::AccessPublic, 0x80000000 | 28),
        // Slot 'refreshSessionInfo'
        QtMocHelpers::SlotData<QDBusPendingReply<>()>(41, 2, QMC::AccessPublic, 0x80000000 | 28),
        // Slot 'resetWaydroid'
        QtMocHelpers::SlotData<QDBusPendingReply<>()>(42, 2, QMC::AccessPublic, 0x80000000 | 28),
        // Slot 'sessionStatus'
        QtMocHelpers::SlotData<QDBusPendingReply<int>()>(43, 2, QMC::AccessPublic, 0x80000000 | 44),
        // Slot 'setMultiWindows'
        QtMocHelpers::SlotData<QDBusPendingReply<>(bool)>(45, 2, QMC::AccessPublic, 0x80000000 | 28, {{
            { QMetaType::Bool, 37 },
        }}),
        // Slot 'setSuspend'
        QtMocHelpers::SlotData<QDBusPendingReply<>(bool)>(46, 2, QMC::AccessPublic, 0x80000000 | 28, {{
            { QMetaType::Bool, 47 },
        }}),
        // Slot 'setUevent'
        QtMocHelpers::SlotData<QDBusPendingReply<>(bool)>(48, 2, QMC::AccessPublic, 0x80000000 | 28, {{
            { QMetaType::Bool, 49 },
        }}),
        // Slot 'startSession'
        QtMocHelpers::SlotData<QDBusPendingReply<>()>(50, 2, QMC::AccessPublic, 0x80000000 | 28),
        // Slot 'status'
        QtMocHelpers::SlotData<QDBusPendingReply<int>()>(51, 2, QMC::AccessPublic, 0x80000000 | 44),
        // Slot 'stopSession'
        QtMocHelpers::SlotData<QDBusPendingReply<>()>(52, 2, QMC::AccessPublic, 0x80000000 | 28),
        // Slot 'suspend'
        QtMocHelpers::SlotData<QDBusPendingReply<bool>()>(47, 2, QMC::AccessPublic, 0x80000000 | 38),
        // Slot 'systemType'
        QtMocHelpers::SlotData<QDBusPendingReply<int>()>(31, 2, QMC::AccessPublic, 0x80000000 | 44),
        // Slot 'uevent'
        QtMocHelpers::SlotData<QDBusPendingReply<bool>()>(49, 2, QMC::AccessPublic, 0x80000000 | 38),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<OrgKdePlasmashellWaydroidInterface, qt_meta_tag_ZN34OrgKdePlasmashellWaydroidInterfaceE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject OrgKdePlasmashellWaydroidInterface::staticMetaObject = { {
    QMetaObject::SuperData::link<QDBusAbstractInterface::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN34OrgKdePlasmashellWaydroidInterfaceE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN34OrgKdePlasmashellWaydroidInterfaceE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN34OrgKdePlasmashellWaydroidInterfaceE_t>.metaTypes,
    nullptr
} };

void OrgKdePlasmashellWaydroidInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<OrgKdePlasmashellWaydroidInterface *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->actionFailed((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 1: _t->actionFinished((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 2: _t->androidIdChanged(); break;
        case 3: _t->applicationAdded((*reinterpret_cast<std::add_pointer_t<QDBusObjectPath>>(_a[1]))); break;
        case 4: _t->applicationRemoved((*reinterpret_cast<std::add_pointer_t<QDBusObjectPath>>(_a[1]))); break;
        case 5: _t->downloadStatusChanged((*reinterpret_cast<std::add_pointer_t<double>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<double>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<double>>(_a[3]))); break;
        case 6: _t->errorOccurred((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2]))); break;
        case 7: _t->ipAddressChanged(); break;
        case 8: _t->multiWindowsChanged(); break;
        case 9: _t->sessionStatusChanged(); break;
        case 10: _t->statusChanged(); break;
        case 11: _t->suspendChanged(); break;
        case 12: _t->systemTypeChanged(); break;
        case 13: _t->ueventChanged(); break;
        case 14: { QDBusPendingReply<QString> _r = _t->androidId();
            if (_a[0]) *reinterpret_cast<QDBusPendingReply<QString>*>(_a[0]) = std::move(_r); }  break;
        case 15: { QDBusPendingReply<QList<QDBusObjectPath>> _r = _t->applications();
            if (_a[0]) *reinterpret_cast<QDBusPendingReply<QList<QDBusObjectPath>>*>(_a[0]) = std::move(_r); }  break;
        case 16: { QDBusPendingReply<> _r = _t->deleteApplication((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QDBusPendingReply<>*>(_a[0]) = std::move(_r); }  break;
        case 17: { QDBusPendingReply<> _r = _t->initialize((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2])));
            if (_a[0]) *reinterpret_cast<QDBusPendingReply<>*>(_a[0]) = std::move(_r); }  break;
        case 18: { QDBusPendingReply<> _r = _t->initialize((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[3])));
            if (_a[0]) *reinterpret_cast<QDBusPendingReply<>*>(_a[0]) = std::move(_r); }  break;
        case 19: { QDBusPendingReply<> _r = _t->installApk((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QDBusPendingReply<>*>(_a[0]) = std::move(_r); }  break;
        case 20: { QDBusPendingReply<QString> _r = _t->ipAddress();
            if (_a[0]) *reinterpret_cast<QDBusPendingReply<QString>*>(_a[0]) = std::move(_r); }  break;
        case 21: { QDBusPendingReply<bool> _r = _t->multiWindows();
            if (_a[0]) *reinterpret_cast<QDBusPendingReply<bool>*>(_a[0]) = std::move(_r); }  break;
        case 22: { QDBusPendingReply<> _r = _t->refreshAndroidId();
            if (_a[0]) *reinterpret_cast<QDBusPendingReply<>*>(_a[0]) = std::move(_r); }  break;
        case 23: { QDBusPendingReply<> _r = _t->refreshApplications();
            if (_a[0]) *reinterpret_cast<QDBusPendingReply<>*>(_a[0]) = std::move(_r); }  break;
        case 24: { QDBusPendingReply<> _r = _t->refreshSessionInfo();
            if (_a[0]) *reinterpret_cast<QDBusPendingReply<>*>(_a[0]) = std::move(_r); }  break;
        case 25: { QDBusPendingReply<> _r = _t->resetWaydroid();
            if (_a[0]) *reinterpret_cast<QDBusPendingReply<>*>(_a[0]) = std::move(_r); }  break;
        case 26: { QDBusPendingReply<int> _r = _t->sessionStatus();
            if (_a[0]) *reinterpret_cast<QDBusPendingReply<int>*>(_a[0]) = std::move(_r); }  break;
        case 27: { QDBusPendingReply<> _r = _t->setMultiWindows((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QDBusPendingReply<>*>(_a[0]) = std::move(_r); }  break;
        case 28: { QDBusPendingReply<> _r = _t->setSuspend((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QDBusPendingReply<>*>(_a[0]) = std::move(_r); }  break;
        case 29: { QDBusPendingReply<> _r = _t->setUevent((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QDBusPendingReply<>*>(_a[0]) = std::move(_r); }  break;
        case 30: { QDBusPendingReply<> _r = _t->startSession();
            if (_a[0]) *reinterpret_cast<QDBusPendingReply<>*>(_a[0]) = std::move(_r); }  break;
        case 31: { QDBusPendingReply<int> _r = _t->status();
            if (_a[0]) *reinterpret_cast<QDBusPendingReply<int>*>(_a[0]) = std::move(_r); }  break;
        case 32: { QDBusPendingReply<> _r = _t->stopSession();
            if (_a[0]) *reinterpret_cast<QDBusPendingReply<>*>(_a[0]) = std::move(_r); }  break;
        case 33: { QDBusPendingReply<bool> _r = _t->suspend();
            if (_a[0]) *reinterpret_cast<QDBusPendingReply<bool>*>(_a[0]) = std::move(_r); }  break;
        case 34: { QDBusPendingReply<int> _r = _t->systemType();
            if (_a[0]) *reinterpret_cast<QDBusPendingReply<int>*>(_a[0]) = std::move(_r); }  break;
        case 35: { QDBusPendingReply<bool> _r = _t->uevent();
            if (_a[0]) *reinterpret_cast<QDBusPendingReply<bool>*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (OrgKdePlasmashellWaydroidInterface::*)(const QString & )>(_a, &OrgKdePlasmashellWaydroidInterface::actionFailed, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (OrgKdePlasmashellWaydroidInterface::*)(const QString & )>(_a, &OrgKdePlasmashellWaydroidInterface::actionFinished, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (OrgKdePlasmashellWaydroidInterface::*)()>(_a, &OrgKdePlasmashellWaydroidInterface::androidIdChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (OrgKdePlasmashellWaydroidInterface::*)(const QDBusObjectPath & )>(_a, &OrgKdePlasmashellWaydroidInterface::applicationAdded, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (OrgKdePlasmashellWaydroidInterface::*)(const QDBusObjectPath & )>(_a, &OrgKdePlasmashellWaydroidInterface::applicationRemoved, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (OrgKdePlasmashellWaydroidInterface::*)(double , double , double )>(_a, &OrgKdePlasmashellWaydroidInterface::downloadStatusChanged, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (OrgKdePlasmashellWaydroidInterface::*)(const QString & , const QString & )>(_a, &OrgKdePlasmashellWaydroidInterface::errorOccurred, 6))
            return;
        if (QtMocHelpers::indexOfMethod<void (OrgKdePlasmashellWaydroidInterface::*)()>(_a, &OrgKdePlasmashellWaydroidInterface::ipAddressChanged, 7))
            return;
        if (QtMocHelpers::indexOfMethod<void (OrgKdePlasmashellWaydroidInterface::*)()>(_a, &OrgKdePlasmashellWaydroidInterface::multiWindowsChanged, 8))
            return;
        if (QtMocHelpers::indexOfMethod<void (OrgKdePlasmashellWaydroidInterface::*)()>(_a, &OrgKdePlasmashellWaydroidInterface::sessionStatusChanged, 9))
            return;
        if (QtMocHelpers::indexOfMethod<void (OrgKdePlasmashellWaydroidInterface::*)()>(_a, &OrgKdePlasmashellWaydroidInterface::statusChanged, 10))
            return;
        if (QtMocHelpers::indexOfMethod<void (OrgKdePlasmashellWaydroidInterface::*)()>(_a, &OrgKdePlasmashellWaydroidInterface::suspendChanged, 11))
            return;
        if (QtMocHelpers::indexOfMethod<void (OrgKdePlasmashellWaydroidInterface::*)()>(_a, &OrgKdePlasmashellWaydroidInterface::systemTypeChanged, 12))
            return;
        if (QtMocHelpers::indexOfMethod<void (OrgKdePlasmashellWaydroidInterface::*)()>(_a, &OrgKdePlasmashellWaydroidInterface::ueventChanged, 13))
            return;
    }
}

const QMetaObject *OrgKdePlasmashellWaydroidInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OrgKdePlasmashellWaydroidInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN34OrgKdePlasmashellWaydroidInterfaceE_t>.strings))
        return static_cast<void*>(this);
    return QDBusAbstractInterface::qt_metacast(_clname);
}

int OrgKdePlasmashellWaydroidInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDBusAbstractInterface::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 36)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 36;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 36)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 36;
    }
    return _id;
}

// SIGNAL 0
void OrgKdePlasmashellWaydroidInterface::actionFailed(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void OrgKdePlasmashellWaydroidInterface::actionFinished(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}

// SIGNAL 2
void OrgKdePlasmashellWaydroidInterface::androidIdChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void OrgKdePlasmashellWaydroidInterface::applicationAdded(const QDBusObjectPath & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 3, nullptr, _t1);
}

// SIGNAL 4
void OrgKdePlasmashellWaydroidInterface::applicationRemoved(const QDBusObjectPath & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 4, nullptr, _t1);
}

// SIGNAL 5
void OrgKdePlasmashellWaydroidInterface::downloadStatusChanged(double _t1, double _t2, double _t3)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 5, nullptr, _t1, _t2, _t3);
}

// SIGNAL 6
void OrgKdePlasmashellWaydroidInterface::errorOccurred(const QString & _t1, const QString & _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 6, nullptr, _t1, _t2);
}

// SIGNAL 7
void OrgKdePlasmashellWaydroidInterface::ipAddressChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void OrgKdePlasmashellWaydroidInterface::multiWindowsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void OrgKdePlasmashellWaydroidInterface::sessionStatusChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void OrgKdePlasmashellWaydroidInterface::statusChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}

// SIGNAL 11
void OrgKdePlasmashellWaydroidInterface::suspendChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 11, nullptr);
}

// SIGNAL 12
void OrgKdePlasmashellWaydroidInterface::systemTypeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 12, nullptr);
}

// SIGNAL 13
void OrgKdePlasmashellWaydroidInterface::ueventChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 13, nullptr);
}
QT_WARNING_POP
