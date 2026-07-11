/****************************************************************************
** Meta object code from reading C++ file 'waydroidadaptor.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "waydroidadaptor.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'waydroidadaptor.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN15WaydroidAdaptorE_t {};
} // unnamed namespace

template <> constexpr inline auto WaydroidAdaptor::qt_create_metaobjectdata<qt_meta_tag_ZN15WaydroidAdaptorE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "WaydroidAdaptor",
        "D-Bus Interface",
        "org.kde.plasmashell.Waydroid",
        "D-Bus Introspection",
        "  <interface name=\"org.kde.plasmashell.Waydroid\">\n    <signal n"
        "ame=\"statusChanged\"/>\n    <signal name=\"downloadStatusChanged\""
        ">\n      <arg direction=\"out\" type=\"d\" name=\"downloaded\"/>\n"
        "      <arg direction=\"out\" type=\"d\" name=\"total\"/>\n      <a"
        "rg direction=\"out\" type=\"d\" name=\"speed\"/>\n    </signal>\n "
        "   <signal name=\"sessionStatusChanged\"/>\n    <signal name=\"sys"
        "temTypeChanged\"/>\n    <signal name=\"ipAddressChanged\"/>\n    <"
        "signal name=\"androidIdChanged\"/>\n    <signal name=\"multiWindow"
        "sChanged\"/>\n    <signal name=\"suspendChanged\"/>\n    <signal n"
        "ame=\"ueventChanged\"/>\n    <signal name=\"applicationAdded\">\n "
        "     <arg direction=\"out\" type=\"o\" name=\"path\"/>\n    </sign"
        "al>\n    <signal name=\"applicationRemoved\">\n      <arg directio"
        "n=\"out\" type=\"o\" name=\"path\"/>\n    </signal>\n    <signal n"
        "ame=\"actionFinished\">\n      <arg direction=\"out\" type=\"s\" n"
        "ame=\"message\"/>\n    </signal>\n    <signal name=\"actionFailed\""
        ">\n      <arg direction=\"out\" type=\"s\" name=\"message\"/>\n   "
        " </signal>\n    <signal name=\"errorOccurred\">\n      <arg direct"
        "ion=\"out\" type=\"s\" name=\"title\"/>\n      <arg direction=\"ou"
        "t\" type=\"s\" name=\"message\"/>\n    </signal>\n    <method name"
        "=\"status\">\n      <arg direction=\"out\" type=\"i\"/>\n    </met"
        "hod>\n    <method name=\"sessionStatus\">\n      <arg direction=\""
        "out\" type=\"i\"/>\n    </method>\n    <method name=\"systemType\""
        ">\n      <arg direction=\"out\" type=\"i\"/>\n    </method>\n    <"
        "method name=\"ipAddress\">\n      <arg direction=\"out\" type=\"s\""
        "/>\n    </method>\n    <method name=\"androidId\">\n      <arg dir"
        "ection=\"out\" type=\"s\"/>\n    </method>\n    <method name=\"mul"
        "tiWindows\">\n      <arg direction=\"out\" type=\"b\"/>\n    </met"
        "hod>\n    <method name=\"setMultiWindows\">\n      <arg direction="
        "\"in\" type=\"b\" name=\"multiWindows\"/>\n    </method>\n    <met"
        "hod name=\"suspend\">\n      <arg direction=\"out\" type=\"b\"/>\n"
        "    </method>\n    <method name=\"setSuspend\">\n      <arg direct"
        "ion=\"in\" type=\"b\" name=\"suspend\"/>\n    </method>\n    <meth"
        "od name=\"uevent\">\n      <arg direction=\"out\" type=\"b\"/>\n  "
        "  </method>\n    <method name=\"setUevent\">\n      <arg direction"
        "=\"in\" type=\"b\" name=\"uevent\"/>\n    </method>\n    <method n"
        "ame=\"applications\">\n      <arg direction=\"out\" type=\"ao\"/>\n"
        "    </method>\n    <method name=\"initialize\">\n      <arg direct"
        "ion=\"in\" type=\"i\" name=\"systemType\"/>\n      <arg direction="
        "\"in\" type=\"i\" name=\"romType\"/>\n      <arg direction=\"in\" "
        "type=\"b\" name=\"forced\"/>\n    </method>\n    <method name=\"in"
        "itialize\">\n      <arg direction=\"in\" type=\"i\" name=\"systemT"
        "ype\"/>\n      <arg direction=\"in\" type=\"i\" name=\"romType\"/>"
        "\n    </method>\n    <method name=\"startSession\"/>\n    <method "
        "name=\"stopSession\"/>\n    <method name=\"resetWaydroid\"/>\n    "
        "<method name=\"installApk\">\n      <arg direction=\"in\" type=\"s"
        "\" name=\"apkFile\"/>\n    </method>\n    <method name=\"deleteApp"
        "lication\">\n      <arg direction=\"in\" type=\"s\" name=\"appId\""
        "/>\n    </method>\n    <method name=\"refreshSessionInfo\"/>\n    "
        "<method name=\"refreshAndroidId\"/>\n    <method name=\"refreshApp"
        "lications\"/>\n  </interface>\n",
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
        "applications",
        "QList<QDBusObjectPath>",
        "deleteApplication",
        "appId",
        "initialize",
        "systemType",
        "romType",
        "forced",
        "installApk",
        "apkFile",
        "ipAddress",
        "multiWindows",
        "refreshAndroidId",
        "refreshApplications",
        "refreshSessionInfo",
        "resetWaydroid",
        "sessionStatus",
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
        QtMocHelpers::SignalData<void(const QString &)>(5, 6, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 7 },
        }}),
        // Signal 'actionFinished'
        QtMocHelpers::SignalData<void(const QString &)>(8, 6, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 7 },
        }}),
        // Signal 'androidIdChanged'
        QtMocHelpers::SignalData<void()>(9, 6, QMC::AccessPublic, QMetaType::Void),
        // Signal 'applicationAdded'
        QtMocHelpers::SignalData<void(const QDBusObjectPath &)>(10, 6, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 11, 12 },
        }}),
        // Signal 'applicationRemoved'
        QtMocHelpers::SignalData<void(const QDBusObjectPath &)>(13, 6, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 11, 12 },
        }}),
        // Signal 'downloadStatusChanged'
        QtMocHelpers::SignalData<void(double, double, double)>(14, 6, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Double, 15 }, { QMetaType::Double, 16 }, { QMetaType::Double, 17 },
        }}),
        // Signal 'errorOccurred'
        QtMocHelpers::SignalData<void(const QString &, const QString &)>(18, 6, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 19 }, { QMetaType::QString, 7 },
        }}),
        // Signal 'ipAddressChanged'
        QtMocHelpers::SignalData<void()>(20, 6, QMC::AccessPublic, QMetaType::Void),
        // Signal 'multiWindowsChanged'
        QtMocHelpers::SignalData<void()>(21, 6, QMC::AccessPublic, QMetaType::Void),
        // Signal 'sessionStatusChanged'
        QtMocHelpers::SignalData<void()>(22, 6, QMC::AccessPublic, QMetaType::Void),
        // Signal 'statusChanged'
        QtMocHelpers::SignalData<void()>(23, 6, QMC::AccessPublic, QMetaType::Void),
        // Signal 'suspendChanged'
        QtMocHelpers::SignalData<void()>(24, 6, QMC::AccessPublic, QMetaType::Void),
        // Signal 'systemTypeChanged'
        QtMocHelpers::SignalData<void()>(25, 6, QMC::AccessPublic, QMetaType::Void),
        // Signal 'ueventChanged'
        QtMocHelpers::SignalData<void()>(26, 6, QMC::AccessPublic, QMetaType::Void),
        // Slot 'androidId'
        QtMocHelpers::SlotData<QString()>(27, 6, QMC::AccessPublic, QMetaType::QString),
        // Slot 'applications'
        QtMocHelpers::SlotData<QList<QDBusObjectPath>()>(28, 6, QMC::AccessPublic, 0x80000000 | 29),
        // Slot 'deleteApplication'
        QtMocHelpers::SlotData<void(const QString &)>(30, 6, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 31 },
        }}),
        // Slot 'initialize'
        QtMocHelpers::SlotData<void(int, int)>(32, 6, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 33 }, { QMetaType::Int, 34 },
        }}),
        // Slot 'initialize'
        QtMocHelpers::SlotData<void(int, int, bool)>(32, 6, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 33 }, { QMetaType::Int, 34 }, { QMetaType::Bool, 35 },
        }}),
        // Slot 'installApk'
        QtMocHelpers::SlotData<void(const QString &)>(36, 6, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 37 },
        }}),
        // Slot 'ipAddress'
        QtMocHelpers::SlotData<QString()>(38, 6, QMC::AccessPublic, QMetaType::QString),
        // Slot 'multiWindows'
        QtMocHelpers::SlotData<bool()>(39, 6, QMC::AccessPublic, QMetaType::Bool),
        // Slot 'refreshAndroidId'
        QtMocHelpers::SlotData<void()>(40, 6, QMC::AccessPublic, QMetaType::Void),
        // Slot 'refreshApplications'
        QtMocHelpers::SlotData<void()>(41, 6, QMC::AccessPublic, QMetaType::Void),
        // Slot 'refreshSessionInfo'
        QtMocHelpers::SlotData<void()>(42, 6, QMC::AccessPublic, QMetaType::Void),
        // Slot 'resetWaydroid'
        QtMocHelpers::SlotData<void()>(43, 6, QMC::AccessPublic, QMetaType::Void),
        // Slot 'sessionStatus'
        QtMocHelpers::SlotData<int()>(44, 6, QMC::AccessPublic, QMetaType::Int),
        // Slot 'setMultiWindows'
        QtMocHelpers::SlotData<void(bool)>(45, 6, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 39 },
        }}),
        // Slot 'setSuspend'
        QtMocHelpers::SlotData<void(bool)>(46, 6, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 47 },
        }}),
        // Slot 'setUevent'
        QtMocHelpers::SlotData<void(bool)>(48, 6, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 49 },
        }}),
        // Slot 'startSession'
        QtMocHelpers::SlotData<void()>(50, 6, QMC::AccessPublic, QMetaType::Void),
        // Slot 'status'
        QtMocHelpers::SlotData<int()>(51, 6, QMC::AccessPublic, QMetaType::Int),
        // Slot 'stopSession'
        QtMocHelpers::SlotData<void()>(52, 6, QMC::AccessPublic, QMetaType::Void),
        // Slot 'suspend'
        QtMocHelpers::SlotData<bool()>(47, 6, QMC::AccessPublic, QMetaType::Bool),
        // Slot 'systemType'
        QtMocHelpers::SlotData<int()>(33, 6, QMC::AccessPublic, QMetaType::Int),
        // Slot 'uevent'
        QtMocHelpers::SlotData<bool()>(49, 6, QMC::AccessPublic, QMetaType::Bool),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    QtMocHelpers::UintData qt_constructors {};
    QtMocHelpers::ClassInfos qt_classinfo({
            {    1,    2 },
            {    3,    4 },
    });
    return QtMocHelpers::metaObjectData<WaydroidAdaptor, qt_meta_tag_ZN15WaydroidAdaptorE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums, qt_constructors, qt_classinfo);
}
Q_CONSTINIT const QMetaObject WaydroidAdaptor::staticMetaObject = { {
    QMetaObject::SuperData::link<QDBusAbstractAdaptor::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN15WaydroidAdaptorE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN15WaydroidAdaptorE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN15WaydroidAdaptorE_t>.metaTypes,
    nullptr
} };

void WaydroidAdaptor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<WaydroidAdaptor *>(_o);
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
        case 14: { QString _r = _t->androidId();
            if (_a[0]) *reinterpret_cast<QString*>(_a[0]) = std::move(_r); }  break;
        case 15: { QList<QDBusObjectPath> _r = _t->applications();
            if (_a[0]) *reinterpret_cast<QList<QDBusObjectPath>*>(_a[0]) = std::move(_r); }  break;
        case 16: _t->deleteApplication((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 17: _t->initialize((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2]))); break;
        case 18: _t->initialize((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[3]))); break;
        case 19: _t->installApk((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 20: { QString _r = _t->ipAddress();
            if (_a[0]) *reinterpret_cast<QString*>(_a[0]) = std::move(_r); }  break;
        case 21: { bool _r = _t->multiWindows();
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 22: _t->refreshAndroidId(); break;
        case 23: _t->refreshApplications(); break;
        case 24: _t->refreshSessionInfo(); break;
        case 25: _t->resetWaydroid(); break;
        case 26: { int _r = _t->sessionStatus();
            if (_a[0]) *reinterpret_cast<int*>(_a[0]) = std::move(_r); }  break;
        case 27: _t->setMultiWindows((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 28: _t->setSuspend((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 29: _t->setUevent((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 30: _t->startSession(); break;
        case 31: { int _r = _t->status();
            if (_a[0]) *reinterpret_cast<int*>(_a[0]) = std::move(_r); }  break;
        case 32: _t->stopSession(); break;
        case 33: { bool _r = _t->suspend();
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 34: { int _r = _t->systemType();
            if (_a[0]) *reinterpret_cast<int*>(_a[0]) = std::move(_r); }  break;
        case 35: { bool _r = _t->uevent();
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (WaydroidAdaptor::*)(const QString & )>(_a, &WaydroidAdaptor::actionFailed, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (WaydroidAdaptor::*)(const QString & )>(_a, &WaydroidAdaptor::actionFinished, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (WaydroidAdaptor::*)()>(_a, &WaydroidAdaptor::androidIdChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (WaydroidAdaptor::*)(const QDBusObjectPath & )>(_a, &WaydroidAdaptor::applicationAdded, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (WaydroidAdaptor::*)(const QDBusObjectPath & )>(_a, &WaydroidAdaptor::applicationRemoved, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (WaydroidAdaptor::*)(double , double , double )>(_a, &WaydroidAdaptor::downloadStatusChanged, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (WaydroidAdaptor::*)(const QString & , const QString & )>(_a, &WaydroidAdaptor::errorOccurred, 6))
            return;
        if (QtMocHelpers::indexOfMethod<void (WaydroidAdaptor::*)()>(_a, &WaydroidAdaptor::ipAddressChanged, 7))
            return;
        if (QtMocHelpers::indexOfMethod<void (WaydroidAdaptor::*)()>(_a, &WaydroidAdaptor::multiWindowsChanged, 8))
            return;
        if (QtMocHelpers::indexOfMethod<void (WaydroidAdaptor::*)()>(_a, &WaydroidAdaptor::sessionStatusChanged, 9))
            return;
        if (QtMocHelpers::indexOfMethod<void (WaydroidAdaptor::*)()>(_a, &WaydroidAdaptor::statusChanged, 10))
            return;
        if (QtMocHelpers::indexOfMethod<void (WaydroidAdaptor::*)()>(_a, &WaydroidAdaptor::suspendChanged, 11))
            return;
        if (QtMocHelpers::indexOfMethod<void (WaydroidAdaptor::*)()>(_a, &WaydroidAdaptor::systemTypeChanged, 12))
            return;
        if (QtMocHelpers::indexOfMethod<void (WaydroidAdaptor::*)()>(_a, &WaydroidAdaptor::ueventChanged, 13))
            return;
    }
}

const QMetaObject *WaydroidAdaptor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WaydroidAdaptor::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN15WaydroidAdaptorE_t>.strings))
        return static_cast<void*>(this);
    return QDBusAbstractAdaptor::qt_metacast(_clname);
}

int WaydroidAdaptor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDBusAbstractAdaptor::qt_metacall(_c, _id, _a);
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
void WaydroidAdaptor::actionFailed(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void WaydroidAdaptor::actionFinished(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}

// SIGNAL 2
void WaydroidAdaptor::androidIdChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void WaydroidAdaptor::applicationAdded(const QDBusObjectPath & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 3, nullptr, _t1);
}

// SIGNAL 4
void WaydroidAdaptor::applicationRemoved(const QDBusObjectPath & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 4, nullptr, _t1);
}

// SIGNAL 5
void WaydroidAdaptor::downloadStatusChanged(double _t1, double _t2, double _t3)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 5, nullptr, _t1, _t2, _t3);
}

// SIGNAL 6
void WaydroidAdaptor::errorOccurred(const QString & _t1, const QString & _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 6, nullptr, _t1, _t2);
}

// SIGNAL 7
void WaydroidAdaptor::ipAddressChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void WaydroidAdaptor::multiWindowsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void WaydroidAdaptor::sessionStatusChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void WaydroidAdaptor::statusChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}

// SIGNAL 11
void WaydroidAdaptor::suspendChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 11, nullptr);
}

// SIGNAL 12
void WaydroidAdaptor::systemTypeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 12, nullptr);
}

// SIGNAL 13
void WaydroidAdaptor::ueventChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 13, nullptr);
}
QT_WARNING_POP
