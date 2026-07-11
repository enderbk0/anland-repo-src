/****************************************************************************
** Generated QML type registration code
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <QtQml/qqml.h>
#include <QtQml/qqmlmoduleregistration.h>

#if __has_include(<rotationutil.h>)
#  include <rotationutil.h>
#endif


#if !defined(QT_STATIC)
#define Q_QMLTYPE_EXPORT Q_DECL_EXPORT
#else
#define Q_QMLTYPE_EXPORT
#endif
Q_QMLTYPE_EXPORT void qml_register_types_org_kde_plasma_private_mobileshell_rotationplugin()
{
    qmlRegisterModule("org.kde.plasma.private.mobileshell.rotationplugin", 254, 0);
    QT_WARNING_PUSH QT_WARNING_DISABLE_DEPRECATED
    qmlRegisterTypesAndRevisions<RotationUtil>("org.kde.plasma.private.mobileshell.rotationplugin", 254);
    qmlRegisterEnum<RotationUtil::Rotation>("RotationUtil::Rotation");
    QT_WARNING_POP
    qmlRegisterModule("org.kde.plasma.private.mobileshell.rotationplugin", 254, 254);
}

static const QQmlModuleRegistration orgkdeplasmaprivatemobileshellrotationpluginRegistration("org.kde.plasma.private.mobileshell.rotationplugin", qml_register_types_org_kde_plasma_private_mobileshell_rotationplugin);
