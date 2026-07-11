/****************************************************************************
** Generated QML type registration code
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <QtQml/qqml.h>
#include <QtQml/qqmlmoduleregistration.h>

#if __has_include(<lockscreendbusclient.h>)
#  include <lockscreendbusclient.h>
#endif
#if __has_include(<panelsettingsdbusclient.h>)
#  include <panelsettingsdbusclient.h>
#endif
#if __has_include(<panelsettingsdbusobjectmanager.h>)
#  include <panelsettingsdbusobjectmanager.h>
#endif
#if __has_include(<shelldbusclient.h>)
#  include <shelldbusclient.h>
#endif
#if __has_include(<shelldbusobject.h>)
#  include <shelldbusobject.h>
#endif
#if __has_include(<startupfeedbackmodel.h>)
#  include <startupfeedbackmodel.h>
#endif
#if __has_include(<volumeosdlistener.h>)
#  include <volumeosdlistener.h>
#endif


#if !defined(QT_STATIC)
#define Q_QMLTYPE_EXPORT Q_DECL_EXPORT
#else
#define Q_QMLTYPE_EXPORT
#endif
Q_QMLTYPE_EXPORT void qml_register_types_org_kde_plasma_private_mobileshell_state()
{
    qmlRegisterModule("org.kde.plasma.private.mobileshell.state", 254, 0);
    QT_WARNING_PUSH QT_WARNING_DISABLE_DEPRECATED
    qmlRegisterTypesAndRevisions<LockscreenDBusClient>("org.kde.plasma.private.mobileshell.state", 254);
    qmlRegisterTypesAndRevisions<PanelSettingsDBusClient>("org.kde.plasma.private.mobileshell.state", 254);
    qmlRegisterTypesAndRevisions<PanelSettingsDBusObjectManager>("org.kde.plasma.private.mobileshell.state", 254);
    QMetaType::fromType<QAbstractItemModel *>().id();
    qmlRegisterEnum<QAbstractItemModel::LayoutChangeHint>("QAbstractItemModel::LayoutChangeHint");
    qmlRegisterEnum<QAbstractItemModel::CheckIndexOption>("QAbstractItemModel::CheckIndexOption");
    QMetaType::fromType<QAbstractProxyModel *>().id();
    QMetaType::fromType<QSortFilterProxyModel *>().id();
    qmlRegisterTypesAndRevisions<ShellDBusClient>("org.kde.plasma.private.mobileshell.state", 254);
    qmlRegisterTypesAndRevisions<ShellDBusObject>("org.kde.plasma.private.mobileshell.state", 254);
    qmlRegisterTypesAndRevisions<StartupFeedbackFilterModel>("org.kde.plasma.private.mobileshell.state", 254);
    qmlRegisterTypesAndRevisions<VolumeOSDListener>("org.kde.plasma.private.mobileshell.state", 254);
    QT_WARNING_POP
    qmlRegisterModule("org.kde.plasma.private.mobileshell.state", 254, 254);
}

static const QQmlModuleRegistration orgkdeplasmaprivatemobileshellstateRegistration("org.kde.plasma.private.mobileshell.state", qml_register_types_org_kde_plasma_private_mobileshell_state);
