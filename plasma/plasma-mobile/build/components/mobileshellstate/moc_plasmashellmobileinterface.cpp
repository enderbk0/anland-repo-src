/****************************************************************************
** Meta object code from reading C++ file 'plasmashellmobileinterface.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "plasmashellmobileinterface.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'plasmashellmobileinterface.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN26OrgKdePlasmashellInterfaceE_t {};
} // unnamed namespace

template <> constexpr inline auto OrgKdePlasmashellInterface::qt_create_metaobjectdata<qt_meta_tag_ZN26OrgKdePlasmashellInterfaceE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "OrgKdePlasmashellInterface",
        "appLaunchMaximizePanelAnimationTriggered",
        "",
        "screen",
        "color",
        "closeActionDrawerRequested",
        "doNotDisturbChanged",
        "isActionDrawerOpenChanged",
        "isNotificationPopupDrawerOpenChanged",
        "isTaskSwitcherVisibleChanged",
        "isVolumeOSDOpenChanged",
        "openActionDrawerRequested",
        "openHomeScreenRequested",
        "openLockScreenKeypadRequested",
        "panelStateChanged",
        "resetHomeScreenPositionRequested",
        "showVolumeOSDRequested",
        "closeActionDrawer",
        "QDBusPendingReply<>",
        "doNotDisturb",
        "QDBusPendingReply<bool>",
        "isActionDrawerOpen",
        "isNotificationPopupDrawerOpen",
        "isTaskSwitcherVisible",
        "isVolumeOSDOpen",
        "openActionDrawer",
        "openAppLaunchAnimationWithPosition",
        "splashIcon",
        "title",
        "storageId",
        "x",
        "y",
        "sourceIconSize",
        "openHomeScreen",
        "openLockScreenKeypad",
        "panelState",
        "QDBusPendingReply<QString>",
        "resetHomeScreenPosition",
        "setDoNotDisturb",
        "value",
        "setIsActionDrawerOpen",
        "setIsNotificationPopupDrawerOpen",
        "setIsTaskSwitcherVisible",
        "setIsVolumeOSDOpen",
        "setPanelState",
        "state",
        "showVolumeOSD",
        "triggerAppLaunchMaximizePanelAnimation"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'appLaunchMaximizePanelAnimationTriggered'
        QtMocHelpers::SignalData<void(int, const QString &)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 3 }, { QMetaType::QString, 4 },
        }}),
        // Signal 'closeActionDrawerRequested'
        QtMocHelpers::SignalData<void()>(5, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'doNotDisturbChanged'
        QtMocHelpers::SignalData<void()>(6, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'isActionDrawerOpenChanged'
        QtMocHelpers::SignalData<void()>(7, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'isNotificationPopupDrawerOpenChanged'
        QtMocHelpers::SignalData<void()>(8, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'isTaskSwitcherVisibleChanged'
        QtMocHelpers::SignalData<void()>(9, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'isVolumeOSDOpenChanged'
        QtMocHelpers::SignalData<void()>(10, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'openActionDrawerRequested'
        QtMocHelpers::SignalData<void()>(11, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'openHomeScreenRequested'
        QtMocHelpers::SignalData<void()>(12, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'openLockScreenKeypadRequested'
        QtMocHelpers::SignalData<void()>(13, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'panelStateChanged'
        QtMocHelpers::SignalData<void()>(14, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'resetHomeScreenPositionRequested'
        QtMocHelpers::SignalData<void()>(15, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'showVolumeOSDRequested'
        QtMocHelpers::SignalData<void()>(16, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'closeActionDrawer'
        QtMocHelpers::SlotData<QDBusPendingReply<>()>(17, 2, QMC::AccessPublic, 0x80000000 | 18),
        // Slot 'doNotDisturb'
        QtMocHelpers::SlotData<QDBusPendingReply<bool>()>(19, 2, QMC::AccessPublic, 0x80000000 | 20),
        // Slot 'isActionDrawerOpen'
        QtMocHelpers::SlotData<QDBusPendingReply<bool>()>(21, 2, QMC::AccessPublic, 0x80000000 | 20),
        // Slot 'isNotificationPopupDrawerOpen'
        QtMocHelpers::SlotData<QDBusPendingReply<bool>()>(22, 2, QMC::AccessPublic, 0x80000000 | 20),
        // Slot 'isTaskSwitcherVisible'
        QtMocHelpers::SlotData<QDBusPendingReply<bool>()>(23, 2, QMC::AccessPublic, 0x80000000 | 20),
        // Slot 'isVolumeOSDOpen'
        QtMocHelpers::SlotData<QDBusPendingReply<bool>()>(24, 2, QMC::AccessPublic, 0x80000000 | 20),
        // Slot 'openActionDrawer'
        QtMocHelpers::SlotData<QDBusPendingReply<>()>(25, 2, QMC::AccessPublic, 0x80000000 | 18),
        // Slot 'openAppLaunchAnimationWithPosition'
        QtMocHelpers::SlotData<QDBusPendingReply<>(int, const QString &, const QString &, const QString &, double, double, double)>(26, 2, QMC::AccessPublic, 0x80000000 | 18, {{
            { QMetaType::Int, 3 }, { QMetaType::QString, 27 }, { QMetaType::QString, 28 }, { QMetaType::QString, 29 },
            { QMetaType::Double, 30 }, { QMetaType::Double, 31 }, { QMetaType::Double, 32 },
        }}),
        // Slot 'openHomeScreen'
        QtMocHelpers::SlotData<QDBusPendingReply<>()>(33, 2, QMC::AccessPublic, 0x80000000 | 18),
        // Slot 'openLockScreenKeypad'
        QtMocHelpers::SlotData<QDBusPendingReply<>()>(34, 2, QMC::AccessPublic, 0x80000000 | 18),
        // Slot 'panelState'
        QtMocHelpers::SlotData<QDBusPendingReply<QString>()>(35, 2, QMC::AccessPublic, 0x80000000 | 36),
        // Slot 'resetHomeScreenPosition'
        QtMocHelpers::SlotData<QDBusPendingReply<>()>(37, 2, QMC::AccessPublic, 0x80000000 | 18),
        // Slot 'setDoNotDisturb'
        QtMocHelpers::SlotData<QDBusPendingReply<>(bool)>(38, 2, QMC::AccessPublic, 0x80000000 | 18, {{
            { QMetaType::Bool, 39 },
        }}),
        // Slot 'setIsActionDrawerOpen'
        QtMocHelpers::SlotData<QDBusPendingReply<>(bool)>(40, 2, QMC::AccessPublic, 0x80000000 | 18, {{
            { QMetaType::Bool, 39 },
        }}),
        // Slot 'setIsNotificationPopupDrawerOpen'
        QtMocHelpers::SlotData<QDBusPendingReply<>(bool)>(41, 2, QMC::AccessPublic, 0x80000000 | 18, {{
            { QMetaType::Bool, 39 },
        }}),
        // Slot 'setIsTaskSwitcherVisible'
        QtMocHelpers::SlotData<QDBusPendingReply<>(bool)>(42, 2, QMC::AccessPublic, 0x80000000 | 18, {{
            { QMetaType::Bool, 39 },
        }}),
        // Slot 'setIsVolumeOSDOpen'
        QtMocHelpers::SlotData<QDBusPendingReply<>(bool)>(43, 2, QMC::AccessPublic, 0x80000000 | 18, {{
            { QMetaType::Bool, 39 },
        }}),
        // Slot 'setPanelState'
        QtMocHelpers::SlotData<QDBusPendingReply<>(const QString &)>(44, 2, QMC::AccessPublic, 0x80000000 | 18, {{
            { QMetaType::QString, 45 },
        }}),
        // Slot 'showVolumeOSD'
        QtMocHelpers::SlotData<QDBusPendingReply<>()>(46, 2, QMC::AccessPublic, 0x80000000 | 18),
        // Slot 'triggerAppLaunchMaximizePanelAnimation'
        QtMocHelpers::SlotData<QDBusPendingReply<>(int, const QString &)>(47, 2, QMC::AccessPublic, 0x80000000 | 18, {{
            { QMetaType::Int, 3 }, { QMetaType::QString, 4 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<OrgKdePlasmashellInterface, qt_meta_tag_ZN26OrgKdePlasmashellInterfaceE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject OrgKdePlasmashellInterface::staticMetaObject = { {
    QMetaObject::SuperData::link<QDBusAbstractInterface::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN26OrgKdePlasmashellInterfaceE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN26OrgKdePlasmashellInterfaceE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN26OrgKdePlasmashellInterfaceE_t>.metaTypes,
    nullptr
} };

void OrgKdePlasmashellInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<OrgKdePlasmashellInterface *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->appLaunchMaximizePanelAnimationTriggered((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2]))); break;
        case 1: _t->closeActionDrawerRequested(); break;
        case 2: _t->doNotDisturbChanged(); break;
        case 3: _t->isActionDrawerOpenChanged(); break;
        case 4: _t->isNotificationPopupDrawerOpenChanged(); break;
        case 5: _t->isTaskSwitcherVisibleChanged(); break;
        case 6: _t->isVolumeOSDOpenChanged(); break;
        case 7: _t->openActionDrawerRequested(); break;
        case 8: _t->openHomeScreenRequested(); break;
        case 9: _t->openLockScreenKeypadRequested(); break;
        case 10: _t->panelStateChanged(); break;
        case 11: _t->resetHomeScreenPositionRequested(); break;
        case 12: _t->showVolumeOSDRequested(); break;
        case 13: { QDBusPendingReply<> _r = _t->closeActionDrawer();
            if (_a[0]) *reinterpret_cast<QDBusPendingReply<>*>(_a[0]) = std::move(_r); }  break;
        case 14: { QDBusPendingReply<bool> _r = _t->doNotDisturb();
            if (_a[0]) *reinterpret_cast<QDBusPendingReply<bool>*>(_a[0]) = std::move(_r); }  break;
        case 15: { QDBusPendingReply<bool> _r = _t->isActionDrawerOpen();
            if (_a[0]) *reinterpret_cast<QDBusPendingReply<bool>*>(_a[0]) = std::move(_r); }  break;
        case 16: { QDBusPendingReply<bool> _r = _t->isNotificationPopupDrawerOpen();
            if (_a[0]) *reinterpret_cast<QDBusPendingReply<bool>*>(_a[0]) = std::move(_r); }  break;
        case 17: { QDBusPendingReply<bool> _r = _t->isTaskSwitcherVisible();
            if (_a[0]) *reinterpret_cast<QDBusPendingReply<bool>*>(_a[0]) = std::move(_r); }  break;
        case 18: { QDBusPendingReply<bool> _r = _t->isVolumeOSDOpen();
            if (_a[0]) *reinterpret_cast<QDBusPendingReply<bool>*>(_a[0]) = std::move(_r); }  break;
        case 19: { QDBusPendingReply<> _r = _t->openActionDrawer();
            if (_a[0]) *reinterpret_cast<QDBusPendingReply<>*>(_a[0]) = std::move(_r); }  break;
        case 20: { QDBusPendingReply<> _r = _t->openAppLaunchAnimationWithPosition((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[4])),(*reinterpret_cast<std::add_pointer_t<double>>(_a[5])),(*reinterpret_cast<std::add_pointer_t<double>>(_a[6])),(*reinterpret_cast<std::add_pointer_t<double>>(_a[7])));
            if (_a[0]) *reinterpret_cast<QDBusPendingReply<>*>(_a[0]) = std::move(_r); }  break;
        case 21: { QDBusPendingReply<> _r = _t->openHomeScreen();
            if (_a[0]) *reinterpret_cast<QDBusPendingReply<>*>(_a[0]) = std::move(_r); }  break;
        case 22: { QDBusPendingReply<> _r = _t->openLockScreenKeypad();
            if (_a[0]) *reinterpret_cast<QDBusPendingReply<>*>(_a[0]) = std::move(_r); }  break;
        case 23: { QDBusPendingReply<QString> _r = _t->panelState();
            if (_a[0]) *reinterpret_cast<QDBusPendingReply<QString>*>(_a[0]) = std::move(_r); }  break;
        case 24: { QDBusPendingReply<> _r = _t->resetHomeScreenPosition();
            if (_a[0]) *reinterpret_cast<QDBusPendingReply<>*>(_a[0]) = std::move(_r); }  break;
        case 25: { QDBusPendingReply<> _r = _t->setDoNotDisturb((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QDBusPendingReply<>*>(_a[0]) = std::move(_r); }  break;
        case 26: { QDBusPendingReply<> _r = _t->setIsActionDrawerOpen((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QDBusPendingReply<>*>(_a[0]) = std::move(_r); }  break;
        case 27: { QDBusPendingReply<> _r = _t->setIsNotificationPopupDrawerOpen((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QDBusPendingReply<>*>(_a[0]) = std::move(_r); }  break;
        case 28: { QDBusPendingReply<> _r = _t->setIsTaskSwitcherVisible((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QDBusPendingReply<>*>(_a[0]) = std::move(_r); }  break;
        case 29: { QDBusPendingReply<> _r = _t->setIsVolumeOSDOpen((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QDBusPendingReply<>*>(_a[0]) = std::move(_r); }  break;
        case 30: { QDBusPendingReply<> _r = _t->setPanelState((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QDBusPendingReply<>*>(_a[0]) = std::move(_r); }  break;
        case 31: { QDBusPendingReply<> _r = _t->showVolumeOSD();
            if (_a[0]) *reinterpret_cast<QDBusPendingReply<>*>(_a[0]) = std::move(_r); }  break;
        case 32: { QDBusPendingReply<> _r = _t->triggerAppLaunchMaximizePanelAnimation((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2])));
            if (_a[0]) *reinterpret_cast<QDBusPendingReply<>*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (OrgKdePlasmashellInterface::*)(int , const QString & )>(_a, &OrgKdePlasmashellInterface::appLaunchMaximizePanelAnimationTriggered, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (OrgKdePlasmashellInterface::*)()>(_a, &OrgKdePlasmashellInterface::closeActionDrawerRequested, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (OrgKdePlasmashellInterface::*)()>(_a, &OrgKdePlasmashellInterface::doNotDisturbChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (OrgKdePlasmashellInterface::*)()>(_a, &OrgKdePlasmashellInterface::isActionDrawerOpenChanged, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (OrgKdePlasmashellInterface::*)()>(_a, &OrgKdePlasmashellInterface::isNotificationPopupDrawerOpenChanged, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (OrgKdePlasmashellInterface::*)()>(_a, &OrgKdePlasmashellInterface::isTaskSwitcherVisibleChanged, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (OrgKdePlasmashellInterface::*)()>(_a, &OrgKdePlasmashellInterface::isVolumeOSDOpenChanged, 6))
            return;
        if (QtMocHelpers::indexOfMethod<void (OrgKdePlasmashellInterface::*)()>(_a, &OrgKdePlasmashellInterface::openActionDrawerRequested, 7))
            return;
        if (QtMocHelpers::indexOfMethod<void (OrgKdePlasmashellInterface::*)()>(_a, &OrgKdePlasmashellInterface::openHomeScreenRequested, 8))
            return;
        if (QtMocHelpers::indexOfMethod<void (OrgKdePlasmashellInterface::*)()>(_a, &OrgKdePlasmashellInterface::openLockScreenKeypadRequested, 9))
            return;
        if (QtMocHelpers::indexOfMethod<void (OrgKdePlasmashellInterface::*)()>(_a, &OrgKdePlasmashellInterface::panelStateChanged, 10))
            return;
        if (QtMocHelpers::indexOfMethod<void (OrgKdePlasmashellInterface::*)()>(_a, &OrgKdePlasmashellInterface::resetHomeScreenPositionRequested, 11))
            return;
        if (QtMocHelpers::indexOfMethod<void (OrgKdePlasmashellInterface::*)()>(_a, &OrgKdePlasmashellInterface::showVolumeOSDRequested, 12))
            return;
    }
}

const QMetaObject *OrgKdePlasmashellInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OrgKdePlasmashellInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN26OrgKdePlasmashellInterfaceE_t>.strings))
        return static_cast<void*>(this);
    return QDBusAbstractInterface::qt_metacast(_clname);
}

int OrgKdePlasmashellInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDBusAbstractInterface::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 33)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 33;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 33)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 33;
    }
    return _id;
}

// SIGNAL 0
void OrgKdePlasmashellInterface::appLaunchMaximizePanelAnimationTriggered(int _t1, const QString & _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1, _t2);
}

// SIGNAL 1
void OrgKdePlasmashellInterface::closeActionDrawerRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void OrgKdePlasmashellInterface::doNotDisturbChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void OrgKdePlasmashellInterface::isActionDrawerOpenChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void OrgKdePlasmashellInterface::isNotificationPopupDrawerOpenChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void OrgKdePlasmashellInterface::isTaskSwitcherVisibleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void OrgKdePlasmashellInterface::isVolumeOSDOpenChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void OrgKdePlasmashellInterface::openActionDrawerRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void OrgKdePlasmashellInterface::openHomeScreenRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void OrgKdePlasmashellInterface::openLockScreenKeypadRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void OrgKdePlasmashellInterface::panelStateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}

// SIGNAL 11
void OrgKdePlasmashellInterface::resetHomeScreenPositionRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 11, nullptr);
}

// SIGNAL 12
void OrgKdePlasmashellInterface::showVolumeOSDRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 12, nullptr);
}
QT_WARNING_POP
