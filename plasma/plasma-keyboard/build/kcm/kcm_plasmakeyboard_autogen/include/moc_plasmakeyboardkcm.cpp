/****************************************************************************
** Meta object code from reading C++ file 'plasmakeyboardkcm.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../kcm/plasmakeyboardkcm.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'plasmakeyboardkcm.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN17PlasmaKeyboardKcmE_t {};
} // unnamed namespace

template <> constexpr inline auto PlasmaKeyboardKcm::qt_create_metaobjectdata<qt_meta_tag_ZN17PlasmaKeyboardKcmE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "PlasmaKeyboardKcm",
        "soundEnabledChanged",
        "",
        "vibrationEnabledChanged",
        "enabledLocalesChanged",
        "keyboardNavigationEnabledChanged",
        "autoCapitalizationEnabledChanged",
        "diacriticsPopupEnabledChanged",
        "diacriticsHoldThresholdMsChanged",
        "load",
        "save",
        "enableLocale",
        "locale",
        "disableLocale",
        "soundEnabled",
        "vibrationEnabled",
        "enabledLocales",
        "keyboardNavigationEnabled",
        "autoCapitalizationEnabled",
        "diacriticsPopupEnabled",
        "diacriticsHoldThresholdMs"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'soundEnabledChanged'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'vibrationEnabledChanged'
        QtMocHelpers::SignalData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'enabledLocalesChanged'
        QtMocHelpers::SignalData<void()>(4, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'keyboardNavigationEnabledChanged'
        QtMocHelpers::SignalData<void()>(5, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'autoCapitalizationEnabledChanged'
        QtMocHelpers::SignalData<void()>(6, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'diacriticsPopupEnabledChanged'
        QtMocHelpers::SignalData<void()>(7, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'diacriticsHoldThresholdMsChanged'
        QtMocHelpers::SignalData<void()>(8, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'load'
        QtMocHelpers::SlotData<void()>(9, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'save'
        QtMocHelpers::SlotData<void()>(10, 2, QMC::AccessPublic, QMetaType::Void),
        // Method 'enableLocale'
        QtMocHelpers::MethodData<void(const QString &)>(11, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 12 },
        }}),
        // Method 'disableLocale'
        QtMocHelpers::MethodData<void(const QString &)>(13, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 12 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'soundEnabled'
        QtMocHelpers::PropertyData<bool>(14, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 0),
        // property 'vibrationEnabled'
        QtMocHelpers::PropertyData<bool>(15, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 1),
        // property 'enabledLocales'
        QtMocHelpers::PropertyData<QStringList>(16, QMetaType::QStringList, QMC::DefaultPropertyFlags, 2),
        // property 'keyboardNavigationEnabled'
        QtMocHelpers::PropertyData<bool>(17, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 3),
        // property 'autoCapitalizationEnabled'
        QtMocHelpers::PropertyData<bool>(18, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 4),
        // property 'diacriticsPopupEnabled'
        QtMocHelpers::PropertyData<bool>(19, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 5),
        // property 'diacriticsHoldThresholdMs'
        QtMocHelpers::PropertyData<int>(20, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 6),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<PlasmaKeyboardKcm, qt_meta_tag_ZN17PlasmaKeyboardKcmE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject PlasmaKeyboardKcm::staticMetaObject = { {
    QMetaObject::SuperData::link<KQuickManagedConfigModule::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN17PlasmaKeyboardKcmE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN17PlasmaKeyboardKcmE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN17PlasmaKeyboardKcmE_t>.metaTypes,
    nullptr
} };

void PlasmaKeyboardKcm::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<PlasmaKeyboardKcm *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->soundEnabledChanged(); break;
        case 1: _t->vibrationEnabledChanged(); break;
        case 2: _t->enabledLocalesChanged(); break;
        case 3: _t->keyboardNavigationEnabledChanged(); break;
        case 4: _t->autoCapitalizationEnabledChanged(); break;
        case 5: _t->diacriticsPopupEnabledChanged(); break;
        case 6: _t->diacriticsHoldThresholdMsChanged(); break;
        case 7: _t->load(); break;
        case 8: _t->save(); break;
        case 9: _t->enableLocale((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 10: _t->disableLocale((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (PlasmaKeyboardKcm::*)()>(_a, &PlasmaKeyboardKcm::soundEnabledChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (PlasmaKeyboardKcm::*)()>(_a, &PlasmaKeyboardKcm::vibrationEnabledChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (PlasmaKeyboardKcm::*)()>(_a, &PlasmaKeyboardKcm::enabledLocalesChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (PlasmaKeyboardKcm::*)()>(_a, &PlasmaKeyboardKcm::keyboardNavigationEnabledChanged, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (PlasmaKeyboardKcm::*)()>(_a, &PlasmaKeyboardKcm::autoCapitalizationEnabledChanged, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (PlasmaKeyboardKcm::*)()>(_a, &PlasmaKeyboardKcm::diacriticsPopupEnabledChanged, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (PlasmaKeyboardKcm::*)()>(_a, &PlasmaKeyboardKcm::diacriticsHoldThresholdMsChanged, 6))
            return;
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<bool*>(_v) = _t->soundEnabled(); break;
        case 1: *reinterpret_cast<bool*>(_v) = _t->vibrationEnabled(); break;
        case 2: *reinterpret_cast<QStringList*>(_v) = _t->enabledLocales(); break;
        case 3: *reinterpret_cast<bool*>(_v) = _t->keyboardNavigationEnabled(); break;
        case 4: *reinterpret_cast<bool*>(_v) = _t->autoCapitalizationEnabled(); break;
        case 5: *reinterpret_cast<bool*>(_v) = _t->diacriticsPopupEnabled(); break;
        case 6: *reinterpret_cast<int*>(_v) = _t->diacriticsHoldThresholdMs(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setSoundEnabled(*reinterpret_cast<bool*>(_v)); break;
        case 1: _t->setVibrationEnabled(*reinterpret_cast<bool*>(_v)); break;
        case 3: _t->setKeyboardNavigationEnabled(*reinterpret_cast<bool*>(_v)); break;
        case 4: _t->setAutoCapitalizationEnabled(*reinterpret_cast<bool*>(_v)); break;
        case 5: _t->setDiacriticsPopupEnabled(*reinterpret_cast<bool*>(_v)); break;
        case 6: _t->setDiacriticsHoldThresholdMs(*reinterpret_cast<int*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *PlasmaKeyboardKcm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PlasmaKeyboardKcm::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN17PlasmaKeyboardKcmE_t>.strings))
        return static_cast<void*>(this);
    return KQuickManagedConfigModule::qt_metacast(_clname);
}

int PlasmaKeyboardKcm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = KQuickManagedConfigModule::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 11;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void PlasmaKeyboardKcm::soundEnabledChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void PlasmaKeyboardKcm::vibrationEnabledChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void PlasmaKeyboardKcm::enabledLocalesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void PlasmaKeyboardKcm::keyboardNavigationEnabledChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void PlasmaKeyboardKcm::autoCapitalizationEnabledChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void PlasmaKeyboardKcm::diacriticsPopupEnabledChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void PlasmaKeyboardKcm::diacriticsHoldThresholdMsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}
QT_WARNING_POP
