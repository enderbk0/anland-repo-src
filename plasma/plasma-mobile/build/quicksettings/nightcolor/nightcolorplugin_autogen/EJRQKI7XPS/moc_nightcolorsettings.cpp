/****************************************************************************
** Meta object code from reading C++ file 'nightcolorsettings.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../nightcolorsettings.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'nightcolorsettings.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN18NightColorSettingsE_t {};
} // unnamed namespace

template <> constexpr inline auto NightColorSettings::qt_create_metaobjectdata<qt_meta_tag_ZN18NightColorSettingsE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "NightColorSettings",
        "ActiveChanged",
        "",
        "ModeChanged",
        "DayTemperatureChanged",
        "NightTemperatureChanged",
        "active",
        "isActiveImmutable",
        "defaultActiveValue",
        "mode",
        "ColorCorrect::NightColorMode",
        "isModeImmutable",
        "defaultModeValue",
        "dayTemperature",
        "isDayTemperatureImmutable",
        "defaultDayTemperatureValue",
        "nightTemperature",
        "isNightTemperatureImmutable",
        "defaultNightTemperatureValue"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'ActiveChanged'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'ModeChanged'
        QtMocHelpers::SignalData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'DayTemperatureChanged'
        QtMocHelpers::SignalData<void()>(4, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'NightTemperatureChanged'
        QtMocHelpers::SignalData<void()>(5, 2, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'active'
        QtMocHelpers::PropertyData<bool>(6, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 0),
        // property 'isActiveImmutable'
        QtMocHelpers::PropertyData<bool>(7, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Constant),
        // property 'defaultActiveValue'
        QtMocHelpers::PropertyData<bool>(8, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Constant),
        // property 'mode'
        QtMocHelpers::PropertyData<ColorCorrect::NightColorMode>(9, 0x80000000 | 10, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 1),
        // property 'isModeImmutable'
        QtMocHelpers::PropertyData<bool>(11, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Constant),
        // property 'defaultModeValue'
        QtMocHelpers::PropertyData<ColorCorrect::NightColorMode>(12, 0x80000000 | 10, QMC::DefaultPropertyFlags | QMC::EnumOrFlag | QMC::Constant),
        // property 'dayTemperature'
        QtMocHelpers::PropertyData<int>(13, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 2),
        // property 'isDayTemperatureImmutable'
        QtMocHelpers::PropertyData<bool>(14, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Constant),
        // property 'defaultDayTemperatureValue'
        QtMocHelpers::PropertyData<int>(15, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Constant),
        // property 'nightTemperature'
        QtMocHelpers::PropertyData<int>(16, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 3),
        // property 'isNightTemperatureImmutable'
        QtMocHelpers::PropertyData<bool>(17, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Constant),
        // property 'defaultNightTemperatureValue'
        QtMocHelpers::PropertyData<int>(18, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Constant),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<NightColorSettings, qt_meta_tag_ZN18NightColorSettingsE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT static const QMetaObject::SuperData qt_meta_extradata_ZN18NightColorSettingsE[] = {
    QMetaObject::SuperData::link<ColorCorrect::staticMetaObject>(),
    nullptr
};

Q_CONSTINIT const QMetaObject NightColorSettings::staticMetaObject = { {
    QMetaObject::SuperData::link<KConfigSkeleton::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN18NightColorSettingsE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN18NightColorSettingsE_t>.data,
    qt_static_metacall,
    qt_meta_extradata_ZN18NightColorSettingsE,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN18NightColorSettingsE_t>.metaTypes,
    nullptr
} };

void NightColorSettings::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<NightColorSettings *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->ActiveChanged(); break;
        case 1: _t->ModeChanged(); break;
        case 2: _t->DayTemperatureChanged(); break;
        case 3: _t->NightTemperatureChanged(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (NightColorSettings::*)()>(_a, &NightColorSettings::ActiveChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (NightColorSettings::*)()>(_a, &NightColorSettings::ModeChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (NightColorSettings::*)()>(_a, &NightColorSettings::DayTemperatureChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (NightColorSettings::*)()>(_a, &NightColorSettings::NightTemperatureChanged, 3))
            return;
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<bool*>(_v) = _t->active(); break;
        case 1: *reinterpret_cast<bool*>(_v) = _t->isActiveImmutable(); break;
        case 2: *reinterpret_cast<bool*>(_v) = _t->defaultActiveValue(); break;
        case 3: *reinterpret_cast<ColorCorrect::NightColorMode*>(_v) = _t->mode(); break;
        case 4: *reinterpret_cast<bool*>(_v) = _t->isModeImmutable(); break;
        case 5: *reinterpret_cast<ColorCorrect::NightColorMode*>(_v) = _t->defaultModeValue(); break;
        case 6: *reinterpret_cast<int*>(_v) = _t->dayTemperature(); break;
        case 7: *reinterpret_cast<bool*>(_v) = _t->isDayTemperatureImmutable(); break;
        case 8: *reinterpret_cast<int*>(_v) = _t->defaultDayTemperatureValue(); break;
        case 9: *reinterpret_cast<int*>(_v) = _t->nightTemperature(); break;
        case 10: *reinterpret_cast<bool*>(_v) = _t->isNightTemperatureImmutable(); break;
        case 11: *reinterpret_cast<int*>(_v) = _t->defaultNightTemperatureValue(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setActive(*reinterpret_cast<bool*>(_v)); break;
        case 3: _t->setMode(*reinterpret_cast<ColorCorrect::NightColorMode*>(_v)); break;
        case 6: _t->setDayTemperature(*reinterpret_cast<int*>(_v)); break;
        case 9: _t->setNightTemperature(*reinterpret_cast<int*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *NightColorSettings::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *NightColorSettings::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN18NightColorSettingsE_t>.strings))
        return static_cast<void*>(this);
    return KConfigSkeleton::qt_metacast(_clname);
}

int NightColorSettings::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = KConfigSkeleton::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 4;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void NightColorSettings::ActiveChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void NightColorSettings::ModeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void NightColorSettings::DayTemperatureChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void NightColorSettings::NightTemperatureChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
