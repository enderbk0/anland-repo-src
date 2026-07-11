/****************************************************************************
** Meta object code from reading C++ file 'panelsettingsdbusobjectmanager.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../components/mobileshellstate/panelsettingsdbusobjectmanager.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'panelsettingsdbusobjectmanager.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN30PanelSettingsDBusObjectManagerE_t {};
} // unnamed namespace

template <> constexpr inline auto PanelSettingsDBusObjectManager::qt_create_metaobjectdata<qt_meta_tag_ZN30PanelSettingsDBusObjectManagerE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "PanelSettingsDBusObjectManager",
        "QML.Element",
        "auto",
        "QML.Singleton",
        "true",
        "registerObjects",
        ""
    };

    QtMocHelpers::UintData qt_methods {
        // Method 'registerObjects'
        QtMocHelpers::MethodData<void()>(5, 6, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    QtMocHelpers::UintData qt_constructors {};
    QtMocHelpers::ClassInfos qt_classinfo({
            {    1,    2 },
            {    3,    4 },
    });
    return QtMocHelpers::metaObjectData<PanelSettingsDBusObjectManager, void>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums, qt_constructors, qt_classinfo);
}
Q_CONSTINIT const QMetaObject PanelSettingsDBusObjectManager::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN30PanelSettingsDBusObjectManagerE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN30PanelSettingsDBusObjectManagerE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN30PanelSettingsDBusObjectManagerE_t>.metaTypes,
    nullptr
} };

void PanelSettingsDBusObjectManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<PanelSettingsDBusObjectManager *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->registerObjects(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *PanelSettingsDBusObjectManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PanelSettingsDBusObjectManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN30PanelSettingsDBusObjectManagerE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PanelSettingsDBusObjectManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
namespace {
struct qt_meta_tag_ZN23PanelSettingsDBusObjectE_t {};
} // unnamed namespace

template <> constexpr inline auto PanelSettingsDBusObject::qt_create_metaobjectdata<qt_meta_tag_ZN23PanelSettingsDBusObjectE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "PanelSettingsDBusObject",
        "D-Bus Interface",
        "org.kde.plasmashellMobilePanels",
        "statusBarHeightChanged",
        "",
        "statusBarLeftPaddingChanged",
        "statusBarRightPaddingChanged",
        "statusBarCenterSpacingChanged",
        "navigationPanelHeightChanged",
        "navigationPanelLeftPaddingChanged",
        "navigationPanelRightPaddingChanged",
        "statusBarHeight",
        "statusBarLeftPadding",
        "statusBarRightPadding",
        "statusBarCenterSpacing",
        "navigationPanelHeight",
        "navigationPanelLeftPadding",
        "navigationPanelRightPadding"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'statusBarHeightChanged'
        QtMocHelpers::SignalData<void()>(3, 4, QMC::AccessPublic | QMC::MethodScriptable, QMetaType::Void),
        // Signal 'statusBarLeftPaddingChanged'
        QtMocHelpers::SignalData<void()>(5, 4, QMC::AccessPublic | QMC::MethodScriptable, QMetaType::Void),
        // Signal 'statusBarRightPaddingChanged'
        QtMocHelpers::SignalData<void()>(6, 4, QMC::AccessPublic | QMC::MethodScriptable, QMetaType::Void),
        // Signal 'statusBarCenterSpacingChanged'
        QtMocHelpers::SignalData<void()>(7, 4, QMC::AccessPublic | QMC::MethodScriptable, QMetaType::Void),
        // Signal 'navigationPanelHeightChanged'
        QtMocHelpers::SignalData<void()>(8, 4, QMC::AccessPublic | QMC::MethodScriptable, QMetaType::Void),
        // Signal 'navigationPanelLeftPaddingChanged'
        QtMocHelpers::SignalData<void()>(9, 4, QMC::AccessPublic | QMC::MethodScriptable, QMetaType::Void),
        // Signal 'navigationPanelRightPaddingChanged'
        QtMocHelpers::SignalData<void()>(10, 4, QMC::AccessPublic | QMC::MethodScriptable, QMetaType::Void),
        // Slot 'statusBarHeight'
        QtMocHelpers::SlotData<qreal() const>(11, 4, QMC::AccessPublic | QMC::MethodScriptable, QMetaType::QReal),
        // Slot 'statusBarLeftPadding'
        QtMocHelpers::SlotData<qreal() const>(12, 4, QMC::AccessPublic | QMC::MethodScriptable, QMetaType::QReal),
        // Slot 'statusBarRightPadding'
        QtMocHelpers::SlotData<qreal() const>(13, 4, QMC::AccessPublic | QMC::MethodScriptable, QMetaType::QReal),
        // Slot 'statusBarCenterSpacing'
        QtMocHelpers::SlotData<qreal() const>(14, 4, QMC::AccessPublic | QMC::MethodScriptable, QMetaType::QReal),
        // Slot 'navigationPanelHeight'
        QtMocHelpers::SlotData<qreal() const>(15, 4, QMC::AccessPublic | QMC::MethodScriptable, QMetaType::QReal),
        // Slot 'navigationPanelLeftPadding'
        QtMocHelpers::SlotData<qreal() const>(16, 4, QMC::AccessPublic | QMC::MethodScriptable, QMetaType::QReal),
        // Slot 'navigationPanelRightPadding'
        QtMocHelpers::SlotData<qreal() const>(17, 4, QMC::AccessPublic | QMC::MethodScriptable, QMetaType::QReal),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    QtMocHelpers::UintData qt_constructors {};
    QtMocHelpers::ClassInfos qt_classinfo({
            {    1,    2 },
    });
    return QtMocHelpers::metaObjectData<PanelSettingsDBusObject, qt_meta_tag_ZN23PanelSettingsDBusObjectE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums, qt_constructors, qt_classinfo);
}
Q_CONSTINIT const QMetaObject PanelSettingsDBusObject::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN23PanelSettingsDBusObjectE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN23PanelSettingsDBusObjectE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN23PanelSettingsDBusObjectE_t>.metaTypes,
    nullptr
} };

void PanelSettingsDBusObject::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<PanelSettingsDBusObject *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->statusBarHeightChanged(); break;
        case 1: _t->statusBarLeftPaddingChanged(); break;
        case 2: _t->statusBarRightPaddingChanged(); break;
        case 3: _t->statusBarCenterSpacingChanged(); break;
        case 4: _t->navigationPanelHeightChanged(); break;
        case 5: _t->navigationPanelLeftPaddingChanged(); break;
        case 6: _t->navigationPanelRightPaddingChanged(); break;
        case 7: { qreal _r = _t->statusBarHeight();
            if (_a[0]) *reinterpret_cast<qreal*>(_a[0]) = std::move(_r); }  break;
        case 8: { qreal _r = _t->statusBarLeftPadding();
            if (_a[0]) *reinterpret_cast<qreal*>(_a[0]) = std::move(_r); }  break;
        case 9: { qreal _r = _t->statusBarRightPadding();
            if (_a[0]) *reinterpret_cast<qreal*>(_a[0]) = std::move(_r); }  break;
        case 10: { qreal _r = _t->statusBarCenterSpacing();
            if (_a[0]) *reinterpret_cast<qreal*>(_a[0]) = std::move(_r); }  break;
        case 11: { qreal _r = _t->navigationPanelHeight();
            if (_a[0]) *reinterpret_cast<qreal*>(_a[0]) = std::move(_r); }  break;
        case 12: { qreal _r = _t->navigationPanelLeftPadding();
            if (_a[0]) *reinterpret_cast<qreal*>(_a[0]) = std::move(_r); }  break;
        case 13: { qreal _r = _t->navigationPanelRightPadding();
            if (_a[0]) *reinterpret_cast<qreal*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (PanelSettingsDBusObject::*)()>(_a, &PanelSettingsDBusObject::statusBarHeightChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (PanelSettingsDBusObject::*)()>(_a, &PanelSettingsDBusObject::statusBarLeftPaddingChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (PanelSettingsDBusObject::*)()>(_a, &PanelSettingsDBusObject::statusBarRightPaddingChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (PanelSettingsDBusObject::*)()>(_a, &PanelSettingsDBusObject::statusBarCenterSpacingChanged, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (PanelSettingsDBusObject::*)()>(_a, &PanelSettingsDBusObject::navigationPanelHeightChanged, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (PanelSettingsDBusObject::*)()>(_a, &PanelSettingsDBusObject::navigationPanelLeftPaddingChanged, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (PanelSettingsDBusObject::*)()>(_a, &PanelSettingsDBusObject::navigationPanelRightPaddingChanged, 6))
            return;
    }
}

const QMetaObject *PanelSettingsDBusObject::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PanelSettingsDBusObject::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN23PanelSettingsDBusObjectE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PanelSettingsDBusObject::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void PanelSettingsDBusObject::statusBarHeightChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void PanelSettingsDBusObject::statusBarLeftPaddingChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void PanelSettingsDBusObject::statusBarRightPaddingChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void PanelSettingsDBusObject::statusBarCenterSpacingChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void PanelSettingsDBusObject::navigationPanelHeightChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void PanelSettingsDBusObject::navigationPanelLeftPaddingChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void PanelSettingsDBusObject::navigationPanelRightPaddingChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}
QT_WARNING_POP
