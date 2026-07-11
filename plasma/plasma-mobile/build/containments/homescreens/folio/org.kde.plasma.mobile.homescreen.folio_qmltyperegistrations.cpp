/****************************************************************************
** Generated QML type registration code
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <QtQml/qqml.h>
#include <QtQml/qqmlmoduleregistration.h>

#if __has_include(<applicationlistmodel.h>)
#  include <applicationlistmodel.h>
#endif
#if __has_include(<delegatetoucharea.h>)
#  include <delegatetoucharea.h>
#endif
#if __has_include(<dragstate.h>)
#  include <dragstate.h>
#endif
#if __has_include(<favouritesmodel.h>)
#  include <favouritesmodel.h>
#endif
#if __has_include(<folioapplication.h>)
#  include <folioapplication.h>
#endif
#if __has_include(<folioapplicationfolder.h>)
#  include <folioapplicationfolder.h>
#endif
#if __has_include(<foliodelegate.h>)
#  include <foliodelegate.h>
#endif
#if __has_include(<foliosettings.h>)
#  include <foliosettings.h>
#endif
#if __has_include(<foliowidget.h>)
#  include <foliowidget.h>
#endif
#if __has_include(<homescreen.h>)
#  include <homescreen.h>
#endif
#if __has_include(<homescreenstate.h>)
#  include <homescreenstate.h>
#endif
#if __has_include(<pagelistmodel.h>)
#  include <pagelistmodel.h>
#endif
#if __has_include(<pagemodel.h>)
#  include <pagemodel.h>
#endif
#if __has_include(<widgetcontainer.h>)
#  include <widgetcontainer.h>
#endif


#if !defined(QT_STATIC)
#define Q_QMLTYPE_EXPORT Q_DECL_EXPORT
#else
#define Q_QMLTYPE_EXPORT
#endif
Q_QMLTYPE_EXPORT void qml_register_types_plasma_applet_org_kde_plasma_mobile_homescreen_folio()
{
    qmlRegisterModule("plasma.applet.org.kde.plasma.mobile.homescreen.folio", 254, 0);
    QT_WARNING_PUSH QT_WARNING_DISABLE_DEPRECATED
    qmlRegisterTypesAndRevisions<ApplicationListModel>("plasma.applet.org.kde.plasma.mobile.homescreen.folio", 254);
    qmlRegisterTypesAndRevisions<ApplicationListSearchModel>("plasma.applet.org.kde.plasma.mobile.homescreen.folio", 254);
    qmlRegisterTypesAndRevisions<DelegateDragPosition>("plasma.applet.org.kde.plasma.mobile.homescreen.folio", 254);
    qmlRegisterEnum<DelegateDragPosition::Location>("DelegateDragPosition::Location");
    qmlRegisterTypesAndRevisions<DelegateTouchArea>("plasma.applet.org.kde.plasma.mobile.homescreen.folio", 254);
    qmlRegisterAnonymousType<QQuickItem, 254>("plasma.applet.org.kde.plasma.mobile.homescreen.folio", 254);
    qmlRegisterTypesAndRevisions<FavouritesModel>("plasma.applet.org.kde.plasma.mobile.homescreen.folio", 254);
    qmlRegisterTypesAndRevisions<FolioApplication>("plasma.applet.org.kde.plasma.mobile.homescreen.folio", 254);
    qmlRegisterTypesAndRevisions<FolioApplicationFolder>("plasma.applet.org.kde.plasma.mobile.homescreen.folio", 254);
    qmlRegisterTypesAndRevisions<FolioDelegate>("plasma.applet.org.kde.plasma.mobile.homescreen.folio", 254);
    qmlRegisterEnum<FolioDelegate::Type>("FolioDelegate::Type");
    qmlRegisterTypesAndRevisions<FolioPageDelegate>("plasma.applet.org.kde.plasma.mobile.homescreen.folio", 254);
    qmlRegisterTypesAndRevisions<FolioSettings>("plasma.applet.org.kde.plasma.mobile.homescreen.folio", 254);
    qmlRegisterEnum<FolioSettings::PageTransitionEffect>("FolioSettings::PageTransitionEffect");
    qmlRegisterEnum<FolioSettings::WallpaperBlurEffect>("FolioSettings::WallpaperBlurEffect");
    qmlRegisterTypesAndRevisions<FolioWidget>("plasma.applet.org.kde.plasma.mobile.homescreen.folio", 254);
    qmlRegisterTypesAndRevisions<HomeScreen>("plasma.applet.org.kde.plasma.mobile.homescreen.folio", 254);
    qmlRegisterTypesAndRevisions<HomeScreenState>("plasma.applet.org.kde.plasma.mobile.homescreen.folio", 254);
    qmlRegisterEnum<HomeScreenState::SwipeState>("HomeScreenState::SwipeState");
    qmlRegisterEnum<HomeScreenState::ViewState>("HomeScreenState::ViewState");
    qmlRegisterEnum<HomeScreenState::FavouritesBarLocation>("HomeScreenState::FavouritesBarLocation");
    qmlRegisterEnum<HomeScreenState::PageOrientation>("HomeScreenState::PageOrientation");
    qmlRegisterTypesAndRevisions<PageListModel>("plasma.applet.org.kde.plasma.mobile.homescreen.folio", 254);
    qmlRegisterTypesAndRevisions<PageModel>("plasma.applet.org.kde.plasma.mobile.homescreen.folio", 254);
    QMetaType::fromType<QAbstractItemModel *>().id();
    qmlRegisterEnum<QAbstractItemModel::LayoutChangeHint>("QAbstractItemModel::LayoutChangeHint");
    qmlRegisterEnum<QAbstractItemModel::CheckIndexOption>("QAbstractItemModel::CheckIndexOption");
    QMetaType::fromType<QAbstractListModel *>().id();
    QMetaType::fromType<QAbstractProxyModel *>().id();
    QMetaType::fromType<QSortFilterProxyModel *>().id();
    qmlRegisterTypesAndRevisions<WidgetContainer>("plasma.applet.org.kde.plasma.mobile.homescreen.folio", 254);
    QT_WARNING_POP
    qmlRegisterModule("plasma.applet.org.kde.plasma.mobile.homescreen.folio", 254, 254);
}

static const QQmlModuleRegistration plasmaappletorgkdeplasmamobilehomescreenfolioRegistration("plasma.applet.org.kde.plasma.mobile.homescreen.folio", qml_register_types_plasma_applet_org_kde_plasma_mobile_homescreen_folio);
