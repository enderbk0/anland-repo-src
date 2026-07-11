/****************************************************************************
** Generated QML type registration code
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <QtQml/qqml.h>
#include <QtQml/qqmlmoduleregistration.h>

#if __has_include(<kwinsettings.h>)
#  include <kwinsettings.h>
#endif
#if __has_include(<mobileshellsettings.h>)
#  include <mobileshellsettings.h>
#endif


#if !defined(QT_STATIC)
#define Q_QMLTYPE_EXPORT Q_DECL_EXPORT
#else
#define Q_QMLTYPE_EXPORT
#endif
Q_QMLTYPE_EXPORT void qml_register_types_org_kde_plasma_private_mobileshell_shellsettingsplugin()
{
    qmlRegisterModule("org.kde.plasma.private.mobileshell.shellsettingsplugin", 254, 0);
    QT_WARNING_PUSH QT_WARNING_DISABLE_DEPRECATED
    qmlRegisterTypesAndRevisions<KWinSettings>("org.kde.plasma.private.mobileshell.shellsettingsplugin", 254);
    qmlRegisterTypesAndRevisions<MobileShellSettings>("org.kde.plasma.private.mobileshell.shellsettingsplugin", 254);
    qmlRegisterEnum<MobileShellSettings::ActionDrawerMode>("MobileShellSettings::ActionDrawerMode");
    qmlRegisterEnum<MobileShellSettings::LockscreenButtonAction>("MobileShellSettings::LockscreenButtonAction");
    QT_WARNING_POP
    qmlRegisterModule("org.kde.plasma.private.mobileshell.shellsettingsplugin", 254, 254);
}

static const QQmlModuleRegistration orgkdeplasmaprivatemobileshellshellsettingspluginRegistration("org.kde.plasma.private.mobileshell.shellsettingsplugin", qml_register_types_org_kde_plasma_private_mobileshell_shellsettingsplugin);
