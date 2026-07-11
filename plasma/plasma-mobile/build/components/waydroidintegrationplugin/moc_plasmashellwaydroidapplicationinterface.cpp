/****************************************************************************
** Meta object code from reading C++ file 'plasmashellwaydroidapplicationinterface.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "plasmashellwaydroidapplicationinterface.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'plasmashellwaydroidapplicationinterface.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN45OrgKdePlasmashellWaydroidApplicationInterfaceE_t {};
} // unnamed namespace

template <> constexpr inline auto OrgKdePlasmashellWaydroidApplicationInterface::qt_create_metaobjectdata<qt_meta_tag_ZN45OrgKdePlasmashellWaydroidApplicationInterfaceE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "OrgKdePlasmashellWaydroidApplicationInterface",
        "name",
        "QDBusPendingReply<QString>",
        "",
        "packageName"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'name'
        QtMocHelpers::SlotData<QDBusPendingReply<QString>()>(1, 3, QMC::AccessPublic, 0x80000000 | 2),
        // Slot 'packageName'
        QtMocHelpers::SlotData<QDBusPendingReply<QString>()>(4, 3, QMC::AccessPublic, 0x80000000 | 2),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<OrgKdePlasmashellWaydroidApplicationInterface, qt_meta_tag_ZN45OrgKdePlasmashellWaydroidApplicationInterfaceE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject OrgKdePlasmashellWaydroidApplicationInterface::staticMetaObject = { {
    QMetaObject::SuperData::link<QDBusAbstractInterface::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN45OrgKdePlasmashellWaydroidApplicationInterfaceE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN45OrgKdePlasmashellWaydroidApplicationInterfaceE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN45OrgKdePlasmashellWaydroidApplicationInterfaceE_t>.metaTypes,
    nullptr
} };

void OrgKdePlasmashellWaydroidApplicationInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<OrgKdePlasmashellWaydroidApplicationInterface *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: { QDBusPendingReply<QString> _r = _t->name();
            if (_a[0]) *reinterpret_cast<QDBusPendingReply<QString>*>(_a[0]) = std::move(_r); }  break;
        case 1: { QDBusPendingReply<QString> _r = _t->packageName();
            if (_a[0]) *reinterpret_cast<QDBusPendingReply<QString>*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

const QMetaObject *OrgKdePlasmashellWaydroidApplicationInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OrgKdePlasmashellWaydroidApplicationInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN45OrgKdePlasmashellWaydroidApplicationInterfaceE_t>.strings))
        return static_cast<void*>(this);
    return QDBusAbstractInterface::qt_metacast(_clname);
}

int OrgKdePlasmashellWaydroidApplicationInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDBusAbstractInterface::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 2;
    }
    return _id;
}
QT_WARNING_POP
