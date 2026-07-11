/****************************************************************************
** Meta object code from reading C++ file 'paginatemodel.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../components/quicksettingsplugin/paginatemodel.h"
#include <QtCore/qmetatype.h>
#include <QtCore/QList>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'paginatemodel.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN13PaginateModelE_t {};
} // unnamed namespace

template <> constexpr inline auto PaginateModel::qt_create_metaobjectdata<qt_meta_tag_ZN13PaginateModelE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "PaginateModel",
        "QML.Element",
        "auto",
        "pageSizeChanged",
        "",
        "firstItemChanged",
        "sourceModelChanged",
        "pageCountChanged",
        "staticRowCountChanged",
        "_k_sourceRowsAboutToBeInserted",
        "QModelIndex",
        "parent",
        "start",
        "end",
        "_k_sourceRowsInserted",
        "_k_sourceRowsAboutToBeRemoved",
        "_k_sourceRowsRemoved",
        "_k_sourceRowsAboutToBeMoved",
        "sourceParent",
        "sourceStart",
        "sourceEnd",
        "destParent",
        "dest",
        "_k_sourceRowsMoved",
        "_k_sourceColumnsAboutToBeInserted",
        "_k_sourceColumnsInserted",
        "_k_sourceColumnsAboutToBeRemoved",
        "_k_sourceColumnsRemoved",
        "_k_sourceColumnsAboutToBeMoved",
        "_k_sourceColumnsMoved",
        "_k_sourceDataChanged",
        "topLeft",
        "bottomRight",
        "QList<int>",
        "roles",
        "_k_sourceHeaderDataChanged",
        "Qt::Orientation",
        "orientation",
        "first",
        "last",
        "_k_sourceModelAboutToBeReset",
        "_k_sourceModelReset",
        "firstPage",
        "nextPage",
        "previousPage",
        "lastPage",
        "pageSize",
        "firstItem",
        "sourceModel",
        "QAbstractItemModel*",
        "currentPage",
        "pageCount",
        "staticRowCount"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'pageSizeChanged'
        QtMocHelpers::SignalData<void()>(3, 4, QMC::AccessPublic, QMetaType::Void),
        // Signal 'firstItemChanged'
        QtMocHelpers::SignalData<void()>(5, 4, QMC::AccessPublic, QMetaType::Void),
        // Signal 'sourceModelChanged'
        QtMocHelpers::SignalData<void()>(6, 4, QMC::AccessPublic, QMetaType::Void),
        // Signal 'pageCountChanged'
        QtMocHelpers::SignalData<void()>(7, 4, QMC::AccessPublic, QMetaType::Void),
        // Signal 'staticRowCountChanged'
        QtMocHelpers::SignalData<void()>(8, 4, QMC::AccessPublic, QMetaType::Void),
        // Slot '_k_sourceRowsAboutToBeInserted'
        QtMocHelpers::SlotData<void(const QModelIndex &, int, int)>(9, 4, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 10, 11 }, { QMetaType::Int, 12 }, { QMetaType::Int, 13 },
        }}),
        // Slot '_k_sourceRowsInserted'
        QtMocHelpers::SlotData<void(const QModelIndex &, int, int)>(14, 4, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 10, 11 }, { QMetaType::Int, 12 }, { QMetaType::Int, 13 },
        }}),
        // Slot '_k_sourceRowsAboutToBeRemoved'
        QtMocHelpers::SlotData<void(const QModelIndex &, int, int)>(15, 4, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 10, 11 }, { QMetaType::Int, 12 }, { QMetaType::Int, 13 },
        }}),
        // Slot '_k_sourceRowsRemoved'
        QtMocHelpers::SlotData<void(const QModelIndex &, int, int)>(16, 4, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 10, 11 }, { QMetaType::Int, 12 }, { QMetaType::Int, 13 },
        }}),
        // Slot '_k_sourceRowsAboutToBeMoved'
        QtMocHelpers::SlotData<void(const QModelIndex &, int, int, const QModelIndex &, int)>(17, 4, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 10, 18 }, { QMetaType::Int, 19 }, { QMetaType::Int, 20 }, { 0x80000000 | 10, 21 },
            { QMetaType::Int, 22 },
        }}),
        // Slot '_k_sourceRowsMoved'
        QtMocHelpers::SlotData<void(const QModelIndex &, int, int, const QModelIndex &, int)>(23, 4, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 10, 18 }, { QMetaType::Int, 19 }, { QMetaType::Int, 20 }, { 0x80000000 | 10, 21 },
            { QMetaType::Int, 22 },
        }}),
        // Slot '_k_sourceColumnsAboutToBeInserted'
        QtMocHelpers::SlotData<void(const QModelIndex &, int, int)>(24, 4, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 10, 11 }, { QMetaType::Int, 12 }, { QMetaType::Int, 13 },
        }}),
        // Slot '_k_sourceColumnsInserted'
        QtMocHelpers::SlotData<void(const QModelIndex &, int, int)>(25, 4, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 10, 11 }, { QMetaType::Int, 12 }, { QMetaType::Int, 13 },
        }}),
        // Slot '_k_sourceColumnsAboutToBeRemoved'
        QtMocHelpers::SlotData<void(const QModelIndex &, int, int)>(26, 4, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 10, 11 }, { QMetaType::Int, 12 }, { QMetaType::Int, 13 },
        }}),
        // Slot '_k_sourceColumnsRemoved'
        QtMocHelpers::SlotData<void(const QModelIndex &, int, int)>(27, 4, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 10, 11 }, { QMetaType::Int, 12 }, { QMetaType::Int, 13 },
        }}),
        // Slot '_k_sourceColumnsAboutToBeMoved'
        QtMocHelpers::SlotData<void(const QModelIndex &, int, int, const QModelIndex &, int)>(28, 4, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 10, 18 }, { QMetaType::Int, 19 }, { QMetaType::Int, 20 }, { 0x80000000 | 10, 21 },
            { QMetaType::Int, 22 },
        }}),
        // Slot '_k_sourceColumnsMoved'
        QtMocHelpers::SlotData<void(const QModelIndex &, int, int, const QModelIndex &, int)>(29, 4, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 10, 18 }, { QMetaType::Int, 19 }, { QMetaType::Int, 20 }, { 0x80000000 | 10, 21 },
            { QMetaType::Int, 22 },
        }}),
        // Slot '_k_sourceDataChanged'
        QtMocHelpers::SlotData<void(const QModelIndex &, const QModelIndex &, const QVector<int> &)>(30, 4, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 10, 31 }, { 0x80000000 | 10, 32 }, { 0x80000000 | 33, 34 },
        }}),
        // Slot '_k_sourceHeaderDataChanged'
        QtMocHelpers::SlotData<void(Qt::Orientation, int, int)>(35, 4, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 36, 37 }, { QMetaType::Int, 38 }, { QMetaType::Int, 39 },
        }}),
        // Slot '_k_sourceModelAboutToBeReset'
        QtMocHelpers::SlotData<void()>(40, 4, QMC::AccessPrivate, QMetaType::Void),
        // Slot '_k_sourceModelReset'
        QtMocHelpers::SlotData<void()>(41, 4, QMC::AccessPrivate, QMetaType::Void),
        // Method 'firstPage'
        QtMocHelpers::MethodData<void()>(42, 4, QMC::AccessPublic | QMC::MethodScriptable, QMetaType::Void),
        // Method 'nextPage'
        QtMocHelpers::MethodData<void()>(43, 4, QMC::AccessPublic | QMC::MethodScriptable, QMetaType::Void),
        // Method 'previousPage'
        QtMocHelpers::MethodData<void()>(44, 4, QMC::AccessPublic | QMC::MethodScriptable, QMetaType::Void),
        // Method 'lastPage'
        QtMocHelpers::MethodData<void()>(45, 4, QMC::AccessPublic | QMC::MethodScriptable, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'pageSize'
        QtMocHelpers::PropertyData<int>(46, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 0),
        // property 'firstItem'
        QtMocHelpers::PropertyData<int>(47, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 1),
        // property 'sourceModel'
        QtMocHelpers::PropertyData<QAbstractItemModel*>(48, 0x80000000 | 49, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 2),
        // property 'currentPage'
        QtMocHelpers::PropertyData<int>(50, QMetaType::Int, QMC::DefaultPropertyFlags, 1),
        // property 'pageCount'
        QtMocHelpers::PropertyData<int>(51, QMetaType::Int, QMC::DefaultPropertyFlags, 3),
        // property 'staticRowCount'
        QtMocHelpers::PropertyData<bool>(52, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 4),
    };
    QtMocHelpers::UintData qt_enums {
    };
    QtMocHelpers::UintData qt_constructors {};
    QtMocHelpers::ClassInfos qt_classinfo({
            {    1,    2 },
    });
    return QtMocHelpers::metaObjectData<PaginateModel, void>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums, qt_constructors, qt_classinfo);
}
Q_CONSTINIT const QMetaObject PaginateModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractListModel::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13PaginateModelE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13PaginateModelE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN13PaginateModelE_t>.metaTypes,
    nullptr
} };

void PaginateModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<PaginateModel *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->pageSizeChanged(); break;
        case 1: _t->firstItemChanged(); break;
        case 2: _t->sourceModelChanged(); break;
        case 3: _t->pageCountChanged(); break;
        case 4: _t->staticRowCountChanged(); break;
        case 5: _t->_k_sourceRowsAboutToBeInserted((*reinterpret_cast<std::add_pointer_t<QModelIndex>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[3]))); break;
        case 6: _t->_k_sourceRowsInserted((*reinterpret_cast<std::add_pointer_t<QModelIndex>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[3]))); break;
        case 7: _t->_k_sourceRowsAboutToBeRemoved((*reinterpret_cast<std::add_pointer_t<QModelIndex>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[3]))); break;
        case 8: _t->_k_sourceRowsRemoved((*reinterpret_cast<std::add_pointer_t<QModelIndex>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[3]))); break;
        case 9: _t->_k_sourceRowsAboutToBeMoved((*reinterpret_cast<std::add_pointer_t<QModelIndex>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<QModelIndex>>(_a[4])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[5]))); break;
        case 10: _t->_k_sourceRowsMoved((*reinterpret_cast<std::add_pointer_t<QModelIndex>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<QModelIndex>>(_a[4])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[5]))); break;
        case 11: _t->_k_sourceColumnsAboutToBeInserted((*reinterpret_cast<std::add_pointer_t<QModelIndex>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[3]))); break;
        case 12: _t->_k_sourceColumnsInserted((*reinterpret_cast<std::add_pointer_t<QModelIndex>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[3]))); break;
        case 13: _t->_k_sourceColumnsAboutToBeRemoved((*reinterpret_cast<std::add_pointer_t<QModelIndex>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[3]))); break;
        case 14: _t->_k_sourceColumnsRemoved((*reinterpret_cast<std::add_pointer_t<QModelIndex>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[3]))); break;
        case 15: _t->_k_sourceColumnsAboutToBeMoved((*reinterpret_cast<std::add_pointer_t<QModelIndex>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<QModelIndex>>(_a[4])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[5]))); break;
        case 16: _t->_k_sourceColumnsMoved((*reinterpret_cast<std::add_pointer_t<QModelIndex>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<QModelIndex>>(_a[4])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[5]))); break;
        case 17: _t->_k_sourceDataChanged((*reinterpret_cast<std::add_pointer_t<QModelIndex>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QModelIndex>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<QList<int>>>(_a[3]))); break;
        case 18: _t->_k_sourceHeaderDataChanged((*reinterpret_cast<std::add_pointer_t<Qt::Orientation>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[3]))); break;
        case 19: _t->_k_sourceModelAboutToBeReset(); break;
        case 20: _t->_k_sourceModelReset(); break;
        case 21: _t->firstPage(); break;
        case 22: _t->nextPage(); break;
        case 23: _t->previousPage(); break;
        case 24: _t->lastPage(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 17:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 2:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<int> >(); break;
            }
            break;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (PaginateModel::*)()>(_a, &PaginateModel::pageSizeChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (PaginateModel::*)()>(_a, &PaginateModel::firstItemChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (PaginateModel::*)()>(_a, &PaginateModel::sourceModelChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (PaginateModel::*)()>(_a, &PaginateModel::pageCountChanged, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (PaginateModel::*)()>(_a, &PaginateModel::staticRowCountChanged, 4))
            return;
    }
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractItemModel* >(); break;
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<int*>(_v) = _t->pageSize(); break;
        case 1: *reinterpret_cast<int*>(_v) = _t->firstItem(); break;
        case 2: *reinterpret_cast<QAbstractItemModel**>(_v) = _t->sourceModel(); break;
        case 3: *reinterpret_cast<int*>(_v) = _t->currentPage(); break;
        case 4: *reinterpret_cast<int*>(_v) = _t->pageCount(); break;
        case 5: *reinterpret_cast<bool*>(_v) = _t->hasStaticRowCount(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setPageSize(*reinterpret_cast<int*>(_v)); break;
        case 1: _t->setFirstItem(*reinterpret_cast<int*>(_v)); break;
        case 2: _t->setSourceModel(*reinterpret_cast<QAbstractItemModel**>(_v)); break;
        case 5: _t->setStaticRowCount(*reinterpret_cast<bool*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *PaginateModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PaginateModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13PaginateModelE_t>.strings))
        return static_cast<void*>(this);
    return QAbstractListModel::qt_metacast(_clname);
}

int PaginateModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractListModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 25)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 25;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 25)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 25;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void PaginateModel::pageSizeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void PaginateModel::firstItemChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void PaginateModel::sourceModelChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void PaginateModel::pageCountChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void PaginateModel::staticRowCountChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}
QT_WARNING_POP
