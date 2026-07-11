/****************************************************************************
** Generated QML type registration code
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <QtQml/qqml.h>
#include <QtQml/qqmlmoduleregistration.h>

#if __has_include(<darkmodecontrol.h>)
#  include <darkmodecontrol.h>
#endif
#if __has_include(<direction.h>)
#  include <direction.h>
#endif
#if __has_include(<masklayer.h>)
#  include <masklayer.h>
#endif
#if __has_include(<maskmanager.h>)
#  include <maskmanager.h>
#endif
#if __has_include(<notificationfileinfo.h>)
#  include <notificationfileinfo.h>
#endif
#if __has_include(<notificationfilemenu.h>)
#  include <notificationfilemenu.h>
#endif
#if __has_include(<notificationthumbnailer.h>)
#  include <notificationthumbnailer.h>
#endif
#if __has_include(<shellutil.h>)
#  include <shellutil.h>
#endif
#if __has_include(<swipearea.h>)
#  include <swipearea.h>
#endif


#if !defined(QT_STATIC)
#define Q_QMLTYPE_EXPORT Q_DECL_EXPORT
#else
#define Q_QMLTYPE_EXPORT
#endif
Q_QMLTYPE_EXPORT void qml_register_types_org_kde_plasma_private_mobileshell()
{
    qmlRegisterModule("org.kde.plasma.private.mobileshell", 254, 0);
    QT_WARNING_PUSH QT_WARNING_DISABLE_DEPRECATED
    qmlRegisterTypesAndRevisions<DarkModeControl>("org.kde.plasma.private.mobileshell", 254);
    qmlRegisterTypesAndRevisions<Direction>("org.kde.plasma.private.mobileshell", 254);
    qmlRegisterEnum<Direction::Type>("Direction::Type");
    qmlRegisterTypesAndRevisions<MaskLayer>("org.kde.plasma.private.mobileshell", 254);
    qmlRegisterAnonymousType<QQuickItem, 254>("org.kde.plasma.private.mobileshell", 254);
    qmlRegisterTypesAndRevisions<MaskManager>("org.kde.plasma.private.mobileshell", 254);
    qmlRegisterTypesAndRevisions<NotificationFileInfo>("org.kde.plasma.private.mobileshell", 254);
    qmlRegisterTypesAndRevisions<NotificationFileMenu>("org.kde.plasma.private.mobileshell", 254);
    qmlRegisterTypesAndRevisions<NotificationThumbnailer>("org.kde.plasma.private.mobileshell", 254);
    qmlRegisterTypesAndRevisions<ShellUtil>("org.kde.plasma.private.mobileshell", 254);
    qmlRegisterTypesAndRevisions<SwipeArea>("org.kde.plasma.private.mobileshell", 254);
    qmlRegisterEnum<SwipeArea::Mode>("SwipeArea::Mode");
    QT_WARNING_POP
    qmlRegisterModule("org.kde.plasma.private.mobileshell", 254, 254);
}

static const QQmlModuleRegistration orgkdeplasmaprivatemobileshellRegistration("org.kde.plasma.private.mobileshell", qml_register_types_org_kde_plasma_private_mobileshell);
