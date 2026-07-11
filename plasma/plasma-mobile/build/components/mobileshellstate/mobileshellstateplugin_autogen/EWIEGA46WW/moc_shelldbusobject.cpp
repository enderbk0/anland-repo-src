/****************************************************************************
** Meta object code from reading C++ file 'shelldbusobject.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../components/mobileshellstate/shelldbusobject.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'shelldbusobject.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN15ShellDBusObjectE_t {};
} // unnamed namespace

template <> constexpr inline auto ShellDBusObject::qt_create_metaobjectdata<qt_meta_tag_ZN15ShellDBusObjectE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "ShellDBusObject",
        "QML.Element",
        "auto",
        "QML.Singleton",
        "true",
        "D-Bus Interface",
        "org.kde.plasmashell",
        "doNotDisturbChanged",
        "",
        "isActionDrawerOpenChanged",
        "isVolumeOSDOpenChanged",
        "isNotificationPopupDrawerOpenChanged",
        "panelStateChanged",
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
        "doNotDisturb",
        "setDoNotDisturb",
        "value",
        "isActionDrawerOpen",
        "setIsActionDrawerOpen",
        "isVolumeOSDOpen",
        "setIsVolumeOSDOpen",
        "isNotificationPopupDrawerOpen",
        "setIsNotificationPopupDrawerOpen",
        "panelState",
        "setPanelState",
        "state",
        "isTaskSwitcherVisible",
        "setIsTaskSwitcherVisible",
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
        "registerObject",
        "startupFeedbackModel",
        "StartupFeedbackModel*"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'doNotDisturbChanged'
        QtMocHelpers::SignalData<void()>(7, 8, QMC::AccessPublic | QMC::MethodScriptable, QMetaType::Void),
        // Signal 'isActionDrawerOpenChanged'
        QtMocHelpers::SignalData<void()>(9, 8, QMC::AccessPublic | QMC::MethodScriptable, QMetaType::Void),
        // Signal 'isVolumeOSDOpenChanged'
        QtMocHelpers::SignalData<void()>(10, 8, QMC::AccessPublic | QMC::MethodScriptable, QMetaType::Void),
        // Signal 'isNotificationPopupDrawerOpenChanged'
        QtMocHelpers::SignalData<void()>(11, 8, QMC::AccessPublic | QMC::MethodScriptable, QMetaType::Void),
        // Signal 'panelStateChanged'
        QtMocHelpers::SignalData<void()>(12, 8, QMC::AccessPublic | QMC::MethodScriptable, QMetaType::Void),
        // Signal 'isTaskSwitcherVisibleChanged'
        QtMocHelpers::SignalData<void()>(13, 8, QMC::AccessPublic | QMC::MethodScriptable, QMetaType::Void),
        // Signal 'openActionDrawerRequested'
        QtMocHelpers::SignalData<void()>(14, 8, QMC::AccessPublic | QMC::MethodScriptable, QMetaType::Void),
        // Signal 'closeActionDrawerRequested'
        QtMocHelpers::SignalData<void()>(15, 8, QMC::AccessPublic | QMC::MethodScriptable, QMetaType::Void),
        // Signal 'appLaunchMaximizePanelAnimationTriggered'
        QtMocHelpers::SignalData<void(int, QString)>(16, 8, QMC::AccessPublic | QMC::MethodScriptable, QMetaType::Void, {{
            { QMetaType::Int, 17 }, { QMetaType::QString, 18 },
        }}),
        // Signal 'openHomeScreenRequested'
        QtMocHelpers::SignalData<void()>(19, 8, QMC::AccessPublic | QMC::MethodScriptable, QMetaType::Void),
        // Signal 'resetHomeScreenPositionRequested'
        QtMocHelpers::SignalData<void()>(20, 8, QMC::AccessPublic | QMC::MethodScriptable, QMetaType::Void),
        // Signal 'showVolumeOSDRequested'
        QtMocHelpers::SignalData<void()>(21, 8, QMC::AccessPublic | QMC::MethodScriptable, QMetaType::Void),
        // Signal 'openLockScreenKeypadRequested'
        QtMocHelpers::SignalData<void()>(22, 8, QMC::AccessPublic | QMC::MethodScriptable, QMetaType::Void),
        // Slot 'doNotDisturb'
        QtMocHelpers::SlotData<bool()>(23, 8, QMC::AccessPublic | QMC::MethodScriptable, QMetaType::Bool),
        // Slot 'setDoNotDisturb'
        QtMocHelpers::SlotData<void(bool)>(24, 8, QMC::AccessPublic | QMC::MethodScriptable, QMetaType::Void, {{
            { QMetaType::Bool, 25 },
        }}),
        // Slot 'isActionDrawerOpen'
        QtMocHelpers::SlotData<bool()>(26, 8, QMC::AccessPublic | QMC::MethodScriptable, QMetaType::Bool),
        // Slot 'setIsActionDrawerOpen'
        QtMocHelpers::SlotData<void(bool)>(27, 8, QMC::AccessPublic | QMC::MethodScriptable, QMetaType::Void, {{
            { QMetaType::Bool, 25 },
        }}),
        // Slot 'isVolumeOSDOpen'
        QtMocHelpers::SlotData<bool()>(28, 8, QMC::AccessPublic | QMC::MethodScriptable, QMetaType::Bool),
        // Slot 'setIsVolumeOSDOpen'
        QtMocHelpers::SlotData<void(bool)>(29, 8, QMC::AccessPublic | QMC::MethodScriptable, QMetaType::Void, {{
            { QMetaType::Bool, 25 },
        }}),
        // Slot 'isNotificationPopupDrawerOpen'
        QtMocHelpers::SlotData<bool()>(30, 8, QMC::AccessPublic | QMC::MethodScriptable, QMetaType::Bool),
        // Slot 'setIsNotificationPopupDrawerOpen'
        QtMocHelpers::SlotData<void(bool)>(31, 8, QMC::AccessPublic | QMC::MethodScriptable, QMetaType::Void, {{
            { QMetaType::Bool, 25 },
        }}),
        // Slot 'panelState'
        QtMocHelpers::SlotData<QString()>(32, 8, QMC::AccessPublic | QMC::MethodScriptable, QMetaType::QString),
        // Slot 'setPanelState'
        QtMocHelpers::SlotData<void(QString)>(33, 8, QMC::AccessPublic | QMC::MethodScriptable, QMetaType::Void, {{
            { QMetaType::QString, 34 },
        }}),
        // Slot 'isTaskSwitcherVisible'
        QtMocHelpers::SlotData<bool()>(35, 8, QMC::AccessPublic | QMC::MethodScriptable, QMetaType::Bool),
        // Slot 'setIsTaskSwitcherVisible'
        QtMocHelpers::SlotData<void(bool)>(36, 8, QMC::AccessPublic | QMC::MethodScriptable, QMetaType::Void, {{
            { QMetaType::Bool, 25 },
        }}),
        // Slot 'openActionDrawer'
        QtMocHelpers::SlotData<void()>(37, 8, QMC::AccessPublic | QMC::MethodScriptable, QMetaType::Void),
        // Slot 'closeActionDrawer'
        QtMocHelpers::SlotData<void()>(38, 8, QMC::AccessPublic | QMC::MethodScriptable, QMetaType::Void),
        // Slot 'openAppLaunchAnimationWithPosition'
        QtMocHelpers::SlotData<void(int, QString, QString, QString, qreal, qreal, qreal)>(39, 8, QMC::AccessPublic | QMC::MethodScriptable, QMetaType::Void, {{
            { QMetaType::Int, 17 }, { QMetaType::QString, 40 }, { QMetaType::QString, 41 }, { QMetaType::QString, 42 },
            { QMetaType::QReal, 43 }, { QMetaType::QReal, 44 }, { QMetaType::QReal, 45 },
        }}),
        // Slot 'triggerAppLaunchMaximizePanelAnimation'
        QtMocHelpers::SlotData<void(int, QString)>(46, 8, QMC::AccessPublic | QMC::MethodScriptable, QMetaType::Void, {{
            { QMetaType::Int, 17 }, { QMetaType::QString, 18 },
        }}),
        // Slot 'openHomeScreen'
        QtMocHelpers::SlotData<void()>(47, 8, QMC::AccessPublic | QMC::MethodScriptable, QMetaType::Void),
        // Slot 'resetHomeScreenPosition'
        QtMocHelpers::SlotData<void()>(48, 8, QMC::AccessPublic | QMC::MethodScriptable, QMetaType::Void),
        // Slot 'showVolumeOSD'
        QtMocHelpers::SlotData<void()>(49, 8, QMC::AccessPublic | QMC::MethodScriptable, QMetaType::Void),
        // Slot 'openLockScreenKeypad'
        QtMocHelpers::SlotData<void()>(50, 8, QMC::AccessPublic | QMC::MethodScriptable, QMetaType::Void),
        // Method 'registerObject'
        QtMocHelpers::MethodData<void()>(51, 8, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'startupFeedbackModel'
        QtMocHelpers::PropertyData<StartupFeedbackModel*>(52, 0x80000000 | 53, QMC::DefaultPropertyFlags | QMC::EnumOrFlag | QMC::Constant),
    };
    QtMocHelpers::UintData qt_enums {
    };
    QtMocHelpers::UintData qt_constructors {};
    QtMocHelpers::ClassInfos qt_classinfo({
            {    1,    2 },
            {    3,    4 },
            {    5,    6 },
    });
    return QtMocHelpers::metaObjectData<ShellDBusObject, void>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums, qt_constructors, qt_classinfo);
}
Q_CONSTINIT const QMetaObject ShellDBusObject::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN15ShellDBusObjectE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN15ShellDBusObjectE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN15ShellDBusObjectE_t>.metaTypes,
    nullptr
} };

void ShellDBusObject::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<ShellDBusObject *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->doNotDisturbChanged(); break;
        case 1: _t->isActionDrawerOpenChanged(); break;
        case 2: _t->isVolumeOSDOpenChanged(); break;
        case 3: _t->isNotificationPopupDrawerOpenChanged(); break;
        case 4: _t->panelStateChanged(); break;
        case 5: _t->isTaskSwitcherVisibleChanged(); break;
        case 6: _t->openActionDrawerRequested(); break;
        case 7: _t->closeActionDrawerRequested(); break;
        case 8: _t->appLaunchMaximizePanelAnimationTriggered((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2]))); break;
        case 9: _t->openHomeScreenRequested(); break;
        case 10: _t->resetHomeScreenPositionRequested(); break;
        case 11: _t->showVolumeOSDRequested(); break;
        case 12: _t->openLockScreenKeypadRequested(); break;
        case 13: { bool _r = _t->doNotDisturb();
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 14: _t->setDoNotDisturb((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 15: { bool _r = _t->isActionDrawerOpen();
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 16: _t->setIsActionDrawerOpen((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 17: { bool _r = _t->isVolumeOSDOpen();
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 18: _t->setIsVolumeOSDOpen((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 19: { bool _r = _t->isNotificationPopupDrawerOpen();
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 20: _t->setIsNotificationPopupDrawerOpen((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 21: { QString _r = _t->panelState();
            if (_a[0]) *reinterpret_cast<QString*>(_a[0]) = std::move(_r); }  break;
        case 22: _t->setPanelState((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 23: { bool _r = _t->isTaskSwitcherVisible();
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 24: _t->setIsTaskSwitcherVisible((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 25: _t->openActionDrawer(); break;
        case 26: _t->closeActionDrawer(); break;
        case 27: _t->openAppLaunchAnimationWithPosition((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[4])),(*reinterpret_cast<std::add_pointer_t<qreal>>(_a[5])),(*reinterpret_cast<std::add_pointer_t<qreal>>(_a[6])),(*reinterpret_cast<std::add_pointer_t<qreal>>(_a[7]))); break;
        case 28: _t->triggerAppLaunchMaximizePanelAnimation((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2]))); break;
        case 29: _t->openHomeScreen(); break;
        case 30: _t->resetHomeScreenPosition(); break;
        case 31: _t->showVolumeOSD(); break;
        case 32: _t->openLockScreenKeypad(); break;
        case 33: _t->registerObject(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (ShellDBusObject::*)()>(_a, &ShellDBusObject::doNotDisturbChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (ShellDBusObject::*)()>(_a, &ShellDBusObject::isActionDrawerOpenChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (ShellDBusObject::*)()>(_a, &ShellDBusObject::isVolumeOSDOpenChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (ShellDBusObject::*)()>(_a, &ShellDBusObject::isNotificationPopupDrawerOpenChanged, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (ShellDBusObject::*)()>(_a, &ShellDBusObject::panelStateChanged, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (ShellDBusObject::*)()>(_a, &ShellDBusObject::isTaskSwitcherVisibleChanged, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (ShellDBusObject::*)()>(_a, &ShellDBusObject::openActionDrawerRequested, 6))
            return;
        if (QtMocHelpers::indexOfMethod<void (ShellDBusObject::*)()>(_a, &ShellDBusObject::closeActionDrawerRequested, 7))
            return;
        if (QtMocHelpers::indexOfMethod<void (ShellDBusObject::*)(int , QString )>(_a, &ShellDBusObject::appLaunchMaximizePanelAnimationTriggered, 8))
            return;
        if (QtMocHelpers::indexOfMethod<void (ShellDBusObject::*)()>(_a, &ShellDBusObject::openHomeScreenRequested, 9))
            return;
        if (QtMocHelpers::indexOfMethod<void (ShellDBusObject::*)()>(_a, &ShellDBusObject::resetHomeScreenPositionRequested, 10))
            return;
        if (QtMocHelpers::indexOfMethod<void (ShellDBusObject::*)()>(_a, &ShellDBusObject::showVolumeOSDRequested, 11))
            return;
        if (QtMocHelpers::indexOfMethod<void (ShellDBusObject::*)()>(_a, &ShellDBusObject::openLockScreenKeypadRequested, 12))
            return;
    }
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< StartupFeedbackModel* >(); break;
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<StartupFeedbackModel**>(_v) = _t->startupFeedbackModel(); break;
        default: break;
        }
    }
}

const QMetaObject *ShellDBusObject::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ShellDBusObject::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN15ShellDBusObjectE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ShellDBusObject::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 34)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 34;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 34)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 34;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void ShellDBusObject::doNotDisturbChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void ShellDBusObject::isActionDrawerOpenChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void ShellDBusObject::isVolumeOSDOpenChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void ShellDBusObject::isNotificationPopupDrawerOpenChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void ShellDBusObject::panelStateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void ShellDBusObject::isTaskSwitcherVisibleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void ShellDBusObject::openActionDrawerRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void ShellDBusObject::closeActionDrawerRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void ShellDBusObject::appLaunchMaximizePanelAnimationTriggered(int _t1, QString _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 8, nullptr, _t1, _t2);
}

// SIGNAL 9
void ShellDBusObject::openHomeScreenRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void ShellDBusObject::resetHomeScreenPositionRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}

// SIGNAL 11
void ShellDBusObject::showVolumeOSDRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 11, nullptr);
}

// SIGNAL 12
void ShellDBusObject::openLockScreenKeypadRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 12, nullptr);
}
QT_WARNING_POP
