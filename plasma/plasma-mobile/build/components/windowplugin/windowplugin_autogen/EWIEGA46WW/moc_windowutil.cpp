/****************************************************************************
** Meta object code from reading C++ file 'windowutil.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../components/windowplugin/windowutil.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'windowutil.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN10WindowUtilE_t {};
} // unnamed namespace

template <> constexpr inline auto WindowUtil::qt_create_metaobjectdata<qt_meta_tag_ZN10WindowUtilE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "WindowUtil",
        "QML.Element",
        "auto",
        "QML.Singleton",
        "true",
        "windowCreated",
        "",
        "KWayland::Client::PlasmaWindow*",
        "window",
        "showingDesktopChanged",
        "showingDesktop",
        "hasCloseableActiveWindowChanged",
        "activeWindowChanged",
        "activeWindowIsShellChanged",
        "windowChanged",
        "storageId",
        "appActivationStarted",
        "appId",
        "iconName",
        "appActivationFinished",
        "updateActiveWindowIsShell",
        "forgetActiveWindow",
        "updateShowingDesktop",
        "showing",
        "windowCreatedSlot",
        "activateWindowByStorageId",
        "closeActiveWindow",
        "requestShowingDesktop",
        "minimizeAll",
        "unsetAllMinimizedGeometries",
        "QQuickItem*",
        "parent",
        "isShowingDesktop",
        "hasCloseableActiveWindow",
        "activeWindowIsShell"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'windowCreated'
        QtMocHelpers::SignalData<void(KWayland::Client::PlasmaWindow *)>(5, 6, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 7, 8 },
        }}),
        // Signal 'showingDesktopChanged'
        QtMocHelpers::SignalData<void(bool)>(9, 6, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 10 },
        }}),
        // Signal 'hasCloseableActiveWindowChanged'
        QtMocHelpers::SignalData<void()>(11, 6, QMC::AccessPublic, QMetaType::Void),
        // Signal 'activeWindowChanged'
        QtMocHelpers::SignalData<void()>(12, 6, QMC::AccessPublic, QMetaType::Void),
        // Signal 'activeWindowIsShellChanged'
        QtMocHelpers::SignalData<void()>(13, 6, QMC::AccessPublic, QMetaType::Void),
        // Signal 'windowChanged'
        QtMocHelpers::SignalData<void(QString)>(14, 6, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 15 },
        }}),
        // Signal 'appActivationStarted'
        QtMocHelpers::SignalData<void(const QString &, const QString &)>(16, 6, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 17 }, { QMetaType::QString, 18 },
        }}),
        // Signal 'appActivationFinished'
        QtMocHelpers::SignalData<void(const QString &, const QString &)>(19, 6, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 17 }, { QMetaType::QString, 18 },
        }}),
        // Slot 'updateActiveWindowIsShell'
        QtMocHelpers::SlotData<void()>(20, 6, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'forgetActiveWindow'
        QtMocHelpers::SlotData<void()>(21, 6, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'updateShowingDesktop'
        QtMocHelpers::SlotData<void(bool)>(22, 6, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 23 },
        }}),
        // Slot 'windowCreatedSlot'
        QtMocHelpers::SlotData<void(KWayland::Client::PlasmaWindow *)>(24, 6, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 7, 8 },
        }}),
        // Method 'activateWindowByStorageId'
        QtMocHelpers::MethodData<bool(const QString &)>(25, 6, QMC::AccessPublic, QMetaType::Bool, {{
            { QMetaType::QString, 15 },
        }}),
        // Method 'closeActiveWindow'
        QtMocHelpers::MethodData<void()>(26, 6, QMC::AccessPublic, QMetaType::Void),
        // Method 'requestShowingDesktop'
        QtMocHelpers::MethodData<void(bool)>(27, 6, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 10 },
        }}),
        // Method 'minimizeAll'
        QtMocHelpers::MethodData<void()>(28, 6, QMC::AccessPublic, QMetaType::Void),
        // Method 'unsetAllMinimizedGeometries'
        QtMocHelpers::MethodData<void(QQuickItem *)>(29, 6, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 30, 31 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'isShowingDesktop'
        QtMocHelpers::PropertyData<bool>(32, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable, 1),
        // property 'hasCloseableActiveWindow'
        QtMocHelpers::PropertyData<bool>(33, QMetaType::Bool, QMC::DefaultPropertyFlags, 2),
        // property 'activeWindowIsShell'
        QtMocHelpers::PropertyData<bool>(34, QMetaType::Bool, QMC::DefaultPropertyFlags, 4),
    };
    QtMocHelpers::UintData qt_enums {
    };
    QtMocHelpers::UintData qt_constructors {};
    QtMocHelpers::ClassInfos qt_classinfo({
            {    1,    2 },
            {    3,    4 },
    });
    return QtMocHelpers::metaObjectData<WindowUtil, void>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums, qt_constructors, qt_classinfo);
}
Q_CONSTINIT const QMetaObject WindowUtil::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10WindowUtilE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10WindowUtilE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN10WindowUtilE_t>.metaTypes,
    nullptr
} };

void WindowUtil::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<WindowUtil *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->windowCreated((*reinterpret_cast<std::add_pointer_t<KWayland::Client::PlasmaWindow*>>(_a[1]))); break;
        case 1: _t->showingDesktopChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 2: _t->hasCloseableActiveWindowChanged(); break;
        case 3: _t->activeWindowChanged(); break;
        case 4: _t->activeWindowIsShellChanged(); break;
        case 5: _t->windowChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 6: _t->appActivationStarted((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2]))); break;
        case 7: _t->appActivationFinished((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2]))); break;
        case 8: _t->updateActiveWindowIsShell(); break;
        case 9: _t->forgetActiveWindow(); break;
        case 10: _t->updateShowingDesktop((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 11: _t->windowCreatedSlot((*reinterpret_cast<std::add_pointer_t<KWayland::Client::PlasmaWindow*>>(_a[1]))); break;
        case 12: { bool _r = _t->activateWindowByStorageId((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 13: _t->closeActiveWindow(); break;
        case 14: _t->requestShowingDesktop((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 15: _t->minimizeAll(); break;
        case 16: _t->unsetAllMinimizedGeometries((*reinterpret_cast<std::add_pointer_t<QQuickItem*>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< KWayland::Client::PlasmaWindow* >(); break;
            }
            break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< KWayland::Client::PlasmaWindow* >(); break;
            }
            break;
        case 16:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QQuickItem* >(); break;
            }
            break;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (WindowUtil::*)(KWayland::Client::PlasmaWindow * )>(_a, &WindowUtil::windowCreated, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (WindowUtil::*)(bool )>(_a, &WindowUtil::showingDesktopChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (WindowUtil::*)()>(_a, &WindowUtil::hasCloseableActiveWindowChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (WindowUtil::*)()>(_a, &WindowUtil::activeWindowChanged, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (WindowUtil::*)()>(_a, &WindowUtil::activeWindowIsShellChanged, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (WindowUtil::*)(QString )>(_a, &WindowUtil::windowChanged, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (WindowUtil::*)(const QString & , const QString & )>(_a, &WindowUtil::appActivationStarted, 6))
            return;
        if (QtMocHelpers::indexOfMethod<void (WindowUtil::*)(const QString & , const QString & )>(_a, &WindowUtil::appActivationFinished, 7))
            return;
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<bool*>(_v) = _t->isShowingDesktop(); break;
        case 1: *reinterpret_cast<bool*>(_v) = _t->hasCloseableActiveWindow(); break;
        case 2: *reinterpret_cast<bool*>(_v) = _t->activeWindowIsShell(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->requestShowingDesktop(*reinterpret_cast<bool*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *WindowUtil::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WindowUtil::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10WindowUtilE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int WindowUtil::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
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
void WindowUtil::windowCreated(KWayland::Client::PlasmaWindow * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void WindowUtil::showingDesktopChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}

// SIGNAL 2
void WindowUtil::hasCloseableActiveWindowChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void WindowUtil::activeWindowChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void WindowUtil::activeWindowIsShellChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void WindowUtil::windowChanged(QString _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 5, nullptr, _t1);
}

// SIGNAL 6
void WindowUtil::appActivationStarted(const QString & _t1, const QString & _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 6, nullptr, _t1, _t2);
}

// SIGNAL 7
void WindowUtil::appActivationFinished(const QString & _t1, const QString & _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 7, nullptr, _t1, _t2);
}
QT_WARNING_POP
