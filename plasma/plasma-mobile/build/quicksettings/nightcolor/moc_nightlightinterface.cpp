/****************************************************************************
** Meta object code from reading C++ file 'nightlightinterface.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "nightlightinterface.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'nightlightinterface.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN29OrgKdeKWinNightLightInterfaceE_t {};
} // unnamed namespace

template <> constexpr inline auto OrgKdeKWinNightLightInterface::qt_create_metaobjectdata<qt_meta_tag_ZN29OrgKdeKWinNightLightInterfaceE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "OrgKdeKWinNightLightInterface",
        "inhibit",
        "QDBusPendingReply<uint>",
        "",
        "preview",
        "QDBusPendingReply<>",
        "temperature",
        "stopPreview",
        "uninhibit",
        "cookie",
        "available",
        "currentTemperature",
        "daylight",
        "enabled",
        "inhibited",
        "mode",
        "previousTransitionDateTime",
        "previousTransitionDuration",
        "running",
        "scheduledTransitionDateTime",
        "scheduledTransitionDuration",
        "targetTemperature"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'inhibit'
        QtMocHelpers::SlotData<QDBusPendingReply<uint>()>(1, 3, QMC::AccessPublic, 0x80000000 | 2),
        // Slot 'preview'
        QtMocHelpers::SlotData<QDBusPendingReply<>(uint)>(4, 3, QMC::AccessPublic, 0x80000000 | 5, {{
            { QMetaType::UInt, 6 },
        }}),
        // Slot 'stopPreview'
        QtMocHelpers::SlotData<QDBusPendingReply<>()>(7, 3, QMC::AccessPublic, 0x80000000 | 5),
        // Slot 'uninhibit'
        QtMocHelpers::SlotData<QDBusPendingReply<>(uint)>(8, 3, QMC::AccessPublic, 0x80000000 | 5, {{
            { QMetaType::UInt, 9 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'available'
        QtMocHelpers::PropertyData<bool>(10, QMetaType::Bool, QMC::DefaultPropertyFlags),
        // property 'currentTemperature'
        QtMocHelpers::PropertyData<uint>(11, QMetaType::UInt, QMC::DefaultPropertyFlags),
        // property 'daylight'
        QtMocHelpers::PropertyData<bool>(12, QMetaType::Bool, QMC::DefaultPropertyFlags),
        // property 'enabled'
        QtMocHelpers::PropertyData<bool>(13, QMetaType::Bool, QMC::DefaultPropertyFlags),
        // property 'inhibited'
        QtMocHelpers::PropertyData<bool>(14, QMetaType::Bool, QMC::DefaultPropertyFlags),
        // property 'mode'
        QtMocHelpers::PropertyData<uint>(15, QMetaType::UInt, QMC::DefaultPropertyFlags),
        // property 'previousTransitionDateTime'
        QtMocHelpers::PropertyData<qulonglong>(16, QMetaType::ULongLong, QMC::DefaultPropertyFlags),
        // property 'previousTransitionDuration'
        QtMocHelpers::PropertyData<uint>(17, QMetaType::UInt, QMC::DefaultPropertyFlags),
        // property 'running'
        QtMocHelpers::PropertyData<bool>(18, QMetaType::Bool, QMC::DefaultPropertyFlags),
        // property 'scheduledTransitionDateTime'
        QtMocHelpers::PropertyData<qulonglong>(19, QMetaType::ULongLong, QMC::DefaultPropertyFlags),
        // property 'scheduledTransitionDuration'
        QtMocHelpers::PropertyData<uint>(20, QMetaType::UInt, QMC::DefaultPropertyFlags),
        // property 'targetTemperature'
        QtMocHelpers::PropertyData<uint>(21, QMetaType::UInt, QMC::DefaultPropertyFlags),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<OrgKdeKWinNightLightInterface, qt_meta_tag_ZN29OrgKdeKWinNightLightInterfaceE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject OrgKdeKWinNightLightInterface::staticMetaObject = { {
    QMetaObject::SuperData::link<QDBusAbstractInterface::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN29OrgKdeKWinNightLightInterfaceE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN29OrgKdeKWinNightLightInterfaceE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN29OrgKdeKWinNightLightInterfaceE_t>.metaTypes,
    nullptr
} };

void OrgKdeKWinNightLightInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<OrgKdeKWinNightLightInterface *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: { QDBusPendingReply<uint> _r = _t->inhibit();
            if (_a[0]) *reinterpret_cast<QDBusPendingReply<uint>*>(_a[0]) = std::move(_r); }  break;
        case 1: { QDBusPendingReply<> _r = _t->preview((*reinterpret_cast<std::add_pointer_t<uint>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QDBusPendingReply<>*>(_a[0]) = std::move(_r); }  break;
        case 2: { QDBusPendingReply<> _r = _t->stopPreview();
            if (_a[0]) *reinterpret_cast<QDBusPendingReply<>*>(_a[0]) = std::move(_r); }  break;
        case 3: { QDBusPendingReply<> _r = _t->uninhibit((*reinterpret_cast<std::add_pointer_t<uint>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QDBusPendingReply<>*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<bool*>(_v) = _t->available(); break;
        case 1: *reinterpret_cast<uint*>(_v) = _t->currentTemperature(); break;
        case 2: *reinterpret_cast<bool*>(_v) = _t->daylight(); break;
        case 3: *reinterpret_cast<bool*>(_v) = _t->enabled(); break;
        case 4: *reinterpret_cast<bool*>(_v) = _t->inhibited(); break;
        case 5: *reinterpret_cast<uint*>(_v) = _t->mode(); break;
        case 6: *reinterpret_cast<qulonglong*>(_v) = _t->previousTransitionDateTime(); break;
        case 7: *reinterpret_cast<uint*>(_v) = _t->previousTransitionDuration(); break;
        case 8: *reinterpret_cast<bool*>(_v) = _t->running(); break;
        case 9: *reinterpret_cast<qulonglong*>(_v) = _t->scheduledTransitionDateTime(); break;
        case 10: *reinterpret_cast<uint*>(_v) = _t->scheduledTransitionDuration(); break;
        case 11: *reinterpret_cast<uint*>(_v) = _t->targetTemperature(); break;
        default: break;
        }
    }
}

const QMetaObject *OrgKdeKWinNightLightInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OrgKdeKWinNightLightInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN29OrgKdeKWinNightLightInterfaceE_t>.strings))
        return static_cast<void*>(this);
    return QDBusAbstractInterface::qt_metacast(_clname);
}

int OrgKdeKWinNightLightInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDBusAbstractInterface::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
