/****************************************************************************
** Meta object code from reading C++ file 'plasmakeyboardsettings.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../plasmakeyboardsettings.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'plasmakeyboardsettings.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN22PlasmaKeyboardSettingsE_t {};
} // unnamed namespace

template <> constexpr inline auto PlasmaKeyboardSettings::qt_create_metaobjectdata<qt_meta_tag_ZN22PlasmaKeyboardSettingsE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "PlasmaKeyboardSettings",
        "QML.Element",
        "auto",
        "QML.Singleton",
        "true",
        "soundEnabledChanged",
        "",
        "vibrationEnabledChanged",
        "vibrationMsChanged",
        "enabledLocalesChanged",
        "keyboardNavigationEnabledChanged",
        "autoCapitalizationEnabledChanged",
        "panelFillScreenWidthChanged",
        "diacriticsPopupEnabledChanged",
        "diacriticsHoldThresholdMsChanged",
        "soundEnabled",
        "isSoundEnabledImmutable",
        "defaultSoundEnabledValue",
        "vibrationEnabled",
        "isVibrationEnabledImmutable",
        "defaultVibrationEnabledValue",
        "vibrationMs",
        "isVibrationMsImmutable",
        "defaultVibrationMsValue",
        "enabledLocales",
        "isEnabledLocalesImmutable",
        "keyboardNavigationEnabled",
        "isKeyboardNavigationEnabledImmutable",
        "defaultKeyboardNavigationEnabledValue",
        "autoCapitalizationEnabled",
        "isAutoCapitalizationEnabledImmutable",
        "defaultAutoCapitalizationEnabledValue",
        "panelFillScreenWidth",
        "isPanelFillScreenWidthImmutable",
        "defaultPanelFillScreenWidthValue",
        "diacriticsPopupEnabled",
        "isDiacriticsPopupEnabledImmutable",
        "defaultDiacriticsPopupEnabledValue",
        "diacriticsHoldThresholdMs",
        "isDiacriticsHoldThresholdMsImmutable",
        "defaultDiacriticsHoldThresholdMsValue"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'soundEnabledChanged'
        QtMocHelpers::SignalData<void()>(5, 6, QMC::AccessPublic, QMetaType::Void),
        // Signal 'vibrationEnabledChanged'
        QtMocHelpers::SignalData<void()>(7, 6, QMC::AccessPublic, QMetaType::Void),
        // Signal 'vibrationMsChanged'
        QtMocHelpers::SignalData<void()>(8, 6, QMC::AccessPublic, QMetaType::Void),
        // Signal 'enabledLocalesChanged'
        QtMocHelpers::SignalData<void()>(9, 6, QMC::AccessPublic, QMetaType::Void),
        // Signal 'keyboardNavigationEnabledChanged'
        QtMocHelpers::SignalData<void()>(10, 6, QMC::AccessPublic, QMetaType::Void),
        // Signal 'autoCapitalizationEnabledChanged'
        QtMocHelpers::SignalData<void()>(11, 6, QMC::AccessPublic, QMetaType::Void),
        // Signal 'panelFillScreenWidthChanged'
        QtMocHelpers::SignalData<void()>(12, 6, QMC::AccessPublic, QMetaType::Void),
        // Signal 'diacriticsPopupEnabledChanged'
        QtMocHelpers::SignalData<void()>(13, 6, QMC::AccessPublic, QMetaType::Void),
        // Signal 'diacriticsHoldThresholdMsChanged'
        QtMocHelpers::SignalData<void()>(14, 6, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'soundEnabled'
        QtMocHelpers::PropertyData<bool>(15, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 0),
        // property 'isSoundEnabledImmutable'
        QtMocHelpers::PropertyData<bool>(16, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Constant),
        // property 'defaultSoundEnabledValue'
        QtMocHelpers::PropertyData<bool>(17, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Constant),
        // property 'vibrationEnabled'
        QtMocHelpers::PropertyData<bool>(18, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 1),
        // property 'isVibrationEnabledImmutable'
        QtMocHelpers::PropertyData<bool>(19, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Constant),
        // property 'defaultVibrationEnabledValue'
        QtMocHelpers::PropertyData<bool>(20, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Constant),
        // property 'vibrationMs'
        QtMocHelpers::PropertyData<int>(21, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 2),
        // property 'isVibrationMsImmutable'
        QtMocHelpers::PropertyData<bool>(22, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Constant),
        // property 'defaultVibrationMsValue'
        QtMocHelpers::PropertyData<int>(23, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Constant),
        // property 'enabledLocales'
        QtMocHelpers::PropertyData<QStringList>(24, QMetaType::QStringList, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 3),
        // property 'isEnabledLocalesImmutable'
        QtMocHelpers::PropertyData<bool>(25, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Constant),
        // property 'keyboardNavigationEnabled'
        QtMocHelpers::PropertyData<bool>(26, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 4),
        // property 'isKeyboardNavigationEnabledImmutable'
        QtMocHelpers::PropertyData<bool>(27, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Constant),
        // property 'defaultKeyboardNavigationEnabledValue'
        QtMocHelpers::PropertyData<bool>(28, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Constant),
        // property 'autoCapitalizationEnabled'
        QtMocHelpers::PropertyData<bool>(29, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 5),
        // property 'isAutoCapitalizationEnabledImmutable'
        QtMocHelpers::PropertyData<bool>(30, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Constant),
        // property 'defaultAutoCapitalizationEnabledValue'
        QtMocHelpers::PropertyData<bool>(31, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Constant),
        // property 'panelFillScreenWidth'
        QtMocHelpers::PropertyData<bool>(32, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 6),
        // property 'isPanelFillScreenWidthImmutable'
        QtMocHelpers::PropertyData<bool>(33, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Constant),
        // property 'defaultPanelFillScreenWidthValue'
        QtMocHelpers::PropertyData<bool>(34, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Constant),
        // property 'diacriticsPopupEnabled'
        QtMocHelpers::PropertyData<bool>(35, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 7),
        // property 'isDiacriticsPopupEnabledImmutable'
        QtMocHelpers::PropertyData<bool>(36, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Constant),
        // property 'defaultDiacriticsPopupEnabledValue'
        QtMocHelpers::PropertyData<bool>(37, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Constant),
        // property 'diacriticsHoldThresholdMs'
        QtMocHelpers::PropertyData<int>(38, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 8),
        // property 'isDiacriticsHoldThresholdMsImmutable'
        QtMocHelpers::PropertyData<bool>(39, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Constant),
        // property 'defaultDiacriticsHoldThresholdMsValue'
        QtMocHelpers::PropertyData<int>(40, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Constant),
    };
    QtMocHelpers::UintData qt_enums {
    };
    QtMocHelpers::UintData qt_constructors {};
    QtMocHelpers::ClassInfos qt_classinfo({
            {    1,    2 },
            {    3,    4 },
    });
    return QtMocHelpers::metaObjectData<PlasmaKeyboardSettings, void>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums, qt_constructors, qt_classinfo);
}
Q_CONSTINIT const QMetaObject PlasmaKeyboardSettings::staticMetaObject = { {
    QMetaObject::SuperData::link<KConfigSkeleton::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN22PlasmaKeyboardSettingsE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN22PlasmaKeyboardSettingsE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN22PlasmaKeyboardSettingsE_t>.metaTypes,
    nullptr
} };

void PlasmaKeyboardSettings::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<PlasmaKeyboardSettings *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->soundEnabledChanged(); break;
        case 1: _t->vibrationEnabledChanged(); break;
        case 2: _t->vibrationMsChanged(); break;
        case 3: _t->enabledLocalesChanged(); break;
        case 4: _t->keyboardNavigationEnabledChanged(); break;
        case 5: _t->autoCapitalizationEnabledChanged(); break;
        case 6: _t->panelFillScreenWidthChanged(); break;
        case 7: _t->diacriticsPopupEnabledChanged(); break;
        case 8: _t->diacriticsHoldThresholdMsChanged(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (PlasmaKeyboardSettings::*)()>(_a, &PlasmaKeyboardSettings::soundEnabledChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (PlasmaKeyboardSettings::*)()>(_a, &PlasmaKeyboardSettings::vibrationEnabledChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (PlasmaKeyboardSettings::*)()>(_a, &PlasmaKeyboardSettings::vibrationMsChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (PlasmaKeyboardSettings::*)()>(_a, &PlasmaKeyboardSettings::enabledLocalesChanged, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (PlasmaKeyboardSettings::*)()>(_a, &PlasmaKeyboardSettings::keyboardNavigationEnabledChanged, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (PlasmaKeyboardSettings::*)()>(_a, &PlasmaKeyboardSettings::autoCapitalizationEnabledChanged, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (PlasmaKeyboardSettings::*)()>(_a, &PlasmaKeyboardSettings::panelFillScreenWidthChanged, 6))
            return;
        if (QtMocHelpers::indexOfMethod<void (PlasmaKeyboardSettings::*)()>(_a, &PlasmaKeyboardSettings::diacriticsPopupEnabledChanged, 7))
            return;
        if (QtMocHelpers::indexOfMethod<void (PlasmaKeyboardSettings::*)()>(_a, &PlasmaKeyboardSettings::diacriticsHoldThresholdMsChanged, 8))
            return;
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<bool*>(_v) = _t->soundEnabled(); break;
        case 1: *reinterpret_cast<bool*>(_v) = _t->isSoundEnabledImmutable(); break;
        case 2: *reinterpret_cast<bool*>(_v) = _t->defaultSoundEnabledValue(); break;
        case 3: *reinterpret_cast<bool*>(_v) = _t->vibrationEnabled(); break;
        case 4: *reinterpret_cast<bool*>(_v) = _t->isVibrationEnabledImmutable(); break;
        case 5: *reinterpret_cast<bool*>(_v) = _t->defaultVibrationEnabledValue(); break;
        case 6: *reinterpret_cast<int*>(_v) = _t->vibrationMs(); break;
        case 7: *reinterpret_cast<bool*>(_v) = _t->isVibrationMsImmutable(); break;
        case 8: *reinterpret_cast<int*>(_v) = _t->defaultVibrationMsValue(); break;
        case 9: *reinterpret_cast<QStringList*>(_v) = _t->enabledLocales(); break;
        case 10: *reinterpret_cast<bool*>(_v) = _t->isEnabledLocalesImmutable(); break;
        case 11: *reinterpret_cast<bool*>(_v) = _t->keyboardNavigationEnabled(); break;
        case 12: *reinterpret_cast<bool*>(_v) = _t->isKeyboardNavigationEnabledImmutable(); break;
        case 13: *reinterpret_cast<bool*>(_v) = _t->defaultKeyboardNavigationEnabledValue(); break;
        case 14: *reinterpret_cast<bool*>(_v) = _t->autoCapitalizationEnabled(); break;
        case 15: *reinterpret_cast<bool*>(_v) = _t->isAutoCapitalizationEnabledImmutable(); break;
        case 16: *reinterpret_cast<bool*>(_v) = _t->defaultAutoCapitalizationEnabledValue(); break;
        case 17: *reinterpret_cast<bool*>(_v) = _t->panelFillScreenWidth(); break;
        case 18: *reinterpret_cast<bool*>(_v) = _t->isPanelFillScreenWidthImmutable(); break;
        case 19: *reinterpret_cast<bool*>(_v) = _t->defaultPanelFillScreenWidthValue(); break;
        case 20: *reinterpret_cast<bool*>(_v) = _t->diacriticsPopupEnabled(); break;
        case 21: *reinterpret_cast<bool*>(_v) = _t->isDiacriticsPopupEnabledImmutable(); break;
        case 22: *reinterpret_cast<bool*>(_v) = _t->defaultDiacriticsPopupEnabledValue(); break;
        case 23: *reinterpret_cast<int*>(_v) = _t->diacriticsHoldThresholdMs(); break;
        case 24: *reinterpret_cast<bool*>(_v) = _t->isDiacriticsHoldThresholdMsImmutable(); break;
        case 25: *reinterpret_cast<int*>(_v) = _t->defaultDiacriticsHoldThresholdMsValue(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setSoundEnabled(*reinterpret_cast<bool*>(_v)); break;
        case 3: _t->setVibrationEnabled(*reinterpret_cast<bool*>(_v)); break;
        case 6: _t->setVibrationMs(*reinterpret_cast<int*>(_v)); break;
        case 9: _t->setEnabledLocales(*reinterpret_cast<QStringList*>(_v)); break;
        case 11: _t->setKeyboardNavigationEnabled(*reinterpret_cast<bool*>(_v)); break;
        case 14: _t->setAutoCapitalizationEnabled(*reinterpret_cast<bool*>(_v)); break;
        case 17: _t->setPanelFillScreenWidth(*reinterpret_cast<bool*>(_v)); break;
        case 20: _t->setDiacriticsPopupEnabled(*reinterpret_cast<bool*>(_v)); break;
        case 23: _t->setDiacriticsHoldThresholdMs(*reinterpret_cast<int*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *PlasmaKeyboardSettings::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PlasmaKeyboardSettings::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN22PlasmaKeyboardSettingsE_t>.strings))
        return static_cast<void*>(this);
    return KConfigSkeleton::qt_metacast(_clname);
}

int PlasmaKeyboardSettings::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = KConfigSkeleton::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 9;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 26;
    }
    return _id;
}

// SIGNAL 0
void PlasmaKeyboardSettings::soundEnabledChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void PlasmaKeyboardSettings::vibrationEnabledChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void PlasmaKeyboardSettings::vibrationMsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void PlasmaKeyboardSettings::enabledLocalesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void PlasmaKeyboardSettings::keyboardNavigationEnabledChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void PlasmaKeyboardSettings::autoCapitalizationEnabledChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void PlasmaKeyboardSettings::panelFillScreenWidthChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void PlasmaKeyboardSettings::diacriticsPopupEnabledChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void PlasmaKeyboardSettings::diacriticsHoldThresholdMsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}
QT_WARNING_POP
