/****************************************************************************
** Generated QML type registration code
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <QtQml/qqml.h>
#include <QtQml/qqmlmoduleregistration.h>

#if __has_include(<mobiletaskswitchereffect.h>)
#  include <mobiletaskswitchereffect.h>
#endif
#if __has_include(<taskfiltermodel.h>)
#  include <taskfiltermodel.h>
#endif
#if __has_include(<taskmodel.h>)
#  include <taskmodel.h>
#endif


#if !defined(QT_STATIC)
#define Q_QMLTYPE_EXPORT Q_DECL_EXPORT
#else
#define Q_QMLTYPE_EXPORT
#endif
Q_QMLTYPE_EXPORT void qml_register_types_org_kde_plasma_private_mobileshell_taskswitcherplugin()
{
    qmlRegisterModule("org.kde.plasma.private.mobileshell.taskswitcherplugin", 254, 0);
    QT_WARNING_PUSH QT_WARNING_DISABLE_DEPRECATED
    qmlRegisterTypesAndRevisions<KWin::MobileTaskSwitcherState>("org.kde.plasma.private.mobileshell.taskswitcherplugin", 254);
    qmlRegisterEnum<KWin::MobileTaskSwitcherState::Status>("KWin::MobileTaskSwitcherState::Status");
    qmlRegisterTypesAndRevisions<KWin::TaskFilterModel>("org.kde.plasma.private.mobileshell.taskswitcherplugin", 254);
    qmlRegisterTypesAndRevisions<KWin::TaskModel>("org.kde.plasma.private.mobileshell.taskswitcherplugin", 254);
    QMetaType::fromType<QAbstractItemModel *>().id();
    qmlRegisterEnum<QAbstractItemModel::LayoutChangeHint>("QAbstractItemModel::LayoutChangeHint");
    qmlRegisterEnum<QAbstractItemModel::CheckIndexOption>("QAbstractItemModel::CheckIndexOption");
    QMetaType::fromType<QAbstractListModel *>().id();
    QMetaType::fromType<QAbstractProxyModel *>().id();
    QMetaType::fromType<QSortFilterProxyModel *>().id();
    QT_WARNING_POP
    qmlRegisterModule("org.kde.plasma.private.mobileshell.taskswitcherplugin", 254, 254);
}

static const QQmlModuleRegistration orgkdeplasmaprivatemobileshelltaskswitcherpluginRegistration("org.kde.plasma.private.mobileshell.taskswitcherplugin", qml_register_types_org_kde_plasma_private_mobileshell_taskswitcherplugin);
