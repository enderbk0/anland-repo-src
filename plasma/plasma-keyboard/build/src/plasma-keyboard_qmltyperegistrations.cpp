/****************************************************************************
** Generated QML type registration code
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <QtQml/qqml.h>
#include <QtQml/qqmlmoduleregistration.h>

#if __has_include(<candidatemodel.h>)
#  include <candidatemodel.h>
#endif
#if __has_include(<inputlisteneritem.h>)
#  include <inputlisteneritem.h>
#endif
#if __has_include(<inputpanelrole.h>)
#  include <inputpanelrole.h>
#endif
#if __has_include(<inputpanelwindow.h>)
#  include <inputpanelwindow.h>
#endif
#if __has_include(<overlaycontroller.h>)
#  include <overlaycontroller.h>
#endif
#if __has_include(<plasmakeyboardsettings.h>)
#  include <plasmakeyboardsettings.h>
#endif
#if __has_include(<vibration.h>)
#  include <vibration.h>
#endif


#if !defined(QT_STATIC)
#define Q_QMLTYPE_EXPORT Q_DECL_EXPORT
#else
#define Q_QMLTYPE_EXPORT
#endif
Q_QMLTYPE_EXPORT void qml_register_types_org_kde_plasma_keyboard()
{
    qmlRegisterModule("org.kde.plasma.keyboard", 254, 0);
    QT_WARNING_PUSH QT_WARNING_DISABLE_DEPRECATED
    qmlRegisterTypesAndRevisions<CandidateModel>("org.kde.plasma.keyboard", 254);
    qmlRegisterEnum<CandidateModel::Roles>("CandidateModel::Roles");
    qmlRegisterTypesAndRevisions<InputListenerItem>("org.kde.plasma.keyboard", 254);
    qmlRegisterAnonymousType<QQuickItem, 254>("org.kde.plasma.keyboard", 254);
    qmlRegisterTypesAndRevisions<InputPanelRole>("org.kde.plasma.keyboard", 254);
    qmlRegisterEnum<InputPanelRole::Role>("InputPanelRole::Role");
    qmlRegisterTypesAndRevisions<InputPanelWindow>("org.kde.plasma.keyboard", 254);
    qmlRegisterAnonymousType<QQuickWindow, 254>("org.kde.plasma.keyboard", 254);
    qmlRegisterAnonymousType<QWindow, 254>("org.kde.plasma.keyboard", 254);
    QMetaType::fromType<KConfigSkeleton *>().id();
    QMetaType::fromType<KCoreConfigSkeleton *>().id();
    qmlRegisterEnum<KCoreConfigSkeleton::DisambiguateConstructor>("KCoreConfigSkeleton::DisambiguateConstructor");
    qmlRegisterTypesAndRevisions<OverlayController>("org.kde.plasma.keyboard", 254);
    qmlRegisterTypesAndRevisions<PlasmaKeyboardSettings>("org.kde.plasma.keyboard", 254);
    QMetaType::fromType<QAbstractItemModel *>().id();
    qmlRegisterEnum<QAbstractItemModel::LayoutChangeHint>("QAbstractItemModel::LayoutChangeHint");
    qmlRegisterEnum<QAbstractItemModel::CheckIndexOption>("QAbstractItemModel::CheckIndexOption");
    QMetaType::fromType<QAbstractListModel *>().id();
    qmlRegisterTypesAndRevisions<Vibration>("org.kde.plasma.keyboard", 254);
    QT_WARNING_POP
    qmlRegisterModule("org.kde.plasma.keyboard", 254, 254);
}

static const QQmlModuleRegistration orgkdeplasmakeyboardRegistration("org.kde.plasma.keyboard", qml_register_types_org_kde_plasma_keyboard);
