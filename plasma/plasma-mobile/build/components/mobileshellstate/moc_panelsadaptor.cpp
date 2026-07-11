/****************************************************************************
** Meta object code from reading C++ file 'panelsadaptor.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "panelsadaptor.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'panelsadaptor.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN30PlasmashellMobilePanelsAdaptorE_t {};
} // unnamed namespace

template <> constexpr inline auto PlasmashellMobilePanelsAdaptor::qt_create_metaobjectdata<qt_meta_tag_ZN30PlasmashellMobilePanelsAdaptorE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "PlasmashellMobilePanelsAdaptor",
        "D-Bus Interface",
        "org.kde.plasmashellMobilePanels",
        "D-Bus Introspection",
        "  <interface name=\"org.kde.plasmashellMobilePanels\">\n    <signa"
        "l name=\"statusBarHeightChanged\"/>\n    <signal name=\"statusBarL"
        "eftPaddingChanged\"/>\n    <signal name=\"statusBarRightPaddingCha"
        "nged\"/>\n    <signal name=\"statusBarCenterSpacingChanged\"/>\n  "
        "  <signal name=\"navigationPanelHeightChanged\"/>\n    <signal nam"
        "e=\"navigationPanelLeftPaddingChanged\"/>\n    <signal name=\"navi"
        "gationPanelRightPaddingChanged\"/>\n    <method name=\"statusBarHe"
        "ight\">\n      <arg direction=\"out\" type=\"d\"/>\n    </method>\n"
        "    <method name=\"statusBarLeftPadding\">\n      <arg direction=\""
        "out\" type=\"d\"/>\n    </method>\n    <method name=\"statusBarRig"
        "htPadding\">\n      <arg direction=\"out\" type=\"d\"/>\n    </met"
        "hod>\n    <method name=\"statusBarCenterSpacing\">\n      <arg dir"
        "ection=\"out\" type=\"d\"/>\n    </method>\n    <method name=\"nav"
        "igationPanelHeight\">\n      <arg direction=\"out\" type=\"d\"/>\n"
        "    </method>\n    <method name=\"navigationPanelLeftPadding\">\n "
        "     <arg direction=\"out\" type=\"d\"/>\n    </method>\n    <meth"
        "od name=\"navigationPanelRightPadding\">\n      <arg direction=\"o"
        "ut\" type=\"d\"/>\n    </method>\n  </interface>\n",
        "navigationPanelHeightChanged",
        "",
        "navigationPanelLeftPaddingChanged",
        "navigationPanelRightPaddingChanged",
        "statusBarCenterSpacingChanged",
        "statusBarHeightChanged",
        "statusBarLeftPaddingChanged",
        "statusBarRightPaddingChanged",
        "navigationPanelHeight",
        "navigationPanelLeftPadding",
        "navigationPanelRightPadding",
        "statusBarCenterSpacing",
        "statusBarHeight",
        "statusBarLeftPadding",
        "statusBarRightPadding"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'navigationPanelHeightChanged'
        QtMocHelpers::SignalData<void()>(5, 6, QMC::AccessPublic, QMetaType::Void),
        // Signal 'navigationPanelLeftPaddingChanged'
        QtMocHelpers::SignalData<void()>(7, 6, QMC::AccessPublic, QMetaType::Void),
        // Signal 'navigationPanelRightPaddingChanged'
        QtMocHelpers::SignalData<void()>(8, 6, QMC::AccessPublic, QMetaType::Void),
        // Signal 'statusBarCenterSpacingChanged'
        QtMocHelpers::SignalData<void()>(9, 6, QMC::AccessPublic, QMetaType::Void),
        // Signal 'statusBarHeightChanged'
        QtMocHelpers::SignalData<void()>(10, 6, QMC::AccessPublic, QMetaType::Void),
        // Signal 'statusBarLeftPaddingChanged'
        QtMocHelpers::SignalData<void()>(11, 6, QMC::AccessPublic, QMetaType::Void),
        // Signal 'statusBarRightPaddingChanged'
        QtMocHelpers::SignalData<void()>(12, 6, QMC::AccessPublic, QMetaType::Void),
        // Slot 'navigationPanelHeight'
        QtMocHelpers::SlotData<double()>(13, 6, QMC::AccessPublic, QMetaType::Double),
        // Slot 'navigationPanelLeftPadding'
        QtMocHelpers::SlotData<double()>(14, 6, QMC::AccessPublic, QMetaType::Double),
        // Slot 'navigationPanelRightPadding'
        QtMocHelpers::SlotData<double()>(15, 6, QMC::AccessPublic, QMetaType::Double),
        // Slot 'statusBarCenterSpacing'
        QtMocHelpers::SlotData<double()>(16, 6, QMC::AccessPublic, QMetaType::Double),
        // Slot 'statusBarHeight'
        QtMocHelpers::SlotData<double()>(17, 6, QMC::AccessPublic, QMetaType::Double),
        // Slot 'statusBarLeftPadding'
        QtMocHelpers::SlotData<double()>(18, 6, QMC::AccessPublic, QMetaType::Double),
        // Slot 'statusBarRightPadding'
        QtMocHelpers::SlotData<double()>(19, 6, QMC::AccessPublic, QMetaType::Double),
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
    return QtMocHelpers::metaObjectData<PlasmashellMobilePanelsAdaptor, qt_meta_tag_ZN30PlasmashellMobilePanelsAdaptorE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums, qt_constructors, qt_classinfo);
}
Q_CONSTINIT const QMetaObject PlasmashellMobilePanelsAdaptor::staticMetaObject = { {
    QMetaObject::SuperData::link<QDBusAbstractAdaptor::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN30PlasmashellMobilePanelsAdaptorE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN30PlasmashellMobilePanelsAdaptorE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN30PlasmashellMobilePanelsAdaptorE_t>.metaTypes,
    nullptr
} };

void PlasmashellMobilePanelsAdaptor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<PlasmashellMobilePanelsAdaptor *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->navigationPanelHeightChanged(); break;
        case 1: _t->navigationPanelLeftPaddingChanged(); break;
        case 2: _t->navigationPanelRightPaddingChanged(); break;
        case 3: _t->statusBarCenterSpacingChanged(); break;
        case 4: _t->statusBarHeightChanged(); break;
        case 5: _t->statusBarLeftPaddingChanged(); break;
        case 6: _t->statusBarRightPaddingChanged(); break;
        case 7: { double _r = _t->navigationPanelHeight();
            if (_a[0]) *reinterpret_cast<double*>(_a[0]) = std::move(_r); }  break;
        case 8: { double _r = _t->navigationPanelLeftPadding();
            if (_a[0]) *reinterpret_cast<double*>(_a[0]) = std::move(_r); }  break;
        case 9: { double _r = _t->navigationPanelRightPadding();
            if (_a[0]) *reinterpret_cast<double*>(_a[0]) = std::move(_r); }  break;
        case 10: { double _r = _t->statusBarCenterSpacing();
            if (_a[0]) *reinterpret_cast<double*>(_a[0]) = std::move(_r); }  break;
        case 11: { double _r = _t->statusBarHeight();
            if (_a[0]) *reinterpret_cast<double*>(_a[0]) = std::move(_r); }  break;
        case 12: { double _r = _t->statusBarLeftPadding();
            if (_a[0]) *reinterpret_cast<double*>(_a[0]) = std::move(_r); }  break;
        case 13: { double _r = _t->statusBarRightPadding();
            if (_a[0]) *reinterpret_cast<double*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (PlasmashellMobilePanelsAdaptor::*)()>(_a, &PlasmashellMobilePanelsAdaptor::navigationPanelHeightChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (PlasmashellMobilePanelsAdaptor::*)()>(_a, &PlasmashellMobilePanelsAdaptor::navigationPanelLeftPaddingChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (PlasmashellMobilePanelsAdaptor::*)()>(_a, &PlasmashellMobilePanelsAdaptor::navigationPanelRightPaddingChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (PlasmashellMobilePanelsAdaptor::*)()>(_a, &PlasmashellMobilePanelsAdaptor::statusBarCenterSpacingChanged, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (PlasmashellMobilePanelsAdaptor::*)()>(_a, &PlasmashellMobilePanelsAdaptor::statusBarHeightChanged, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (PlasmashellMobilePanelsAdaptor::*)()>(_a, &PlasmashellMobilePanelsAdaptor::statusBarLeftPaddingChanged, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (PlasmashellMobilePanelsAdaptor::*)()>(_a, &PlasmashellMobilePanelsAdaptor::statusBarRightPaddingChanged, 6))
            return;
    }
}

const QMetaObject *PlasmashellMobilePanelsAdaptor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PlasmashellMobilePanelsAdaptor::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN30PlasmashellMobilePanelsAdaptorE_t>.strings))
        return static_cast<void*>(this);
    return QDBusAbstractAdaptor::qt_metacast(_clname);
}

int PlasmashellMobilePanelsAdaptor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDBusAbstractAdaptor::qt_metacall(_c, _id, _a);
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
void PlasmashellMobilePanelsAdaptor::navigationPanelHeightChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void PlasmashellMobilePanelsAdaptor::navigationPanelLeftPaddingChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void PlasmashellMobilePanelsAdaptor::navigationPanelRightPaddingChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void PlasmashellMobilePanelsAdaptor::statusBarCenterSpacingChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void PlasmashellMobilePanelsAdaptor::statusBarHeightChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void PlasmashellMobilePanelsAdaptor::statusBarLeftPaddingChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void PlasmashellMobilePanelsAdaptor::statusBarRightPaddingChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}
QT_WARNING_POP
