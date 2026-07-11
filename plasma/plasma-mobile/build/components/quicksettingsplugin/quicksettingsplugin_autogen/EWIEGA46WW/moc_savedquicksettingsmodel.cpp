/****************************************************************************
** Meta object code from reading C++ file 'savedquicksettingsmodel.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../components/quicksettingsplugin/savedquicksettingsmodel.h"
#include <QtCore/qmetatype.h>
#include <QtCore/QList>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'savedquicksettingsmodel.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN23SavedQuickSettingsModelE_t {};
} // unnamed namespace

template <> constexpr inline auto SavedQuickSettingsModel::qt_create_metaobjectdata<qt_meta_tag_ZN23SavedQuickSettingsModelE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "SavedQuickSettingsModel",
        "QML.Element",
        "auto",
        "dataUpdated",
        "",
        "QList<KPluginMetaData>",
        "data",
        "updateData",
        "moveRow",
        "oldIndex",
        "newIndex",
        "insertRow",
        "KPluginMetaData",
        "metaData",
        "index",
        "takeRow",
        "removeRow"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'dataUpdated'
        QtMocHelpers::SignalData<void(QList<KPluginMetaData>)>(3, 4, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 5, 6 },
        }}),
        // Slot 'updateData'
        QtMocHelpers::SlotData<void(QList<KPluginMetaData>)>(7, 4, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 5, 6 },
        }}),
        // Method 'moveRow'
        QtMocHelpers::MethodData<void(int, int)>(8, 4, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 9 }, { QMetaType::Int, 10 },
        }}),
        // Method 'insertRow'
        QtMocHelpers::MethodData<void(KPluginMetaData, int)>(11, 4, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 12, 13 }, { QMetaType::Int, 14 },
        }}),
        // Method 'takeRow'
        QtMocHelpers::MethodData<KPluginMetaData(int)>(15, 4, QMC::AccessPublic, 0x80000000 | 12, {{
            { QMetaType::Int, 14 },
        }}),
        // Method 'removeRow'
        QtMocHelpers::MethodData<void(int)>(16, 4, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 14 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    QtMocHelpers::UintData qt_constructors {};
    QtMocHelpers::ClassInfos qt_classinfo({
            {    1,    2 },
    });
    return QtMocHelpers::metaObjectData<SavedQuickSettingsModel, void>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums, qt_constructors, qt_classinfo);
}
Q_CONSTINIT const QMetaObject SavedQuickSettingsModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractListModel::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN23SavedQuickSettingsModelE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN23SavedQuickSettingsModelE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN23SavedQuickSettingsModelE_t>.metaTypes,
    nullptr
} };

void SavedQuickSettingsModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<SavedQuickSettingsModel *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->dataUpdated((*reinterpret_cast<std::add_pointer_t<QList<KPluginMetaData>>>(_a[1]))); break;
        case 1: _t->updateData((*reinterpret_cast<std::add_pointer_t<QList<KPluginMetaData>>>(_a[1]))); break;
        case 2: _t->moveRow((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2]))); break;
        case 3: _t->insertRow((*reinterpret_cast<std::add_pointer_t<KPluginMetaData>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2]))); break;
        case 4: { KPluginMetaData _r = _t->takeRow((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])));
            if (_a[0]) *reinterpret_cast<KPluginMetaData*>(_a[0]) = std::move(_r); }  break;
        case 5: _t->removeRow((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (SavedQuickSettingsModel::*)(QList<KPluginMetaData> )>(_a, &SavedQuickSettingsModel::dataUpdated, 0))
            return;
    }
}

const QMetaObject *SavedQuickSettingsModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SavedQuickSettingsModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN23SavedQuickSettingsModelE_t>.strings))
        return static_cast<void*>(this);
    return QAbstractListModel::qt_metacast(_clname);
}

int SavedQuickSettingsModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractListModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void SavedQuickSettingsModel::dataUpdated(QList<KPluginMetaData> _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}
QT_WARNING_POP
