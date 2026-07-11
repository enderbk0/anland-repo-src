/****************************************************************************
** Meta object code from reading C++ file 'notificationfileinfo.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../components/mobileshell/notifications/notificationfileinfo.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'notificationfileinfo.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN20NotificationFileInfoE_t {};
} // unnamed namespace

template <> constexpr inline auto NotificationFileInfo::qt_create_metaobjectdata<qt_meta_tag_ZN20NotificationFileInfoE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "NotificationFileInfo",
        "QML.Element",
        "auto",
        "urlChanged",
        "",
        "QUrl",
        "url",
        "busyChanged",
        "busy",
        "errorChanged",
        "error",
        "mimeTypeChanged",
        "iconNameChanged",
        "iconName",
        "openActionChanged",
        "openActionIconNameChanged",
        "mimeType",
        "openAction",
        "QAction*",
        "openActionIconName"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'urlChanged'
        QtMocHelpers::SignalData<void(const QUrl &)>(3, 4, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 5, 6 },
        }}),
        // Signal 'busyChanged'
        QtMocHelpers::SignalData<void(bool)>(7, 4, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 8 },
        }}),
        // Signal 'errorChanged'
        QtMocHelpers::SignalData<void(bool)>(9, 4, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 10 },
        }}),
        // Signal 'mimeTypeChanged'
        QtMocHelpers::SignalData<void()>(11, 4, QMC::AccessPublic, QMetaType::Void),
        // Signal 'iconNameChanged'
        QtMocHelpers::SignalData<void(const QString &)>(12, 4, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 13 },
        }}),
        // Signal 'openActionChanged'
        QtMocHelpers::SignalData<void()>(14, 4, QMC::AccessPublic, QMetaType::Void),
        // Signal 'openActionIconNameChanged'
        QtMocHelpers::SignalData<void()>(15, 4, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'url'
        QtMocHelpers::PropertyData<QUrl>(6, 0x80000000 | 5, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 0),
        // property 'busy'
        QtMocHelpers::PropertyData<bool>(8, QMetaType::Bool, QMC::DefaultPropertyFlags, 1),
        // property 'error'
        QtMocHelpers::PropertyData<int>(10, QMetaType::Int, QMC::DefaultPropertyFlags, 2),
        // property 'mimeType'
        QtMocHelpers::PropertyData<QString>(16, QMetaType::QString, QMC::DefaultPropertyFlags, 3),
        // property 'iconName'
        QtMocHelpers::PropertyData<QString>(13, QMetaType::QString, QMC::DefaultPropertyFlags, 3),
        // property 'openAction'
        QtMocHelpers::PropertyData<QAction*>(17, 0x80000000 | 18, QMC::DefaultPropertyFlags | QMC::EnumOrFlag, 5),
        // property 'openActionIconName'
        QtMocHelpers::PropertyData<QString>(19, QMetaType::QString, QMC::DefaultPropertyFlags, 6),
    };
    QtMocHelpers::UintData qt_enums {
    };
    QtMocHelpers::UintData qt_constructors {};
    QtMocHelpers::ClassInfos qt_classinfo({
            {    1,    2 },
    });
    return QtMocHelpers::metaObjectData<NotificationFileInfo, void>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums, qt_constructors, qt_classinfo);
}
Q_CONSTINIT const QMetaObject NotificationFileInfo::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN20NotificationFileInfoE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN20NotificationFileInfoE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN20NotificationFileInfoE_t>.metaTypes,
    nullptr
} };

void NotificationFileInfo::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<NotificationFileInfo *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->urlChanged((*reinterpret_cast<std::add_pointer_t<QUrl>>(_a[1]))); break;
        case 1: _t->busyChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 2: _t->errorChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 3: _t->mimeTypeChanged(); break;
        case 4: _t->iconNameChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 5: _t->openActionChanged(); break;
        case 6: _t->openActionIconNameChanged(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (NotificationFileInfo::*)(const QUrl & )>(_a, &NotificationFileInfo::urlChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (NotificationFileInfo::*)(bool )>(_a, &NotificationFileInfo::busyChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (NotificationFileInfo::*)(bool )>(_a, &NotificationFileInfo::errorChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (NotificationFileInfo::*)()>(_a, &NotificationFileInfo::mimeTypeChanged, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (NotificationFileInfo::*)(const QString & )>(_a, &NotificationFileInfo::iconNameChanged, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (NotificationFileInfo::*)()>(_a, &NotificationFileInfo::openActionChanged, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (NotificationFileInfo::*)()>(_a, &NotificationFileInfo::openActionIconNameChanged, 6))
            return;
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<QUrl*>(_v) = _t->url(); break;
        case 1: *reinterpret_cast<bool*>(_v) = _t->busy(); break;
        case 2: *reinterpret_cast<int*>(_v) = _t->error(); break;
        case 3: *reinterpret_cast<QString*>(_v) = _t->mimeType(); break;
        case 4: *reinterpret_cast<QString*>(_v) = _t->iconName(); break;
        case 5: *reinterpret_cast<QAction**>(_v) = _t->openAction(); break;
        case 6: *reinterpret_cast<QString*>(_v) = _t->openActionIconName(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setUrl(*reinterpret_cast<QUrl*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *NotificationFileInfo::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *NotificationFileInfo::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN20NotificationFileInfoE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int NotificationFileInfo::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void NotificationFileInfo::urlChanged(const QUrl & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void NotificationFileInfo::busyChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}

// SIGNAL 2
void NotificationFileInfo::errorChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1);
}

// SIGNAL 3
void NotificationFileInfo::mimeTypeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void NotificationFileInfo::iconNameChanged(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 4, nullptr, _t1);
}

// SIGNAL 5
void NotificationFileInfo::openActionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void NotificationFileInfo::openActionIconNameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}
QT_WARNING_POP
