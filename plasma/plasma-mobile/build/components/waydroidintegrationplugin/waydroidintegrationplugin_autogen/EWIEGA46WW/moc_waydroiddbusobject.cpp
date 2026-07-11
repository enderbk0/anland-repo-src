/****************************************************************************
** Meta object code from reading C++ file 'waydroiddbusobject.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../components/waydroidintegrationplugin/waydroiddbusobject.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'waydroiddbusobject.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN18WaydroidDBusObjectE_t {};
} // unnamed namespace

template <> constexpr inline auto WaydroidDBusObject::qt_create_metaobjectdata<qt_meta_tag_ZN18WaydroidDBusObjectE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "WaydroidDBusObject",
        "QML.Element",
        "auto",
        "QML.Singleton",
        "true",
        "D-Bus Interface",
        "org.kde.plasmashell.Waydroid",
        "statusChanged",
        "",
        "downloadStatusChanged",
        "downloaded",
        "total",
        "speed",
        "sessionStatusChanged",
        "systemTypeChanged",
        "ipAddressChanged",
        "androidIdChanged",
        "multiWindowsChanged",
        "suspendChanged",
        "ueventChanged",
        "applicationAdded",
        "QDBusObjectPath",
        "path",
        "applicationRemoved",
        "actionFinished",
        "message",
        "actionFailed",
        "errorOccurred",
        "title",
        "status",
        "sessionStatus",
        "systemType",
        "ipAddress",
        "androidId",
        "multiWindows",
        "setMultiWindows",
        "suspend",
        "setSuspend",
        "uevent",
        "setUevent",
        "applications",
        "QList<QDBusObjectPath>",
        "initialize",
        "romType",
        "forced",
        "startSession",
        "stopSession",
        "resetWaydroid",
        "installApk",
        "apkFile",
        "deleteApplication",
        "appId",
        "refreshSessionInfo",
        "refreshAndroidId",
        "refreshApplications",
        "registerObject",
        "Status",
        "NotSupported",
        "NotInitialized",
        "Initializing",
        "Initialized",
        "Resetting",
        "SessionStatus",
        "SessionStopped",
        "SessionStarting",
        "SessionRunning",
        "SystemType",
        "Vanilla",
        "Foss",
        "Gapps",
        "UnknownSystemType",
        "RomType",
        "Lineage",
        "Bliss"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'statusChanged'
        QtMocHelpers::SignalData<void()>(7, 8, QMC::AccessPublic | QMC::MethodScriptable, QMetaType::Void),
        // Signal 'downloadStatusChanged'
        QtMocHelpers::SignalData<void(double, double, double)>(9, 8, QMC::AccessPublic | QMC::MethodScriptable, QMetaType::Void, {{
            { QMetaType::Double, 10 }, { QMetaType::Double, 11 }, { QMetaType::Double, 12 },
        }}),
        // Signal 'sessionStatusChanged'
        QtMocHelpers::SignalData<void()>(13, 8, QMC::AccessPublic | QMC::MethodScriptable, QMetaType::Void),
        // Signal 'systemTypeChanged'
        QtMocHelpers::SignalData<void()>(14, 8, QMC::AccessPublic | QMC::MethodScriptable, QMetaType::Void),
        // Signal 'ipAddressChanged'
        QtMocHelpers::SignalData<void()>(15, 8, QMC::AccessPublic | QMC::MethodScriptable, QMetaType::Void),
        // Signal 'androidIdChanged'
        QtMocHelpers::SignalData<void()>(16, 8, QMC::AccessPublic | QMC::MethodScriptable, QMetaType::Void),
        // Signal 'multiWindowsChanged'
        QtMocHelpers::SignalData<void()>(17, 8, QMC::AccessPublic | QMC::MethodScriptable, QMetaType::Void),
        // Signal 'suspendChanged'
        QtMocHelpers::SignalData<void()>(18, 8, QMC::AccessPublic | QMC::MethodScriptable, QMetaType::Void),
        // Signal 'ueventChanged'
        QtMocHelpers::SignalData<void()>(19, 8, QMC::AccessPublic | QMC::MethodScriptable, QMetaType::Void),
        // Signal 'applicationAdded'
        QtMocHelpers::SignalData<void(QDBusObjectPath)>(20, 8, QMC::AccessPublic | QMC::MethodScriptable, QMetaType::Void, {{
            { 0x80000000 | 21, 22 },
        }}),
        // Signal 'applicationRemoved'
        QtMocHelpers::SignalData<void(QDBusObjectPath)>(23, 8, QMC::AccessPublic | QMC::MethodScriptable, QMetaType::Void, {{
            { 0x80000000 | 21, 22 },
        }}),
        // Signal 'actionFinished'
        QtMocHelpers::SignalData<void(const QString)>(24, 8, QMC::AccessPublic | QMC::MethodScriptable, QMetaType::Void, {{
            { QMetaType::QString, 25 },
        }}),
        // Signal 'actionFailed'
        QtMocHelpers::SignalData<void(const QString)>(26, 8, QMC::AccessPublic | QMC::MethodScriptable, QMetaType::Void, {{
            { QMetaType::QString, 25 },
        }}),
        // Signal 'errorOccurred'
        QtMocHelpers::SignalData<void(const QString, const QString)>(27, 8, QMC::AccessPublic | QMC::MethodScriptable, QMetaType::Void, {{
            { QMetaType::QString, 28 }, { QMetaType::QString, 25 },
        }}),
        // Slot 'status'
        QtMocHelpers::SlotData<int() const>(29, 8, QMC::AccessPublic | QMC::MethodScriptable, QMetaType::Int),
        // Slot 'sessionStatus'
        QtMocHelpers::SlotData<int() const>(30, 8, QMC::AccessPublic | QMC::MethodScriptable, QMetaType::Int),
        // Slot 'systemType'
        QtMocHelpers::SlotData<int() const>(31, 8, QMC::AccessPublic | QMC::MethodScriptable, QMetaType::Int),
        // Slot 'ipAddress'
        QtMocHelpers::SlotData<QString() const>(32, 8, QMC::AccessPublic | QMC::MethodScriptable, QMetaType::QString),
        // Slot 'androidId'
        QtMocHelpers::SlotData<QString() const>(33, 8, QMC::AccessPublic | QMC::MethodScriptable, QMetaType::QString),
        // Slot 'multiWindows'
        QtMocHelpers::SlotData<bool() const>(34, 8, QMC::AccessPublic | QMC::MethodScriptable, QMetaType::Bool),
        // Slot 'setMultiWindows'
        QtMocHelpers::SlotData<void(const bool)>(35, 8, QMC::AccessPublic | QMC::MethodScriptable, QMetaType::Void, {{
            { QMetaType::Bool, 34 },
        }}),
        // Slot 'suspend'
        QtMocHelpers::SlotData<bool() const>(36, 8, QMC::AccessPublic | QMC::MethodScriptable, QMetaType::Bool),
        // Slot 'setSuspend'
        QtMocHelpers::SlotData<void(const bool)>(37, 8, QMC::AccessPublic | QMC::MethodScriptable, QMetaType::Void, {{
            { QMetaType::Bool, 36 },
        }}),
        // Slot 'uevent'
        QtMocHelpers::SlotData<bool() const>(38, 8, QMC::AccessPublic | QMC::MethodScriptable, QMetaType::Bool),
        // Slot 'setUevent'
        QtMocHelpers::SlotData<void(const bool)>(39, 8, QMC::AccessPublic | QMC::MethodScriptable, QMetaType::Void, {{
            { QMetaType::Bool, 38 },
        }}),
        // Slot 'applications'
        QtMocHelpers::SlotData<QList<QDBusObjectPath>() const>(40, 8, QMC::AccessPublic | QMC::MethodScriptable, 0x80000000 | 41),
        // Slot 'initialize'
        QtMocHelpers::SlotData<void(const int, const int, const bool)>(42, 8, QMC::AccessPublic | QMC::MethodScriptable, QMetaType::Void, {{
            { QMetaType::Int, 31 }, { QMetaType::Int, 43 }, { QMetaType::Bool, 44 },
        }}),
        // Slot 'initialize'
        QtMocHelpers::SlotData<void(const int, const int)>(42, 8, QMC::AccessPublic | QMC::MethodCloned | QMC::MethodScriptable, QMetaType::Void, {{
            { QMetaType::Int, 31 }, { QMetaType::Int, 43 },
        }}),
        // Slot 'startSession'
        QtMocHelpers::SlotData<void()>(45, 8, QMC::AccessPublic | QMC::MethodScriptable, QMetaType::Void),
        // Slot 'stopSession'
        QtMocHelpers::SlotData<void()>(46, 8, QMC::AccessPublic | QMC::MethodScriptable, QMetaType::Void),
        // Slot 'resetWaydroid'
        QtMocHelpers::SlotData<void()>(47, 8, QMC::AccessPublic | QMC::MethodScriptable, QMetaType::Void),
        // Slot 'installApk'
        QtMocHelpers::SlotData<void(const QString)>(48, 8, QMC::AccessPublic | QMC::MethodScriptable, QMetaType::Void, {{
            { QMetaType::QString, 49 },
        }}),
        // Slot 'deleteApplication'
        QtMocHelpers::SlotData<void(const QString)>(50, 8, QMC::AccessPublic | QMC::MethodScriptable, QMetaType::Void, {{
            { QMetaType::QString, 51 },
        }}),
        // Slot 'refreshSessionInfo'
        QtMocHelpers::SlotData<void()>(52, 8, QMC::AccessPublic | QMC::MethodScriptable, QMetaType::Void),
        // Slot 'refreshAndroidId'
        QtMocHelpers::SlotData<void()>(53, 8, QMC::AccessPublic | QMC::MethodScriptable, QMetaType::Void),
        // Slot 'refreshApplications'
        QtMocHelpers::SlotData<void()>(54, 8, QMC::AccessPublic | QMC::MethodScriptable, QMetaType::Void),
        // Method 'registerObject'
        QtMocHelpers::MethodData<void()>(55, 8, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
        // enum 'Status'
        QtMocHelpers::EnumData<enum Status>(56, 56, QMC::EnumFlags{}).add({
            {   57, Status::NotSupported },
            {   58, Status::NotInitialized },
            {   59, Status::Initializing },
            {   60, Status::Initialized },
            {   61, Status::Resetting },
        }),
        // enum 'SessionStatus'
        QtMocHelpers::EnumData<enum SessionStatus>(62, 62, QMC::EnumFlags{}).add({
            {   63, SessionStatus::SessionStopped },
            {   64, SessionStatus::SessionStarting },
            {   65, SessionStatus::SessionRunning },
        }),
        // enum 'SystemType'
        QtMocHelpers::EnumData<enum SystemType>(66, 66, QMC::EnumFlags{}).add({
            {   67, SystemType::Vanilla },
            {   68, SystemType::Foss },
            {   69, SystemType::Gapps },
            {   70, SystemType::UnknownSystemType },
        }),
        // enum 'RomType'
        QtMocHelpers::EnumData<enum RomType>(71, 71, QMC::EnumFlags{}).add({
            {   72, RomType::Lineage },
            {   73, RomType::Bliss },
        }),
    };
    QtMocHelpers::UintData qt_constructors {};
    QtMocHelpers::ClassInfos qt_classinfo({
            {    1,    2 },
            {    3,    4 },
            {    5,    6 },
    });
    return QtMocHelpers::metaObjectData<WaydroidDBusObject, void>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums, qt_constructors, qt_classinfo);
}
Q_CONSTINIT const QMetaObject WaydroidDBusObject::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN18WaydroidDBusObjectE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN18WaydroidDBusObjectE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN18WaydroidDBusObjectE_t>.metaTypes,
    nullptr
} };

void WaydroidDBusObject::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<WaydroidDBusObject *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->statusChanged(); break;
        case 1: _t->downloadStatusChanged((*reinterpret_cast<std::add_pointer_t<double>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<double>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<double>>(_a[3]))); break;
        case 2: _t->sessionStatusChanged(); break;
        case 3: _t->systemTypeChanged(); break;
        case 4: _t->ipAddressChanged(); break;
        case 5: _t->androidIdChanged(); break;
        case 6: _t->multiWindowsChanged(); break;
        case 7: _t->suspendChanged(); break;
        case 8: _t->ueventChanged(); break;
        case 9: _t->applicationAdded((*reinterpret_cast<std::add_pointer_t<QDBusObjectPath>>(_a[1]))); break;
        case 10: _t->applicationRemoved((*reinterpret_cast<std::add_pointer_t<QDBusObjectPath>>(_a[1]))); break;
        case 11: _t->actionFinished((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 12: _t->actionFailed((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 13: _t->errorOccurred((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2]))); break;
        case 14: { int _r = _t->status();
            if (_a[0]) *reinterpret_cast<int*>(_a[0]) = std::move(_r); }  break;
        case 15: { int _r = _t->sessionStatus();
            if (_a[0]) *reinterpret_cast<int*>(_a[0]) = std::move(_r); }  break;
        case 16: { int _r = _t->systemType();
            if (_a[0]) *reinterpret_cast<int*>(_a[0]) = std::move(_r); }  break;
        case 17: { QString _r = _t->ipAddress();
            if (_a[0]) *reinterpret_cast<QString*>(_a[0]) = std::move(_r); }  break;
        case 18: { QString _r = _t->androidId();
            if (_a[0]) *reinterpret_cast<QString*>(_a[0]) = std::move(_r); }  break;
        case 19: { bool _r = _t->multiWindows();
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 20: _t->setMultiWindows((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 21: { bool _r = _t->suspend();
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 22: _t->setSuspend((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 23: { bool _r = _t->uevent();
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 24: _t->setUevent((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 25: { QList<QDBusObjectPath> _r = _t->applications();
            if (_a[0]) *reinterpret_cast<QList<QDBusObjectPath>*>(_a[0]) = std::move(_r); }  break;
        case 26: _t->initialize((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[3]))); break;
        case 27: _t->initialize((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2]))); break;
        case 28: _t->startSession(); break;
        case 29: _t->stopSession(); break;
        case 30: _t->resetWaydroid(); break;
        case 31: _t->installApk((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 32: _t->deleteApplication((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 33: _t->refreshSessionInfo(); break;
        case 34: _t->refreshAndroidId(); break;
        case 35: _t->refreshApplications(); break;
        case 36: _t->registerObject(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QDBusObjectPath >(); break;
            }
            break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QDBusObjectPath >(); break;
            }
            break;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (WaydroidDBusObject::*)()>(_a, &WaydroidDBusObject::statusChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (WaydroidDBusObject::*)(double , double , double )>(_a, &WaydroidDBusObject::downloadStatusChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (WaydroidDBusObject::*)()>(_a, &WaydroidDBusObject::sessionStatusChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (WaydroidDBusObject::*)()>(_a, &WaydroidDBusObject::systemTypeChanged, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (WaydroidDBusObject::*)()>(_a, &WaydroidDBusObject::ipAddressChanged, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (WaydroidDBusObject::*)()>(_a, &WaydroidDBusObject::androidIdChanged, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (WaydroidDBusObject::*)()>(_a, &WaydroidDBusObject::multiWindowsChanged, 6))
            return;
        if (QtMocHelpers::indexOfMethod<void (WaydroidDBusObject::*)()>(_a, &WaydroidDBusObject::suspendChanged, 7))
            return;
        if (QtMocHelpers::indexOfMethod<void (WaydroidDBusObject::*)()>(_a, &WaydroidDBusObject::ueventChanged, 8))
            return;
        if (QtMocHelpers::indexOfMethod<void (WaydroidDBusObject::*)(QDBusObjectPath )>(_a, &WaydroidDBusObject::applicationAdded, 9))
            return;
        if (QtMocHelpers::indexOfMethod<void (WaydroidDBusObject::*)(QDBusObjectPath )>(_a, &WaydroidDBusObject::applicationRemoved, 10))
            return;
        if (QtMocHelpers::indexOfMethod<void (WaydroidDBusObject::*)(const QString )>(_a, &WaydroidDBusObject::actionFinished, 11))
            return;
        if (QtMocHelpers::indexOfMethod<void (WaydroidDBusObject::*)(const QString )>(_a, &WaydroidDBusObject::actionFailed, 12))
            return;
        if (QtMocHelpers::indexOfMethod<void (WaydroidDBusObject::*)(const QString , const QString )>(_a, &WaydroidDBusObject::errorOccurred, 13))
            return;
    }
}

const QMetaObject *WaydroidDBusObject::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WaydroidDBusObject::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN18WaydroidDBusObjectE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int WaydroidDBusObject::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 37)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 37;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 37)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 37;
    }
    return _id;
}

// SIGNAL 0
void WaydroidDBusObject::statusChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void WaydroidDBusObject::downloadStatusChanged(double _t1, double _t2, double _t3)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1, _t2, _t3);
}

// SIGNAL 2
void WaydroidDBusObject::sessionStatusChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void WaydroidDBusObject::systemTypeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void WaydroidDBusObject::ipAddressChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void WaydroidDBusObject::androidIdChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void WaydroidDBusObject::multiWindowsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void WaydroidDBusObject::suspendChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void WaydroidDBusObject::ueventChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void WaydroidDBusObject::applicationAdded(QDBusObjectPath _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 9, nullptr, _t1);
}

// SIGNAL 10
void WaydroidDBusObject::applicationRemoved(QDBusObjectPath _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 10, nullptr, _t1);
}

// SIGNAL 11
void WaydroidDBusObject::actionFinished(const QString _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 11, nullptr, _t1);
}

// SIGNAL 12
void WaydroidDBusObject::actionFailed(const QString _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 12, nullptr, _t1);
}

// SIGNAL 13
void WaydroidDBusObject::errorOccurred(const QString _t1, const QString _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 13, nullptr, _t1, _t2);
}
QT_WARNING_POP
