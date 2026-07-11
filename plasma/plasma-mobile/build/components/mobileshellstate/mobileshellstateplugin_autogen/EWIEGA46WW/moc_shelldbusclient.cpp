/****************************************************************************
** Meta object code from reading C++ file 'shelldbusclient.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../components/mobileshellstate/shelldbusclient.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'shelldbusclient.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN15ShellDBusClientE_t {};
} // unnamed namespace

template <> constexpr inline auto ShellDBusClient::qt_create_metaobjectdata<qt_meta_tag_ZN15ShellDBusClientE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "ShellDBusClient",
        "QML.Element",
        "auto",
        "QML.Singleton",
        "true",
        "panelStateChanged",
        "",
        "isActionDrawerOpenChanged",
        "isVolumeOSDOpenChanged",
        "isNotificationPopupDrawerOpenChanged",
        "doNotDisturbChanged",
        "isTaskSwitcherVisibleChanged",
        "openActionDrawerRequested",
        "closeActionDrawerRequested",
        "appLaunchMaximizePanelAnimationTriggered",
        "screen",
        "color",
        "openHomeScreenRequested",
        "resetHomeScreenPositionRequested",
        "showVolumeOSDRequested",
        "openLockScreenKeypadRequested",
        "updateDoNotDisturb",
        "updateIsActionDrawerOpen",
        "updateIsVolumeOSDOpen",
        "updateIsNotificationPopupDrawerOpen",
        "updateIsTaskSwitcherVisible",
        "updatePanelState",
        "openActionDrawer",
        "closeActionDrawer",
        "openAppLaunchAnimationWithPosition",
        "splashIcon",
        "title",
        "storageId",
        "x",
        "y",
        "sourceIconSize",
        "triggerAppLaunchMaximizePanelAnimation",
        "openHomeScreen",
        "resetHomeScreenPosition",
        "showVolumeOSD",
        "openLockScreenKeypad",
        "doNotDisturb",
        "isActionDrawerOpen",
        "isVolumeOSDOpen",
        "isNotificationPopupDrawerOpen",
        "isTaskSwitcherVisible",
        "panelState"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'panelStateChanged'
        QtMocHelpers::SignalData<void()>(5, 6, QMC::AccessPublic, QMetaType::Void),
        // Signal 'isActionDrawerOpenChanged'
        QtMocHelpers::SignalData<void()>(7, 6, QMC::AccessPublic, QMetaType::Void),
        // Signal 'isVolumeOSDOpenChanged'
        QtMocHelpers::SignalData<void()>(8, 6, QMC::AccessPublic, QMetaType::Void),
        // Signal 'isNotificationPopupDrawerOpenChanged'
        QtMocHelpers::SignalData<void()>(9, 6, QMC::AccessPublic, QMetaType::Void),
        // Signal 'doNotDisturbChanged'
        QtMocHelpers::SignalData<void()>(10, 6, QMC::AccessPublic, QMetaType::Void),
        // Signal 'isTaskSwitcherVisibleChanged'
        QtMocHelpers::SignalData<void()>(11, 6, QMC::AccessPublic, QMetaType::Void),
        // Signal 'openActionDrawerRequested'
        QtMocHelpers::SignalData<void()>(12, 6, QMC::AccessPublic, QMetaType::Void),
        // Signal 'closeActionDrawerRequested'
        QtMocHelpers::SignalData<void()>(13, 6, QMC::AccessPublic, QMetaType::Void),
        // Signal 'appLaunchMaximizePanelAnimationTriggered'
        QtMocHelpers::SignalData<void(int, QString)>(14, 6, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 15 }, { QMetaType::QString, 16 },
        }}),
        // Signal 'openHomeScreenRequested'
        QtMocHelpers::SignalData<void()>(17, 6, QMC::AccessPublic, QMetaType::Void),
        // Signal 'resetHomeScreenPositionRequested'
        QtMocHelpers::SignalData<void()>(18, 6, QMC::AccessPublic, QMetaType::Void),
        // Signal 'showVolumeOSDRequested'
        QtMocHelpers::SignalData<void()>(19, 6, QMC::AccessPublic, QMetaType::Void),
        // Signal 'openLockScreenKeypadRequested'
        QtMocHelpers::SignalData<void()>(20, 6, QMC::AccessPublic, QMetaType::Void),
        // Slot 'updateDoNotDisturb'
        QtMocHelpers::SlotData<void()>(21, 6, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'updateIsActionDrawerOpen'
        QtMocHelpers::SlotData<void()>(22, 6, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'updateIsVolumeOSDOpen'
        QtMocHelpers::SlotData<void()>(23, 6, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'updateIsNotificationPopupDrawerOpen'
        QtMocHelpers::SlotData<void()>(24, 6, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'updateIsTaskSwitcherVisible'
        QtMocHelpers::SlotData<void()>(25, 6, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'updatePanelState'
        QtMocHelpers::SlotData<void()>(26, 6, QMC::AccessPrivate, QMetaType::Void),
        // Method 'openActionDrawer'
        QtMocHelpers::MethodData<void()>(27, 6, QMC::AccessPublic, QMetaType::Void),
        // Method 'closeActionDrawer'
        QtMocHelpers::MethodData<void()>(28, 6, QMC::AccessPublic, QMetaType::Void),
        // Method 'openAppLaunchAnimationWithPosition'
        QtMocHelpers::MethodData<void(int, QString, QString, QString, qreal, qreal, qreal)>(29, 6, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 15 }, { QMetaType::QString, 30 }, { QMetaType::QString, 31 }, { QMetaType::QString, 32 },
            { QMetaType::QReal, 33 }, { QMetaType::QReal, 34 }, { QMetaType::QReal, 35 },
        }}),
        // Method 'triggerAppLaunchMaximizePanelAnimation'
        QtMocHelpers::MethodData<void(int, QString)>(36, 6, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 15 }, { QMetaType::QString, 16 },
        }}),
        // Method 'openHomeScreen'
        QtMocHelpers::MethodData<void()>(37, 6, QMC::AccessPublic, QMetaType::Void),
        // Method 'resetHomeScreenPosition'
        QtMocHelpers::MethodData<void()>(38, 6, QMC::AccessPublic, QMetaType::Void),
        // Method 'showVolumeOSD'
        QtMocHelpers::MethodData<void()>(39, 6, QMC::AccessPublic, QMetaType::Void),
        // Method 'openLockScreenKeypad'
        QtMocHelpers::MethodData<void()>(40, 6, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'doNotDisturb'
        QtMocHelpers::PropertyData<bool>(41, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 4),
        // property 'isActionDrawerOpen'
        QtMocHelpers::PropertyData<bool>(42, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 1),
        // property 'isVolumeOSDOpen'
        QtMocHelpers::PropertyData<bool>(43, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 2),
        // property 'isNotificationPopupDrawerOpen'
        QtMocHelpers::PropertyData<bool>(44, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 3),
        // property 'isTaskSwitcherVisible'
        QtMocHelpers::PropertyData<bool>(45, QMetaType::Bool, QMC::DefaultPropertyFlags, 5),
        // property 'panelState'
        QtMocHelpers::PropertyData<QString>(46, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 0),
    };
    QtMocHelpers::UintData qt_enums {
    };
    QtMocHelpers::UintData qt_constructors {};
    QtMocHelpers::ClassInfos qt_classinfo({
            {    1,    2 },
            {    3,    4 },
    });
    return QtMocHelpers::metaObjectData<ShellDBusClient, void>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums, qt_constructors, qt_classinfo);
}
Q_CONSTINIT const QMetaObject ShellDBusClient::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN15ShellDBusClientE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN15ShellDBusClientE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN15ShellDBusClientE_t>.metaTypes,
    nullptr
} };

void ShellDBusClient::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<ShellDBusClient *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->panelStateChanged(); break;
        case 1: _t->isActionDrawerOpenChanged(); break;
        case 2: _t->isVolumeOSDOpenChanged(); break;
        case 3: _t->isNotificationPopupDrawerOpenChanged(); break;
        case 4: _t->doNotDisturbChanged(); break;
        case 5: _t->isTaskSwitcherVisibleChanged(); break;
        case 6: _t->openActionDrawerRequested(); break;
        case 7: _t->closeActionDrawerRequested(); break;
        case 8: _t->appLaunchMaximizePanelAnimationTriggered((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2]))); break;
        case 9: _t->openHomeScreenRequested(); break;
        case 10: _t->resetHomeScreenPositionRequested(); break;
        case 11: _t->showVolumeOSDRequested(); break;
        case 12: _t->openLockScreenKeypadRequested(); break;
        case 13: _t->updateDoNotDisturb(); break;
        case 14: _t->updateIsActionDrawerOpen(); break;
        case 15: _t->updateIsVolumeOSDOpen(); break;
        case 16: _t->updateIsNotificationPopupDrawerOpen(); break;
        case 17: _t->updateIsTaskSwitcherVisible(); break;
        case 18: _t->updatePanelState(); break;
        case 19: _t->openActionDrawer(); break;
        case 20: _t->closeActionDrawer(); break;
        case 21: _t->openAppLaunchAnimationWithPosition((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[4])),(*reinterpret_cast<std::add_pointer_t<qreal>>(_a[5])),(*reinterpret_cast<std::add_pointer_t<qreal>>(_a[6])),(*reinterpret_cast<std::add_pointer_t<qreal>>(_a[7]))); break;
        case 22: _t->triggerAppLaunchMaximizePanelAnimation((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2]))); break;
        case 23: _t->openHomeScreen(); break;
        case 24: _t->resetHomeScreenPosition(); break;
        case 25: _t->showVolumeOSD(); break;
        case 26: _t->openLockScreenKeypad(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (ShellDBusClient::*)()>(_a, &ShellDBusClient::panelStateChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (ShellDBusClient::*)()>(_a, &ShellDBusClient::isActionDrawerOpenChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (ShellDBusClient::*)()>(_a, &ShellDBusClient::isVolumeOSDOpenChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (ShellDBusClient::*)()>(_a, &ShellDBusClient::isNotificationPopupDrawerOpenChanged, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (ShellDBusClient::*)()>(_a, &ShellDBusClient::doNotDisturbChanged, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (ShellDBusClient::*)()>(_a, &ShellDBusClient::isTaskSwitcherVisibleChanged, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (ShellDBusClient::*)()>(_a, &ShellDBusClient::openActionDrawerRequested, 6))
            return;
        if (QtMocHelpers::indexOfMethod<void (ShellDBusClient::*)()>(_a, &ShellDBusClient::closeActionDrawerRequested, 7))
            return;
        if (QtMocHelpers::indexOfMethod<void (ShellDBusClient::*)(int , QString )>(_a, &ShellDBusClient::appLaunchMaximizePanelAnimationTriggered, 8))
            return;
        if (QtMocHelpers::indexOfMethod<void (ShellDBusClient::*)()>(_a, &ShellDBusClient::openHomeScreenRequested, 9))
            return;
        if (QtMocHelpers::indexOfMethod<void (ShellDBusClient::*)()>(_a, &ShellDBusClient::resetHomeScreenPositionRequested, 10))
            return;
        if (QtMocHelpers::indexOfMethod<void (ShellDBusClient::*)()>(_a, &ShellDBusClient::showVolumeOSDRequested, 11))
            return;
        if (QtMocHelpers::indexOfMethod<void (ShellDBusClient::*)()>(_a, &ShellDBusClient::openLockScreenKeypadRequested, 12))
            return;
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<bool*>(_v) = _t->doNotDisturb(); break;
        case 1: *reinterpret_cast<bool*>(_v) = _t->isActionDrawerOpen(); break;
        case 2: *reinterpret_cast<bool*>(_v) = _t->isVolumeOSDOpen(); break;
        case 3: *reinterpret_cast<bool*>(_v) = _t->isNotificationPopupDrawerOpen(); break;
        case 4: *reinterpret_cast<bool*>(_v) = _t->isTaskSwitcherVisible(); break;
        case 5: *reinterpret_cast<QString*>(_v) = _t->panelState(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setDoNotDisturb(*reinterpret_cast<bool*>(_v)); break;
        case 1: _t->setIsActionDrawerOpen(*reinterpret_cast<bool*>(_v)); break;
        case 2: _t->setIsVolumeOSDOpen(*reinterpret_cast<bool*>(_v)); break;
        case 3: _t->setIsNotificationPopupDrawerOpen(*reinterpret_cast<bool*>(_v)); break;
        case 5: _t->setPanelState(*reinterpret_cast<QString*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *ShellDBusClient::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ShellDBusClient::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN15ShellDBusClientE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ShellDBusClient::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 27)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 27;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 27)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 27;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void ShellDBusClient::panelStateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void ShellDBusClient::isActionDrawerOpenChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void ShellDBusClient::isVolumeOSDOpenChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void ShellDBusClient::isNotificationPopupDrawerOpenChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void ShellDBusClient::doNotDisturbChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void ShellDBusClient::isTaskSwitcherVisibleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void ShellDBusClient::openActionDrawerRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void ShellDBusClient::closeActionDrawerRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void ShellDBusClient::appLaunchMaximizePanelAnimationTriggered(int _t1, QString _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 8, nullptr, _t1, _t2);
}

// SIGNAL 9
void ShellDBusClient::openHomeScreenRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void ShellDBusClient::resetHomeScreenPositionRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}

// SIGNAL 11
void ShellDBusClient::showVolumeOSDRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 11, nullptr);
}

// SIGNAL 12
void ShellDBusClient::openLockScreenKeypadRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 12, nullptr);
}
QT_WARNING_POP
