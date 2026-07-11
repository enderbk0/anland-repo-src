/****************************************************************************
** Generated QML type registration code
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <QtQml/qqml.h>
#include <QtQml/qqmlmoduleregistration.h>

#if __has_include(<screenbrightnessutil.h>)
#  include <screenbrightnessutil.h>
#endif


#if !defined(QT_STATIC)
#define Q_QMLTYPE_EXPORT Q_DECL_EXPORT
#else
#define Q_QMLTYPE_EXPORT
#endif
Q_QMLTYPE_EXPORT void qml_register_types_org_kde_plasma_private_mobileshell_screenbrightnessplugin()
{
    qmlRegisterModule("org.kde.plasma.private.mobileshell.screenbrightnessplugin", 254, 0);
    QT_WARNING_PUSH QT_WARNING_DISABLE_DEPRECATED
    qmlRegisterTypesAndRevisions<ScreenBrightnessUtil>("org.kde.plasma.private.mobileshell.screenbrightnessplugin", 254);
    QT_WARNING_POP
    qmlRegisterModule("org.kde.plasma.private.mobileshell.screenbrightnessplugin", 254, 254);
}

static const QQmlModuleRegistration orgkdeplasmaprivatemobileshellscreenbrightnesspluginRegistration("org.kde.plasma.private.mobileshell.screenbrightnessplugin", qml_register_types_org_kde_plasma_private_mobileshell_screenbrightnessplugin);
