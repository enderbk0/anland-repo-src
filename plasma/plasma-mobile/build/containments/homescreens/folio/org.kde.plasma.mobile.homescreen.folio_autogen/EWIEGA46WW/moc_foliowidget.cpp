/****************************************************************************
** Meta object code from reading C++ file 'foliowidget.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../containments/homescreens/folio/foliowidget.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'foliowidget.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN12GridPositionE_t {};
} // unnamed namespace

template <> constexpr inline auto GridPosition::qt_create_metaobjectdata<qt_meta_tag_ZN12GridPositionE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "GridPosition"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<GridPosition, qt_meta_tag_ZN12GridPositionE_t>(QMC::PropertyAccessInStaticMetaCall, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject GridPosition::staticMetaObject = { {
    nullptr,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN12GridPositionE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN12GridPositionE_t>.data,
    nullptr,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN12GridPositionE_t>.metaTypes,
    nullptr
} };

namespace {
struct qt_meta_tag_ZN11FolioWidgetE_t {};
} // unnamed namespace

template <> constexpr inline auto FolioWidget::qt_create_metaobjectdata<qt_meta_tag_ZN11FolioWidgetE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "FolioWidget",
        "QML.Element",
        "auto",
        "QML.Creatable",
        "false",
        "QML.UncreatableReason",
        "",
        "idChanged",
        "appletChanged",
        "visualAppletChanged",
        "gridWidthChanged",
        "gridHeightChanged",
        "saveRequested",
        "realTopLeftPositionChanged",
        "offsetRows",
        "offsetColumns",
        "destroyApplet",
        "id",
        "gridWidth",
        "gridHeight",
        "applet",
        "Plasma::Applet*",
        "visualApplet",
        "PlasmaQuick::AppletQuickItem*"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'idChanged'
        QtMocHelpers::SignalData<void()>(7, 6, QMC::AccessPublic, QMetaType::Void),
        // Signal 'appletChanged'
        QtMocHelpers::SignalData<void()>(8, 6, QMC::AccessPublic, QMetaType::Void),
        // Signal 'visualAppletChanged'
        QtMocHelpers::SignalData<void()>(9, 6, QMC::AccessPublic, QMetaType::Void),
        // Signal 'gridWidthChanged'
        QtMocHelpers::SignalData<void()>(10, 6, QMC::AccessPublic, QMetaType::Void),
        // Signal 'gridHeightChanged'
        QtMocHelpers::SignalData<void()>(11, 6, QMC::AccessPublic, QMetaType::Void),
        // Signal 'saveRequested'
        QtMocHelpers::SignalData<void()>(12, 6, QMC::AccessPublic, QMetaType::Void),
        // Signal 'realTopLeftPositionChanged'
        QtMocHelpers::SignalData<void(int, int)>(13, 6, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 14 }, { QMetaType::Int, 15 },
        }}),
        // Method 'destroyApplet'
        QtMocHelpers::MethodData<void()>(16, 6, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'id'
        QtMocHelpers::PropertyData<int>(17, QMetaType::Int, QMC::DefaultPropertyFlags, 0),
        // property 'gridWidth'
        QtMocHelpers::PropertyData<int>(18, QMetaType::Int, QMC::DefaultPropertyFlags, 3),
        // property 'gridHeight'
        QtMocHelpers::PropertyData<int>(19, QMetaType::Int, QMC::DefaultPropertyFlags, 4),
        // property 'applet'
        QtMocHelpers::PropertyData<Plasma::Applet*>(20, 0x80000000 | 21, QMC::DefaultPropertyFlags | QMC::EnumOrFlag, 1),
        // property 'visualApplet'
        QtMocHelpers::PropertyData<PlasmaQuick::AppletQuickItem*>(22, 0x80000000 | 23, QMC::DefaultPropertyFlags | QMC::EnumOrFlag, 2),
    };
    QtMocHelpers::UintData qt_enums {
    };
    QtMocHelpers::UintData qt_constructors {};
    QtMocHelpers::ClassInfos qt_classinfo({
            {    1,    2 },
            {    3,    4 },
            {    5,    6 },
    });
    return QtMocHelpers::metaObjectData<FolioWidget, void>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums, qt_constructors, qt_classinfo);
}
Q_CONSTINIT const QMetaObject FolioWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN11FolioWidgetE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN11FolioWidgetE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN11FolioWidgetE_t>.metaTypes,
    nullptr
} };

void FolioWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<FolioWidget *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->idChanged(); break;
        case 1: _t->appletChanged(); break;
        case 2: _t->visualAppletChanged(); break;
        case 3: _t->gridWidthChanged(); break;
        case 4: _t->gridHeightChanged(); break;
        case 5: _t->saveRequested(); break;
        case 6: _t->realTopLeftPositionChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2]))); break;
        case 7: _t->destroyApplet(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (FolioWidget::*)()>(_a, &FolioWidget::idChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (FolioWidget::*)()>(_a, &FolioWidget::appletChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (FolioWidget::*)()>(_a, &FolioWidget::visualAppletChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (FolioWidget::*)()>(_a, &FolioWidget::gridWidthChanged, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (FolioWidget::*)()>(_a, &FolioWidget::gridHeightChanged, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (FolioWidget::*)()>(_a, &FolioWidget::saveRequested, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (FolioWidget::*)(int , int )>(_a, &FolioWidget::realTopLeftPositionChanged, 6))
            return;
    }
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Plasma::Applet* >(); break;
        case 4:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PlasmaQuick::AppletQuickItem* >(); break;
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<int*>(_v) = _t->id(); break;
        case 1: *reinterpret_cast<int*>(_v) = _t->gridWidth(); break;
        case 2: *reinterpret_cast<int*>(_v) = _t->gridHeight(); break;
        case 3: *reinterpret_cast<Plasma::Applet**>(_v) = _t->applet(); break;
        case 4: *reinterpret_cast<PlasmaQuick::AppletQuickItem**>(_v) = _t->visualApplet(); break;
        default: break;
        }
    }
}

const QMetaObject *FolioWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FolioWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN11FolioWidgetE_t>.strings))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "std::enable_shared_from_this<FolioWidget>"))
        return static_cast< std::enable_shared_from_this<FolioWidget>*>(this);
    return QObject::qt_metacast(_clname);
}

int FolioWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 8;
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
void FolioWidget::idChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void FolioWidget::appletChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void FolioWidget::visualAppletChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void FolioWidget::gridWidthChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void FolioWidget::gridHeightChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void FolioWidget::saveRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void FolioWidget::realTopLeftPositionChanged(int _t1, int _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 6, nullptr, _t1, _t2);
}
QT_WARNING_POP
