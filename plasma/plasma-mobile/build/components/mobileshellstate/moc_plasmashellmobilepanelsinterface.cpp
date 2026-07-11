/****************************************************************************
** Meta object code from reading C++ file 'plasmashellmobilepanelsinterface.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "plasmashellmobilepanelsinterface.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'plasmashellmobilepanelsinterface.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN38OrgKdePlasmashellMobilePanelsInterfaceE_t {};
} // unnamed namespace

template <> constexpr inline auto OrgKdePlasmashellMobilePanelsInterface::qt_create_metaobjectdata<qt_meta_tag_ZN38OrgKdePlasmashellMobilePanelsInterfaceE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "OrgKdePlasmashellMobilePanelsInterface",
        "navigationPanelHeightChanged",
        "",
        "navigationPanelLeftPaddingChanged",
        "navigationPanelRightPaddingChanged",
        "statusBarCenterSpacingChanged",
        "statusBarHeightChanged",
        "statusBarLeftPaddingChanged",
        "statusBarRightPaddingChanged",
        "navigationPanelHeight",
        "QDBusPendingReply<double>",
        "navigationPanelLeftPadding",
        "navigationPanelRightPadding",
        "statusBarCenterSpacing",
        "statusBarHeight",
        "statusBarLeftPadding",
        "statusBarRightPadding"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'navigationPanelHeightChanged'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'navigationPanelLeftPaddingChanged'
        QtMocHelpers::SignalData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'navigationPanelRightPaddingChanged'
        QtMocHelpers::SignalData<void()>(4, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'statusBarCenterSpacingChanged'
        QtMocHelpers::SignalData<void()>(5, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'statusBarHeightChanged'
        QtMocHelpers::SignalData<void()>(6, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'statusBarLeftPaddingChanged'
        QtMocHelpers::SignalData<void()>(7, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'statusBarRightPaddingChanged'
        QtMocHelpers::SignalData<void()>(8, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'navigationPanelHeight'
        QtMocHelpers::SlotData<QDBusPendingReply<double>()>(9, 2, QMC::AccessPublic, 0x80000000 | 10),
        // Slot 'navigationPanelLeftPadding'
        QtMocHelpers::SlotData<QDBusPendingReply<double>()>(11, 2, QMC::AccessPublic, 0x80000000 | 10),
        // Slot 'navigationPanelRightPadding'
        QtMocHelpers::SlotData<QDBusPendingReply<double>()>(12, 2, QMC::AccessPublic, 0x80000000 | 10),
        // Slot 'statusBarCenterSpacing'
        QtMocHelpers::SlotData<QDBusPendingReply<double>()>(13, 2, QMC::AccessPublic, 0x80000000 | 10),
        // Slot 'statusBarHeight'
        QtMocHelpers::SlotData<QDBusPendingReply<double>()>(14, 2, QMC::AccessPublic, 0x80000000 | 10),
        // Slot 'statusBarLeftPadding'
        QtMocHelpers::SlotData<QDBusPendingReply<double>()>(15, 2, QMC::AccessPublic, 0x80000000 | 10),
        // Slot 'statusBarRightPadding'
        QtMocHelpers::SlotData<QDBusPendingReply<double>()>(16, 2, QMC::AccessPublic, 0x80000000 | 10),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<OrgKdePlasmashellMobilePanelsInterface, qt_meta_tag_ZN38OrgKdePlasmashellMobilePanelsInterfaceE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject OrgKdePlasmashellMobilePanelsInterface::staticMetaObject = { {
    QMetaObject::SuperData::link<QDBusAbstractInterface::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN38OrgKdePlasmashellMobilePanelsInterfaceE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN38OrgKdePlasmashellMobilePanelsInterfaceE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN38OrgKdePlasmashellMobilePanelsInterfaceE_t>.metaTypes,
    nullptr
} };

void OrgKdePlasmashellMobilePanelsInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<OrgKdePlasmashellMobilePanelsInterface *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->navigationPanelHeightChanged(); break;
        case 1: _t->navigationPanelLeftPaddingChanged(); break;
        case 2: _t->navigationPanelRightPaddingChanged(); break;
        case 3: _t->statusBarCenterSpacingChanged(); break;
        case 4: _t->statusBarHeightChanged(); break;
        case 5: _t->statusBarLeftPaddingChanged(); break;
        case 6: _t->statusBarRightPaddingChanged(); break;
        case 7: { QDBusPendingReply<double> _r = _t->navigationPanelHeight();
            if (_a[0]) *reinterpret_cast<QDBusPendingReply<double>*>(_a[0]) = std::move(_r); }  break;
        case 8: { QDBusPendingReply<double> _r = _t->navigationPanelLeftPadding();
            if (_a[0]) *reinterpret_cast<QDBusPendingReply<double>*>(_a[0]) = std::move(_r); }  break;
        case 9: { QDBusPendingReply<double> _r = _t->navigationPanelRightPadding();
            if (_a[0]) *reinterpret_cast<QDBusPendingReply<double>*>(_a[0]) = std::move(_r); }  break;
        case 10: { QDBusPendingReply<double> _r = _t->statusBarCenterSpacing();
            if (_a[0]) *reinterpret_cast<QDBusPendingReply<double>*>(_a[0]) = std::move(_r); }  break;
        case 11: { QDBusPendingReply<double> _r = _t->statusBarHeight();
            if (_a[0]) *reinterpret_cast<QDBusPendingReply<double>*>(_a[0]) = std::move(_r); }  break;
        case 12: { QDBusPendingReply<double> _r = _t->statusBarLeftPadding();
            if (_a[0]) *reinterpret_cast<QDBusPendingReply<double>*>(_a[0]) = std::move(_r); }  break;
        case 13: { QDBusPendingReply<double> _r = _t->statusBarRightPadding();
            if (_a[0]) *reinterpret_cast<QDBusPendingReply<double>*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (OrgKdePlasmashellMobilePanelsInterface::*)()>(_a, &OrgKdePlasmashellMobilePanelsInterface::navigationPanelHeightChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (OrgKdePlasmashellMobilePanelsInterface::*)()>(_a, &OrgKdePlasmashellMobilePanelsInterface::navigationPanelLeftPaddingChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (OrgKdePlasmashellMobilePanelsInterface::*)()>(_a, &OrgKdePlasmashellMobilePanelsInterface::navigationPanelRightPaddingChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (OrgKdePlasmashellMobilePanelsInterface::*)()>(_a, &OrgKdePlasmashellMobilePanelsInterface::statusBarCenterSpacingChanged, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (OrgKdePlasmashellMobilePanelsInterface::*)()>(_a, &OrgKdePlasmashellMobilePanelsInterface::statusBarHeightChanged, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (OrgKdePlasmashellMobilePanelsInterface::*)()>(_a, &OrgKdePlasmashellMobilePanelsInterface::statusBarLeftPaddingChanged, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (OrgKdePlasmashellMobilePanelsInterface::*)()>(_a, &OrgKdePlasmashellMobilePanelsInterface::statusBarRightPaddingChanged, 6))
            return;
    }
}

const QMetaObject *OrgKdePlasmashellMobilePanelsInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OrgKdePlasmashellMobilePanelsInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN38OrgKdePlasmashellMobilePanelsInterfaceE_t>.strings))
        return static_cast<void*>(this);
    return QDBusAbstractInterface::qt_metacast(_clname);
}

int OrgKdePlasmashellMobilePanelsInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDBusAbstractInterface::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void OrgKdePlasmashellMobilePanelsInterface::navigationPanelHeightChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void OrgKdePlasmashellMobilePanelsInterface::navigationPanelLeftPaddingChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void OrgKdePlasmashellMobilePanelsInterface::navigationPanelRightPaddingChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void OrgKdePlasmashellMobilePanelsInterface::statusBarCenterSpacingChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void OrgKdePlasmashellMobilePanelsInterface::statusBarHeightChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void OrgKdePlasmashellMobilePanelsInterface::statusBarLeftPaddingChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void OrgKdePlasmashellMobilePanelsInterface::statusBarRightPaddingChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}
QT_WARNING_POP
