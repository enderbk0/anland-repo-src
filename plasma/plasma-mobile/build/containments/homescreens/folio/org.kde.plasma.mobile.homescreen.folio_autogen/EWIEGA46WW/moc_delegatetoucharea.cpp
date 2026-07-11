/****************************************************************************
** Meta object code from reading C++ file 'delegatetoucharea.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../containments/homescreens/folio/delegatetoucharea.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'delegatetoucharea.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN17DelegateTouchAreaE_t {};
} // unnamed namespace

template <> constexpr inline auto DelegateTouchArea::qt_create_metaobjectdata<qt_meta_tag_ZN17DelegateTouchAreaE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "DelegateTouchArea",
        "QML.Element",
        "auto",
        "clicked",
        "",
        "rightMousePress",
        "pressAndHold",
        "pressAndHoldReleased",
        "pressedChanged",
        "pressed",
        "hoveredChanged",
        "hovered",
        "cursorShapeChanged",
        "pressPositionChanged",
        "startPressAndHold",
        "cursorShape",
        "Qt::CursorShape",
        "pressPosition",
        "QPointF"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'clicked'
        QtMocHelpers::SignalData<void()>(3, 4, QMC::AccessPublic, QMetaType::Void),
        // Signal 'rightMousePress'
        QtMocHelpers::SignalData<void()>(5, 4, QMC::AccessPublic, QMetaType::Void),
        // Signal 'pressAndHold'
        QtMocHelpers::SignalData<void()>(6, 4, QMC::AccessPublic, QMetaType::Void),
        // Signal 'pressAndHoldReleased'
        QtMocHelpers::SignalData<void()>(7, 4, QMC::AccessPublic, QMetaType::Void),
        // Signal 'pressedChanged'
        QtMocHelpers::SignalData<void(bool)>(8, 4, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 9 },
        }}),
        // Signal 'hoveredChanged'
        QtMocHelpers::SignalData<void(bool)>(10, 4, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 11 },
        }}),
        // Signal 'cursorShapeChanged'
        QtMocHelpers::SignalData<void()>(12, 4, QMC::AccessPublic, QMetaType::Void),
        // Signal 'pressPositionChanged'
        QtMocHelpers::SignalData<void()>(13, 4, QMC::AccessPublic, QMetaType::Void),
        // Slot 'startPressAndHold'
        QtMocHelpers::SlotData<void()>(14, 4, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'pressed'
        QtMocHelpers::PropertyData<bool>(9, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Final, 4),
        // property 'hovered'
        QtMocHelpers::PropertyData<bool>(11, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Final, 5),
        // property 'cursorShape'
        QtMocHelpers::PropertyData<Qt::CursorShape>(15, 0x80000000 | 16, QMC::DefaultPropertyFlags | QMC::Writable | QMC::Resettable | QMC::EnumOrFlag | QMC::StdCppSet | QMC::Final, 6),
        // property 'pressPosition'
        QtMocHelpers::PropertyData<QPointF>(17, 0x80000000 | 18, QMC::DefaultPropertyFlags | QMC::EnumOrFlag | QMC::Final, 7),
    };
    QtMocHelpers::UintData qt_enums {
    };
    QtMocHelpers::UintData qt_constructors {};
    QtMocHelpers::ClassInfos qt_classinfo({
            {    1,    2 },
            {    1,    0 },
    });
    return QtMocHelpers::metaObjectData<DelegateTouchArea, void>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums, qt_constructors, qt_classinfo);
}
Q_CONSTINIT const QMetaObject DelegateTouchArea::staticMetaObject = { {
    QMetaObject::SuperData::link<QQuickItem::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN17DelegateTouchAreaE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN17DelegateTouchAreaE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN17DelegateTouchAreaE_t>.metaTypes,
    nullptr
} };

void DelegateTouchArea::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<DelegateTouchArea *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->clicked(); break;
        case 1: _t->rightMousePress(); break;
        case 2: _t->pressAndHold(); break;
        case 3: _t->pressAndHoldReleased(); break;
        case 4: _t->pressedChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 5: _t->hoveredChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 6: _t->cursorShapeChanged(); break;
        case 7: _t->pressPositionChanged(); break;
        case 8: _t->startPressAndHold(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (DelegateTouchArea::*)()>(_a, &DelegateTouchArea::clicked, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (DelegateTouchArea::*)()>(_a, &DelegateTouchArea::rightMousePress, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (DelegateTouchArea::*)()>(_a, &DelegateTouchArea::pressAndHold, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (DelegateTouchArea::*)()>(_a, &DelegateTouchArea::pressAndHoldReleased, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (DelegateTouchArea::*)(bool )>(_a, &DelegateTouchArea::pressedChanged, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (DelegateTouchArea::*)(bool )>(_a, &DelegateTouchArea::hoveredChanged, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (DelegateTouchArea::*)()>(_a, &DelegateTouchArea::cursorShapeChanged, 6))
            return;
        if (QtMocHelpers::indexOfMethod<void (DelegateTouchArea::*)()>(_a, &DelegateTouchArea::pressPositionChanged, 7))
            return;
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<bool*>(_v) = _t->pressed(); break;
        case 1: *reinterpret_cast<bool*>(_v) = _t->hovered(); break;
        case 2: *reinterpret_cast<Qt::CursorShape*>(_v) = _t->cursorShape(); break;
        case 3: *reinterpret_cast<QPointF*>(_v) = _t->pressPosition(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 2: _t->setCursorShape(*reinterpret_cast<Qt::CursorShape*>(_v)); break;
        default: break;
        }
    }
    if (_c == QMetaObject::ResetProperty) {
        switch (_id) {
        case 2: _t->unsetCursor(); break;
        default: break;
        }
    }
}

const QMetaObject *DelegateTouchArea::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DelegateTouchArea::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN17DelegateTouchAreaE_t>.strings))
        return static_cast<void*>(this);
    return QQuickItem::qt_metacast(_clname);
}

int DelegateTouchArea::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 9;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void DelegateTouchArea::clicked()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void DelegateTouchArea::rightMousePress()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void DelegateTouchArea::pressAndHold()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void DelegateTouchArea::pressAndHoldReleased()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void DelegateTouchArea::pressedChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 4, nullptr, _t1);
}

// SIGNAL 5
void DelegateTouchArea::hoveredChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 5, nullptr, _t1);
}

// SIGNAL 6
void DelegateTouchArea::cursorShapeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void DelegateTouchArea::pressPositionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}
QT_WARNING_POP
