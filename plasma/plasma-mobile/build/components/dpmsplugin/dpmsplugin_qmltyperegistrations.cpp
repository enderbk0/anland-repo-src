/****************************************************************************
** Generated QML type registration code
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <QtQml/qqml.h>
#include <QtQml/qqmlmoduleregistration.h>

#if __has_include(<dpmsutil.h>)
#  include <dpmsutil.h>
#endif


#if !defined(QT_STATIC)
#define Q_QMLTYPE_EXPORT Q_DECL_EXPORT
#else
#define Q_QMLTYPE_EXPORT
#endif
Q_QMLTYPE_EXPORT void qml_register_types_org_kde_plasma_private_mobileshell_dpmsplugin()
{
    qmlRegisterModule("org.kde.plasma.private.mobileshell.dpmsplugin", 254, 0);
    QT_WARNING_PUSH QT_WARNING_DISABLE_DEPRECATED
    qmlRegisterTypesAndRevisions<DPMSUtil>("org.kde.plasma.private.mobileshell.dpmsplugin", 254);
    QT_WARNING_POP
    qmlRegisterModule("org.kde.plasma.private.mobileshell.dpmsplugin", 254, 254);
}

static const QQmlModuleRegistration orgkdeplasmaprivatemobileshelldpmspluginRegistration("org.kde.plasma.private.mobileshell.dpmsplugin", qml_register_types_org_kde_plasma_private_mobileshell_dpmsplugin);
