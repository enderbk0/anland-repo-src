/****************************************************************************
** Meta object code from reading C++ file 'mobileadaptor.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "mobileadaptor.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mobileadaptor.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN18PlasmashellAdaptorE_t {};
} // unnamed namespace

template <> constexpr inline auto PlasmashellAdaptor::qt_create_metaobjectdata<qt_meta_tag_ZN18PlasmashellAdaptorE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "PlasmashellAdaptor",
        "D-Bus Interface",
        "org.kde.plasmashell",
        "D-Bus Introspection",
        "  <interface name=\"org.kde.plasmashell\">\n    <signal name=\"doN"
        "otDisturbChanged\"/>\n    <signal name=\"isActionDrawerOpenChanged"
        "\"/>\n    <signal name=\"isVolumeOSDOpenChanged\"/>\n    <signal n"
        "ame=\"isNotificationPopupDrawerOpenChanged\"/>\n    <signal name=\""
        "panelStateChanged\"/>\n    <signal name=\"isTaskSwitcherVisibleCha"
        "nged\"/>\n    <signal name=\"openActionDrawerRequested\"/>\n    <s"
        "ignal name=\"closeActionDrawerRequested\"/>\n    <signal name=\"ap"
        "pLaunchMaximizePanelAnimationTriggered\">\n      <arg direction=\""
        "out\" type=\"i\" name=\"screen\"/>\n      <arg direction=\"out\" t"
        "ype=\"s\" name=\"color\"/>\n    </signal>\n    <signal name=\"open"
        "HomeScreenRequested\"/>\n    <signal name=\"resetHomeScreenPositio"
        "nRequested\"/>\n    <signal name=\"showVolumeOSDRequested\"/>\n   "
        " <signal name=\"openLockScreenKeypadRequested\"/>\n    <method nam"
        "e=\"doNotDisturb\">\n      <arg direction=\"out\" type=\"b\"/>\n  "
        "  </method>\n    <method name=\"setDoNotDisturb\">\n      <arg dir"
        "ection=\"in\" type=\"b\" name=\"value\"/>\n    </method>\n    <met"
        "hod name=\"isActionDrawerOpen\">\n      <arg direction=\"out\" typ"
        "e=\"b\"/>\n    </method>\n    <method name=\"setIsActionDrawerOpen"
        "\">\n      <arg direction=\"in\" type=\"b\" name=\"value\"/>\n    "
        "</method>\n    <method name=\"isVolumeOSDOpen\">\n      <arg direc"
        "tion=\"out\" type=\"b\"/>\n    </method>\n    <method name=\"setIs"
        "VolumeOSDOpen\">\n      <arg direction=\"in\" type=\"b\" name=\"va"
        "lue\"/>\n    </method>\n    <method name=\"isNotificationPopupDraw"
        "erOpen\">\n      <arg direction=\"out\" type=\"b\"/>\n    </method"
        ">\n    <method name=\"setIsNotificationPopupDrawerOpen\">\n      <"
        "arg direction=\"in\" type=\"b\" name=\"value\"/>\n    </method>\n "
        "   <method name=\"panelState\">\n      <arg direction=\"out\" type"
        "=\"s\"/>\n    </method>\n    <method name=\"setPanelState\">\n    "
        "  <arg direction=\"in\" type=\"s\" name=\"state\"/>\n    </method>"
        "\n    <method name=\"isTaskSwitcherVisible\">\n      <arg directio"
        "n=\"out\" type=\"b\"/>\n    </method>\n    <method name=\"setIsTas"
        "kSwitcherVisible\">\n      <arg direction=\"in\" type=\"b\" name=\""
        "value\"/>\n    </method>\n    <method name=\"openActionDrawer\"/>\n"
        "    <method name=\"closeActionDrawer\"/>\n    <method name=\"openA"
        "ppLaunchAnimationWithPosition\">\n      <arg direction=\"in\" type"
        "=\"i\" name=\"screen\"/>\n      <arg direction=\"in\" type=\"s\" n"
        "ame=\"splashIcon\"/>\n      <arg direction=\"in\" type=\"s\" name="
        "\"title\"/>\n      <arg direction=\"in\" type=\"s\" name=\"storage"
        "Id\"/>\n      <arg direction=\"in\" type=\"d\" name=\"x\"/>\n     "
        " <arg direction=\"in\" type=\"d\" name=\"y\"/>\n      <arg directi"
        "on=\"in\" type=\"d\" name=\"sourceIconSize\"/>\n    </method>\n   "
        " <method name=\"triggerAppLaunchMaximizePanelAnimation\">\n      <"
        "arg direction=\"in\" type=\"i\" name=\"screen\"/>\n      <arg dire"
        "ction=\"in\" type=\"s\" name=\"color\"/>\n    </method>\n    <meth"
        "od name=\"openHomeScreen\"/>\n    <method name=\"resetHomeScreenPo"
        "sition\"/>\n    <method name=\"showVolumeOSD\"/>\n    <method name"
        "=\"openLockScreenKeypad\"/>\n  </interface>\n",
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
        "doNotDisturb",
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
        QtMocHelpers::SignalData<void(int, const QString &)>(5, 6, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 7 }, { QMetaType::QString, 8 },
        }}),
        // Signal 'closeActionDrawerRequested'
        QtMocHelpers::SignalData<void()>(9, 6, QMC::AccessPublic, QMetaType::Void),
        // Signal 'doNotDisturbChanged'
        QtMocHelpers::SignalData<void()>(10, 6, QMC::AccessPublic, QMetaType::Void),
        // Signal 'isActionDrawerOpenChanged'
        QtMocHelpers::SignalData<void()>(11, 6, QMC::AccessPublic, QMetaType::Void),
        // Signal 'isNotificationPopupDrawerOpenChanged'
        QtMocHelpers::SignalData<void()>(12, 6, QMC::AccessPublic, QMetaType::Void),
        // Signal 'isTaskSwitcherVisibleChanged'
        QtMocHelpers::SignalData<void()>(13, 6, QMC::AccessPublic, QMetaType::Void),
        // Signal 'isVolumeOSDOpenChanged'
        QtMocHelpers::SignalData<void()>(14, 6, QMC::AccessPublic, QMetaType::Void),
        // Signal 'openActionDrawerRequested'
        QtMocHelpers::SignalData<void()>(15, 6, QMC::AccessPublic, QMetaType::Void),
        // Signal 'openHomeScreenRequested'
        QtMocHelpers::SignalData<void()>(16, 6, QMC::AccessPublic, QMetaType::Void),
        // Signal 'openLockScreenKeypadRequested'
        QtMocHelpers::SignalData<void()>(17, 6, QMC::AccessPublic, QMetaType::Void),
        // Signal 'panelStateChanged'
        QtMocHelpers::SignalData<void()>(18, 6, QMC::AccessPublic, QMetaType::Void),
        // Signal 'resetHomeScreenPositionRequested'
        QtMocHelpers::SignalData<void()>(19, 6, QMC::AccessPublic, QMetaType::Void),
        // Signal 'showVolumeOSDRequested'
        QtMocHelpers::SignalData<void()>(20, 6, QMC::AccessPublic, QMetaType::Void),
        // Slot 'closeActionDrawer'
        QtMocHelpers::SlotData<void()>(21, 6, QMC::AccessPublic, QMetaType::Void),
        // Slot 'doNotDisturb'
        QtMocHelpers::SlotData<bool()>(22, 6, QMC::AccessPublic, QMetaType::Bool),
        // Slot 'isActionDrawerOpen'
        QtMocHelpers::SlotData<bool()>(23, 6, QMC::AccessPublic, QMetaType::Bool),
        // Slot 'isNotificationPopupDrawerOpen'
        QtMocHelpers::SlotData<bool()>(24, 6, QMC::AccessPublic, QMetaType::Bool),
        // Slot 'isTaskSwitcherVisible'
        QtMocHelpers::SlotData<bool()>(25, 6, QMC::AccessPublic, QMetaType::Bool),
        // Slot 'isVolumeOSDOpen'
        QtMocHelpers::SlotData<bool()>(26, 6, QMC::AccessPublic, QMetaType::Bool),
        // Slot 'openActionDrawer'
        QtMocHelpers::SlotData<void()>(27, 6, QMC::AccessPublic, QMetaType::Void),
        // Slot 'openAppLaunchAnimationWithPosition'
        QtMocHelpers::SlotData<void(int, const QString &, const QString &, const QString &, double, double, double)>(28, 6, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 7 }, { QMetaType::QString, 29 }, { QMetaType::QString, 30 }, { QMetaType::QString, 31 },
            { QMetaType::Double, 32 }, { QMetaType::Double, 33 }, { QMetaType::Double, 34 },
        }}),
        // Slot 'openHomeScreen'
        QtMocHelpers::SlotData<void()>(35, 6, QMC::AccessPublic, QMetaType::Void),
        // Slot 'openLockScreenKeypad'
        QtMocHelpers::SlotData<void()>(36, 6, QMC::AccessPublic, QMetaType::Void),
        // Slot 'panelState'
        QtMocHelpers::SlotData<QString()>(37, 6, QMC::AccessPublic, QMetaType::QString),
        // Slot 'resetHomeScreenPosition'
        QtMocHelpers::SlotData<void()>(38, 6, QMC::AccessPublic, QMetaType::Void),
        // Slot 'setDoNotDisturb'
        QtMocHelpers::SlotData<void(bool)>(39, 6, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 40 },
        }}),
        // Slot 'setIsActionDrawerOpen'
        QtMocHelpers::SlotData<void(bool)>(41, 6, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 40 },
        }}),
        // Slot 'setIsNotificationPopupDrawerOpen'
        QtMocHelpers::SlotData<void(bool)>(42, 6, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 40 },
        }}),
        // Slot 'setIsTaskSwitcherVisible'
        QtMocHelpers::SlotData<void(bool)>(43, 6, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 40 },
        }}),
        // Slot 'setIsVolumeOSDOpen'
        QtMocHelpers::SlotData<void(bool)>(44, 6, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 40 },
        }}),
        // Slot 'setPanelState'
        QtMocHelpers::SlotData<void(const QString &)>(45, 6, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 46 },
        }}),
        // Slot 'showVolumeOSD'
        QtMocHelpers::SlotData<void()>(47, 6, QMC::AccessPublic, QMetaType::Void),
        // Slot 'triggerAppLaunchMaximizePanelAnimation'
        QtMocHelpers::SlotData<void(int, const QString &)>(48, 6, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 7 }, { QMetaType::QString, 8 },
        }}),
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
    return QtMocHelpers::metaObjectData<PlasmashellAdaptor, qt_meta_tag_ZN18PlasmashellAdaptorE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums, qt_constructors, qt_classinfo);
}
Q_CONSTINIT const QMetaObject PlasmashellAdaptor::staticMetaObject = { {
    QMetaObject::SuperData::link<QDBusAbstractAdaptor::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN18PlasmashellAdaptorE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN18PlasmashellAdaptorE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN18PlasmashellAdaptorE_t>.metaTypes,
    nullptr
} };

void PlasmashellAdaptor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<PlasmashellAdaptor *>(_o);
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
        case 13: _t->closeActionDrawer(); break;
        case 14: { bool _r = _t->doNotDisturb();
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 15: { bool _r = _t->isActionDrawerOpen();
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 16: { bool _r = _t->isNotificationPopupDrawerOpen();
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 17: { bool _r = _t->isTaskSwitcherVisible();
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 18: { bool _r = _t->isVolumeOSDOpen();
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 19: _t->openActionDrawer(); break;
        case 20: _t->openAppLaunchAnimationWithPosition((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[4])),(*reinterpret_cast<std::add_pointer_t<double>>(_a[5])),(*reinterpret_cast<std::add_pointer_t<double>>(_a[6])),(*reinterpret_cast<std::add_pointer_t<double>>(_a[7]))); break;
        case 21: _t->openHomeScreen(); break;
        case 22: _t->openLockScreenKeypad(); break;
        case 23: { QString _r = _t->panelState();
            if (_a[0]) *reinterpret_cast<QString*>(_a[0]) = std::move(_r); }  break;
        case 24: _t->resetHomeScreenPosition(); break;
        case 25: _t->setDoNotDisturb((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 26: _t->setIsActionDrawerOpen((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 27: _t->setIsNotificationPopupDrawerOpen((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 28: _t->setIsTaskSwitcherVisible((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 29: _t->setIsVolumeOSDOpen((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 30: _t->setPanelState((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 31: _t->showVolumeOSD(); break;
        case 32: _t->triggerAppLaunchMaximizePanelAnimation((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (PlasmashellAdaptor::*)(int , const QString & )>(_a, &PlasmashellAdaptor::appLaunchMaximizePanelAnimationTriggered, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (PlasmashellAdaptor::*)()>(_a, &PlasmashellAdaptor::closeActionDrawerRequested, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (PlasmashellAdaptor::*)()>(_a, &PlasmashellAdaptor::doNotDisturbChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (PlasmashellAdaptor::*)()>(_a, &PlasmashellAdaptor::isActionDrawerOpenChanged, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (PlasmashellAdaptor::*)()>(_a, &PlasmashellAdaptor::isNotificationPopupDrawerOpenChanged, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (PlasmashellAdaptor::*)()>(_a, &PlasmashellAdaptor::isTaskSwitcherVisibleChanged, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (PlasmashellAdaptor::*)()>(_a, &PlasmashellAdaptor::isVolumeOSDOpenChanged, 6))
            return;
        if (QtMocHelpers::indexOfMethod<void (PlasmashellAdaptor::*)()>(_a, &PlasmashellAdaptor::openActionDrawerRequested, 7))
            return;
        if (QtMocHelpers::indexOfMethod<void (PlasmashellAdaptor::*)()>(_a, &PlasmashellAdaptor::openHomeScreenRequested, 8))
            return;
        if (QtMocHelpers::indexOfMethod<void (PlasmashellAdaptor::*)()>(_a, &PlasmashellAdaptor::openLockScreenKeypadRequested, 9))
            return;
        if (QtMocHelpers::indexOfMethod<void (PlasmashellAdaptor::*)()>(_a, &PlasmashellAdaptor::panelStateChanged, 10))
            return;
        if (QtMocHelpers::indexOfMethod<void (PlasmashellAdaptor::*)()>(_a, &PlasmashellAdaptor::resetHomeScreenPositionRequested, 11))
            return;
        if (QtMocHelpers::indexOfMethod<void (PlasmashellAdaptor::*)()>(_a, &PlasmashellAdaptor::showVolumeOSDRequested, 12))
            return;
    }
}

const QMetaObject *PlasmashellAdaptor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PlasmashellAdaptor::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN18PlasmashellAdaptorE_t>.strings))
        return static_cast<void*>(this);
    return QDBusAbstractAdaptor::qt_metacast(_clname);
}

int PlasmashellAdaptor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDBusAbstractAdaptor::qt_metacall(_c, _id, _a);
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
void PlasmashellAdaptor::appLaunchMaximizePanelAnimationTriggered(int _t1, const QString & _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1, _t2);
}

// SIGNAL 1
void PlasmashellAdaptor::closeActionDrawerRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void PlasmashellAdaptor::doNotDisturbChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void PlasmashellAdaptor::isActionDrawerOpenChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void PlasmashellAdaptor::isNotificationPopupDrawerOpenChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void PlasmashellAdaptor::isTaskSwitcherVisibleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void PlasmashellAdaptor::isVolumeOSDOpenChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void PlasmashellAdaptor::openActionDrawerRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void PlasmashellAdaptor::openHomeScreenRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void PlasmashellAdaptor::openLockScreenKeypadRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void PlasmashellAdaptor::panelStateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}

// SIGNAL 11
void PlasmashellAdaptor::resetHomeScreenPositionRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 11, nullptr);
}

// SIGNAL 12
void PlasmashellAdaptor::showVolumeOSDRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 12, nullptr);
}
QT_WARNING_POP
