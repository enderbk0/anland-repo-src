/****************************************************************************
** Generated QML type registration code
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <QtQml/qqml.h>
#include <QtQml/qqmlmoduleregistration.h>

#if __has_include(<waydroidapplicationdbusclient.h>)
#  include <waydroidapplicationdbusclient.h>
#endif
#if __has_include(<waydroidapplicationdbusobject.h>)
#  include <waydroidapplicationdbusobject.h>
#endif
#if __has_include(<waydroiddbusclient.h>)
#  include <waydroiddbusclient.h>
#endif
#if __has_include(<waydroiddbusobject.h>)
#  include <waydroiddbusobject.h>
#endif


#if !defined(QT_STATIC)
#define Q_QMLTYPE_EXPORT Q_DECL_EXPORT
#else
#define Q_QMLTYPE_EXPORT
#endif
Q_QMLTYPE_EXPORT void qml_register_types_org_kde_plasma_private_mobileshell_waydroidintegrationplugin()
{
    qmlRegisterModule("org.kde.plasma.private.mobileshell.waydroidintegrationplugin", 254, 0);
    QT_WARNING_PUSH QT_WARNING_DISABLE_DEPRECATED
    qmlRegisterTypesAndRevisions<WaydroidApplicationDBusClient>("org.kde.plasma.private.mobileshell.waydroidintegrationplugin", 254);
    qmlRegisterTypesAndRevisions<WaydroidApplicationDBusObject>("org.kde.plasma.private.mobileshell.waydroidintegrationplugin", 254);
    qmlRegisterTypesAndRevisions<WaydroidDBusClient>("org.kde.plasma.private.mobileshell.waydroidintegrationplugin", 254);
    qmlRegisterEnum<WaydroidDBusClient::Status>("WaydroidDBusClient::Status");
    qmlRegisterEnum<WaydroidDBusClient::SessionStatus>("WaydroidDBusClient::SessionStatus");
    qmlRegisterEnum<WaydroidDBusClient::SystemType>("WaydroidDBusClient::SystemType");
    qmlRegisterEnum<WaydroidDBusClient::RomType>("WaydroidDBusClient::RomType");
    qmlRegisterTypesAndRevisions<WaydroidDBusObject>("org.kde.plasma.private.mobileshell.waydroidintegrationplugin", 254);
    qmlRegisterEnum<WaydroidDBusObject::Status>("WaydroidDBusObject::Status");
    qmlRegisterEnum<WaydroidDBusObject::SessionStatus>("WaydroidDBusObject::SessionStatus");
    qmlRegisterEnum<WaydroidDBusObject::SystemType>("WaydroidDBusObject::SystemType");
    qmlRegisterEnum<WaydroidDBusObject::RomType>("WaydroidDBusObject::RomType");
    QT_WARNING_POP
    qmlRegisterModule("org.kde.plasma.private.mobileshell.waydroidintegrationplugin", 254, 254);
}

static const QQmlModuleRegistration orgkdeplasmaprivatemobileshellwaydroidintegrationpluginRegistration("org.kde.plasma.private.mobileshell.waydroidintegrationplugin", qml_register_types_org_kde_plasma_private_mobileshell_waydroidintegrationplugin);
