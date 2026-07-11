/****************************************************************************
** Meta object code from reading C++ file 'panelsettingsdbusclient.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../components/mobileshellstate/panelsettingsdbusclient.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'panelsettingsdbusclient.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN23PanelSettingsDBusClientE_t {};
} // unnamed namespace

template <> constexpr inline auto PanelSettingsDBusClient::qt_create_metaobjectdata<qt_meta_tag_ZN23PanelSettingsDBusClientE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "PanelSettingsDBusClient",
        "QML.Element",
        "auto",
        "screenNameChanged",
        "",
        "statusBarHeightChanged",
        "statusBarLeftPaddingChanged",
        "statusBarRightPaddingChanged",
        "statusBarCenterSpacingChanged",
        "navigationPanelHeightChanged",
        "navigationPanelLeftPaddingChanged",
        "navigationPanelRightPaddingChanged",
        "updateStatusBarHeight",
        "updateStatusBarLeftPadding",
        "updateStatusBarRightPadding",
        "updateStatusBarCenterSpacing",
        "updateNavigationPanelHeight",
        "updateNavigationPanelLeftPadding",
        "updateNavigationPanelRightPadding",
        "screenName",
        "statusBarHeight",
        "statusBarLeftPadding",
        "statusBarRightPadding",
        "statusBarCenterSpacing",
        "navigationPanelHeight",
        "navigationPanelLeftPadding",
        "navigationPanelRightPadding"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'screenNameChanged'
        QtMocHelpers::SignalData<void()>(3, 4, QMC::AccessPublic, QMetaType::Void),
        // Signal 'statusBarHeightChanged'
        QtMocHelpers::SignalData<void()>(5, 4, QMC::AccessPublic, QMetaType::Void),
        // Signal 'statusBarLeftPaddingChanged'
        QtMocHelpers::SignalData<void()>(6, 4, QMC::AccessPublic, QMetaType::Void),
        // Signal 'statusBarRightPaddingChanged'
        QtMocHelpers::SignalData<void()>(7, 4, QMC::AccessPublic, QMetaType::Void),
        // Signal 'statusBarCenterSpacingChanged'
        QtMocHelpers::SignalData<void()>(8, 4, QMC::AccessPublic, QMetaType::Void),
        // Signal 'navigationPanelHeightChanged'
        QtMocHelpers::SignalData<void()>(9, 4, QMC::AccessPublic, QMetaType::Void),
        // Signal 'navigationPanelLeftPaddingChanged'
        QtMocHelpers::SignalData<void()>(10, 4, QMC::AccessPublic, QMetaType::Void),
        // Signal 'navigationPanelRightPaddingChanged'
        QtMocHelpers::SignalData<void()>(11, 4, QMC::AccessPublic, QMetaType::Void),
        // Slot 'updateStatusBarHeight'
        QtMocHelpers::SlotData<void()>(12, 4, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'updateStatusBarLeftPadding'
        QtMocHelpers::SlotData<void()>(13, 4, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'updateStatusBarRightPadding'
        QtMocHelpers::SlotData<void()>(14, 4, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'updateStatusBarCenterSpacing'
        QtMocHelpers::SlotData<void()>(15, 4, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'updateNavigationPanelHeight'
        QtMocHelpers::SlotData<void()>(16, 4, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'updateNavigationPanelLeftPadding'
        QtMocHelpers::SlotData<void()>(17, 4, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'updateNavigationPanelRightPadding'
        QtMocHelpers::SlotData<void()>(18, 4, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'screenName'
        QtMocHelpers::PropertyData<QString>(19, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 0),
        // property 'statusBarHeight'
        QtMocHelpers::PropertyData<qreal>(20, QMetaType::QReal, QMC::DefaultPropertyFlags, 1),
        // property 'statusBarLeftPadding'
        QtMocHelpers::PropertyData<qreal>(21, QMetaType::QReal, QMC::DefaultPropertyFlags, 2),
        // property 'statusBarRightPadding'
        QtMocHelpers::PropertyData<qreal>(22, QMetaType::QReal, QMC::DefaultPropertyFlags, 3),
        // property 'statusBarCenterSpacing'
        QtMocHelpers::PropertyData<qreal>(23, QMetaType::QReal, QMC::DefaultPropertyFlags, 4),
        // property 'navigationPanelHeight'
        QtMocHelpers::PropertyData<qreal>(24, QMetaType::QReal, QMC::DefaultPropertyFlags, 5),
        // property 'navigationPanelLeftPadding'
        QtMocHelpers::PropertyData<qreal>(25, QMetaType::QReal, QMC::DefaultPropertyFlags, 6),
        // property 'navigationPanelRightPadding'
        QtMocHelpers::PropertyData<qreal>(26, QMetaType::QReal, QMC::DefaultPropertyFlags, 7),
    };
    QtMocHelpers::UintData qt_enums {
    };
    QtMocHelpers::UintData qt_constructors {};
    QtMocHelpers::ClassInfos qt_classinfo({
            {    1,    2 },
    });
    return QtMocHelpers::metaObjectData<PanelSettingsDBusClient, void>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums, qt_constructors, qt_classinfo);
}
Q_CONSTINIT const QMetaObject PanelSettingsDBusClient::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN23PanelSettingsDBusClientE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN23PanelSettingsDBusClientE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN23PanelSettingsDBusClientE_t>.metaTypes,
    nullptr
} };

void PanelSettingsDBusClient::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<PanelSettingsDBusClient *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->screenNameChanged(); break;
        case 1: _t->statusBarHeightChanged(); break;
        case 2: _t->statusBarLeftPaddingChanged(); break;
        case 3: _t->statusBarRightPaddingChanged(); break;
        case 4: _t->statusBarCenterSpacingChanged(); break;
        case 5: _t->navigationPanelHeightChanged(); break;
        case 6: _t->navigationPanelLeftPaddingChanged(); break;
        case 7: _t->navigationPanelRightPaddingChanged(); break;
        case 8: _t->updateStatusBarHeight(); break;
        case 9: _t->updateStatusBarLeftPadding(); break;
        case 10: _t->updateStatusBarRightPadding(); break;
        case 11: _t->updateStatusBarCenterSpacing(); break;
        case 12: _t->updateNavigationPanelHeight(); break;
        case 13: _t->updateNavigationPanelLeftPadding(); break;
        case 14: _t->updateNavigationPanelRightPadding(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (PanelSettingsDBusClient::*)()>(_a, &PanelSettingsDBusClient::screenNameChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (PanelSettingsDBusClient::*)()>(_a, &PanelSettingsDBusClient::statusBarHeightChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (PanelSettingsDBusClient::*)()>(_a, &PanelSettingsDBusClient::statusBarLeftPaddingChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (PanelSettingsDBusClient::*)()>(_a, &PanelSettingsDBusClient::statusBarRightPaddingChanged, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (PanelSettingsDBusClient::*)()>(_a, &PanelSettingsDBusClient::statusBarCenterSpacingChanged, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (PanelSettingsDBusClient::*)()>(_a, &PanelSettingsDBusClient::navigationPanelHeightChanged, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (PanelSettingsDBusClient::*)()>(_a, &PanelSettingsDBusClient::navigationPanelLeftPaddingChanged, 6))
            return;
        if (QtMocHelpers::indexOfMethod<void (PanelSettingsDBusClient::*)()>(_a, &PanelSettingsDBusClient::navigationPanelRightPaddingChanged, 7))
            return;
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<QString*>(_v) = _t->screenName(); break;
        case 1: *reinterpret_cast<qreal*>(_v) = _t->statusBarHeight(); break;
        case 2: *reinterpret_cast<qreal*>(_v) = _t->statusBarLeftPadding(); break;
        case 3: *reinterpret_cast<qreal*>(_v) = _t->statusBarRightPadding(); break;
        case 4: *reinterpret_cast<qreal*>(_v) = _t->statusBarCenterSpacing(); break;
        case 5: *reinterpret_cast<qreal*>(_v) = _t->navigationPanelHeight(); break;
        case 6: *reinterpret_cast<qreal*>(_v) = _t->navigationPanelLeftPadding(); break;
        case 7: *reinterpret_cast<qreal*>(_v) = _t->navigationPanelRightPadding(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setScreenName(*reinterpret_cast<QString*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *PanelSettingsDBusClient::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PanelSettingsDBusClient::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN23PanelSettingsDBusClientE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PanelSettingsDBusClient::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void PanelSettingsDBusClient::screenNameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void PanelSettingsDBusClient::statusBarHeightChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void PanelSettingsDBusClient::statusBarLeftPaddingChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void PanelSettingsDBusClient::statusBarRightPaddingChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void PanelSettingsDBusClient::statusBarCenterSpacingChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void PanelSettingsDBusClient::navigationPanelHeightChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void PanelSettingsDBusClient::navigationPanelLeftPaddingChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void PanelSettingsDBusClient::navigationPanelRightPaddingChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}
QT_WARNING_POP
