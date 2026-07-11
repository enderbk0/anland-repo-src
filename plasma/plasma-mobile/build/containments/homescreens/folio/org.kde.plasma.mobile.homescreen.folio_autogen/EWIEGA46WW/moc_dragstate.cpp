/****************************************************************************
** Meta object code from reading C++ file 'dragstate.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../containments/homescreens/folio/dragstate.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dragstate.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN20DelegateDragPositionE_t {};
} // unnamed namespace

template <> constexpr inline auto DelegateDragPosition::qt_create_metaobjectdata<qt_meta_tag_ZN20DelegateDragPositionE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "DelegateDragPosition",
        "QML.Element",
        "auto",
        "QML.Creatable",
        "false",
        "QML.UncreatableReason",
        "",
        "locationChanged",
        "pageChanged",
        "pageRowChanged",
        "pageColumnChanged",
        "favouritesPositionChanged",
        "folderPositionChanged",
        "folderChanged",
        "location",
        "DelegateDragPosition::Location",
        "page",
        "pageRow",
        "pageColumn",
        "favouritesPosition",
        "folderPosition",
        "folder",
        "FolioApplicationFolder*",
        "Location",
        "Pages",
        "Favourites",
        "AppDrawer",
        "Folder",
        "WidgetList"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'locationChanged'
        QtMocHelpers::SignalData<void()>(7, 6, QMC::AccessPublic, QMetaType::Void),
        // Signal 'pageChanged'
        QtMocHelpers::SignalData<void()>(8, 6, QMC::AccessPublic, QMetaType::Void),
        // Signal 'pageRowChanged'
        QtMocHelpers::SignalData<void()>(9, 6, QMC::AccessPublic, QMetaType::Void),
        // Signal 'pageColumnChanged'
        QtMocHelpers::SignalData<void()>(10, 6, QMC::AccessPublic, QMetaType::Void),
        // Signal 'favouritesPositionChanged'
        QtMocHelpers::SignalData<void()>(11, 6, QMC::AccessPublic, QMetaType::Void),
        // Signal 'folderPositionChanged'
        QtMocHelpers::SignalData<void()>(12, 6, QMC::AccessPublic, QMetaType::Void),
        // Signal 'folderChanged'
        QtMocHelpers::SignalData<void()>(13, 6, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'location'
        QtMocHelpers::PropertyData<DelegateDragPosition::Location>(14, 0x80000000 | 15, QMC::DefaultPropertyFlags | QMC::EnumOrFlag, 0),
        // property 'page'
        QtMocHelpers::PropertyData<int>(16, QMetaType::Int, QMC::DefaultPropertyFlags, 1),
        // property 'pageRow'
        QtMocHelpers::PropertyData<int>(17, QMetaType::Int, QMC::DefaultPropertyFlags, 2),
        // property 'pageColumn'
        QtMocHelpers::PropertyData<int>(18, QMetaType::Int, QMC::DefaultPropertyFlags, 3),
        // property 'favouritesPosition'
        QtMocHelpers::PropertyData<int>(19, QMetaType::Int, QMC::DefaultPropertyFlags, 4),
        // property 'folderPosition'
        QtMocHelpers::PropertyData<int>(20, QMetaType::Int, QMC::DefaultPropertyFlags, 5),
        // property 'folder'
        QtMocHelpers::PropertyData<FolioApplicationFolder*>(21, 0x80000000 | 22, QMC::DefaultPropertyFlags | QMC::EnumOrFlag, 6),
    };
    QtMocHelpers::UintData qt_enums {
        // enum 'Location'
        QtMocHelpers::EnumData<enum Location>(23, 23, QMC::EnumFlags{}).add({
            {   24, Location::Pages },
            {   25, Location::Favourites },
            {   26, Location::AppDrawer },
            {   27, Location::Folder },
            {   28, Location::WidgetList },
        }),
    };
    QtMocHelpers::UintData qt_constructors {};
    QtMocHelpers::ClassInfos qt_classinfo({
            {    1,    2 },
            {    3,    4 },
            {    5,    6 },
    });
    return QtMocHelpers::metaObjectData<DelegateDragPosition, void>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums, qt_constructors, qt_classinfo);
}
Q_CONSTINIT const QMetaObject DelegateDragPosition::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN20DelegateDragPositionE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN20DelegateDragPositionE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN20DelegateDragPositionE_t>.metaTypes,
    nullptr
} };

void DelegateDragPosition::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<DelegateDragPosition *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->locationChanged(); break;
        case 1: _t->pageChanged(); break;
        case 2: _t->pageRowChanged(); break;
        case 3: _t->pageColumnChanged(); break;
        case 4: _t->favouritesPositionChanged(); break;
        case 5: _t->folderPositionChanged(); break;
        case 6: _t->folderChanged(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (DelegateDragPosition::*)()>(_a, &DelegateDragPosition::locationChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (DelegateDragPosition::*)()>(_a, &DelegateDragPosition::pageChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (DelegateDragPosition::*)()>(_a, &DelegateDragPosition::pageRowChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (DelegateDragPosition::*)()>(_a, &DelegateDragPosition::pageColumnChanged, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (DelegateDragPosition::*)()>(_a, &DelegateDragPosition::favouritesPositionChanged, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (DelegateDragPosition::*)()>(_a, &DelegateDragPosition::folderPositionChanged, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (DelegateDragPosition::*)()>(_a, &DelegateDragPosition::folderChanged, 6))
            return;
    }
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 6:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< FolioApplicationFolder* >(); break;
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<DelegateDragPosition::Location*>(_v) = _t->location(); break;
        case 1: *reinterpret_cast<int*>(_v) = _t->page(); break;
        case 2: *reinterpret_cast<int*>(_v) = _t->pageRow(); break;
        case 3: *reinterpret_cast<int*>(_v) = _t->pageColumn(); break;
        case 4: *reinterpret_cast<int*>(_v) = _t->favouritesPosition(); break;
        case 5: *reinterpret_cast<int*>(_v) = _t->folderPosition(); break;
        case 6: *reinterpret_cast<FolioApplicationFolder**>(_v) = _t->folderRaw(); break;
        default: break;
        }
    }
}

const QMetaObject *DelegateDragPosition::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DelegateDragPosition::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN20DelegateDragPositionE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int DelegateDragPosition::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 7;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void DelegateDragPosition::locationChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void DelegateDragPosition::pageChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void DelegateDragPosition::pageRowChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void DelegateDragPosition::pageColumnChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void DelegateDragPosition::favouritesPositionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void DelegateDragPosition::folderPositionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void DelegateDragPosition::folderChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}
namespace {
struct qt_meta_tag_ZN9DragStateE_t {};
} // unnamed namespace

template <> constexpr inline auto DragState::qt_create_metaobjectdata<qt_meta_tag_ZN9DragStateE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "DragState",
        "dropDelegateChanged",
        "",
        "delegateDroppedAndPlaced",
        "newDelegateDropAbandoned",
        "onDelegateDragPositionChanged",
        "onDelegateDragPositionOverFolderViewChanged",
        "onDelegateDragPositionOverFavouritesChanged",
        "onDelegateDragPositionOverPageViewChanged",
        "onDelegateDraggingStarted",
        "onDelegateDragFromPageStarted",
        "page",
        "row",
        "column",
        "onDelegateDragFromFavouritesStarted",
        "position",
        "onDelegateDragFromAppDrawerStarted",
        "storageId",
        "onDelegateDragFromFolderStarted",
        "FolioApplicationFolder*",
        "folder",
        "onDelegateDragFromWidgetListStarted",
        "appletPluginId",
        "onDelegateDropped",
        "onDelegateDraggingCancelled",
        "onLeaveCurrentFolder",
        "onChangePageTimerFinished",
        "onOpenFolderTimerFinished",
        "onLeaveFolderTimerFinished",
        "onChangeFolderPageTimerFinished",
        "onFolderInsertBetweenTimerFinished",
        "onFavouritesInsertBetweenTimerFinished",
        "candidateDropPosition",
        "DelegateDragPosition*",
        "startPosition",
        "dropDelegate",
        "FolioDelegate*"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'dropDelegateChanged'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'delegateDroppedAndPlaced'
        QtMocHelpers::SignalData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'newDelegateDropAbandoned'
        QtMocHelpers::SignalData<void()>(4, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onDelegateDragPositionChanged'
        QtMocHelpers::SlotData<void()>(5, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onDelegateDragPositionOverFolderViewChanged'
        QtMocHelpers::SlotData<void()>(6, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onDelegateDragPositionOverFavouritesChanged'
        QtMocHelpers::SlotData<void()>(7, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onDelegateDragPositionOverPageViewChanged'
        QtMocHelpers::SlotData<void()>(8, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onDelegateDraggingStarted'
        QtMocHelpers::SlotData<void()>(9, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onDelegateDragFromPageStarted'
        QtMocHelpers::SlotData<void(int, int, int)>(10, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 11 }, { QMetaType::Int, 12 }, { QMetaType::Int, 13 },
        }}),
        // Slot 'onDelegateDragFromFavouritesStarted'
        QtMocHelpers::SlotData<void(int)>(14, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 15 },
        }}),
        // Slot 'onDelegateDragFromAppDrawerStarted'
        QtMocHelpers::SlotData<void(QString)>(16, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 17 },
        }}),
        // Slot 'onDelegateDragFromFolderStarted'
        QtMocHelpers::SlotData<void(FolioApplicationFolder *, int)>(18, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 19, 20 }, { QMetaType::Int, 15 },
        }}),
        // Slot 'onDelegateDragFromWidgetListStarted'
        QtMocHelpers::SlotData<void(QString)>(21, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 22 },
        }}),
        // Slot 'onDelegateDropped'
        QtMocHelpers::SlotData<void()>(23, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onDelegateDraggingCancelled'
        QtMocHelpers::SlotData<void()>(24, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onLeaveCurrentFolder'
        QtMocHelpers::SlotData<void()>(25, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onChangePageTimerFinished'
        QtMocHelpers::SlotData<void()>(26, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onOpenFolderTimerFinished'
        QtMocHelpers::SlotData<void()>(27, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onLeaveFolderTimerFinished'
        QtMocHelpers::SlotData<void()>(28, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onChangeFolderPageTimerFinished'
        QtMocHelpers::SlotData<void()>(29, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onFolderInsertBetweenTimerFinished'
        QtMocHelpers::SlotData<void()>(30, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onFavouritesInsertBetweenTimerFinished'
        QtMocHelpers::SlotData<void()>(31, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'candidateDropPosition'
        QtMocHelpers::PropertyData<DelegateDragPosition*>(32, 0x80000000 | 33, QMC::DefaultPropertyFlags | QMC::EnumOrFlag | QMC::Constant),
        // property 'startPosition'
        QtMocHelpers::PropertyData<DelegateDragPosition*>(34, 0x80000000 | 33, QMC::DefaultPropertyFlags | QMC::EnumOrFlag | QMC::Constant),
        // property 'dropDelegate'
        QtMocHelpers::PropertyData<FolioDelegate*>(35, 0x80000000 | 36, QMC::DefaultPropertyFlags | QMC::EnumOrFlag, 0),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<DragState, qt_meta_tag_ZN9DragStateE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject DragState::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN9DragStateE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN9DragStateE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN9DragStateE_t>.metaTypes,
    nullptr
} };

void DragState::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<DragState *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->dropDelegateChanged(); break;
        case 1: _t->delegateDroppedAndPlaced(); break;
        case 2: _t->newDelegateDropAbandoned(); break;
        case 3: _t->onDelegateDragPositionChanged(); break;
        case 4: _t->onDelegateDragPositionOverFolderViewChanged(); break;
        case 5: _t->onDelegateDragPositionOverFavouritesChanged(); break;
        case 6: _t->onDelegateDragPositionOverPageViewChanged(); break;
        case 7: _t->onDelegateDraggingStarted(); break;
        case 8: _t->onDelegateDragFromPageStarted((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[3]))); break;
        case 9: _t->onDelegateDragFromFavouritesStarted((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 10: _t->onDelegateDragFromAppDrawerStarted((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 11: _t->onDelegateDragFromFolderStarted((*reinterpret_cast<std::add_pointer_t<FolioApplicationFolder*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2]))); break;
        case 12: _t->onDelegateDragFromWidgetListStarted((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 13: _t->onDelegateDropped(); break;
        case 14: _t->onDelegateDraggingCancelled(); break;
        case 15: _t->onLeaveCurrentFolder(); break;
        case 16: _t->onChangePageTimerFinished(); break;
        case 17: _t->onOpenFolderTimerFinished(); break;
        case 18: _t->onLeaveFolderTimerFinished(); break;
        case 19: _t->onChangeFolderPageTimerFinished(); break;
        case 20: _t->onFolderInsertBetweenTimerFinished(); break;
        case 21: _t->onFavouritesInsertBetweenTimerFinished(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< FolioApplicationFolder* >(); break;
            }
            break;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (DragState::*)()>(_a, &DragState::dropDelegateChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (DragState::*)()>(_a, &DragState::delegateDroppedAndPlaced, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (DragState::*)()>(_a, &DragState::newDelegateDropAbandoned, 2))
            return;
    }
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< DelegateDragPosition* >(); break;
        case 2:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< FolioDelegate* >(); break;
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<DelegateDragPosition**>(_v) = _t->candidateDropPosition(); break;
        case 1: *reinterpret_cast<DelegateDragPosition**>(_v) = _t->startPosition(); break;
        case 2: *reinterpret_cast<FolioDelegate**>(_v) = _t->dropDelegateRaw(); break;
        default: break;
        }
    }
}

const QMetaObject *DragState::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DragState::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN9DragStateE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int DragState::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void DragState::dropDelegateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void DragState::delegateDroppedAndPlaced()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void DragState::newDelegateDropAbandoned()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
