/****************************************************************************
** Generated QML type registration code
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <QtQml/qqml.h>
#include <QtQml/qqmlmoduleregistration.h>

#if __has_include(<module.h>)
#  include <module.h>
#endif
#if __has_include(<settingsapp.h>)
#  include <settingsapp.h>
#endif


#if !defined(QT_STATIC)
#define Q_QMLTYPE_EXPORT Q_DECL_EXPORT
#else
#define Q_QMLTYPE_EXPORT
#endif
Q_QMLTYPE_EXPORT void qml_register_types_org_kde_plasma_settings()
{
    qmlRegisterModule("org.kde.plasma.settings", 254, 0);
    QT_WARNING_PUSH QT_WARNING_DISABLE_DEPRECATED
    qmlRegisterTypesAndRevisions<Module>("org.kde.plasma.settings", 254);
    qmlRegisterTypesAndRevisions<SettingsApp>("org.kde.plasma.settings", 254);
    QT_WARNING_POP
    qmlRegisterModule("org.kde.plasma.settings", 254, 254);
}

static const QQmlModuleRegistration orgkdeplasmasettingsRegistration("org.kde.plasma.settings", qml_register_types_org_kde_plasma_settings);
