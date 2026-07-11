/****************************************************************************
** Meta object code from reading C++ file 'waydroiddbusclient.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../components/waydroidintegrationplugin/waydroiddbusclient.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'waydroiddbusclient.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN18WaydroidDBusClientE_t {};
} // unnamed namespace

template <> constexpr inline auto WaydroidDBusClient::qt_create_metaobjectdata<qt_meta_tag_ZN18WaydroidDBusClientE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "WaydroidDBusClient",
        "QML.Element",
        "auto",
        "QML.Singleton",
        "true",
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
        "actionFinished",
        "message",
        "actionFailed",
        "errorOccurred",
        "title",
        "updateStatus",
        "updateSessionStatus",
        "updateSystemType",
        "updateIpAddress",
        "updateAndroidId",
        "updateMultiWindows",
        "updateSuspend",
        "updateUevent",
        "initialize",
        "QCoro::QmlTask",
        "SystemType",
        "systemType",
        "RomType",
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
        "copyToClipboard",
        "text",
        "status",
        "Status",
        "sessionStatus",
        "SessionStatus",
        "ipAddress",
        "androidId",
        "multiWindows",
        "suspend",
        "uevent",
        "applicationListModel",
        "WaydroidApplicationListModel*",
        "NotSupported",
        "NotInitialized",
        "Initializing",
        "Initialized",
        "Resetting",
        "SessionStopped",
        "SessionStarting",
        "SessionRunning",
        "Vanilla",
        "Foss",
        "Gapps",
        "UnknownSystemType",
        "Lineage",
        "Bliss"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'statusChanged'
        QtMocHelpers::SignalData<void()>(5, 6, QMC::AccessPublic, QMetaType::Void),
        // Signal 'downloadStatusChanged'
        QtMocHelpers::SignalData<void(double, double, double)>(7, 6, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Double, 8 }, { QMetaType::Double, 9 }, { QMetaType::Double, 10 },
        }}),
        // Signal 'sessionStatusChanged'
        QtMocHelpers::SignalData<void()>(11, 6, QMC::AccessPublic, QMetaType::Void),
        // Signal 'systemTypeChanged'
        QtMocHelpers::SignalData<void()>(12, 6, QMC::AccessPublic, QMetaType::Void),
        // Signal 'ipAddressChanged'
        QtMocHelpers::SignalData<void()>(13, 6, QMC::AccessPublic, QMetaType::Void),
        // Signal 'androidIdChanged'
        QtMocHelpers::SignalData<void()>(14, 6, QMC::AccessPublic, QMetaType::Void),
        // Signal 'multiWindowsChanged'
        QtMocHelpers::SignalData<void()>(15, 6, QMC::AccessPublic, QMetaType::Void),
        // Signal 'suspendChanged'
        QtMocHelpers::SignalData<void()>(16, 6, QMC::AccessPublic, QMetaType::Void),
        // Signal 'ueventChanged'
        QtMocHelpers::SignalData<void()>(17, 6, QMC::AccessPublic, QMetaType::Void),
        // Signal 'actionFinished'
        QtMocHelpers::SignalData<void(const QString)>(18, 6, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 19 },
        }}),
        // Signal 'actionFailed'
        QtMocHelpers::SignalData<void(const QString)>(20, 6, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 19 },
        }}),
        // Signal 'errorOccurred'
        QtMocHelpers::SignalData<void(const QString, const QString)>(21, 6, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 22 }, { QMetaType::QString, 19 },
        }}),
        // Slot 'updateStatus'
        QtMocHelpers::SlotData<void()>(23, 6, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'updateSessionStatus'
        QtMocHelpers::SlotData<void()>(24, 6, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'updateSystemType'
        QtMocHelpers::SlotData<void()>(25, 6, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'updateIpAddress'
        QtMocHelpers::SlotData<void()>(26, 6, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'updateAndroidId'
        QtMocHelpers::SlotData<void()>(27, 6, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'updateMultiWindows'
        QtMocHelpers::SlotData<void()>(28, 6, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'updateSuspend'
        QtMocHelpers::SlotData<void()>(29, 6, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'updateUevent'
        QtMocHelpers::SlotData<void()>(30, 6, QMC::AccessPrivate, QMetaType::Void),
        // Method 'initialize'
        QtMocHelpers::MethodData<QCoro::QmlTask(const SystemType, const RomType, const bool)>(31, 6, QMC::AccessPublic, 0x80000000 | 32, {{
            { 0x80000000 | 33, 34 }, { 0x80000000 | 35, 36 }, { QMetaType::Bool, 37 },
        }}),
        // Method 'initialize'
        QtMocHelpers::MethodData<QCoro::QmlTask(const SystemType, const RomType)>(31, 6, QMC::AccessPublic | QMC::MethodCloned, 0x80000000 | 32, {{
            { 0x80000000 | 33, 34 }, { 0x80000000 | 35, 36 },
        }}),
        // Method 'startSession'
        QtMocHelpers::MethodData<QCoro::QmlTask()>(38, 6, QMC::AccessPublic, 0x80000000 | 32),
        // Method 'stopSession'
        QtMocHelpers::MethodData<QCoro::QmlTask()>(39, 6, QMC::AccessPublic, 0x80000000 | 32),
        // Method 'resetWaydroid'
        QtMocHelpers::MethodData<QCoro::QmlTask()>(40, 6, QMC::AccessPublic, 0x80000000 | 32),
        // Method 'installApk'
        QtMocHelpers::MethodData<QCoro::QmlTask(const QString)>(41, 6, QMC::AccessPublic, 0x80000000 | 32, {{
            { QMetaType::QString, 42 },
        }}),
        // Method 'deleteApplication'
        QtMocHelpers::MethodData<QCoro::QmlTask(const QString)>(43, 6, QMC::AccessPublic, 0x80000000 | 32, {{
            { QMetaType::QString, 44 },
        }}),
        // Method 'refreshSessionInfo'
        QtMocHelpers::MethodData<QCoro::QmlTask()>(45, 6, QMC::AccessPublic, 0x80000000 | 32),
        // Method 'refreshAndroidId'
        QtMocHelpers::MethodData<QCoro::QmlTask()>(46, 6, QMC::AccessPublic, 0x80000000 | 32),
        // Method 'refreshApplications'
        QtMocHelpers::MethodData<QCoro::QmlTask()>(47, 6, QMC::AccessPublic, 0x80000000 | 32),
        // Method 'copyToClipboard'
        QtMocHelpers::MethodData<void(const QString)>(48, 6, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 49 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'status'
        QtMocHelpers::PropertyData<enum Status>(50, 0x80000000 | 51, QMC::DefaultPropertyFlags | QMC::EnumOrFlag, 0),
        // property 'sessionStatus'
        QtMocHelpers::PropertyData<enum SessionStatus>(52, 0x80000000 | 53, QMC::DefaultPropertyFlags | QMC::EnumOrFlag, 2),
        // property 'systemType'
        QtMocHelpers::PropertyData<enum SystemType>(34, 0x80000000 | 33, QMC::DefaultPropertyFlags | QMC::EnumOrFlag, 3),
        // property 'ipAddress'
        QtMocHelpers::PropertyData<QString>(54, QMetaType::QString, QMC::DefaultPropertyFlags, 4),
        // property 'androidId'
        QtMocHelpers::PropertyData<QString>(55, QMetaType::QString, QMC::DefaultPropertyFlags, 5),
        // property 'multiWindows'
        QtMocHelpers::PropertyData<bool>(56, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 6),
        // property 'suspend'
        QtMocHelpers::PropertyData<bool>(57, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 7),
        // property 'uevent'
        QtMocHelpers::PropertyData<bool>(58, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 8),
        // property 'applicationListModel'
        QtMocHelpers::PropertyData<WaydroidApplicationListModel*>(59, 0x80000000 | 60, QMC::DefaultPropertyFlags | QMC::EnumOrFlag | QMC::Constant),
    };
    QtMocHelpers::UintData qt_enums {
        // enum 'Status'
        QtMocHelpers::EnumData<enum Status>(51, 51, QMC::EnumFlags{}).add({
            {   61, Status::NotSupported },
            {   62, Status::NotInitialized },
            {   63, Status::Initializing },
            {   64, Status::Initialized },
            {   65, Status::Resetting },
        }),
        // enum 'SessionStatus'
        QtMocHelpers::EnumData<enum SessionStatus>(53, 53, QMC::EnumFlags{}).add({
            {   66, SessionStatus::SessionStopped },
            {   67, SessionStatus::SessionStarting },
            {   68, SessionStatus::SessionRunning },
        }),
        // enum 'SystemType'
        QtMocHelpers::EnumData<enum SystemType>(33, 33, QMC::EnumFlags{}).add({
            {   69, SystemType::Vanilla },
            {   70, SystemType::Foss },
            {   71, SystemType::Gapps },
            {   72, SystemType::UnknownSystemType },
        }),
        // enum 'RomType'
        QtMocHelpers::EnumData<enum RomType>(35, 35, QMC::EnumFlags{}).add({
            {   73, RomType::Lineage },
            {   74, RomType::Bliss },
        }),
    };
    QtMocHelpers::UintData qt_constructors {};
    QtMocHelpers::ClassInfos qt_classinfo({
            {    1,    2 },
            {    3,    4 },
    });
    return QtMocHelpers::metaObjectData<WaydroidDBusClient, void>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums, qt_constructors, qt_classinfo);
}
Q_CONSTINIT const QMetaObject WaydroidDBusClient::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN18WaydroidDBusClientE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN18WaydroidDBusClientE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN18WaydroidDBusClientE_t>.metaTypes,
    nullptr
} };

void WaydroidDBusClient::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<WaydroidDBusClient *>(_o);
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
        case 9: _t->actionFinished((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 10: _t->actionFailed((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 11: _t->errorOccurred((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2]))); break;
        case 12: _t->updateStatus(); break;
        case 13: _t->updateSessionStatus(); break;
        case 14: _t->updateSystemType(); break;
        case 15: _t->updateIpAddress(); break;
        case 16: _t->updateAndroidId(); break;
        case 17: _t->updateMultiWindows(); break;
        case 18: _t->updateSuspend(); break;
        case 19: _t->updateUevent(); break;
        case 20: { QCoro::QmlTask _r = _t->initialize((*reinterpret_cast<std::add_pointer_t<enum SystemType>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<enum RomType>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[3])));
            if (_a[0]) *reinterpret_cast<QCoro::QmlTask*>(_a[0]) = std::move(_r); }  break;
        case 21: { QCoro::QmlTask _r = _t->initialize((*reinterpret_cast<std::add_pointer_t<enum SystemType>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<enum RomType>>(_a[2])));
            if (_a[0]) *reinterpret_cast<QCoro::QmlTask*>(_a[0]) = std::move(_r); }  break;
        case 22: { QCoro::QmlTask _r = _t->startSession();
            if (_a[0]) *reinterpret_cast<QCoro::QmlTask*>(_a[0]) = std::move(_r); }  break;
        case 23: { QCoro::QmlTask _r = _t->stopSession();
            if (_a[0]) *reinterpret_cast<QCoro::QmlTask*>(_a[0]) = std::move(_r); }  break;
        case 24: { QCoro::QmlTask _r = _t->resetWaydroid();
            if (_a[0]) *reinterpret_cast<QCoro::QmlTask*>(_a[0]) = std::move(_r); }  break;
        case 25: { QCoro::QmlTask _r = _t->installApk((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QCoro::QmlTask*>(_a[0]) = std::move(_r); }  break;
        case 26: { QCoro::QmlTask _r = _t->deleteApplication((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QCoro::QmlTask*>(_a[0]) = std::move(_r); }  break;
        case 27: { QCoro::QmlTask _r = _t->refreshSessionInfo();
            if (_a[0]) *reinterpret_cast<QCoro::QmlTask*>(_a[0]) = std::move(_r); }  break;
        case 28: { QCoro::QmlTask _r = _t->refreshAndroidId();
            if (_a[0]) *reinterpret_cast<QCoro::QmlTask*>(_a[0]) = std::move(_r); }  break;
        case 29: { QCoro::QmlTask _r = _t->refreshApplications();
            if (_a[0]) *reinterpret_cast<QCoro::QmlTask*>(_a[0]) = std::move(_r); }  break;
        case 30: _t->copyToClipboard((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (WaydroidDBusClient::*)()>(_a, &WaydroidDBusClient::statusChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (WaydroidDBusClient::*)(double , double , double )>(_a, &WaydroidDBusClient::downloadStatusChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (WaydroidDBusClient::*)()>(_a, &WaydroidDBusClient::sessionStatusChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (WaydroidDBusClient::*)()>(_a, &WaydroidDBusClient::systemTypeChanged, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (WaydroidDBusClient::*)()>(_a, &WaydroidDBusClient::ipAddressChanged, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (WaydroidDBusClient::*)()>(_a, &WaydroidDBusClient::androidIdChanged, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (WaydroidDBusClient::*)()>(_a, &WaydroidDBusClient::multiWindowsChanged, 6))
            return;
        if (QtMocHelpers::indexOfMethod<void (WaydroidDBusClient::*)()>(_a, &WaydroidDBusClient::suspendChanged, 7))
            return;
        if (QtMocHelpers::indexOfMethod<void (WaydroidDBusClient::*)()>(_a, &WaydroidDBusClient::ueventChanged, 8))
            return;
        if (QtMocHelpers::indexOfMethod<void (WaydroidDBusClient::*)(const QString )>(_a, &WaydroidDBusClient::actionFinished, 9))
            return;
        if (QtMocHelpers::indexOfMethod<void (WaydroidDBusClient::*)(const QString )>(_a, &WaydroidDBusClient::actionFailed, 10))
            return;
        if (QtMocHelpers::indexOfMethod<void (WaydroidDBusClient::*)(const QString , const QString )>(_a, &WaydroidDBusClient::errorOccurred, 11))
            return;
    }
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 8:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< WaydroidApplicationListModel* >(); break;
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<enum Status*>(_v) = _t->status(); break;
        case 1: *reinterpret_cast<enum SessionStatus*>(_v) = _t->sessionStatus(); break;
        case 2: *reinterpret_cast<enum SystemType*>(_v) = _t->systemType(); break;
        case 3: *reinterpret_cast<QString*>(_v) = _t->ipAddress(); break;
        case 4: *reinterpret_cast<QString*>(_v) = _t->androidId(); break;
        case 5: *reinterpret_cast<bool*>(_v) = _t->multiWindows(); break;
        case 6: *reinterpret_cast<bool*>(_v) = _t->suspend(); break;
        case 7: *reinterpret_cast<bool*>(_v) = _t->uevent(); break;
        case 8: *reinterpret_cast<WaydroidApplicationListModel**>(_v) = _t->applicationListModel(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 5: _t->setMultiWindows(*reinterpret_cast<bool*>(_v)); break;
        case 6: _t->setSuspend(*reinterpret_cast<bool*>(_v)); break;
        case 7: _t->setUevent(*reinterpret_cast<bool*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *WaydroidDBusClient::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WaydroidDBusClient::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN18WaydroidDBusClientE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int WaydroidDBusClient::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 31)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 31;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 31)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 31;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void WaydroidDBusClient::statusChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void WaydroidDBusClient::downloadStatusChanged(double _t1, double _t2, double _t3)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1, _t2, _t3);
}

// SIGNAL 2
void WaydroidDBusClient::sessionStatusChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void WaydroidDBusClient::systemTypeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void WaydroidDBusClient::ipAddressChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void WaydroidDBusClient::androidIdChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void WaydroidDBusClient::multiWindowsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void WaydroidDBusClient::suspendChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void WaydroidDBusClient::ueventChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void WaydroidDBusClient::actionFinished(const QString _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 9, nullptr, _t1);
}

// SIGNAL 10
void WaydroidDBusClient::actionFailed(const QString _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 10, nullptr, _t1);
}

// SIGNAL 11
void WaydroidDBusClient::errorOccurred(const QString _t1, const QString _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 11, nullptr, _t1, _t2);
}
QT_WARNING_POP
