/****************************************************************************
** Generated QML type registration code
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <QtQml/qqml.h>
#include <QtQml/qqmlmoduleregistration.h>

#if __has_include(<recordutil.h>)
#  include <recordutil.h>
#endif


#if !defined(QT_STATIC)
#define Q_QMLTYPE_EXPORT Q_DECL_EXPORT
#else
#define Q_QMLTYPE_EXPORT
#endif
Q_QMLTYPE_EXPORT void qml_register_types_org_kde_plasma_quicksetting_record()
{
    qmlRegisterModule("org.kde.plasma.quicksetting.record", 254, 0);
    QT_WARNING_PUSH QT_WARNING_DISABLE_DEPRECATED
    qmlRegisterTypesAndRevisions<RecordUtil>("org.kde.plasma.quicksetting.record", 254);
    QT_WARNING_POP
    qmlRegisterModule("org.kde.plasma.quicksetting.record", 254, 254);
}

static const QQmlModuleRegistration orgkdeplasmaquicksettingrecordRegistration("org.kde.plasma.quicksetting.record", qml_register_types_org_kde_plasma_quicksetting_record);
