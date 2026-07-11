/****************************************************************************
** Meta object code from reading C++ file 'inputplugin.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/inputplugin.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'inputplugin.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN11InputPluginE_t {};
} // unnamed namespace

template <> constexpr inline auto InputPlugin::qt_create_metaobjectdata<qt_meta_tag_ZN11InputPluginE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "InputPlugin",
        "contextChanged",
        "",
        "surroundingTextChanged",
        "cursorChanged",
        "contentTypeChanged",
        "receivedCommit",
        "resetRequested",
        "deactivate",
        "preferredLanguageChanged",
        "language",
        "keyPressed",
        "QKeyEvent*",
        "keyEvent",
        "keyReleased",
        "ContentHint",
        "content_hint_none",
        "content_hint_default",
        "content_hint_password",
        "content_hint_auto_completion",
        "content_hint_auto_correction",
        "content_hint_auto_capitalization",
        "content_hint_lowercase",
        "content_hint_uppercase",
        "content_hint_titlecase",
        "content_hint_hidden_text",
        "content_hint_sensitive_data",
        "content_hint_latin",
        "content_hint_multiline",
        "ContentPurpose",
        "content_purpose_normal",
        "content_purpose_alpha",
        "content_purpose_digits",
        "content_purpose_number",
        "content_purpose_phone",
        "content_purpose_url",
        "content_purpose_email",
        "content_purpose_name",
        "content_purpose_password",
        "content_purpose_date",
        "content_purpose_time",
        "content_purpose_datetime",
        "content_purpose_terminal"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'contextChanged'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'surroundingTextChanged'
        QtMocHelpers::SignalData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'cursorChanged'
        QtMocHelpers::SignalData<void()>(4, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'contentTypeChanged'
        QtMocHelpers::SignalData<void()>(5, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'receivedCommit'
        QtMocHelpers::SignalData<void()>(6, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'resetRequested'
        QtMocHelpers::SignalData<void()>(7, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'deactivate'
        QtMocHelpers::SignalData<void()>(8, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'preferredLanguageChanged'
        QtMocHelpers::SignalData<void(const QString &)>(9, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 10 },
        }}),
        // Signal 'keyPressed'
        QtMocHelpers::SignalData<void(QKeyEvent *)>(11, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 12, 13 },
        }}),
        // Signal 'keyReleased'
        QtMocHelpers::SignalData<void(QKeyEvent *)>(14, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 12, 13 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
        // enum 'ContentHint'
        QtMocHelpers::EnumData<enum ContentHint>(15, 15, QMC::EnumFlags{}).add({
            {   16, ContentHint::content_hint_none },
            {   17, ContentHint::content_hint_default },
            {   18, ContentHint::content_hint_password },
            {   19, ContentHint::content_hint_auto_completion },
            {   20, ContentHint::content_hint_auto_correction },
            {   21, ContentHint::content_hint_auto_capitalization },
            {   22, ContentHint::content_hint_lowercase },
            {   23, ContentHint::content_hint_uppercase },
            {   24, ContentHint::content_hint_titlecase },
            {   25, ContentHint::content_hint_hidden_text },
            {   26, ContentHint::content_hint_sensitive_data },
            {   27, ContentHint::content_hint_latin },
            {   28, ContentHint::content_hint_multiline },
        }),
        // enum 'ContentPurpose'
        QtMocHelpers::EnumData<enum ContentPurpose>(29, 29, QMC::EnumFlags{}).add({
            {   30, ContentPurpose::content_purpose_normal },
            {   31, ContentPurpose::content_purpose_alpha },
            {   32, ContentPurpose::content_purpose_digits },
            {   33, ContentPurpose::content_purpose_number },
            {   34, ContentPurpose::content_purpose_phone },
            {   35, ContentPurpose::content_purpose_url },
            {   36, ContentPurpose::content_purpose_email },
            {   37, ContentPurpose::content_purpose_name },
            {   38, ContentPurpose::content_purpose_password },
            {   39, ContentPurpose::content_purpose_date },
            {   40, ContentPurpose::content_purpose_time },
            {   41, ContentPurpose::content_purpose_datetime },
            {   42, ContentPurpose::content_purpose_terminal },
        }),
    };
    return QtMocHelpers::metaObjectData<InputPlugin, qt_meta_tag_ZN11InputPluginE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject InputPlugin::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN11InputPluginE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN11InputPluginE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN11InputPluginE_t>.metaTypes,
    nullptr
} };

void InputPlugin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<InputPlugin *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->contextChanged(); break;
        case 1: _t->surroundingTextChanged(); break;
        case 2: _t->cursorChanged(); break;
        case 3: _t->contentTypeChanged(); break;
        case 4: _t->receivedCommit(); break;
        case 5: _t->resetRequested(); break;
        case 6: _t->deactivate(); break;
        case 7: _t->preferredLanguageChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 8: _t->keyPressed((*reinterpret_cast<std::add_pointer_t<QKeyEvent*>>(_a[1]))); break;
        case 9: _t->keyReleased((*reinterpret_cast<std::add_pointer_t<QKeyEvent*>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (InputPlugin::*)()>(_a, &InputPlugin::contextChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (InputPlugin::*)()>(_a, &InputPlugin::surroundingTextChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (InputPlugin::*)()>(_a, &InputPlugin::cursorChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (InputPlugin::*)()>(_a, &InputPlugin::contentTypeChanged, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (InputPlugin::*)()>(_a, &InputPlugin::receivedCommit, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (InputPlugin::*)()>(_a, &InputPlugin::resetRequested, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (InputPlugin::*)()>(_a, &InputPlugin::deactivate, 6))
            return;
        if (QtMocHelpers::indexOfMethod<void (InputPlugin::*)(const QString & )>(_a, &InputPlugin::preferredLanguageChanged, 7))
            return;
        if (QtMocHelpers::indexOfMethod<void (InputPlugin::*)(QKeyEvent * )>(_a, &InputPlugin::keyPressed, 8))
            return;
        if (QtMocHelpers::indexOfMethod<void (InputPlugin::*)(QKeyEvent * )>(_a, &InputPlugin::keyReleased, 9))
            return;
    }
}

const QMetaObject *InputPlugin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *InputPlugin::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN11InputPluginE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int InputPlugin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void InputPlugin::contextChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void InputPlugin::surroundingTextChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void InputPlugin::cursorChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void InputPlugin::contentTypeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void InputPlugin::receivedCommit()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void InputPlugin::resetRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void InputPlugin::deactivate()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void InputPlugin::preferredLanguageChanged(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 7, nullptr, _t1);
}

// SIGNAL 8
void InputPlugin::keyPressed(QKeyEvent * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 8, nullptr, _t1);
}

// SIGNAL 9
void InputPlugin::keyReleased(QKeyEvent * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 9, nullptr, _t1);
}
QT_WARNING_POP
