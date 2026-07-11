/****************************************************************************
** Meta object code from reading C++ file 'info.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../kcms/info/info.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'info.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN4InfoE_t {};
} // unnamed namespace

template <> constexpr inline auto Info::qt_create_metaobjectdata<qt_meta_tag_ZN4InfoE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "Info",
        "distroInfoChanged",
        "",
        "softwareInfoChanged",
        "hardwareInfoChanged",
        "copyInfoToClipboard",
        "distroInfo",
        "DistroInfo*",
        "softwareInfo",
        "SoftwareInfo*",
        "hardwareInfo",
        "HardwareInfo*",
        "vendorInfo",
        "QVariantList",
        "vendorInfoTitle"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'distroInfoChanged'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'softwareInfoChanged'
        QtMocHelpers::SignalData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'hardwareInfoChanged'
        QtMocHelpers::SignalData<void()>(4, 2, QMC::AccessPublic, QMetaType::Void),
        // Method 'copyInfoToClipboard'
        QtMocHelpers::MethodData<void() const>(5, 2, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'distroInfo'
        QtMocHelpers::PropertyData<DistroInfo*>(6, 0x80000000 | 7, QMC::DefaultPropertyFlags | QMC::EnumOrFlag, 0),
        // property 'softwareInfo'
        QtMocHelpers::PropertyData<SoftwareInfo*>(8, 0x80000000 | 9, QMC::DefaultPropertyFlags | QMC::EnumOrFlag, 1),
        // property 'hardwareInfo'
        QtMocHelpers::PropertyData<HardwareInfo*>(10, 0x80000000 | 11, QMC::DefaultPropertyFlags | QMC::EnumOrFlag, 2),
        // property 'vendorInfo'
        QtMocHelpers::PropertyData<QVariantList>(12, 0x80000000 | 13, QMC::DefaultPropertyFlags | QMC::EnumOrFlag | QMC::Constant),
        // property 'vendorInfoTitle'
        QtMocHelpers::PropertyData<QString>(14, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Constant),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<Info, qt_meta_tag_ZN4InfoE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject Info::staticMetaObject = { {
    QMetaObject::SuperData::link<KQuickConfigModule::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4InfoE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4InfoE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN4InfoE_t>.metaTypes,
    nullptr
} };

void Info::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<Info *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->distroInfoChanged(); break;
        case 1: _t->softwareInfoChanged(); break;
        case 2: _t->hardwareInfoChanged(); break;
        case 3: _t->copyInfoToClipboard(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (Info::*)()>(_a, &Info::distroInfoChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (Info::*)()>(_a, &Info::softwareInfoChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (Info::*)()>(_a, &Info::hardwareInfoChanged, 2))
            return;
    }
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< DistroInfo* >(); break;
        case 2:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< HardwareInfo* >(); break;
        case 1:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< SoftwareInfo* >(); break;
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<DistroInfo**>(_v) = _t->distroInfo(); break;
        case 1: *reinterpret_cast<SoftwareInfo**>(_v) = _t->softwareInfo(); break;
        case 2: *reinterpret_cast<HardwareInfo**>(_v) = _t->hardwareInfo(); break;
        case 3: *reinterpret_cast<QVariantList*>(_v) = _t->vendorInfo(); break;
        case 4: *reinterpret_cast<QString*>(_v) = _t->vendorInfoTitle(); break;
        default: break;
        }
    }
}

const QMetaObject *Info::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Info::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4InfoE_t>.strings))
        return static_cast<void*>(this);
    return KQuickConfigModule::qt_metacast(_clname);
}

int Info::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = KQuickConfigModule::qt_metacall(_c, _id, _a);
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
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void Info::distroInfoChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Info::softwareInfoChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void Info::hardwareInfoChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
