/****************************************************************************
** Generated QML type registration code
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <QtQml/qqml.h>
#include <QtQml/qqmlmoduleregistration.h>

#if __has_include(<application.h>)
#  include <application.h>
#endif
#if __has_include(<applicationfolder.h>)
#  include <applicationfolder.h>
#endif
#if __has_include(<applicationlistmodel.h>)
#  include <applicationlistmodel.h>
#endif
#if __has_include(<halcyonsettings.h>)
#  include <halcyonsettings.h>
#endif
#if __has_include(<pinnedmodel.h>)
#  include <pinnedmodel.h>
#endif


#if !defined(QT_STATIC)
#define Q_QMLTYPE_EXPORT Q_DECL_EXPORT
#else
#define Q_QMLTYPE_EXPORT
#endif
Q_QMLTYPE_EXPORT void qml_register_types_plasma_applet_org_kde_plasma_mobile_homescreen_halcyon()
{
    qmlRegisterModule("plasma.applet.org.kde.plasma.mobile.homescreen.halcyon", 254, 0);
    QT_WARNING_PUSH QT_WARNING_DISABLE_DEPRECATED
    qmlRegisterTypesAndRevisions<Application>("plasma.applet.org.kde.plasma.mobile.homescreen.halcyon", 254);
    qmlRegisterTypesAndRevisions<ApplicationFolder>("plasma.applet.org.kde.plasma.mobile.homescreen.halcyon", 254);
    qmlRegisterTypesAndRevisions<ApplicationListModel>("plasma.applet.org.kde.plasma.mobile.homescreen.halcyon", 254);
    qmlRegisterTypesAndRevisions<HalcyonSettings>("plasma.applet.org.kde.plasma.mobile.homescreen.halcyon", 254);
    qmlRegisterEnum<HalcyonSettings::WallpaperBlurEffect>("HalcyonSettings::WallpaperBlurEffect");
    qmlRegisterTypesAndRevisions<PinnedModel>("plasma.applet.org.kde.plasma.mobile.homescreen.halcyon", 254);
    QMetaType::fromType<QAbstractItemModel *>().id();
    qmlRegisterEnum<QAbstractItemModel::LayoutChangeHint>("QAbstractItemModel::LayoutChangeHint");
    qmlRegisterEnum<QAbstractItemModel::CheckIndexOption>("QAbstractItemModel::CheckIndexOption");
    QMetaType::fromType<QAbstractListModel *>().id();
    QT_WARNING_POP
    qmlRegisterModule("plasma.applet.org.kde.plasma.mobile.homescreen.halcyon", 254, 254);
}

static const QQmlModuleRegistration plasmaappletorgkdeplasmamobilehomescreenhalcyonRegistration("plasma.applet.org.kde.plasma.mobile.homescreen.halcyon", qml_register_types_plasma_applet_org_kde_plasma_mobile_homescreen_halcyon);
