/****************************************************************************
** Meta object code from reading C++ file 'mobiletaskswitchereffect.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../kwin/mobiletaskswitcher/plugin/mobiletaskswitchereffect.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mobiletaskswitchereffect.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN4KWin23MobileTaskSwitcherStateE_t {};
} // unnamed namespace

template <> constexpr inline auto KWin::MobileTaskSwitcherState::qt_create_metaobjectdata<qt_meta_tag_ZN4KWin23MobileTaskSwitcherStateE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "KWin::MobileTaskSwitcherState",
        "QML.Element",
        "auto",
        "gestureEnabledChanged",
        "",
        "activated",
        "deactivated",
        "gestureInProgressChanged",
        "statusChanged",
        "wasInActiveTaskChanged",
        "currentTaskIndexChanged",
        "initialTaskIndexChanged",
        "touchPositionChanged",
        "velocityChanged",
        "flickVelocityThresholdChanged",
        "xPositionChanged",
        "yPositionChanged",
        "processTouchPositionChanged",
        "primaryPosition",
        "orthogonalPosition",
        "activate",
        "realDeactivate",
        "deactivate",
        "deactivateInstantly",
        "quickDeactivate",
        "toggle",
        "refreshBorders",
        "init",
        "KWin::QuickSceneEffect*",
        "parent",
        "updateWasInActiveTask",
        "KWin::Window*",
        "window",
        "gestureEnabled",
        "wasInActiveTask",
        "currentTaskIndex",
        "initialTaskIndex",
        "touchXPosition",
        "touchYPosition",
        "xVelocity",
        "yVelocity",
        "totalSquaredVelocity",
        "flickVelocityThreshold",
        "xPosition",
        "yPosition",
        "gestureInProgress",
        "status",
        "KWin::MobileTaskSwitcherState::Status",
        "elapsedTimeSinceStart",
        "doubleClickInterval",
        "taskModel",
        "KWin::TaskModel*",
        "Status",
        "Inactive",
        "Active",
        "Stopped"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'gestureEnabledChanged'
        QtMocHelpers::SignalData<void()>(3, 4, QMC::AccessPublic, QMetaType::Void),
        // Signal 'activated'
        QtMocHelpers::SignalData<void()>(5, 4, QMC::AccessPublic, QMetaType::Void),
        // Signal 'deactivated'
        QtMocHelpers::SignalData<void()>(6, 4, QMC::AccessPublic, QMetaType::Void),
        // Signal 'gestureInProgressChanged'
        QtMocHelpers::SignalData<void()>(7, 4, QMC::AccessPublic, QMetaType::Void),
        // Signal 'statusChanged'
        QtMocHelpers::SignalData<void()>(8, 4, QMC::AccessPublic, QMetaType::Void),
        // Signal 'wasInActiveTaskChanged'
        QtMocHelpers::SignalData<void()>(9, 4, QMC::AccessPublic, QMetaType::Void),
        // Signal 'currentTaskIndexChanged'
        QtMocHelpers::SignalData<void()>(10, 4, QMC::AccessPublic, QMetaType::Void),
        // Signal 'initialTaskIndexChanged'
        QtMocHelpers::SignalData<void()>(11, 4, QMC::AccessPublic, QMetaType::Void),
        // Signal 'touchPositionChanged'
        QtMocHelpers::SignalData<void()>(12, 4, QMC::AccessPublic, QMetaType::Void),
        // Signal 'velocityChanged'
        QtMocHelpers::SignalData<void()>(13, 4, QMC::AccessPublic, QMetaType::Void),
        // Signal 'flickVelocityThresholdChanged'
        QtMocHelpers::SignalData<void()>(14, 4, QMC::AccessPublic, QMetaType::Void),
        // Signal 'xPositionChanged'
        QtMocHelpers::SignalData<void()>(15, 4, QMC::AccessPublic, QMetaType::Void),
        // Signal 'yPositionChanged'
        QtMocHelpers::SignalData<void()>(16, 4, QMC::AccessPublic, QMetaType::Void),
        // Slot 'processTouchPositionChanged'
        QtMocHelpers::SlotData<void(qreal, qreal)>(17, 4, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QReal, 18 }, { QMetaType::QReal, 19 },
        }}),
        // Slot 'activate'
        QtMocHelpers::SlotData<void()>(20, 4, QMC::AccessPublic, QMetaType::Void),
        // Slot 'realDeactivate'
        QtMocHelpers::SlotData<void()>(21, 4, QMC::AccessPublic, QMetaType::Void),
        // Slot 'deactivate'
        QtMocHelpers::SlotData<void(bool)>(22, 4, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 23 },
        }}),
        // Slot 'quickDeactivate'
        QtMocHelpers::SlotData<void()>(24, 4, QMC::AccessPublic, QMetaType::Void),
        // Slot 'toggle'
        QtMocHelpers::SlotData<void()>(25, 4, QMC::AccessPublic, QMetaType::Void),
        // Slot 'refreshBorders'
        QtMocHelpers::SlotData<void()>(26, 4, QMC::AccessPrivate, QMetaType::Void),
        // Method 'init'
        QtMocHelpers::MethodData<void(KWin::QuickSceneEffect *)>(27, 4, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 28, 29 },
        }}),
        // Method 'updateWasInActiveTask'
        QtMocHelpers::MethodData<void(KWin::Window *)>(30, 4, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 31, 32 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'gestureEnabled'
        QtMocHelpers::PropertyData<bool>(33, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 0),
        // property 'wasInActiveTask'
        QtMocHelpers::PropertyData<bool>(34, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 5),
        // property 'currentTaskIndex'
        QtMocHelpers::PropertyData<int>(35, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 6),
        // property 'initialTaskIndex'
        QtMocHelpers::PropertyData<int>(36, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 7),
        // property 'touchXPosition'
        QtMocHelpers::PropertyData<qreal>(37, QMetaType::QReal, QMC::DefaultPropertyFlags, 8),
        // property 'touchYPosition'
        QtMocHelpers::PropertyData<qreal>(38, QMetaType::QReal, QMC::DefaultPropertyFlags, 8),
        // property 'xVelocity'
        QtMocHelpers::PropertyData<qreal>(39, QMetaType::QReal, QMC::DefaultPropertyFlags, 9),
        // property 'yVelocity'
        QtMocHelpers::PropertyData<qreal>(40, QMetaType::QReal, QMC::DefaultPropertyFlags, 9),
        // property 'totalSquaredVelocity'
        QtMocHelpers::PropertyData<qreal>(41, QMetaType::QReal, QMC::DefaultPropertyFlags, 9),
        // property 'flickVelocityThreshold'
        QtMocHelpers::PropertyData<qreal>(42, QMetaType::QReal, QMC::DefaultPropertyFlags, 10),
        // property 'xPosition'
        QtMocHelpers::PropertyData<qreal>(43, QMetaType::QReal, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 11),
        // property 'yPosition'
        QtMocHelpers::PropertyData<qreal>(44, QMetaType::QReal, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 12),
        // property 'gestureInProgress'
        QtMocHelpers::PropertyData<bool>(45, QMetaType::Bool, QMC::DefaultPropertyFlags, 3),
        // property 'status'
        QtMocHelpers::PropertyData<KWin::MobileTaskSwitcherState::Status>(46, 0x80000000 | 47, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 4),
        // property 'elapsedTimeSinceStart'
        QtMocHelpers::PropertyData<qint64>(48, QMetaType::LongLong, QMC::DefaultPropertyFlags),
        // property 'doubleClickInterval'
        QtMocHelpers::PropertyData<qint64>(49, QMetaType::LongLong, QMC::DefaultPropertyFlags),
        // property 'taskModel'
        QtMocHelpers::PropertyData<KWin::TaskModel*>(50, 0x80000000 | 51, QMC::DefaultPropertyFlags | QMC::EnumOrFlag | QMC::Constant),
    };
    QtMocHelpers::UintData qt_enums {
        // enum 'Status'
        QtMocHelpers::EnumData<enum Status>(52, 52, QMC::EnumIsScoped).add({
            {   53, Status::Inactive },
            {   54, Status::Active },
            {   55, Status::Stopped },
        }),
    };
    QtMocHelpers::UintData qt_constructors {};
    QtMocHelpers::ClassInfos qt_classinfo({
            {    1,    2 },
    });
    return QtMocHelpers::metaObjectData<MobileTaskSwitcherState, void>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums, qt_constructors, qt_classinfo);
}
Q_CONSTINIT const QMetaObject KWin::MobileTaskSwitcherState::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin23MobileTaskSwitcherStateE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin23MobileTaskSwitcherStateE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN4KWin23MobileTaskSwitcherStateE_t>.metaTypes,
    nullptr
} };

void KWin::MobileTaskSwitcherState::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<MobileTaskSwitcherState *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->gestureEnabledChanged(); break;
        case 1: _t->activated(); break;
        case 2: _t->deactivated(); break;
        case 3: _t->gestureInProgressChanged(); break;
        case 4: _t->statusChanged(); break;
        case 5: _t->wasInActiveTaskChanged(); break;
        case 6: _t->currentTaskIndexChanged(); break;
        case 7: _t->initialTaskIndexChanged(); break;
        case 8: _t->touchPositionChanged(); break;
        case 9: _t->velocityChanged(); break;
        case 10: _t->flickVelocityThresholdChanged(); break;
        case 11: _t->xPositionChanged(); break;
        case 12: _t->yPositionChanged(); break;
        case 13: _t->processTouchPositionChanged((*reinterpret_cast<std::add_pointer_t<qreal>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<qreal>>(_a[2]))); break;
        case 14: _t->activate(); break;
        case 15: _t->realDeactivate(); break;
        case 16: _t->deactivate((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 17: _t->quickDeactivate(); break;
        case 18: _t->toggle(); break;
        case 19: _t->refreshBorders(); break;
        case 20: _t->init((*reinterpret_cast<std::add_pointer_t<KWin::QuickSceneEffect*>>(_a[1]))); break;
        case 21: _t->updateWasInActiveTask((*reinterpret_cast<std::add_pointer_t<KWin::Window*>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 20:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< KWin::QuickSceneEffect* >(); break;
            }
            break;
        case 21:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< KWin::Window* >(); break;
            }
            break;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (MobileTaskSwitcherState::*)()>(_a, &MobileTaskSwitcherState::gestureEnabledChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (MobileTaskSwitcherState::*)()>(_a, &MobileTaskSwitcherState::activated, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (MobileTaskSwitcherState::*)()>(_a, &MobileTaskSwitcherState::deactivated, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (MobileTaskSwitcherState::*)()>(_a, &MobileTaskSwitcherState::gestureInProgressChanged, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (MobileTaskSwitcherState::*)()>(_a, &MobileTaskSwitcherState::statusChanged, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (MobileTaskSwitcherState::*)()>(_a, &MobileTaskSwitcherState::wasInActiveTaskChanged, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (MobileTaskSwitcherState::*)()>(_a, &MobileTaskSwitcherState::currentTaskIndexChanged, 6))
            return;
        if (QtMocHelpers::indexOfMethod<void (MobileTaskSwitcherState::*)()>(_a, &MobileTaskSwitcherState::initialTaskIndexChanged, 7))
            return;
        if (QtMocHelpers::indexOfMethod<void (MobileTaskSwitcherState::*)()>(_a, &MobileTaskSwitcherState::touchPositionChanged, 8))
            return;
        if (QtMocHelpers::indexOfMethod<void (MobileTaskSwitcherState::*)()>(_a, &MobileTaskSwitcherState::velocityChanged, 9))
            return;
        if (QtMocHelpers::indexOfMethod<void (MobileTaskSwitcherState::*)()>(_a, &MobileTaskSwitcherState::flickVelocityThresholdChanged, 10))
            return;
        if (QtMocHelpers::indexOfMethod<void (MobileTaskSwitcherState::*)()>(_a, &MobileTaskSwitcherState::xPositionChanged, 11))
            return;
        if (QtMocHelpers::indexOfMethod<void (MobileTaskSwitcherState::*)()>(_a, &MobileTaskSwitcherState::yPositionChanged, 12))
            return;
    }
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 16:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< KWin::TaskModel* >(); break;
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<bool*>(_v) = _t->gestureEnabled(); break;
        case 1: *reinterpret_cast<bool*>(_v) = _t->wasInActiveTask(); break;
        case 2: *reinterpret_cast<int*>(_v) = _t->currentTaskIndex(); break;
        case 3: *reinterpret_cast<int*>(_v) = _t->initialTaskIndex(); break;
        case 4: *reinterpret_cast<qreal*>(_v) = _t->touchXPosition(); break;
        case 5: *reinterpret_cast<qreal*>(_v) = _t->touchYPosition(); break;
        case 6: *reinterpret_cast<qreal*>(_v) = _t->xVelocity(); break;
        case 7: *reinterpret_cast<qreal*>(_v) = _t->yVelocity(); break;
        case 8: *reinterpret_cast<qreal*>(_v) = _t->totalSquaredVelocity(); break;
        case 9: *reinterpret_cast<qreal*>(_v) = _t->flickVelocityThreshold(); break;
        case 10: *reinterpret_cast<qreal*>(_v) = _t->xPosition(); break;
        case 11: *reinterpret_cast<qreal*>(_v) = _t->yPosition(); break;
        case 12: *reinterpret_cast<bool*>(_v) = _t->gestureInProgress(); break;
        case 13: *reinterpret_cast<KWin::MobileTaskSwitcherState::Status*>(_v) = _t->status(); break;
        case 14: *reinterpret_cast<qint64*>(_v) = _t->getElapsedTimeSinceStart(); break;
        case 15: *reinterpret_cast<qint64*>(_v) = _t->getDoubleClickInterval(); break;
        case 16: *reinterpret_cast<KWin::TaskModel**>(_v) = _t->taskModel(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setGestureEnabled(*reinterpret_cast<bool*>(_v)); break;
        case 1: _t->setWasInActiveTask(*reinterpret_cast<bool*>(_v)); break;
        case 2: _t->setCurrentTaskIndex(*reinterpret_cast<int*>(_v)); break;
        case 3: _t->setInitialTaskIndex(*reinterpret_cast<int*>(_v)); break;
        case 10: _t->setXPosition(*reinterpret_cast<qreal*>(_v)); break;
        case 11: _t->setYPosition(*reinterpret_cast<qreal*>(_v)); break;
        case 13: _t->setStatus(*reinterpret_cast<KWin::MobileTaskSwitcherState::Status*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *KWin::MobileTaskSwitcherState::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KWin::MobileTaskSwitcherState::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin23MobileTaskSwitcherStateE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int KWin::MobileTaskSwitcherState::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 22)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 22;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 22)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 22;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    }
    return _id;
}

// SIGNAL 0
void KWin::MobileTaskSwitcherState::gestureEnabledChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void KWin::MobileTaskSwitcherState::activated()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void KWin::MobileTaskSwitcherState::deactivated()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void KWin::MobileTaskSwitcherState::gestureInProgressChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void KWin::MobileTaskSwitcherState::statusChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void KWin::MobileTaskSwitcherState::wasInActiveTaskChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void KWin::MobileTaskSwitcherState::currentTaskIndexChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void KWin::MobileTaskSwitcherState::initialTaskIndexChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void KWin::MobileTaskSwitcherState::touchPositionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void KWin::MobileTaskSwitcherState::velocityChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void KWin::MobileTaskSwitcherState::flickVelocityThresholdChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}

// SIGNAL 11
void KWin::MobileTaskSwitcherState::xPositionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 11, nullptr);
}

// SIGNAL 12
void KWin::MobileTaskSwitcherState::yPositionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 12, nullptr);
}
QT_WARNING_POP
