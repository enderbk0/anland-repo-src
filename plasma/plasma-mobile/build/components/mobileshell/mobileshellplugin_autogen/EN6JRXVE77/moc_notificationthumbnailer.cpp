/****************************************************************************
** Meta object code from reading C++ file 'notificationthumbnailer.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../components/mobileshell/notifications/notificationthumbnailer.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'notificationthumbnailer.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN23NotificationThumbnailerE_t {};
} // unnamed namespace

template <> constexpr inline auto NotificationThumbnailer::qt_create_metaobjectdata<qt_meta_tag_ZN23NotificationThumbnailerE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "NotificationThumbnailer",
        "QML.Element",
        "auto",
        "menuVisibleChanged",
        "",
        "urlChanged",
        "sizeChanged",
        "busyChanged",
        "pixmapChanged",
        "iconNameChanged",
        "url",
        "QUrl",
        "size",
        "QSize",
        "busy",
        "hasPreview",
        "pixmap",
        "QPixmap",
        "pixmapSize",
        "iconName",
        "menuVisible"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'menuVisibleChanged'
        QtMocHelpers::SignalData<void()>(3, 4, QMC::AccessPublic, QMetaType::Void),
        // Signal 'urlChanged'
        QtMocHelpers::SignalData<void()>(5, 4, QMC::AccessPublic, QMetaType::Void),
        // Signal 'sizeChanged'
        QtMocHelpers::SignalData<void()>(6, 4, QMC::AccessPublic, QMetaType::Void),
        // Signal 'busyChanged'
        QtMocHelpers::SignalData<void()>(7, 4, QMC::AccessPublic, QMetaType::Void),
        // Signal 'pixmapChanged'
        QtMocHelpers::SignalData<void()>(8, 4, QMC::AccessPublic, QMetaType::Void),
        // Signal 'iconNameChanged'
        QtMocHelpers::SignalData<void()>(9, 4, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'url'
        QtMocHelpers::PropertyData<QUrl>(10, 0x80000000 | 11, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 1),
        // property 'size'
        QtMocHelpers::PropertyData<QSize>(12, 0x80000000 | 13, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 2),
        // property 'busy'
        QtMocHelpers::PropertyData<bool>(14, QMetaType::Bool, QMC::DefaultPropertyFlags, 3),
        // property 'hasPreview'
        QtMocHelpers::PropertyData<bool>(15, QMetaType::Bool, QMC::DefaultPropertyFlags, 4),
        // property 'pixmap'
        QtMocHelpers::PropertyData<QPixmap>(16, 0x80000000 | 17, QMC::DefaultPropertyFlags | QMC::EnumOrFlag, 4),
        // property 'pixmapSize'
        QtMocHelpers::PropertyData<QSize>(18, 0x80000000 | 13, QMC::DefaultPropertyFlags | QMC::EnumOrFlag, 4),
        // property 'iconName'
        QtMocHelpers::PropertyData<QString>(19, QMetaType::QString, QMC::DefaultPropertyFlags, 5),
        // property 'menuVisible'
        QtMocHelpers::PropertyData<bool>(20, QMetaType::Bool, QMC::DefaultPropertyFlags, 0),
    };
    QtMocHelpers::UintData qt_enums {
    };
    QtMocHelpers::UintData qt_constructors {};
    QtMocHelpers::ClassInfos qt_classinfo({
            {    1,    2 },
    });
    return QtMocHelpers::metaObjectData<NotificationThumbnailer, void>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums, qt_constructors, qt_classinfo);
}
Q_CONSTINIT const QMetaObject NotificationThumbnailer::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN23NotificationThumbnailerE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN23NotificationThumbnailerE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN23NotificationThumbnailerE_t>.metaTypes,
    nullptr
} };

void NotificationThumbnailer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<NotificationThumbnailer *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->menuVisibleChanged(); break;
        case 1: _t->urlChanged(); break;
        case 2: _t->sizeChanged(); break;
        case 3: _t->busyChanged(); break;
        case 4: _t->pixmapChanged(); break;
        case 5: _t->iconNameChanged(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (NotificationThumbnailer::*)()>(_a, &NotificationThumbnailer::menuVisibleChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (NotificationThumbnailer::*)()>(_a, &NotificationThumbnailer::urlChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (NotificationThumbnailer::*)()>(_a, &NotificationThumbnailer::sizeChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (NotificationThumbnailer::*)()>(_a, &NotificationThumbnailer::busyChanged, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (NotificationThumbnailer::*)()>(_a, &NotificationThumbnailer::pixmapChanged, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (NotificationThumbnailer::*)()>(_a, &NotificationThumbnailer::iconNameChanged, 5))
            return;
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<QUrl*>(_v) = _t->url(); break;
        case 1: *reinterpret_cast<QSize*>(_v) = _t->size(); break;
        case 2: *reinterpret_cast<bool*>(_v) = _t->busy(); break;
        case 3: *reinterpret_cast<bool*>(_v) = _t->hasPreview(); break;
        case 4: *reinterpret_cast<QPixmap*>(_v) = _t->pixmap(); break;
        case 5: *reinterpret_cast<QSize*>(_v) = _t->pixmapSize(); break;
        case 6: *reinterpret_cast<QString*>(_v) = _t->iconName(); break;
        case 7: *reinterpret_cast<bool*>(_v) = _t->menuVisible(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setUrl(*reinterpret_cast<QUrl*>(_v)); break;
        case 1: _t->setSize(*reinterpret_cast<QSize*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *NotificationThumbnailer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *NotificationThumbnailer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN23NotificationThumbnailerE_t>.strings))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QQmlParserStatus"))
        return static_cast< QQmlParserStatus*>(this);
    if (!strcmp(_clname, "org.qt-project.Qt.QQmlParserStatus"))
        return static_cast< QQmlParserStatus*>(this);
    return QObject::qt_metacast(_clname);
}

int NotificationThumbnailer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void NotificationThumbnailer::menuVisibleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void NotificationThumbnailer::urlChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void NotificationThumbnailer::sizeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void NotificationThumbnailer::busyChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void NotificationThumbnailer::pixmapChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void NotificationThumbnailer::iconNameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}
QT_WARNING_POP
