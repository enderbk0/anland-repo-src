/****************************************************************************
** Meta object code from reading C++ file 'timesettings.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../kcms/time/timesettings.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'timesettings.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN12TimeSettingsE_t {};
} // unnamed namespace

template <> constexpr inline auto TimeSettings::qt_create_metaobjectdata<qt_meta_tag_ZN12TimeSettingsE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "TimeSettings",
        "currentTimeTextChanged",
        "",
        "currentTimeChanged",
        "currentDateChanged",
        "twentyFourChanged",
        "timeFormatChanged",
        "timeZoneChanged",
        "timeZonesChanged",
        "timeZonesModelChanged",
        "useNtpChanged",
        "errorStringChanged",
        "setTimeZone",
        "timezone",
        "setTimeZonesModel",
        "TimeZoneFilterProxy*",
        "timezones",
        "setTimeFormat",
        "timeFormat",
        "setTwentyFour",
        "t",
        "timeout",
        "saveTime",
        "notify",
        "saveTimeZone",
        "newtimezone",
        "twentyFour",
        "timeZone",
        "timeZonesModel",
        "currentTime",
        "currentDate",
        "useNtp",
        "currentTimeText",
        "errorString"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'currentTimeTextChanged'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'currentTimeChanged'
        QtMocHelpers::SignalData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'currentDateChanged'
        QtMocHelpers::SignalData<void()>(4, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'twentyFourChanged'
        QtMocHelpers::SignalData<void()>(5, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'timeFormatChanged'
        QtMocHelpers::SignalData<void()>(6, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'timeZoneChanged'
        QtMocHelpers::SignalData<void()>(7, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'timeZonesChanged'
        QtMocHelpers::SignalData<void()>(8, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'timeZonesModelChanged'
        QtMocHelpers::SignalData<void()>(9, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'useNtpChanged'
        QtMocHelpers::SignalData<void()>(10, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'errorStringChanged'
        QtMocHelpers::SignalData<void()>(11, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'setTimeZone'
        QtMocHelpers::SlotData<void(const QString &)>(12, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 13 },
        }}),
        // Slot 'setTimeZonesModel'
        QtMocHelpers::SlotData<void(TimeZoneFilterProxy *)>(14, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 15, 16 },
        }}),
        // Slot 'setTimeFormat'
        QtMocHelpers::SlotData<void(const QString &)>(17, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 18 },
        }}),
        // Slot 'setTwentyFour'
        QtMocHelpers::SlotData<void(bool)>(19, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 20 },
        }}),
        // Slot 'timeout'
        QtMocHelpers::SlotData<void()>(21, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'saveTime'
        QtMocHelpers::SlotData<void()>(22, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'notify'
        QtMocHelpers::SlotData<void()>(23, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'saveTimeZone'
        QtMocHelpers::SlotData<void(const QString &)>(24, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 25 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'timeFormat'
        QtMocHelpers::PropertyData<QString>(18, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 4),
        // property 'twentyFour'
        QtMocHelpers::PropertyData<bool>(26, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 3),
        // property 'timeZone'
        QtMocHelpers::PropertyData<QString>(27, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 5),
        // property 'timeZonesModel'
        QtMocHelpers::PropertyData<TimeZoneFilterProxy*>(28, 0x80000000 | 15, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 7),
        // property 'currentTime'
        QtMocHelpers::PropertyData<QTime>(29, QMetaType::QTime, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 1),
        // property 'currentDate'
        QtMocHelpers::PropertyData<QDate>(30, QMetaType::QDate, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 2),
        // property 'useNtp'
        QtMocHelpers::PropertyData<bool>(31, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 8),
        // property 'currentTimeText'
        QtMocHelpers::PropertyData<QString>(32, QMetaType::QString, QMC::DefaultPropertyFlags, 0),
        // property 'errorString'
        QtMocHelpers::PropertyData<QString>(33, QMetaType::QString, QMC::DefaultPropertyFlags, 9),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<TimeSettings, qt_meta_tag_ZN12TimeSettingsE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject TimeSettings::staticMetaObject = { {
    QMetaObject::SuperData::link<KQuickConfigModule::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN12TimeSettingsE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN12TimeSettingsE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN12TimeSettingsE_t>.metaTypes,
    nullptr
} };

void TimeSettings::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<TimeSettings *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->currentTimeTextChanged(); break;
        case 1: _t->currentTimeChanged(); break;
        case 2: _t->currentDateChanged(); break;
        case 3: _t->twentyFourChanged(); break;
        case 4: _t->timeFormatChanged(); break;
        case 5: _t->timeZoneChanged(); break;
        case 6: _t->timeZonesChanged(); break;
        case 7: _t->timeZonesModelChanged(); break;
        case 8: _t->useNtpChanged(); break;
        case 9: _t->errorStringChanged(); break;
        case 10: _t->setTimeZone((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 11: _t->setTimeZonesModel((*reinterpret_cast<std::add_pointer_t<TimeZoneFilterProxy*>>(_a[1]))); break;
        case 12: _t->setTimeFormat((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 13: _t->setTwentyFour((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 14: _t->timeout(); break;
        case 15: _t->saveTime(); break;
        case 16: _t->notify(); break;
        case 17: _t->saveTimeZone((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< TimeZoneFilterProxy* >(); break;
            }
            break;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (TimeSettings::*)()>(_a, &TimeSettings::currentTimeTextChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (TimeSettings::*)()>(_a, &TimeSettings::currentTimeChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (TimeSettings::*)()>(_a, &TimeSettings::currentDateChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (TimeSettings::*)()>(_a, &TimeSettings::twentyFourChanged, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (TimeSettings::*)()>(_a, &TimeSettings::timeFormatChanged, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (TimeSettings::*)()>(_a, &TimeSettings::timeZoneChanged, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (TimeSettings::*)()>(_a, &TimeSettings::timeZonesChanged, 6))
            return;
        if (QtMocHelpers::indexOfMethod<void (TimeSettings::*)()>(_a, &TimeSettings::timeZonesModelChanged, 7))
            return;
        if (QtMocHelpers::indexOfMethod<void (TimeSettings::*)()>(_a, &TimeSettings::useNtpChanged, 8))
            return;
        if (QtMocHelpers::indexOfMethod<void (TimeSettings::*)()>(_a, &TimeSettings::errorStringChanged, 9))
            return;
    }
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< TimeZoneFilterProxy* >(); break;
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<QString*>(_v) = _t->timeFormat(); break;
        case 1: *reinterpret_cast<bool*>(_v) = _t->twentyFour(); break;
        case 2: *reinterpret_cast<QString*>(_v) = _t->timeZone(); break;
        case 3: *reinterpret_cast<TimeZoneFilterProxy**>(_v) = _t->timeZonesModel(); break;
        case 4: *reinterpret_cast<QTime*>(_v) = _t->currentTime(); break;
        case 5: *reinterpret_cast<QDate*>(_v) = _t->currentDate(); break;
        case 6: *reinterpret_cast<bool*>(_v) = _t->useNtp(); break;
        case 7: *reinterpret_cast<QString*>(_v) = _t->currentTimeText(); break;
        case 8: *reinterpret_cast<QString*>(_v) = _t->errorString(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setTimeFormat(*reinterpret_cast<QString*>(_v)); break;
        case 1: _t->setTwentyFour(*reinterpret_cast<bool*>(_v)); break;
        case 2: _t->setTimeZone(*reinterpret_cast<QString*>(_v)); break;
        case 3: _t->setTimeZonesModel(*reinterpret_cast<TimeZoneFilterProxy**>(_v)); break;
        case 4: _t->setCurrentTime(*reinterpret_cast<QTime*>(_v)); break;
        case 5: _t->setCurrentDate(*reinterpret_cast<QDate*>(_v)); break;
        case 6: _t->setUseNtp(*reinterpret_cast<bool*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *TimeSettings::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TimeSettings::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN12TimeSettingsE_t>.strings))
        return static_cast<void*>(this);
    return KQuickConfigModule::qt_metacast(_clname);
}

int TimeSettings::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = KQuickConfigModule::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
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
void TimeSettings::currentTimeTextChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void TimeSettings::currentTimeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void TimeSettings::currentDateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void TimeSettings::twentyFourChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void TimeSettings::timeFormatChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void TimeSettings::timeZoneChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void TimeSettings::timeZonesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void TimeSettings::timeZonesModelChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void TimeSettings::useNtpChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void TimeSettings::errorStringChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}
QT_WARNING_POP
