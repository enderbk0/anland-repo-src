/****************************************************************************
** Meta object code from reading C++ file 'overlaycontroller.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/overlay/overlaycontroller.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'overlaycontroller.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN17OverlayControllerE_t {};
} // unnamed namespace

template <> constexpr inline auto OverlayController::qt_create_metaobjectdata<qt_meta_tag_ZN17OverlayControllerE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "OverlayController",
        "QML.Element",
        "auto",
        "QML.Creatable",
        "false",
        "QML.UncreatableReason",
        "OverlayController is created in C++ and passed to QML.",
        "overlayRequested",
        "",
        "triggerId",
        "baseText",
        "overlayVisibleChanged",
        "activeTriggerIdChanged",
        "pendingTextChanged",
        "overlayNavigationKeyPressed",
        "key",
        "commitCandidate",
        "index",
        "commitText",
        "text",
        "cancelOverlay",
        "handleSurroundingTextChanged",
        "openOverlay",
        "candidates",
        "handleTimerExpired",
        "handleOverlayGraceTimer",
        "overlayVisible",
        "activeTriggerId",
        "pendingText",
        "candidateModel",
        "CandidateModel*"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'overlayRequested'
        QtMocHelpers::SignalData<void(const QString &, const QString &)>(7, 8, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 9 }, { QMetaType::QString, 10 },
        }}),
        // Signal 'overlayVisibleChanged'
        QtMocHelpers::SignalData<void()>(11, 8, QMC::AccessPublic, QMetaType::Void),
        // Signal 'activeTriggerIdChanged'
        QtMocHelpers::SignalData<void()>(12, 8, QMC::AccessPublic, QMetaType::Void),
        // Signal 'pendingTextChanged'
        QtMocHelpers::SignalData<void()>(13, 8, QMC::AccessPublic, QMetaType::Void),
        // Signal 'overlayNavigationKeyPressed'
        QtMocHelpers::SignalData<void(int)>(14, 8, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 15 },
        }}),
        // Slot 'commitCandidate'
        QtMocHelpers::SlotData<void(int)>(16, 8, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 17 },
        }}),
        // Slot 'commitText'
        QtMocHelpers::SlotData<void(const QString &)>(18, 8, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 19 },
        }}),
        // Slot 'cancelOverlay'
        QtMocHelpers::SlotData<void()>(20, 8, QMC::AccessPublic, QMetaType::Void),
        // Slot 'handleSurroundingTextChanged'
        QtMocHelpers::SlotData<void()>(21, 8, QMC::AccessPublic, QMetaType::Void),
        // Slot 'openOverlay'
        QtMocHelpers::SlotData<void(const QString &, const QString &, const QStringList &)>(22, 8, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 9 }, { QMetaType::QString, 10 }, { QMetaType::QStringList, 23 },
        }}),
        // Slot 'handleTimerExpired'
        QtMocHelpers::SlotData<void()>(24, 8, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'handleOverlayGraceTimer'
        QtMocHelpers::SlotData<void()>(25, 8, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'overlayVisible'
        QtMocHelpers::PropertyData<bool>(26, QMetaType::Bool, QMC::DefaultPropertyFlags, 1),
        // property 'activeTriggerId'
        QtMocHelpers::PropertyData<QString>(27, QMetaType::QString, QMC::DefaultPropertyFlags, 2),
        // property 'pendingText'
        QtMocHelpers::PropertyData<QString>(28, QMetaType::QString, QMC::DefaultPropertyFlags, 3),
        // property 'candidateModel'
        QtMocHelpers::PropertyData<CandidateModel*>(29, 0x80000000 | 30, QMC::DefaultPropertyFlags | QMC::EnumOrFlag | QMC::Constant),
    };
    QtMocHelpers::UintData qt_enums {
    };
    QtMocHelpers::UintData qt_constructors {};
    QtMocHelpers::ClassInfos qt_classinfo({
            {    1,    2 },
            {    3,    4 },
            {    5,    6 },
    });
    return QtMocHelpers::metaObjectData<OverlayController, void>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums, qt_constructors, qt_classinfo);
}
Q_CONSTINIT const QMetaObject OverlayController::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN17OverlayControllerE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN17OverlayControllerE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN17OverlayControllerE_t>.metaTypes,
    nullptr
} };

void OverlayController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<OverlayController *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->overlayRequested((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2]))); break;
        case 1: _t->overlayVisibleChanged(); break;
        case 2: _t->activeTriggerIdChanged(); break;
        case 3: _t->pendingTextChanged(); break;
        case 4: _t->overlayNavigationKeyPressed((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 5: _t->commitCandidate((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 6: _t->commitText((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 7: _t->cancelOverlay(); break;
        case 8: _t->handleSurroundingTextChanged(); break;
        case 9: _t->openOverlay((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<QStringList>>(_a[3]))); break;
        case 10: _t->handleTimerExpired(); break;
        case 11: _t->handleOverlayGraceTimer(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (OverlayController::*)(const QString & , const QString & )>(_a, &OverlayController::overlayRequested, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (OverlayController::*)()>(_a, &OverlayController::overlayVisibleChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (OverlayController::*)()>(_a, &OverlayController::activeTriggerIdChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (OverlayController::*)()>(_a, &OverlayController::pendingTextChanged, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (OverlayController::*)(int )>(_a, &OverlayController::overlayNavigationKeyPressed, 4))
            return;
    }
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< CandidateModel* >(); break;
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<bool*>(_v) = _t->overlayVisible(); break;
        case 1: *reinterpret_cast<QString*>(_v) = _t->activeTriggerId(); break;
        case 2: *reinterpret_cast<QString*>(_v) = _t->pendingText(); break;
        case 3: *reinterpret_cast<CandidateModel**>(_v) = _t->candidateModel(); break;
        default: break;
        }
    }
}

const QMetaObject *OverlayController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OverlayController::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN17OverlayControllerE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int OverlayController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void OverlayController::overlayRequested(const QString & _t1, const QString & _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1, _t2);
}

// SIGNAL 1
void OverlayController::overlayVisibleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void OverlayController::activeTriggerIdChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void OverlayController::pendingTextChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void OverlayController::overlayNavigationKeyPressed(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 4, nullptr, _t1);
}
QT_WARNING_POP
