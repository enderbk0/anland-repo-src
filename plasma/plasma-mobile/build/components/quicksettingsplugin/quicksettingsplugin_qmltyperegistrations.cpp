/****************************************************************************
** Generated QML type registration code
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <QtQml/qqml.h>
#include <QtQml/qqmlmoduleregistration.h>

#if __has_include(<paginatemodel.h>)
#  include <paginatemodel.h>
#endif
#if __has_include(<quicksetting.h>)
#  include <quicksetting.h>
#endif
#if __has_include(<quicksettingsmodel.h>)
#  include <quicksettingsmodel.h>
#endif
#if __has_include(<savedquicksettings.h>)
#  include <savedquicksettings.h>
#endif
#if __has_include(<savedquicksettingsmodel.h>)
#  include <savedquicksettingsmodel.h>
#endif


#if !defined(QT_STATIC)
#define Q_QMLTYPE_EXPORT Q_DECL_EXPORT
#else
#define Q_QMLTYPE_EXPORT
#endif
Q_QMLTYPE_EXPORT void qml_register_types_org_kde_plasma_private_mobileshell_quicksettingsplugin()
{
    qmlRegisterModule("org.kde.plasma.private.mobileshell.quicksettingsplugin", 254, 0);
    QT_WARNING_PUSH QT_WARNING_DISABLE_DEPRECATED
    qmlRegisterTypesAndRevisions<PaginateModel>("org.kde.plasma.private.mobileshell.quicksettingsplugin", 254);
    QMetaType::fromType<QAbstractItemModel *>().id();
    qmlRegisterEnum<QAbstractItemModel::LayoutChangeHint>("QAbstractItemModel::LayoutChangeHint");
    qmlRegisterEnum<QAbstractItemModel::CheckIndexOption>("QAbstractItemModel::CheckIndexOption");
    QMetaType::fromType<QAbstractListModel *>().id();
    qmlRegisterTypesAndRevisions<QuickSetting>("org.kde.plasma.private.mobileshell.quicksettingsplugin", 254);
    qmlRegisterTypesAndRevisions<QuickSettingsModel>("org.kde.plasma.private.mobileshell.quicksettingsplugin", 254);
    qmlRegisterTypesAndRevisions<SavedQuickSettings>("org.kde.plasma.private.mobileshell.quicksettingsplugin", 254);
    qmlRegisterTypesAndRevisions<SavedQuickSettingsModel>("org.kde.plasma.private.mobileshell.quicksettingsplugin", 254);
    QT_WARNING_POP
    qmlRegisterModule("org.kde.plasma.private.mobileshell.quicksettingsplugin", 254, 254);
}

static const QQmlModuleRegistration orgkdeplasmaprivatemobileshellquicksettingspluginRegistration("org.kde.plasma.private.mobileshell.quicksettingsplugin", qml_register_types_org_kde_plasma_private_mobileshell_quicksettingsplugin);
