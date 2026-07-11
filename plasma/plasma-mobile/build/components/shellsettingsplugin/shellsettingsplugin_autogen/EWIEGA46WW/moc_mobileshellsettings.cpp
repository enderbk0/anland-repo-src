/****************************************************************************
** Meta object code from reading C++ file 'mobileshellsettings.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../components/shellsettingsplugin/mobileshellsettings.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mobileshellsettings.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN19MobileShellSettingsE_t {};
} // unnamed namespace

template <> constexpr inline auto MobileShellSettings::qt_create_metaobjectdata<qt_meta_tag_ZN19MobileShellSettingsE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "MobileShellSettings",
        "QML.Element",
        "Settings",
        "QML.Singleton",
        "true",
        "vibrationsEnabledChanged",
        "",
        "vibrationDurationChanged",
        "navigationPanelEnabledChanged",
        "gesturePanelEnabledChanged",
        "alwaysShowKeyboardToggleOnNavigationPanelChanged",
        "keyboardButtonEnabledChanged",
        "animationsEnabledChanged",
        "dateInStatusBarChanged",
        "statusBarScaleFactorChanged",
        "showBatteryPercentageChanged",
        "taskSwitcherPreviewsEnabledChanged",
        "actionDrawerTopLeftModeChanged",
        "actionDrawerTopRightModeChanged",
        "quickSettingsColumnsChanged",
        "convergenceModeEnabledChanged",
        "autoHidePanelsEnabledChanged",
        "allowLogoutChanged",
        "lockscreenLeftButtonActionChanged",
        "lockscreenRightButtonActionChanged",
        "vibrationsEnabled",
        "vibrationDuration",
        "animationsEnabled",
        "dateInStatusBar",
        "statusBarScaleFactor",
        "showBatteryPercentage",
        "navigationPanelEnabled",
        "alwaysShowKeyboardToggleOnNavigationPanel",
        "gesturePanelEnabled",
        "actionDrawerTopLeftMode",
        "ActionDrawerMode",
        "actionDrawerTopRightMode",
        "quickSettingsColumns",
        "convergenceModeEnabled",
        "autoHidePanelsEnabled",
        "allowLogout",
        "lockscreenLeftButtonAction",
        "LockscreenButtonAction",
        "lockscreenRightButtonAction",
        "Pinned",
        "Expanded",
        "None",
        "Flashlight",
        "Camera",
        "OpenApp"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'vibrationsEnabledChanged'
        QtMocHelpers::SignalData<void()>(5, 6, QMC::AccessPublic, QMetaType::Void),
        // Signal 'vibrationDurationChanged'
        QtMocHelpers::SignalData<void()>(7, 6, QMC::AccessPublic, QMetaType::Void),
        // Signal 'navigationPanelEnabledChanged'
        QtMocHelpers::SignalData<void()>(8, 6, QMC::AccessPublic, QMetaType::Void),
        // Signal 'gesturePanelEnabledChanged'
        QtMocHelpers::SignalData<void()>(9, 6, QMC::AccessPublic, QMetaType::Void),
        // Signal 'alwaysShowKeyboardToggleOnNavigationPanelChanged'
        QtMocHelpers::SignalData<void()>(10, 6, QMC::AccessPublic, QMetaType::Void),
        // Signal 'keyboardButtonEnabledChanged'
        QtMocHelpers::SignalData<void()>(11, 6, QMC::AccessPublic, QMetaType::Void),
        // Signal 'animationsEnabledChanged'
        QtMocHelpers::SignalData<void()>(12, 6, QMC::AccessPublic, QMetaType::Void),
        // Signal 'dateInStatusBarChanged'
        QtMocHelpers::SignalData<void()>(13, 6, QMC::AccessPublic, QMetaType::Void),
        // Signal 'statusBarScaleFactorChanged'
        QtMocHelpers::SignalData<void()>(14, 6, QMC::AccessPublic, QMetaType::Void),
        // Signal 'showBatteryPercentageChanged'
        QtMocHelpers::SignalData<void()>(15, 6, QMC::AccessPublic, QMetaType::Void),
        // Signal 'taskSwitcherPreviewsEnabledChanged'
        QtMocHelpers::SignalData<void()>(16, 6, QMC::AccessPublic, QMetaType::Void),
        // Signal 'actionDrawerTopLeftModeChanged'
        QtMocHelpers::SignalData<void()>(17, 6, QMC::AccessPublic, QMetaType::Void),
        // Signal 'actionDrawerTopRightModeChanged'
        QtMocHelpers::SignalData<void()>(18, 6, QMC::AccessPublic, QMetaType::Void),
        // Signal 'quickSettingsColumnsChanged'
        QtMocHelpers::SignalData<void()>(19, 6, QMC::AccessPublic, QMetaType::Void),
        // Signal 'convergenceModeEnabledChanged'
        QtMocHelpers::SignalData<void()>(20, 6, QMC::AccessPublic, QMetaType::Void),
        // Signal 'autoHidePanelsEnabledChanged'
        QtMocHelpers::SignalData<void()>(21, 6, QMC::AccessPublic, QMetaType::Void),
        // Signal 'allowLogoutChanged'
        QtMocHelpers::SignalData<void()>(22, 6, QMC::AccessPublic, QMetaType::Void),
        // Signal 'lockscreenLeftButtonActionChanged'
        QtMocHelpers::SignalData<void()>(23, 6, QMC::AccessPublic, QMetaType::Void),
        // Signal 'lockscreenRightButtonActionChanged'
        QtMocHelpers::SignalData<void()>(24, 6, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'vibrationsEnabled'
        QtMocHelpers::PropertyData<bool>(25, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 0),
        // property 'vibrationDuration'
        QtMocHelpers::PropertyData<int>(26, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 1),
        // property 'animationsEnabled'
        QtMocHelpers::PropertyData<bool>(27, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 6),
        // property 'dateInStatusBar'
        QtMocHelpers::PropertyData<bool>(28, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 7),
        // property 'statusBarScaleFactor'
        QtMocHelpers::PropertyData<float>(29, QMetaType::Float, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 8),
        // property 'showBatteryPercentage'
        QtMocHelpers::PropertyData<bool>(30, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 9),
        // property 'navigationPanelEnabled'
        QtMocHelpers::PropertyData<bool>(31, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 2),
        // property 'alwaysShowKeyboardToggleOnNavigationPanel'
        QtMocHelpers::PropertyData<bool>(32, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 4),
        // property 'gesturePanelEnabled'
        QtMocHelpers::PropertyData<bool>(33, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 3),
        // property 'actionDrawerTopLeftMode'
        QtMocHelpers::PropertyData<enum ActionDrawerMode>(34, 0x80000000 | 35, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 11),
        // property 'actionDrawerTopRightMode'
        QtMocHelpers::PropertyData<enum ActionDrawerMode>(36, 0x80000000 | 35, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 12),
        // property 'quickSettingsColumns'
        QtMocHelpers::PropertyData<int>(37, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 13),
        // property 'convergenceModeEnabled'
        QtMocHelpers::PropertyData<bool>(38, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 14),
        // property 'autoHidePanelsEnabled'
        QtMocHelpers::PropertyData<bool>(39, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 15),
        // property 'allowLogout'
        QtMocHelpers::PropertyData<bool>(40, QMetaType::Bool, QMC::DefaultPropertyFlags, 16),
        // property 'lockscreenLeftButtonAction'
        QtMocHelpers::PropertyData<enum LockscreenButtonAction>(41, 0x80000000 | 42, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 17),
        // property 'lockscreenRightButtonAction'
        QtMocHelpers::PropertyData<enum LockscreenButtonAction>(43, 0x80000000 | 42, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 18),
    };
    QtMocHelpers::UintData qt_enums {
        // enum 'ActionDrawerMode'
        QtMocHelpers::EnumData<enum ActionDrawerMode>(35, 35, QMC::EnumFlags{}).add({
            {   44, ActionDrawerMode::Pinned },
            {   45, ActionDrawerMode::Expanded },
        }),
        // enum 'LockscreenButtonAction'
        QtMocHelpers::EnumData<enum LockscreenButtonAction>(42, 42, QMC::EnumFlags{}).add({
            {   46, LockscreenButtonAction::None },
            {   47, LockscreenButtonAction::Flashlight },
            {   48, LockscreenButtonAction::Camera },
            {   49, LockscreenButtonAction::OpenApp },
        }),
    };
    QtMocHelpers::UintData qt_constructors {};
    QtMocHelpers::ClassInfos qt_classinfo({
            {    1,    2 },
            {    3,    4 },
    });
    return QtMocHelpers::metaObjectData<MobileShellSettings, void>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums, qt_constructors, qt_classinfo);
}
Q_CONSTINIT const QMetaObject MobileShellSettings::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN19MobileShellSettingsE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN19MobileShellSettingsE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN19MobileShellSettingsE_t>.metaTypes,
    nullptr
} };

void MobileShellSettings::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<MobileShellSettings *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->vibrationsEnabledChanged(); break;
        case 1: _t->vibrationDurationChanged(); break;
        case 2: _t->navigationPanelEnabledChanged(); break;
        case 3: _t->gesturePanelEnabledChanged(); break;
        case 4: _t->alwaysShowKeyboardToggleOnNavigationPanelChanged(); break;
        case 5: _t->keyboardButtonEnabledChanged(); break;
        case 6: _t->animationsEnabledChanged(); break;
        case 7: _t->dateInStatusBarChanged(); break;
        case 8: _t->statusBarScaleFactorChanged(); break;
        case 9: _t->showBatteryPercentageChanged(); break;
        case 10: _t->taskSwitcherPreviewsEnabledChanged(); break;
        case 11: _t->actionDrawerTopLeftModeChanged(); break;
        case 12: _t->actionDrawerTopRightModeChanged(); break;
        case 13: _t->quickSettingsColumnsChanged(); break;
        case 14: _t->convergenceModeEnabledChanged(); break;
        case 15: _t->autoHidePanelsEnabledChanged(); break;
        case 16: _t->allowLogoutChanged(); break;
        case 17: _t->lockscreenLeftButtonActionChanged(); break;
        case 18: _t->lockscreenRightButtonActionChanged(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (MobileShellSettings::*)()>(_a, &MobileShellSettings::vibrationsEnabledChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (MobileShellSettings::*)()>(_a, &MobileShellSettings::vibrationDurationChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (MobileShellSettings::*)()>(_a, &MobileShellSettings::navigationPanelEnabledChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (MobileShellSettings::*)()>(_a, &MobileShellSettings::gesturePanelEnabledChanged, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (MobileShellSettings::*)()>(_a, &MobileShellSettings::alwaysShowKeyboardToggleOnNavigationPanelChanged, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (MobileShellSettings::*)()>(_a, &MobileShellSettings::keyboardButtonEnabledChanged, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (MobileShellSettings::*)()>(_a, &MobileShellSettings::animationsEnabledChanged, 6))
            return;
        if (QtMocHelpers::indexOfMethod<void (MobileShellSettings::*)()>(_a, &MobileShellSettings::dateInStatusBarChanged, 7))
            return;
        if (QtMocHelpers::indexOfMethod<void (MobileShellSettings::*)()>(_a, &MobileShellSettings::statusBarScaleFactorChanged, 8))
            return;
        if (QtMocHelpers::indexOfMethod<void (MobileShellSettings::*)()>(_a, &MobileShellSettings::showBatteryPercentageChanged, 9))
            return;
        if (QtMocHelpers::indexOfMethod<void (MobileShellSettings::*)()>(_a, &MobileShellSettings::taskSwitcherPreviewsEnabledChanged, 10))
            return;
        if (QtMocHelpers::indexOfMethod<void (MobileShellSettings::*)()>(_a, &MobileShellSettings::actionDrawerTopLeftModeChanged, 11))
            return;
        if (QtMocHelpers::indexOfMethod<void (MobileShellSettings::*)()>(_a, &MobileShellSettings::actionDrawerTopRightModeChanged, 12))
            return;
        if (QtMocHelpers::indexOfMethod<void (MobileShellSettings::*)()>(_a, &MobileShellSettings::quickSettingsColumnsChanged, 13))
            return;
        if (QtMocHelpers::indexOfMethod<void (MobileShellSettings::*)()>(_a, &MobileShellSettings::convergenceModeEnabledChanged, 14))
            return;
        if (QtMocHelpers::indexOfMethod<void (MobileShellSettings::*)()>(_a, &MobileShellSettings::autoHidePanelsEnabledChanged, 15))
            return;
        if (QtMocHelpers::indexOfMethod<void (MobileShellSettings::*)()>(_a, &MobileShellSettings::allowLogoutChanged, 16))
            return;
        if (QtMocHelpers::indexOfMethod<void (MobileShellSettings::*)()>(_a, &MobileShellSettings::lockscreenLeftButtonActionChanged, 17))
            return;
        if (QtMocHelpers::indexOfMethod<void (MobileShellSettings::*)()>(_a, &MobileShellSettings::lockscreenRightButtonActionChanged, 18))
            return;
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<bool*>(_v) = _t->vibrationsEnabled(); break;
        case 1: *reinterpret_cast<int*>(_v) = _t->vibrationDuration(); break;
        case 2: *reinterpret_cast<bool*>(_v) = _t->animationsEnabled(); break;
        case 3: *reinterpret_cast<bool*>(_v) = _t->dateInStatusBar(); break;
        case 4: *reinterpret_cast<float*>(_v) = _t->statusBarScaleFactor(); break;
        case 5: *reinterpret_cast<bool*>(_v) = _t->showBatteryPercentage(); break;
        case 6: *reinterpret_cast<bool*>(_v) = _t->navigationPanelEnabled(); break;
        case 7: *reinterpret_cast<bool*>(_v) = _t->alwaysShowKeyboardToggleOnNavigationPanel(); break;
        case 8: *reinterpret_cast<bool*>(_v) = _t->gesturePanelEnabled(); break;
        case 9: *reinterpret_cast<enum ActionDrawerMode*>(_v) = _t->actionDrawerTopLeftMode(); break;
        case 10: *reinterpret_cast<enum ActionDrawerMode*>(_v) = _t->actionDrawerTopRightMode(); break;
        case 11: *reinterpret_cast<int*>(_v) = _t->quickSettingsColumns(); break;
        case 12: *reinterpret_cast<bool*>(_v) = _t->convergenceModeEnabled(); break;
        case 13: *reinterpret_cast<bool*>(_v) = _t->autoHidePanelsEnabled(); break;
        case 14: *reinterpret_cast<bool*>(_v) = _t->allowLogout(); break;
        case 15: *reinterpret_cast<enum LockscreenButtonAction*>(_v) = _t->lockscreenLeftButtonAction(); break;
        case 16: *reinterpret_cast<enum LockscreenButtonAction*>(_v) = _t->lockscreenRightButtonAction(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setVibrationsEnabled(*reinterpret_cast<bool*>(_v)); break;
        case 1: _t->setVibrationDuration(*reinterpret_cast<int*>(_v)); break;
        case 2: _t->setAnimationsEnabled(*reinterpret_cast<bool*>(_v)); break;
        case 3: _t->setDateInStatusBar(*reinterpret_cast<bool*>(_v)); break;
        case 4: _t->setStatusBarScaleFactor(*reinterpret_cast<float*>(_v)); break;
        case 5: _t->setShowBatteryPercentage(*reinterpret_cast<bool*>(_v)); break;
        case 6: _t->setNavigationPanelEnabled(*reinterpret_cast<bool*>(_v)); break;
        case 7: _t->setAlwaysShowKeyboardToggleOnNavigationPanel(*reinterpret_cast<bool*>(_v)); break;
        case 8: _t->setGesturePanelEnabled(*reinterpret_cast<bool*>(_v)); break;
        case 9: _t->setActionDrawerTopLeftMode(*reinterpret_cast<enum ActionDrawerMode*>(_v)); break;
        case 10: _t->setActionDrawerTopRightMode(*reinterpret_cast<enum ActionDrawerMode*>(_v)); break;
        case 11: _t->setQuickSettingsColumns(*reinterpret_cast<int*>(_v)); break;
        case 12: _t->setConvergenceModeEnabled(*reinterpret_cast<bool*>(_v)); break;
        case 13: _t->setAutoHidePanelsEnabled(*reinterpret_cast<bool*>(_v)); break;
        case 15: _t->setLockscreenLeftButtonAction(*reinterpret_cast<enum LockscreenButtonAction*>(_v)); break;
        case 16: _t->setLockscreenRightButtonAction(*reinterpret_cast<enum LockscreenButtonAction*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *MobileShellSettings::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MobileShellSettings::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN19MobileShellSettingsE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int MobileShellSettings::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 19)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 19;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    }
    return _id;
}

// SIGNAL 0
void MobileShellSettings::vibrationsEnabledChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void MobileShellSettings::vibrationDurationChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void MobileShellSettings::navigationPanelEnabledChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void MobileShellSettings::gesturePanelEnabledChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void MobileShellSettings::alwaysShowKeyboardToggleOnNavigationPanelChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void MobileShellSettings::keyboardButtonEnabledChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void MobileShellSettings::animationsEnabledChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void MobileShellSettings::dateInStatusBarChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void MobileShellSettings::statusBarScaleFactorChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void MobileShellSettings::showBatteryPercentageChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void MobileShellSettings::taskSwitcherPreviewsEnabledChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}

// SIGNAL 11
void MobileShellSettings::actionDrawerTopLeftModeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 11, nullptr);
}

// SIGNAL 12
void MobileShellSettings::actionDrawerTopRightModeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 12, nullptr);
}

// SIGNAL 13
void MobileShellSettings::quickSettingsColumnsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 13, nullptr);
}

// SIGNAL 14
void MobileShellSettings::convergenceModeEnabledChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 14, nullptr);
}

// SIGNAL 15
void MobileShellSettings::autoHidePanelsEnabledChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 15, nullptr);
}

// SIGNAL 16
void MobileShellSettings::allowLogoutChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 16, nullptr);
}

// SIGNAL 17
void MobileShellSettings::lockscreenLeftButtonActionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 17, nullptr);
}

// SIGNAL 18
void MobileShellSettings::lockscreenRightButtonActionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 18, nullptr);
}
QT_WARNING_POP
