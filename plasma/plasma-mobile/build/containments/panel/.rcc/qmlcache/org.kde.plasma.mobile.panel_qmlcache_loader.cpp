#include <QtQml/qqmlprivate.h>
#include <QtCore/qdir.h>
#include <QtCore/qurl.h>
#include <QtCore/qhash.h>
#include <QtCore/qstring.h>

namespace QmlCacheGeneratedCode {
namespace _qt_qml_plasma_applet_org_kde_plasma_mobile_panel_main_qml { 
    extern const unsigned char qmlData[];
    extern const QQmlPrivate::AOTCompiledFunction aotBuiltFunctions[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), &aotBuiltFunctions[0], nullptr
    };
}
namespace _qt_qml_plasma_applet_org_kde_plasma_mobile_panel_LockscreenOverlay_qml { 
    extern const unsigned char qmlData[];
    extern const QQmlPrivate::AOTCompiledFunction aotBuiltFunctions[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), &aotBuiltFunctions[0], nullptr
    };
}
namespace _qt_qml_plasma_applet_org_kde_plasma_mobile_panel_StatusBarWrapper_qml { 
    extern const unsigned char qmlData[];
    extern const QQmlPrivate::AOTCompiledFunction aotBuiltFunctions[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), &aotBuiltFunctions[0], nullptr
    };
}
namespace _qt_qml_plasma_applet_org_kde_plasma_mobile_panel_StatusPanel_qml { 
    extern const unsigned char qmlData[];
    extern const QQmlPrivate::AOTCompiledFunction aotBuiltFunctions[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), &aotBuiltFunctions[0], nullptr
    };
}

}
namespace {
struct Registry {
    Registry();
    ~Registry();
    QHash<QString, const QQmlPrivate::CachedQmlUnit*> resourcePathToCachedUnit;
    static const QQmlPrivate::CachedQmlUnit *lookupCachedUnit(const QUrl &url);
};

Q_GLOBAL_STATIC(Registry, unitRegistry)


Registry::Registry() {
    resourcePathToCachedUnit.insert(QStringLiteral("/qt/qml/plasma/applet/org/kde/plasma/mobile/panel/main.qml"), &QmlCacheGeneratedCode::_qt_qml_plasma_applet_org_kde_plasma_mobile_panel_main_qml::unit);
    resourcePathToCachedUnit.insert(QStringLiteral("/qt/qml/plasma/applet/org/kde/plasma/mobile/panel/LockscreenOverlay.qml"), &QmlCacheGeneratedCode::_qt_qml_plasma_applet_org_kde_plasma_mobile_panel_LockscreenOverlay_qml::unit);
    resourcePathToCachedUnit.insert(QStringLiteral("/qt/qml/plasma/applet/org/kde/plasma/mobile/panel/StatusBarWrapper.qml"), &QmlCacheGeneratedCode::_qt_qml_plasma_applet_org_kde_plasma_mobile_panel_StatusBarWrapper_qml::unit);
    resourcePathToCachedUnit.insert(QStringLiteral("/qt/qml/plasma/applet/org/kde/plasma/mobile/panel/StatusPanel.qml"), &QmlCacheGeneratedCode::_qt_qml_plasma_applet_org_kde_plasma_mobile_panel_StatusPanel_qml::unit);
    QQmlPrivate::RegisterQmlUnitCacheHook registration;
    registration.structVersion = 0;
    registration.lookupCachedQmlUnit = &lookupCachedUnit;
    QQmlPrivate::qmlregister(QQmlPrivate::QmlUnitCacheHookRegistration, &registration);
}

Registry::~Registry() {
    QQmlPrivate::qmlunregister(QQmlPrivate::QmlUnitCacheHookRegistration, quintptr(&lookupCachedUnit));
}

const QQmlPrivate::CachedQmlUnit *Registry::lookupCachedUnit(const QUrl &url) {
    if (url.scheme() != QLatin1String("qrc"))
        return nullptr;
    QString resourcePath = QDir::cleanPath(url.path());
    if (resourcePath.isEmpty())
        return nullptr;
    if (!resourcePath.startsWith(QLatin1Char('/')))
        resourcePath.prepend(QLatin1Char('/'));
    return unitRegistry()->resourcePathToCachedUnit.value(resourcePath, nullptr);
}
}
int QT_MANGLE_NAMESPACE(qInitResources_qmlcache_org_kde_plasma_mobile)() {
    ::unitRegistry();
    return 1;
}
Q_CONSTRUCTOR_FUNCTION(QT_MANGLE_NAMESPACE(qInitResources_qmlcache_org_kde_plasma_mobile))
int QT_MANGLE_NAMESPACE(qCleanupResources_qmlcache_org_kde_plasma_mobile)() {
    return 1;
}
