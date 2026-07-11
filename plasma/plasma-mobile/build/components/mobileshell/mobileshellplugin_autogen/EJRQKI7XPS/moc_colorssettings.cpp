/****************************************************************************
** Meta object code from reading C++ file 'colorssettings.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../colorssettings.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'colorssettings.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN14ColorsSettingsE_t {};
} // unnamed namespace

template <> constexpr inline auto ColorsSettings::qt_create_metaobjectdata<qt_meta_tag_ZN14ColorsSettingsE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "ColorsSettings",
        "colorSchemeChanged",
        "",
        "accentColorChanged",
        "lastUsedCustomAccentColorChanged",
        "accentColorFromWallpaperChanged",
        "colorScheme",
        "isColorSchemeImmutable",
        "defaultColorSchemeValue",
        "accentColor",
        "QColor",
        "isAccentColorImmutable",
        "defaultAccentColorValue",
        "lastUsedCustomAccentColor",
        "isLastUsedCustomAccentColorImmutable",
        "defaultLastUsedCustomAccentColorValue",
        "accentColorFromWallpaper",
        "isAccentColorFromWallpaperImmutable",
        "defaultAccentColorFromWallpaperValue"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'colorSchemeChanged'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'accentColorChanged'
        QtMocHelpers::SignalData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'lastUsedCustomAccentColorChanged'
        QtMocHelpers::SignalData<void()>(4, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'accentColorFromWallpaperChanged'
        QtMocHelpers::SignalData<void()>(5, 2, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'colorScheme'
        QtMocHelpers::PropertyData<QString>(6, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 0),
        // property 'isColorSchemeImmutable'
        QtMocHelpers::PropertyData<bool>(7, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Constant),
        // property 'defaultColorSchemeValue'
        QtMocHelpers::PropertyData<QString>(8, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Constant),
        // property 'accentColor'
        QtMocHelpers::PropertyData<QColor>(9, 0x80000000 | 10, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 1),
        // property 'isAccentColorImmutable'
        QtMocHelpers::PropertyData<bool>(11, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Constant),
        // property 'defaultAccentColorValue'
        QtMocHelpers::PropertyData<QColor>(12, 0x80000000 | 10, QMC::DefaultPropertyFlags | QMC::EnumOrFlag | QMC::Constant),
        // property 'lastUsedCustomAccentColor'
        QtMocHelpers::PropertyData<QColor>(13, 0x80000000 | 10, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 2),
        // property 'isLastUsedCustomAccentColorImmutable'
        QtMocHelpers::PropertyData<bool>(14, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Constant),
        // property 'defaultLastUsedCustomAccentColorValue'
        QtMocHelpers::PropertyData<QColor>(15, 0x80000000 | 10, QMC::DefaultPropertyFlags | QMC::EnumOrFlag | QMC::Constant),
        // property 'accentColorFromWallpaper'
        QtMocHelpers::PropertyData<bool>(16, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 3),
        // property 'isAccentColorFromWallpaperImmutable'
        QtMocHelpers::PropertyData<bool>(17, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Constant),
        // property 'defaultAccentColorFromWallpaperValue'
        QtMocHelpers::PropertyData<bool>(18, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Constant),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<ColorsSettings, qt_meta_tag_ZN14ColorsSettingsE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject ColorsSettings::staticMetaObject = { {
    QMetaObject::SuperData::link<KConfigSkeleton::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN14ColorsSettingsE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN14ColorsSettingsE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN14ColorsSettingsE_t>.metaTypes,
    nullptr
} };

void ColorsSettings::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<ColorsSettings *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->colorSchemeChanged(); break;
        case 1: _t->accentColorChanged(); break;
        case 2: _t->lastUsedCustomAccentColorChanged(); break;
        case 3: _t->accentColorFromWallpaperChanged(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (ColorsSettings::*)()>(_a, &ColorsSettings::colorSchemeChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (ColorsSettings::*)()>(_a, &ColorsSettings::accentColorChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (ColorsSettings::*)()>(_a, &ColorsSettings::lastUsedCustomAccentColorChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (ColorsSettings::*)()>(_a, &ColorsSettings::accentColorFromWallpaperChanged, 3))
            return;
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<QString*>(_v) = _t->colorScheme(); break;
        case 1: *reinterpret_cast<bool*>(_v) = _t->isColorSchemeImmutable(); break;
        case 2: *reinterpret_cast<QString*>(_v) = _t->defaultColorSchemeValue(); break;
        case 3: *reinterpret_cast<QColor*>(_v) = _t->accentColor(); break;
        case 4: *reinterpret_cast<bool*>(_v) = _t->isAccentColorImmutable(); break;
        case 5: *reinterpret_cast<QColor*>(_v) = _t->defaultAccentColorValue(); break;
        case 6: *reinterpret_cast<QColor*>(_v) = _t->lastUsedCustomAccentColor(); break;
        case 7: *reinterpret_cast<bool*>(_v) = _t->isLastUsedCustomAccentColorImmutable(); break;
        case 8: *reinterpret_cast<QColor*>(_v) = _t->defaultLastUsedCustomAccentColorValue(); break;
        case 9: *reinterpret_cast<bool*>(_v) = _t->accentColorFromWallpaper(); break;
        case 10: *reinterpret_cast<bool*>(_v) = _t->isAccentColorFromWallpaperImmutable(); break;
        case 11: *reinterpret_cast<bool*>(_v) = _t->defaultAccentColorFromWallpaperValue(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setColorScheme(*reinterpret_cast<QString*>(_v)); break;
        case 3: _t->setAccentColor(*reinterpret_cast<QColor*>(_v)); break;
        case 6: _t->setLastUsedCustomAccentColor(*reinterpret_cast<QColor*>(_v)); break;
        case 9: _t->setAccentColorFromWallpaper(*reinterpret_cast<bool*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *ColorsSettings::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ColorsSettings::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN14ColorsSettingsE_t>.strings))
        return static_cast<void*>(this);
    return KConfigSkeleton::qt_metacast(_clname);
}

int ColorsSettings::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void ColorsSettings::colorSchemeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void ColorsSettings::accentColorChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void ColorsSettings::lastUsedCustomAccentColorChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void ColorsSettings::accentColorFromWallpaperChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
