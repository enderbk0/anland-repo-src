/****************************************************************************
** Meta object code from reading C++ file 'foliosettings.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../containments/homescreens/folio/foliosettings.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'foliosettings.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN13FolioSettingsE_t {};
} // unnamed namespace

template <> constexpr inline auto FolioSettings::qt_create_metaobjectdata<qt_meta_tag_ZN13FolioSettingsE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "FolioSettings",
        "QML.Element",
        "auto",
        "QML.Creatable",
        "false",
        "QML.UncreatableReason",
        "",
        "homeScreenRowsChanged",
        "homeScreenColumnsChanged",
        "showPagesAppLabelsChanged",
        "showFavouritesAppLabelsChanged",
        "lockLayoutChanged",
        "delegateIconSizeChanged",
        "showFavouritesBarBackgroundChanged",
        "pageTransitionEffectChanged",
        "wallpaperBlurEffectChanged",
        "doubleTapToLockChanged",
        "load",
        "saveLayoutToFile",
        "path",
        "loadLayoutFromFile",
        "homeScreenRows",
        "homeScreenColumns",
        "showPagesAppLabels",
        "showFavouritesAppLabels",
        "lockLayout",
        "delegateIconSize",
        "showFavouritesBarBackground",
        "pageTransitionEffect",
        "FolioSettings::PageTransitionEffect",
        "wallpaperBlurEffect",
        "FolioSettings::WallpaperBlurEffect",
        "doubleTapToLock",
        "PageTransitionEffect",
        "SlideTransition",
        "CubeTransition",
        "FadeTransition",
        "StackTransition",
        "RotationTransition",
        "WallpaperBlurEffect",
        "None",
        "Simple",
        "Full"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'homeScreenRowsChanged'
        QtMocHelpers::SignalData<void()>(7, 6, QMC::AccessPublic, QMetaType::Void),
        // Signal 'homeScreenColumnsChanged'
        QtMocHelpers::SignalData<void()>(8, 6, QMC::AccessPublic, QMetaType::Void),
        // Signal 'showPagesAppLabelsChanged'
        QtMocHelpers::SignalData<void()>(9, 6, QMC::AccessPublic, QMetaType::Void),
        // Signal 'showFavouritesAppLabelsChanged'
        QtMocHelpers::SignalData<void()>(10, 6, QMC::AccessPublic, QMetaType::Void),
        // Signal 'lockLayoutChanged'
        QtMocHelpers::SignalData<void()>(11, 6, QMC::AccessPublic, QMetaType::Void),
        // Signal 'delegateIconSizeChanged'
        QtMocHelpers::SignalData<void()>(12, 6, QMC::AccessPublic, QMetaType::Void),
        // Signal 'showFavouritesBarBackgroundChanged'
        QtMocHelpers::SignalData<void()>(13, 6, QMC::AccessPublic, QMetaType::Void),
        // Signal 'pageTransitionEffectChanged'
        QtMocHelpers::SignalData<void()>(14, 6, QMC::AccessPublic, QMetaType::Void),
        // Signal 'wallpaperBlurEffectChanged'
        QtMocHelpers::SignalData<void()>(15, 6, QMC::AccessPublic, QMetaType::Void),
        // Signal 'doubleTapToLockChanged'
        QtMocHelpers::SignalData<void()>(16, 6, QMC::AccessPublic, QMetaType::Void),
        // Method 'load'
        QtMocHelpers::MethodData<void()>(17, 6, QMC::AccessPublic, QMetaType::Void),
        // Method 'saveLayoutToFile'
        QtMocHelpers::MethodData<bool(QString)>(18, 6, QMC::AccessPublic, QMetaType::Bool, {{
            { QMetaType::QString, 19 },
        }}),
        // Method 'loadLayoutFromFile'
        QtMocHelpers::MethodData<bool(QString)>(20, 6, QMC::AccessPublic, QMetaType::Bool, {{
            { QMetaType::QString, 19 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'homeScreenRows'
        QtMocHelpers::PropertyData<int>(21, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 0),
        // property 'homeScreenColumns'
        QtMocHelpers::PropertyData<int>(22, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 1),
        // property 'showPagesAppLabels'
        QtMocHelpers::PropertyData<bool>(23, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 2),
        // property 'showFavouritesAppLabels'
        QtMocHelpers::PropertyData<bool>(24, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 3),
        // property 'lockLayout'
        QtMocHelpers::PropertyData<bool>(25, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 4),
        // property 'delegateIconSize'
        QtMocHelpers::PropertyData<int>(26, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 5),
        // property 'showFavouritesBarBackground'
        QtMocHelpers::PropertyData<bool>(27, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 6),
        // property 'pageTransitionEffect'
        QtMocHelpers::PropertyData<FolioSettings::PageTransitionEffect>(28, 0x80000000 | 29, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 7),
        // property 'wallpaperBlurEffect'
        QtMocHelpers::PropertyData<FolioSettings::WallpaperBlurEffect>(30, 0x80000000 | 31, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 8),
        // property 'doubleTapToLock'
        QtMocHelpers::PropertyData<bool>(32, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 9),
    };
    QtMocHelpers::UintData qt_enums {
        // enum 'PageTransitionEffect'
        QtMocHelpers::EnumData<enum PageTransitionEffect>(33, 33, QMC::EnumFlags{}).add({
            {   34, PageTransitionEffect::SlideTransition },
            {   35, PageTransitionEffect::CubeTransition },
            {   36, PageTransitionEffect::FadeTransition },
            {   37, PageTransitionEffect::StackTransition },
            {   38, PageTransitionEffect::RotationTransition },
        }),
        // enum 'WallpaperBlurEffect'
        QtMocHelpers::EnumData<enum WallpaperBlurEffect>(39, 39, QMC::EnumFlags{}).add({
            {   40, WallpaperBlurEffect::None },
            {   41, WallpaperBlurEffect::Simple },
            {   42, WallpaperBlurEffect::Full },
        }),
    };
    QtMocHelpers::UintData qt_constructors {};
    QtMocHelpers::ClassInfos qt_classinfo({
            {    1,    2 },
            {    3,    4 },
            {    5,    6 },
    });
    return QtMocHelpers::metaObjectData<FolioSettings, void>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums, qt_constructors, qt_classinfo);
}
Q_CONSTINIT const QMetaObject FolioSettings::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13FolioSettingsE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13FolioSettingsE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN13FolioSettingsE_t>.metaTypes,
    nullptr
} };

void FolioSettings::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<FolioSettings *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->homeScreenRowsChanged(); break;
        case 1: _t->homeScreenColumnsChanged(); break;
        case 2: _t->showPagesAppLabelsChanged(); break;
        case 3: _t->showFavouritesAppLabelsChanged(); break;
        case 4: _t->lockLayoutChanged(); break;
        case 5: _t->delegateIconSizeChanged(); break;
        case 6: _t->showFavouritesBarBackgroundChanged(); break;
        case 7: _t->pageTransitionEffectChanged(); break;
        case 8: _t->wallpaperBlurEffectChanged(); break;
        case 9: _t->doubleTapToLockChanged(); break;
        case 10: _t->load(); break;
        case 11: { bool _r = _t->saveLayoutToFile((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 12: { bool _r = _t->loadLayoutFromFile((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (FolioSettings::*)()>(_a, &FolioSettings::homeScreenRowsChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (FolioSettings::*)()>(_a, &FolioSettings::homeScreenColumnsChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (FolioSettings::*)()>(_a, &FolioSettings::showPagesAppLabelsChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (FolioSettings::*)()>(_a, &FolioSettings::showFavouritesAppLabelsChanged, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (FolioSettings::*)()>(_a, &FolioSettings::lockLayoutChanged, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (FolioSettings::*)()>(_a, &FolioSettings::delegateIconSizeChanged, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (FolioSettings::*)()>(_a, &FolioSettings::showFavouritesBarBackgroundChanged, 6))
            return;
        if (QtMocHelpers::indexOfMethod<void (FolioSettings::*)()>(_a, &FolioSettings::pageTransitionEffectChanged, 7))
            return;
        if (QtMocHelpers::indexOfMethod<void (FolioSettings::*)()>(_a, &FolioSettings::wallpaperBlurEffectChanged, 8))
            return;
        if (QtMocHelpers::indexOfMethod<void (FolioSettings::*)()>(_a, &FolioSettings::doubleTapToLockChanged, 9))
            return;
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<int*>(_v) = _t->homeScreenRows(); break;
        case 1: *reinterpret_cast<int*>(_v) = _t->homeScreenColumns(); break;
        case 2: *reinterpret_cast<bool*>(_v) = _t->showPagesAppLabels(); break;
        case 3: *reinterpret_cast<bool*>(_v) = _t->showFavouritesAppLabels(); break;
        case 4: *reinterpret_cast<bool*>(_v) = _t->lockLayout(); break;
        case 5: *reinterpret_cast<int*>(_v) = _t->delegateIconSize(); break;
        case 6: *reinterpret_cast<bool*>(_v) = _t->showFavouritesBarBackground(); break;
        case 7: *reinterpret_cast<FolioSettings::PageTransitionEffect*>(_v) = _t->pageTransitionEffect(); break;
        case 8: *reinterpret_cast<FolioSettings::WallpaperBlurEffect*>(_v) = _t->wallpaperBlurEffect(); break;
        case 9: *reinterpret_cast<bool*>(_v) = _t->doubleTapToLock(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setHomeScreenRows(*reinterpret_cast<int*>(_v)); break;
        case 1: _t->setHomeScreenColumns(*reinterpret_cast<int*>(_v)); break;
        case 2: _t->setShowPagesAppLabels(*reinterpret_cast<bool*>(_v)); break;
        case 3: _t->setShowFavouritesAppLabels(*reinterpret_cast<bool*>(_v)); break;
        case 4: _t->setLockLayout(*reinterpret_cast<bool*>(_v)); break;
        case 5: _t->setDelegateIconSize(*reinterpret_cast<int*>(_v)); break;
        case 6: _t->setShowFavouritesBarBackground(*reinterpret_cast<bool*>(_v)); break;
        case 7: _t->setPageTransitionEffect(*reinterpret_cast<FolioSettings::PageTransitionEffect*>(_v)); break;
        case 8: _t->setWallpaperBlurEffect(*reinterpret_cast<FolioSettings::WallpaperBlurEffect*>(_v)); break;
        case 9: _t->setDoubleTapToLock(*reinterpret_cast<bool*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *FolioSettings::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FolioSettings::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13FolioSettingsE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int FolioSettings::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 13;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void FolioSettings::homeScreenRowsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void FolioSettings::homeScreenColumnsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void FolioSettings::showPagesAppLabelsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void FolioSettings::showFavouritesAppLabelsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void FolioSettings::lockLayoutChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void FolioSettings::delegateIconSizeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void FolioSettings::showFavouritesBarBackgroundChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void FolioSettings::pageTransitionEffectChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void FolioSettings::wallpaperBlurEffectChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void FolioSettings::doubleTapToLockChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}
QT_WARNING_POP
