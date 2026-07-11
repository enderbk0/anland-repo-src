/****************************************************************************
** Meta object code from reading C++ file 'wallpaperplugin.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../components/wallpaperimageplugin/wallpaperplugin.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'wallpaperplugin.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN15WallpaperPluginE_t {};
} // unnamed namespace

template <> constexpr inline auto WallpaperPlugin::qt_create_metaobjectdata<qt_meta_tag_ZN15WallpaperPluginE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "WallpaperPlugin",
        "QML.Element",
        "auto",
        "QML.Singleton",
        "true",
        "homescreenWallpaperPathChanged",
        "",
        "lockscreenWallpaperPathChanged",
        "homescreenConfigurationChanged",
        "lockscreenConfigurationChanged",
        "currentWallpaperPluginChanged",
        "homescreenWallpaperPluginChanged",
        "lockscreenWallpaperPluginChanged",
        "loadHomescreenSettings",
        "QCoro::Task<void>",
        "loadLockscreenSettings",
        "setHomescreenWallpaperPlugin",
        "wallpaperPlugin",
        "setLockscreenWallpaperPlugin",
        "setHomescreenWallpaper",
        "path",
        "setLockscreenWallpaper",
        "saveHomescreenSettings",
        "saveLockscreenSettings",
        "homescreenWallpaperPath",
        "lockscreenWallpaperPath",
        "homescreenConfiguration",
        "QQmlPropertyMap*",
        "lockscreenConfiguration",
        "wallpaperPluginModel",
        "PlasmaQuick::ConfigModel*",
        "homescreenWallpaperPlugin",
        "homescreenWallpaperPluginSource",
        "lockscreenWallpaperPlugin",
        "lockscreenWallpaperPluginSource"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'homescreenWallpaperPathChanged'
        QtMocHelpers::SignalData<void()>(5, 6, QMC::AccessPublic, QMetaType::Void),
        // Signal 'lockscreenWallpaperPathChanged'
        QtMocHelpers::SignalData<void()>(7, 6, QMC::AccessPublic, QMetaType::Void),
        // Signal 'homescreenConfigurationChanged'
        QtMocHelpers::SignalData<void()>(8, 6, QMC::AccessPublic, QMetaType::Void),
        // Signal 'lockscreenConfigurationChanged'
        QtMocHelpers::SignalData<void()>(9, 6, QMC::AccessPublic, QMetaType::Void),
        // Signal 'currentWallpaperPluginChanged'
        QtMocHelpers::SignalData<void()>(10, 6, QMC::AccessPublic, QMetaType::Void),
        // Signal 'homescreenWallpaperPluginChanged'
        QtMocHelpers::SignalData<void()>(11, 6, QMC::AccessPublic, QMetaType::Void),
        // Signal 'lockscreenWallpaperPluginChanged'
        QtMocHelpers::SignalData<void()>(12, 6, QMC::AccessPublic, QMetaType::Void),
        // Slot 'loadHomescreenSettings'
        QtMocHelpers::SlotData<QCoro::Task<void>()>(13, 6, QMC::AccessPublic, 0x80000000 | 14),
        // Slot 'loadLockscreenSettings'
        QtMocHelpers::SlotData<void()>(15, 6, QMC::AccessPublic, QMetaType::Void),
        // Method 'setHomescreenWallpaperPlugin'
        QtMocHelpers::MethodData<void(const QString &)>(16, 6, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 17 },
        }}),
        // Method 'setLockscreenWallpaperPlugin'
        QtMocHelpers::MethodData<void(const QString &)>(18, 6, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 17 },
        }}),
        // Method 'setHomescreenWallpaper'
        QtMocHelpers::MethodData<QCoro::Task<void>(const QString &)>(19, 6, QMC::AccessPublic, 0x80000000 | 14, {{
            { QMetaType::QString, 20 },
        }}),
        // Method 'setLockscreenWallpaper'
        QtMocHelpers::MethodData<void(const QString &)>(21, 6, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 20 },
        }}),
        // Method 'saveHomescreenSettings'
        QtMocHelpers::MethodData<QCoro::Task<void>()>(22, 6, QMC::AccessPublic, 0x80000000 | 14),
        // Method 'saveLockscreenSettings'
        QtMocHelpers::MethodData<void()>(23, 6, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'homescreenWallpaperPath'
        QtMocHelpers::PropertyData<QString>(24, QMetaType::QString, QMC::DefaultPropertyFlags, 0),
        // property 'lockscreenWallpaperPath'
        QtMocHelpers::PropertyData<QString>(25, QMetaType::QString, QMC::DefaultPropertyFlags, 1),
        // property 'homescreenConfiguration'
        QtMocHelpers::PropertyData<QQmlPropertyMap*>(26, 0x80000000 | 27, QMC::DefaultPropertyFlags | QMC::EnumOrFlag, 2),
        // property 'lockscreenConfiguration'
        QtMocHelpers::PropertyData<QQmlPropertyMap*>(28, 0x80000000 | 27, QMC::DefaultPropertyFlags | QMC::EnumOrFlag, 3),
        // property 'wallpaperPluginModel'
        QtMocHelpers::PropertyData<PlasmaQuick::ConfigModel*>(29, 0x80000000 | 30, QMC::DefaultPropertyFlags | QMC::EnumOrFlag | QMC::Constant),
        // property 'homescreenWallpaperPlugin'
        QtMocHelpers::PropertyData<QString>(31, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 5),
        // property 'homescreenWallpaperPluginSource'
        QtMocHelpers::PropertyData<QString>(32, QMetaType::QString, QMC::DefaultPropertyFlags, 5),
        // property 'lockscreenWallpaperPlugin'
        QtMocHelpers::PropertyData<QString>(33, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 6),
        // property 'lockscreenWallpaperPluginSource'
        QtMocHelpers::PropertyData<QString>(34, QMetaType::QString, QMC::DefaultPropertyFlags, 6),
    };
    QtMocHelpers::UintData qt_enums {
    };
    QtMocHelpers::UintData qt_constructors {};
    QtMocHelpers::ClassInfos qt_classinfo({
            {    1,    2 },
            {    3,    4 },
    });
    return QtMocHelpers::metaObjectData<WallpaperPlugin, void>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums, qt_constructors, qt_classinfo);
}
Q_CONSTINIT const QMetaObject WallpaperPlugin::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN15WallpaperPluginE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN15WallpaperPluginE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN15WallpaperPluginE_t>.metaTypes,
    nullptr
} };

void WallpaperPlugin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<WallpaperPlugin *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->homescreenWallpaperPathChanged(); break;
        case 1: _t->lockscreenWallpaperPathChanged(); break;
        case 2: _t->homescreenConfigurationChanged(); break;
        case 3: _t->lockscreenConfigurationChanged(); break;
        case 4: _t->currentWallpaperPluginChanged(); break;
        case 5: _t->homescreenWallpaperPluginChanged(); break;
        case 6: _t->lockscreenWallpaperPluginChanged(); break;
        case 7: { QCoro::Task<void> _r = _t->loadHomescreenSettings();
            if (_a[0]) *reinterpret_cast<QCoro::Task<void>*>(_a[0]) = std::move(_r); }  break;
        case 8: _t->loadLockscreenSettings(); break;
        case 9: _t->setHomescreenWallpaperPlugin((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 10: _t->setLockscreenWallpaperPlugin((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 11: { QCoro::Task<void> _r = _t->setHomescreenWallpaper((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QCoro::Task<void>*>(_a[0]) = std::move(_r); }  break;
        case 12: _t->setLockscreenWallpaper((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 13: { QCoro::Task<void> _r = _t->saveHomescreenSettings();
            if (_a[0]) *reinterpret_cast<QCoro::Task<void>*>(_a[0]) = std::move(_r); }  break;
        case 14: _t->saveLockscreenSettings(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (WallpaperPlugin::*)()>(_a, &WallpaperPlugin::homescreenWallpaperPathChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (WallpaperPlugin::*)()>(_a, &WallpaperPlugin::lockscreenWallpaperPathChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (WallpaperPlugin::*)()>(_a, &WallpaperPlugin::homescreenConfigurationChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (WallpaperPlugin::*)()>(_a, &WallpaperPlugin::lockscreenConfigurationChanged, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (WallpaperPlugin::*)()>(_a, &WallpaperPlugin::currentWallpaperPluginChanged, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (WallpaperPlugin::*)()>(_a, &WallpaperPlugin::homescreenWallpaperPluginChanged, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (WallpaperPlugin::*)()>(_a, &WallpaperPlugin::lockscreenWallpaperPluginChanged, 6))
            return;
    }
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 4:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PlasmaQuick::ConfigModel* >(); break;
        case 3:
        case 2:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQmlPropertyMap* >(); break;
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<QString*>(_v) = _t->homescreenWallpaperPath(); break;
        case 1: *reinterpret_cast<QString*>(_v) = _t->lockscreenWallpaperPath(); break;
        case 2: *reinterpret_cast<QQmlPropertyMap**>(_v) = _t->homescreenConfiguration(); break;
        case 3: *reinterpret_cast<QQmlPropertyMap**>(_v) = _t->lockscreenConfiguration(); break;
        case 4: *reinterpret_cast<PlasmaQuick::ConfigModel**>(_v) = _t->wallpaperPluginModel(); break;
        case 5: *reinterpret_cast<QString*>(_v) = _t->homescreenWallpaperPlugin(); break;
        case 6: *reinterpret_cast<QString*>(_v) = _t->homescreenWallpaperPluginSource(); break;
        case 7: *reinterpret_cast<QString*>(_v) = _t->lockscreenWallpaperPlugin(); break;
        case 8: *reinterpret_cast<QString*>(_v) = _t->lockscreenWallpaperPluginSource(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 5: _t->setHomescreenWallpaperPlugin(*reinterpret_cast<QString*>(_v)); break;
        case 7: _t->setLockscreenWallpaperPlugin(*reinterpret_cast<QString*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *WallpaperPlugin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WallpaperPlugin::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN15WallpaperPluginE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int WallpaperPlugin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 15;
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
void WallpaperPlugin::homescreenWallpaperPathChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void WallpaperPlugin::lockscreenWallpaperPathChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void WallpaperPlugin::homescreenConfigurationChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void WallpaperPlugin::lockscreenConfigurationChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void WallpaperPlugin::currentWallpaperPluginChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void WallpaperPlugin::homescreenWallpaperPluginChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void WallpaperPlugin::lockscreenWallpaperPluginChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}
namespace {
struct qt_meta_tag_ZN20WallpaperConfigModelE_t {};
} // unnamed namespace

template <> constexpr inline auto WallpaperConfigModel::qt_create_metaobjectdata<qt_meta_tag_ZN20WallpaperConfigModelE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "WallpaperConfigModel",
        "repopulate",
        ""
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'repopulate'
        QtMocHelpers::SlotData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<WallpaperConfigModel, qt_meta_tag_ZN20WallpaperConfigModelE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject WallpaperConfigModel::staticMetaObject = { {
    QMetaObject::SuperData::link<PlasmaQuick::ConfigModel::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN20WallpaperConfigModelE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN20WallpaperConfigModelE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN20WallpaperConfigModelE_t>.metaTypes,
    nullptr
} };

void WallpaperConfigModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<WallpaperConfigModel *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->repopulate(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *WallpaperConfigModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WallpaperConfigModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN20WallpaperConfigModelE_t>.strings))
        return static_cast<void*>(this);
    return PlasmaQuick::ConfigModel::qt_metacast(_clname);
}

int WallpaperConfigModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PlasmaQuick::ConfigModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 1;
    }
    return _id;
}
QT_WARNING_POP
