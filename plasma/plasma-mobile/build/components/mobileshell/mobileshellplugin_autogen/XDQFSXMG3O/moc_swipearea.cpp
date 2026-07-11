/****************************************************************************
** Meta object code from reading C++ file 'swipearea.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../components/mobileshell/components/swipearea.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'swipearea.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN9SwipeAreaE_t {};
} // unnamed namespace

template <> constexpr inline auto SwipeArea::qt_create_metaobjectdata<qt_meta_tag_ZN9SwipeAreaE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "SwipeArea",
        "QML.Element",
        "auto",
        "modeChanged",
        "",
        "interactiveChanged",
        "movingChanged",
        "pressedChanged",
        "swipeEnded",
        "swipeStarted",
        "QPointF",
        "currentPoint",
        "startPoint",
        "swipeMove",
        "totalDeltaX",
        "totalDeltaY",
        "deltaX",
        "deltaY",
        "touchpadScrollStarted",
        "point",
        "touchpadScrollEnded",
        "touchpadScrollMove",
        "setSkipSwipeThreshold",
        "value",
        "resetSwipe",
        "mode",
        "SwipeArea::Mode",
        "interactive",
        "moving",
        "pressed",
        "Mode",
        "BothAxis",
        "VerticalOnly",
        "HorizontalOnly"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'modeChanged'
        QtMocHelpers::SignalData<void()>(3, 4, QMC::AccessPublic, QMetaType::Void),
        // Signal 'interactiveChanged'
        QtMocHelpers::SignalData<void()>(5, 4, QMC::AccessPublic, QMetaType::Void),
        // Signal 'movingChanged'
        QtMocHelpers::SignalData<void()>(6, 4, QMC::AccessPublic, QMetaType::Void),
        // Signal 'pressedChanged'
        QtMocHelpers::SignalData<void()>(7, 4, QMC::AccessPublic, QMetaType::Void),
        // Signal 'swipeEnded'
        QtMocHelpers::SignalData<void()>(8, 4, QMC::AccessPublic, QMetaType::Void),
        // Signal 'swipeStarted'
        QtMocHelpers::SignalData<void(QPointF, QPointF)>(9, 4, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 10, 11 }, { 0x80000000 | 10, 12 },
        }}),
        // Signal 'swipeMove'
        QtMocHelpers::SignalData<void(qreal, qreal, qreal, qreal)>(13, 4, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QReal, 14 }, { QMetaType::QReal, 15 }, { QMetaType::QReal, 16 }, { QMetaType::QReal, 17 },
        }}),
        // Signal 'touchpadScrollStarted'
        QtMocHelpers::SignalData<void(QPointF)>(18, 4, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 10, 19 },
        }}),
        // Signal 'touchpadScrollEnded'
        QtMocHelpers::SignalData<void()>(20, 4, QMC::AccessPublic, QMetaType::Void),
        // Signal 'touchpadScrollMove'
        QtMocHelpers::SignalData<void(qreal, qreal, qreal, qreal)>(21, 4, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QReal, 14 }, { QMetaType::QReal, 15 }, { QMetaType::QReal, 16 }, { QMetaType::QReal, 17 },
        }}),
        // Method 'setSkipSwipeThreshold'
        QtMocHelpers::MethodData<void(bool)>(22, 4, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 23 },
        }}),
        // Method 'resetSwipe'
        QtMocHelpers::MethodData<void()>(24, 4, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'mode'
        QtMocHelpers::PropertyData<SwipeArea::Mode>(25, 0x80000000 | 26, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 0),
        // property 'interactive'
        QtMocHelpers::PropertyData<bool>(27, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 1),
        // property 'moving'
        QtMocHelpers::PropertyData<bool>(28, QMetaType::Bool, QMC::DefaultPropertyFlags, 2),
        // property 'pressed'
        QtMocHelpers::PropertyData<bool>(29, QMetaType::Bool, QMC::DefaultPropertyFlags, 3),
    };
    QtMocHelpers::UintData qt_enums {
        // enum 'Mode'
        QtMocHelpers::EnumData<enum Mode>(30, 30, QMC::EnumFlags{}).add({
            {   31, Mode::BothAxis },
            {   32, Mode::VerticalOnly },
            {   33, Mode::HorizontalOnly },
        }),
    };
    QtMocHelpers::UintData qt_constructors {};
    QtMocHelpers::ClassInfos qt_classinfo({
            {    1,    2 },
    });
    return QtMocHelpers::metaObjectData<SwipeArea, void>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums, qt_constructors, qt_classinfo);
}
Q_CONSTINIT const QMetaObject SwipeArea::staticMetaObject = { {
    QMetaObject::SuperData::link<QQuickItem::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN9SwipeAreaE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN9SwipeAreaE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN9SwipeAreaE_t>.metaTypes,
    nullptr
} };

void SwipeArea::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<SwipeArea *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->modeChanged(); break;
        case 1: _t->interactiveChanged(); break;
        case 2: _t->movingChanged(); break;
        case 3: _t->pressedChanged(); break;
        case 4: _t->swipeEnded(); break;
        case 5: _t->swipeStarted((*reinterpret_cast<std::add_pointer_t<QPointF>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QPointF>>(_a[2]))); break;
        case 6: _t->swipeMove((*reinterpret_cast<std::add_pointer_t<qreal>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<qreal>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<qreal>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<qreal>>(_a[4]))); break;
        case 7: _t->touchpadScrollStarted((*reinterpret_cast<std::add_pointer_t<QPointF>>(_a[1]))); break;
        case 8: _t->touchpadScrollEnded(); break;
        case 9: _t->touchpadScrollMove((*reinterpret_cast<std::add_pointer_t<qreal>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<qreal>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<qreal>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<qreal>>(_a[4]))); break;
        case 10: _t->setSkipSwipeThreshold((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 11: _t->resetSwipe(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (SwipeArea::*)()>(_a, &SwipeArea::modeChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (SwipeArea::*)()>(_a, &SwipeArea::interactiveChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (SwipeArea::*)()>(_a, &SwipeArea::movingChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (SwipeArea::*)()>(_a, &SwipeArea::pressedChanged, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (SwipeArea::*)()>(_a, &SwipeArea::swipeEnded, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (SwipeArea::*)(QPointF , QPointF )>(_a, &SwipeArea::swipeStarted, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (SwipeArea::*)(qreal , qreal , qreal , qreal )>(_a, &SwipeArea::swipeMove, 6))
            return;
        if (QtMocHelpers::indexOfMethod<void (SwipeArea::*)(QPointF )>(_a, &SwipeArea::touchpadScrollStarted, 7))
            return;
        if (QtMocHelpers::indexOfMethod<void (SwipeArea::*)()>(_a, &SwipeArea::touchpadScrollEnded, 8))
            return;
        if (QtMocHelpers::indexOfMethod<void (SwipeArea::*)(qreal , qreal , qreal , qreal )>(_a, &SwipeArea::touchpadScrollMove, 9))
            return;
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<SwipeArea::Mode*>(_v) = _t->mode(); break;
        case 1: *reinterpret_cast<bool*>(_v) = _t->interactive(); break;
        case 2: *reinterpret_cast<bool*>(_v) = _t->moving(); break;
        case 3: *reinterpret_cast<bool*>(_v) = _t->pressed(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setMode(*reinterpret_cast<SwipeArea::Mode*>(_v)); break;
        case 1: _t->setInteractive(*reinterpret_cast<bool*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *SwipeArea::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SwipeArea::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN9SwipeAreaE_t>.strings))
        return static_cast<void*>(this);
    return QQuickItem::qt_metacast(_clname);
}

int SwipeArea::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 12;
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
void SwipeArea::modeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void SwipeArea::interactiveChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void SwipeArea::movingChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void SwipeArea::pressedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void SwipeArea::swipeEnded()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void SwipeArea::swipeStarted(QPointF _t1, QPointF _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 5, nullptr, _t1, _t2);
}

// SIGNAL 6
void SwipeArea::swipeMove(qreal _t1, qreal _t2, qreal _t3, qreal _t4)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 6, nullptr, _t1, _t2, _t3, _t4);
}

// SIGNAL 7
void SwipeArea::touchpadScrollStarted(QPointF _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 7, nullptr, _t1);
}

// SIGNAL 8
void SwipeArea::touchpadScrollEnded()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void SwipeArea::touchpadScrollMove(qreal _t1, qreal _t2, qreal _t3, qreal _t4)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 9, nullptr, _t1, _t2, _t3, _t4);
}
QT_WARNING_POP
