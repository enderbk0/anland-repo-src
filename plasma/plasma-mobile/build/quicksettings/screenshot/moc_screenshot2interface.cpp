/****************************************************************************
** Meta object code from reading C++ file 'screenshot2interface.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "screenshot2interface.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'screenshot2interface.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN30OrgKdeKWinScreenShot2InterfaceE_t {};
} // unnamed namespace

template <> constexpr inline auto OrgKdeKWinScreenShot2Interface::qt_create_metaobjectdata<qt_meta_tag_ZN30OrgKdeKWinScreenShot2InterfaceE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "OrgKdeKWinScreenShot2Interface",
        "CaptureActiveScreen",
        "QDBusPendingReply<QVariantMap>",
        "",
        "QVariantMap",
        "options",
        "QDBusUnixFileDescriptor",
        "pipe",
        "CaptureActiveWindow",
        "CaptureArea",
        "x",
        "y",
        "width",
        "height",
        "CaptureInteractive",
        "kind",
        "CaptureScreen",
        "name",
        "CaptureWindow",
        "handle",
        "CaptureWorkspace",
        "Version"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'CaptureActiveScreen'
        QtMocHelpers::SlotData<QDBusPendingReply<QVariantMap>(const QVariantMap &, const QDBusUnixFileDescriptor &)>(1, 3, QMC::AccessPublic, 0x80000000 | 2, {{
            { 0x80000000 | 4, 5 }, { 0x80000000 | 6, 7 },
        }}),
        // Slot 'CaptureActiveWindow'
        QtMocHelpers::SlotData<QDBusPendingReply<QVariantMap>(const QVariantMap &, const QDBusUnixFileDescriptor &)>(8, 3, QMC::AccessPublic, 0x80000000 | 2, {{
            { 0x80000000 | 4, 5 }, { 0x80000000 | 6, 7 },
        }}),
        // Slot 'CaptureArea'
        QtMocHelpers::SlotData<QDBusPendingReply<QVariantMap>(int, int, uint, uint, const QVariantMap &, const QDBusUnixFileDescriptor &)>(9, 3, QMC::AccessPublic, 0x80000000 | 2, {{
            { QMetaType::Int, 10 }, { QMetaType::Int, 11 }, { QMetaType::UInt, 12 }, { QMetaType::UInt, 13 },
            { 0x80000000 | 4, 5 }, { 0x80000000 | 6, 7 },
        }}),
        // Slot 'CaptureInteractive'
        QtMocHelpers::SlotData<QDBusPendingReply<QVariantMap>(uint, const QVariantMap &, const QDBusUnixFileDescriptor &)>(14, 3, QMC::AccessPublic, 0x80000000 | 2, {{
            { QMetaType::UInt, 15 }, { 0x80000000 | 4, 5 }, { 0x80000000 | 6, 7 },
        }}),
        // Slot 'CaptureScreen'
        QtMocHelpers::SlotData<QDBusPendingReply<QVariantMap>(const QString &, const QVariantMap &, const QDBusUnixFileDescriptor &)>(16, 3, QMC::AccessPublic, 0x80000000 | 2, {{
            { QMetaType::QString, 17 }, { 0x80000000 | 4, 5 }, { 0x80000000 | 6, 7 },
        }}),
        // Slot 'CaptureWindow'
        QtMocHelpers::SlotData<QDBusPendingReply<QVariantMap>(const QString &, const QVariantMap &, const QDBusUnixFileDescriptor &)>(18, 3, QMC::AccessPublic, 0x80000000 | 2, {{
            { QMetaType::QString, 19 }, { 0x80000000 | 4, 5 }, { 0x80000000 | 6, 7 },
        }}),
        // Slot 'CaptureWorkspace'
        QtMocHelpers::SlotData<QDBusPendingReply<QVariantMap>(const QVariantMap &, const QDBusUnixFileDescriptor &)>(20, 3, QMC::AccessPublic, 0x80000000 | 2, {{
            { 0x80000000 | 4, 5 }, { 0x80000000 | 6, 7 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'Version'
        QtMocHelpers::PropertyData<uint>(21, QMetaType::UInt, QMC::DefaultPropertyFlags),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<OrgKdeKWinScreenShot2Interface, qt_meta_tag_ZN30OrgKdeKWinScreenShot2InterfaceE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject OrgKdeKWinScreenShot2Interface::staticMetaObject = { {
    QMetaObject::SuperData::link<QDBusAbstractInterface::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN30OrgKdeKWinScreenShot2InterfaceE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN30OrgKdeKWinScreenShot2InterfaceE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN30OrgKdeKWinScreenShot2InterfaceE_t>.metaTypes,
    nullptr
} };

void OrgKdeKWinScreenShot2Interface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<OrgKdeKWinScreenShot2Interface *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: { QDBusPendingReply<QVariantMap> _r = _t->CaptureActiveScreen((*reinterpret_cast<std::add_pointer_t<QVariantMap>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QDBusUnixFileDescriptor>>(_a[2])));
            if (_a[0]) *reinterpret_cast<QDBusPendingReply<QVariantMap>*>(_a[0]) = std::move(_r); }  break;
        case 1: { QDBusPendingReply<QVariantMap> _r = _t->CaptureActiveWindow((*reinterpret_cast<std::add_pointer_t<QVariantMap>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QDBusUnixFileDescriptor>>(_a[2])));
            if (_a[0]) *reinterpret_cast<QDBusPendingReply<QVariantMap>*>(_a[0]) = std::move(_r); }  break;
        case 2: { QDBusPendingReply<QVariantMap> _r = _t->CaptureArea((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<uint>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<uint>>(_a[4])),(*reinterpret_cast<std::add_pointer_t<QVariantMap>>(_a[5])),(*reinterpret_cast<std::add_pointer_t<QDBusUnixFileDescriptor>>(_a[6])));
            if (_a[0]) *reinterpret_cast<QDBusPendingReply<QVariantMap>*>(_a[0]) = std::move(_r); }  break;
        case 3: { QDBusPendingReply<QVariantMap> _r = _t->CaptureInteractive((*reinterpret_cast<std::add_pointer_t<uint>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QVariantMap>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<QDBusUnixFileDescriptor>>(_a[3])));
            if (_a[0]) *reinterpret_cast<QDBusPendingReply<QVariantMap>*>(_a[0]) = std::move(_r); }  break;
        case 4: { QDBusPendingReply<QVariantMap> _r = _t->CaptureScreen((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QVariantMap>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<QDBusUnixFileDescriptor>>(_a[3])));
            if (_a[0]) *reinterpret_cast<QDBusPendingReply<QVariantMap>*>(_a[0]) = std::move(_r); }  break;
        case 5: { QDBusPendingReply<QVariantMap> _r = _t->CaptureWindow((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QVariantMap>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<QDBusUnixFileDescriptor>>(_a[3])));
            if (_a[0]) *reinterpret_cast<QDBusPendingReply<QVariantMap>*>(_a[0]) = std::move(_r); }  break;
        case 6: { QDBusPendingReply<QVariantMap> _r = _t->CaptureWorkspace((*reinterpret_cast<std::add_pointer_t<QVariantMap>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QDBusUnixFileDescriptor>>(_a[2])));
            if (_a[0]) *reinterpret_cast<QDBusPendingReply<QVariantMap>*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<uint*>(_v) = _t->version(); break;
        default: break;
        }
    }
}

const QMetaObject *OrgKdeKWinScreenShot2Interface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OrgKdeKWinScreenShot2Interface::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN30OrgKdeKWinScreenShot2InterfaceE_t>.strings))
        return static_cast<void*>(this);
    return QDBusAbstractInterface::qt_metacast(_clname);
}

int OrgKdeKWinScreenShot2Interface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDBusAbstractInterface::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 7;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
QT_WARNING_POP
