/****************************************************************************
** Meta object code from reading C++ file 'settingsapp.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/settingsapp.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'settingsapp.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN11SettingsAppE_t {};
} // unnamed namespace

template <> constexpr inline auto SettingsApp::qt_create_metaobjectdata<qt_meta_tag_ZN11SettingsAppE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "SettingsApp",
        "QML.Element",
        "auto",
        "QML.Singleton",
        "true",
        "moduleChangeRequested",
        "",
        "activateRequested",
        "filterStringChanged",
        "showAllModulesChanged",
        "startModuleChanged",
        "singleModuleChanged",
        "activeCategoryRowChanged",
        "activeSearchRowChanged",
        "activeSubCategoryRowChanged",
        "activeModuleChanged",
        "subCategoryRequested",
        "loadModule",
        "QModelIndex",
        "activeModule",
        "args",
        "startModule",
        "singleModule",
        "filterString",
        "showAllModules",
        "categoryModel",
        "ModulesProxyModel*",
        "subCategoryModel",
        "SubcategoryModel*",
        "searchModel",
        "activeCategoryRow",
        "activeSearchRow",
        "activeSubCategoryRow",
        "Module*"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'moduleChangeRequested'
        QtMocHelpers::SignalData<void()>(5, 6, QMC::AccessPublic, QMetaType::Void),
        // Signal 'activateRequested'
        QtMocHelpers::SignalData<void()>(7, 6, QMC::AccessPublic, QMetaType::Void),
        // Signal 'filterStringChanged'
        QtMocHelpers::SignalData<void()>(8, 6, QMC::AccessPublic, QMetaType::Void),
        // Signal 'showAllModulesChanged'
        QtMocHelpers::SignalData<void()>(9, 6, QMC::AccessPublic, QMetaType::Void),
        // Signal 'startModuleChanged'
        QtMocHelpers::SignalData<void()>(10, 6, QMC::AccessPublic, QMetaType::Void),
        // Signal 'singleModuleChanged'
        QtMocHelpers::SignalData<void()>(11, 6, QMC::AccessPublic, QMetaType::Void),
        // Signal 'activeCategoryRowChanged'
        QtMocHelpers::SignalData<void()>(12, 6, QMC::AccessPublic, QMetaType::Void),
        // Signal 'activeSearchRowChanged'
        QtMocHelpers::SignalData<void()>(13, 6, QMC::AccessPublic, QMetaType::Void),
        // Signal 'activeSubCategoryRowChanged'
        QtMocHelpers::SignalData<void()>(14, 6, QMC::AccessPublic, QMetaType::Void),
        // Signal 'activeModuleChanged'
        QtMocHelpers::SignalData<void()>(15, 6, QMC::AccessPublic, QMetaType::Void),
        // Signal 'subCategoryRequested'
        QtMocHelpers::SignalData<void()>(16, 6, QMC::AccessPublic, QMetaType::Void),
        // Method 'loadModule'
        QtMocHelpers::MethodData<void(const QModelIndex &, const QStringList &)>(17, 6, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 18, 19 }, { QMetaType::QStringList, 20 },
        }}),
        // Method 'loadModule'
        QtMocHelpers::MethodData<void(const QModelIndex &)>(17, 6, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Void, {{
            { 0x80000000 | 18, 19 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'startModule'
        QtMocHelpers::PropertyData<QString>(21, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Constant),
        // property 'singleModule'
        QtMocHelpers::PropertyData<bool>(22, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Constant),
        // property 'filterString'
        QtMocHelpers::PropertyData<QString>(23, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 2),
        // property 'showAllModules'
        QtMocHelpers::PropertyData<bool>(24, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 3),
        // property 'categoryModel'
        QtMocHelpers::PropertyData<ModulesProxyModel*>(25, 0x80000000 | 26, QMC::DefaultPropertyFlags | QMC::EnumOrFlag | QMC::Constant),
        // property 'subCategoryModel'
        QtMocHelpers::PropertyData<SubcategoryModel*>(27, 0x80000000 | 28, QMC::DefaultPropertyFlags | QMC::EnumOrFlag | QMC::Constant),
        // property 'searchModel'
        QtMocHelpers::PropertyData<ModulesProxyModel*>(29, 0x80000000 | 26, QMC::DefaultPropertyFlags | QMC::EnumOrFlag | QMC::Constant),
        // property 'activeCategoryRow'
        QtMocHelpers::PropertyData<int>(30, QMetaType::Int, QMC::DefaultPropertyFlags, 6),
        // property 'activeSearchRow'
        QtMocHelpers::PropertyData<int>(31, QMetaType::Int, QMC::DefaultPropertyFlags, 7),
        // property 'activeSubCategoryRow'
        QtMocHelpers::PropertyData<int>(32, QMetaType::Int, QMC::DefaultPropertyFlags, 8),
        // property 'activeModule'
        QtMocHelpers::PropertyData<Module*>(19, 0x80000000 | 33, QMC::DefaultPropertyFlags | QMC::EnumOrFlag, 9),
    };
    QtMocHelpers::UintData qt_enums {
    };
    QtMocHelpers::UintData qt_constructors {};
    QtMocHelpers::ClassInfos qt_classinfo({
            {    1,    2 },
            {    3,    4 },
    });
    return QtMocHelpers::metaObjectData<SettingsApp, void>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums, qt_constructors, qt_classinfo);
}
Q_CONSTINIT const QMetaObject SettingsApp::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN11SettingsAppE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN11SettingsAppE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN11SettingsAppE_t>.metaTypes,
    nullptr
} };

void SettingsApp::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<SettingsApp *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->moduleChangeRequested(); break;
        case 1: _t->activateRequested(); break;
        case 2: _t->filterStringChanged(); break;
        case 3: _t->showAllModulesChanged(); break;
        case 4: _t->startModuleChanged(); break;
        case 5: _t->singleModuleChanged(); break;
        case 6: _t->activeCategoryRowChanged(); break;
        case 7: _t->activeSearchRowChanged(); break;
        case 8: _t->activeSubCategoryRowChanged(); break;
        case 9: _t->activeModuleChanged(); break;
        case 10: _t->subCategoryRequested(); break;
        case 11: _t->loadModule((*reinterpret_cast<std::add_pointer_t<QModelIndex>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QStringList>>(_a[2]))); break;
        case 12: _t->loadModule((*reinterpret_cast<std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (SettingsApp::*)()>(_a, &SettingsApp::moduleChangeRequested, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (SettingsApp::*)()>(_a, &SettingsApp::activateRequested, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (SettingsApp::*)()>(_a, &SettingsApp::filterStringChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (SettingsApp::*)()>(_a, &SettingsApp::showAllModulesChanged, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (SettingsApp::*)()>(_a, &SettingsApp::startModuleChanged, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (SettingsApp::*)()>(_a, &SettingsApp::singleModuleChanged, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (SettingsApp::*)()>(_a, &SettingsApp::activeCategoryRowChanged, 6))
            return;
        if (QtMocHelpers::indexOfMethod<void (SettingsApp::*)()>(_a, &SettingsApp::activeSearchRowChanged, 7))
            return;
        if (QtMocHelpers::indexOfMethod<void (SettingsApp::*)()>(_a, &SettingsApp::activeSubCategoryRowChanged, 8))
            return;
        if (QtMocHelpers::indexOfMethod<void (SettingsApp::*)()>(_a, &SettingsApp::activeModuleChanged, 9))
            return;
        if (QtMocHelpers::indexOfMethod<void (SettingsApp::*)()>(_a, &SettingsApp::subCategoryRequested, 10))
            return;
    }
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 10:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Module* >(); break;
        case 6:
        case 4:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ModulesProxyModel* >(); break;
        case 5:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< SubcategoryModel* >(); break;
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<QString*>(_v) = _t->m_startModule; break;
        case 1: *reinterpret_cast<bool*>(_v) = _t->m_singleModule; break;
        case 2: *reinterpret_cast<QString*>(_v) = _t->filterString(); break;
        case 3: *reinterpret_cast<bool*>(_v) = _t->showAllModules(); break;
        case 4: *reinterpret_cast<ModulesProxyModel**>(_v) = _t->categoryModel(); break;
        case 5: *reinterpret_cast<SubcategoryModel**>(_v) = _t->subCategoryModel(); break;
        case 6: *reinterpret_cast<ModulesProxyModel**>(_v) = _t->searchModel(); break;
        case 7: *reinterpret_cast<int*>(_v) = _t->activeCategoryRow(); break;
        case 8: *reinterpret_cast<int*>(_v) = _t->activeSearchRow(); break;
        case 9: *reinterpret_cast<int*>(_v) = _t->activeSubCategoryRow(); break;
        case 10: *reinterpret_cast<Module**>(_v) = _t->activeModule(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 2: _t->setFilterString(*reinterpret_cast<QString*>(_v)); break;
        case 3: _t->setShowAllModules(*reinterpret_cast<bool*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *SettingsApp::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SettingsApp::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN11SettingsAppE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int SettingsApp::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 13;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void SettingsApp::moduleChangeRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void SettingsApp::activateRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void SettingsApp::filterStringChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void SettingsApp::showAllModulesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void SettingsApp::startModuleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void SettingsApp::singleModuleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void SettingsApp::activeCategoryRowChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void SettingsApp::activeSearchRowChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void SettingsApp::activeSubCategoryRowChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void SettingsApp::activeModuleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void SettingsApp::subCategoryRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}
namespace {
struct qt_meta_tag_ZN16SubcategoryModelE_t {};
} // unnamed namespace

template <> constexpr inline auto SubcategoryModel::qt_create_metaobjectdata<qt_meta_tag_ZN16SubcategoryModelE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "SubcategoryModel",
        "titleChanged",
        "",
        "iconChanged",
        "categoryOwnedByKCMChanged",
        "title",
        "icon",
        "QIcon",
        "categoryOwnedByKCM"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'titleChanged'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'iconChanged'
        QtMocHelpers::SignalData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'categoryOwnedByKCMChanged'
        QtMocHelpers::SignalData<void()>(4, 2, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'title'
        QtMocHelpers::PropertyData<QString>(5, QMetaType::QString, QMC::DefaultPropertyFlags, 0),
        // property 'icon'
        QtMocHelpers::PropertyData<QIcon>(6, 0x80000000 | 7, QMC::DefaultPropertyFlags | QMC::EnumOrFlag, 1),
        // property 'categoryOwnedByKCM'
        QtMocHelpers::PropertyData<bool>(8, QMetaType::Bool, QMC::DefaultPropertyFlags, 2),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<SubcategoryModel, qt_meta_tag_ZN16SubcategoryModelE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject SubcategoryModel::staticMetaObject = { {
    QMetaObject::SuperData::link<KSelectionProxyModel::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN16SubcategoryModelE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN16SubcategoryModelE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN16SubcategoryModelE_t>.metaTypes,
    nullptr
} };

void SubcategoryModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<SubcategoryModel *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->titleChanged(); break;
        case 1: _t->iconChanged(); break;
        case 2: _t->categoryOwnedByKCMChanged(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (SubcategoryModel::*)()>(_a, &SubcategoryModel::titleChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (SubcategoryModel::*)()>(_a, &SubcategoryModel::iconChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (SubcategoryModel::*)()>(_a, &SubcategoryModel::categoryOwnedByKCMChanged, 2))
            return;
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<QString*>(_v) = _t->title(); break;
        case 1: *reinterpret_cast<QIcon*>(_v) = _t->icon(); break;
        case 2: *reinterpret_cast<bool*>(_v) = _t->categoryOwnedByKCM(); break;
        default: break;
        }
    }
}

const QMetaObject *SubcategoryModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SubcategoryModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN16SubcategoryModelE_t>.strings))
        return static_cast<void*>(this);
    return KSelectionProxyModel::qt_metacast(_clname);
}

int SubcategoryModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = KSelectionProxyModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 3;
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
void SubcategoryModel::titleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void SubcategoryModel::iconChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void SubcategoryModel::categoryOwnedByKCMChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
