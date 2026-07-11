/****************************************************************************
** Meta object code from reading C++ file 'homescreenstate.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../containments/homescreens/folio/homescreenstate.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'homescreenstate.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 69
#error "This file was generated using the moc from 6.11.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {
struct qt_meta_tag_ZN15HomeScreenStateE_t {};
} // unnamed namespace

template <> constexpr inline auto HomeScreenState::qt_create_metaobjectdata<qt_meta_tag_ZN15HomeScreenStateE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "HomeScreenState",
        "QML.Element",
        "auto",
        "QML.Creatable",
        "false",
        "QML.UncreatableReason",
        "",
        "swipeStateChanged",
        "viewStateChanged",
        "viewWidthChanged",
        "viewHeightChanged",
        "viewTopPaddingChanged",
        "viewBottomPaddingChanged",
        "viewLeftPaddingChanged",
        "viewRightPaddingChanged",
        "pageOrientationChanged",
        "favouritesBarLocationChanged",
        "pageRowsChanged",
        "pageColumnsChanged",
        "pageViewXChanged",
        "pageWidthChanged",
        "pageHeightChanged",
        "pageContentWidthChanged",
        "pageContentHeightChanged",
        "pageCellWidthChanged",
        "pageCellHeightChanged",
        "pageDelegateLabelHeightChanged",
        "pageDelegateLabelSpacingChanged",
        "folderViewXChanged",
        "folderPageWidthChanged",
        "folderPageHeightChanged",
        "folderPageContentWidthChanged",
        "folderPageContentHeightChanged",
        "folderOpenProgressChanged",
        "folderGridLengthChanged",
        "currentFolderChanged",
        "settingsOpenProgressChanged",
        "appDrawerOpenProgressChanged",
        "appDrawerYChanged",
        "appDrawerClosed",
        "appDrawerOpened",
        "searchWidgetOpenProgressChanged",
        "searchWidgetYChanged",
        "delegateDragXChanged",
        "delegateDragYChanged",
        "delegateDragStarted",
        "delegateDragDropped",
        "delegateDragCancelled",
        "delegateDragFromPageStarted",
        "page",
        "row",
        "column",
        "delegateDragFromFavouritesStarted",
        "position",
        "delegateDragFromAppDrawerStarted",
        "storageId",
        "delegateDragFromFolderStarted",
        "FolioApplicationFolder*",
        "folder",
        "delegateDragFromWidgetListStarted",
        "appletPluginId",
        "pageNumChanged",
        "folderPageNumChanged",
        "isDraggingDelegateChanged",
        "leftCurrentFolder",
        "folderAboutToOpen",
        "x",
        "y",
        "appDrawerGridYChanged",
        "appDrawerGridFlickRequested",
        "openAppDrawer",
        "closeAppDrawer",
        "openSearchWidget",
        "closeSearchWidget",
        "goToPage",
        "snap",
        "goToFolderPage",
        "openFolder",
        "delegateX",
        "delegateY",
        "closeFolder",
        "openSettingsView",
        "closeSettingsView",
        "startDelegatePageDrag",
        "startX",
        "startY",
        "pointerOffsetX",
        "pointerOffsetY",
        "startDelegateFavouritesDrag",
        "startDelegateAppDrawerDrag",
        "startDelegateFolderDrag",
        "startDelegateWidgetListDrag",
        "cancelDelegateDrag",
        "swipeStarted",
        "deltaX",
        "deltaY",
        "swipeEnded",
        "swipeCancelled",
        "swipeMoved",
        "totalDeltaX",
        "totalDeltaY",
        "dragStart",
        "dragMove",
        "dragDrop",
        "dragCancel",
        "getPageDelegateAt",
        "FolioDelegate*",
        "getFavouritesDelegateAt",
        "getFolderDelegateAt",
        "getPageDelegateScreenPosition",
        "QPointF",
        "getFavouritesDelegateScreenPosition",
        "getFolderDelegateScreenPosition",
        "swipeState",
        "HomeScreenState::SwipeState",
        "viewState",
        "HomeScreenState::ViewState",
        "dragState",
        "DragState*",
        "viewWidth",
        "viewHeight",
        "viewTopPadding",
        "viewBottomPadding",
        "viewLeftPadding",
        "viewRightPadding",
        "pageOrientation",
        "HomeScreenState::PageOrientation",
        "favouritesBarLocation",
        "HomeScreenState::FavouritesBarLocation",
        "pageRows",
        "pageColumns",
        "pageViewX",
        "pageWidth",
        "pageHeight",
        "pageContentWidth",
        "pageContentHeight",
        "pageCellWidth",
        "pageCellHeight",
        "pageDelegateLabelHeight",
        "pageDelegateLabelSpacing",
        "folderViewX",
        "folderPageWidth",
        "folderPageHeight",
        "folderPageContentWidth",
        "folderPageContentHeight",
        "folderOpenProgress",
        "currentFolder",
        "folderGridLength",
        "settingsOpenProgress",
        "appDrawerOpenProgress",
        "appDrawerY",
        "searchWidgetOpenProgress",
        "searchWidgetY",
        "delegateDragX",
        "delegateDragY",
        "currentPage",
        "currentFolderPage",
        "isDraggingDelegate",
        "SwipeState",
        "None",
        "DeterminingSwipeType",
        "SwipingPages",
        "SwipingOpenAppDrawer",
        "SwipingCloseAppDrawer",
        "SwipingAppDrawerGrid",
        "SwipingOpenSearchWidget",
        "SwipingCloseSearchWidget",
        "SwipingFolderPages",
        "AwaitingDraggingDelegate",
        "DraggingDelegate",
        "ViewState",
        "SearchWidgetView",
        "PageView",
        "AppDrawerView",
        "FolderView",
        "SettingsView",
        "FavouritesBarLocation",
        "Bottom",
        "Left",
        "Right",
        "PageOrientation",
        "RegularPosition",
        "RotateClockwise",
        "RotateCounterClockwise",
        "RotateUpsideDown"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'swipeStateChanged'
        QtMocHelpers::SignalData<void()>(7, 6, QMC::AccessPublic, QMetaType::Void),
        // Signal 'viewStateChanged'
        QtMocHelpers::SignalData<void()>(8, 6, QMC::AccessPublic, QMetaType::Void),
        // Signal 'viewWidthChanged'
        QtMocHelpers::SignalData<void()>(9, 6, QMC::AccessPublic, QMetaType::Void),
        // Signal 'viewHeightChanged'
        QtMocHelpers::SignalData<void()>(10, 6, QMC::AccessPublic, QMetaType::Void),
        // Signal 'viewTopPaddingChanged'
        QtMocHelpers::SignalData<void()>(11, 6, QMC::AccessPublic, QMetaType::Void),
        // Signal 'viewBottomPaddingChanged'
        QtMocHelpers::SignalData<void()>(12, 6, QMC::AccessPublic, QMetaType::Void),
        // Signal 'viewLeftPaddingChanged'
        QtMocHelpers::SignalData<void()>(13, 6, QMC::AccessPublic, QMetaType::Void),
        // Signal 'viewRightPaddingChanged'
        QtMocHelpers::SignalData<void()>(14, 6, QMC::AccessPublic, QMetaType::Void),
        // Signal 'pageOrientationChanged'
        QtMocHelpers::SignalData<void()>(15, 6, QMC::AccessPublic, QMetaType::Void),
        // Signal 'favouritesBarLocationChanged'
        QtMocHelpers::SignalData<void()>(16, 6, QMC::AccessPublic, QMetaType::Void),
        // Signal 'pageRowsChanged'
        QtMocHelpers::SignalData<void()>(17, 6, QMC::AccessPublic, QMetaType::Void),
        // Signal 'pageColumnsChanged'
        QtMocHelpers::SignalData<void()>(18, 6, QMC::AccessPublic, QMetaType::Void),
        // Signal 'pageViewXChanged'
        QtMocHelpers::SignalData<void()>(19, 6, QMC::AccessPublic, QMetaType::Void),
        // Signal 'pageWidthChanged'
        QtMocHelpers::SignalData<void()>(20, 6, QMC::AccessPublic, QMetaType::Void),
        // Signal 'pageHeightChanged'
        QtMocHelpers::SignalData<void()>(21, 6, QMC::AccessPublic, QMetaType::Void),
        // Signal 'pageContentWidthChanged'
        QtMocHelpers::SignalData<void()>(22, 6, QMC::AccessPublic, QMetaType::Void),
        // Signal 'pageContentHeightChanged'
        QtMocHelpers::SignalData<void()>(23, 6, QMC::AccessPublic, QMetaType::Void),
        // Signal 'pageCellWidthChanged'
        QtMocHelpers::SignalData<void()>(24, 6, QMC::AccessPublic, QMetaType::Void),
        // Signal 'pageCellHeightChanged'
        QtMocHelpers::SignalData<void()>(25, 6, QMC::AccessPublic, QMetaType::Void),
        // Signal 'pageDelegateLabelHeightChanged'
        QtMocHelpers::SignalData<void()>(26, 6, QMC::AccessPublic, QMetaType::Void),
        // Signal 'pageDelegateLabelSpacingChanged'
        QtMocHelpers::SignalData<void()>(27, 6, QMC::AccessPublic, QMetaType::Void),
        // Signal 'folderViewXChanged'
        QtMocHelpers::SignalData<void()>(28, 6, QMC::AccessPublic, QMetaType::Void),
        // Signal 'folderPageWidthChanged'
        QtMocHelpers::SignalData<void()>(29, 6, QMC::AccessPublic, QMetaType::Void),
        // Signal 'folderPageHeightChanged'
        QtMocHelpers::SignalData<void()>(30, 6, QMC::AccessPublic, QMetaType::Void),
        // Signal 'folderPageContentWidthChanged'
        QtMocHelpers::SignalData<void()>(31, 6, QMC::AccessPublic, QMetaType::Void),
        // Signal 'folderPageContentHeightChanged'
        QtMocHelpers::SignalData<void()>(32, 6, QMC::AccessPublic, QMetaType::Void),
        // Signal 'folderOpenProgressChanged'
        QtMocHelpers::SignalData<void()>(33, 6, QMC::AccessPublic, QMetaType::Void),
        // Signal 'folderGridLengthChanged'
        QtMocHelpers::SignalData<void()>(34, 6, QMC::AccessPublic, QMetaType::Void),
        // Signal 'currentFolderChanged'
        QtMocHelpers::SignalData<void()>(35, 6, QMC::AccessPublic, QMetaType::Void),
        // Signal 'settingsOpenProgressChanged'
        QtMocHelpers::SignalData<void()>(36, 6, QMC::AccessPublic, QMetaType::Void),
        // Signal 'appDrawerOpenProgressChanged'
        QtMocHelpers::SignalData<void()>(37, 6, QMC::AccessPublic, QMetaType::Void),
        // Signal 'appDrawerYChanged'
        QtMocHelpers::SignalData<void()>(38, 6, QMC::AccessPublic, QMetaType::Void),
        // Signal 'appDrawerClosed'
        QtMocHelpers::SignalData<void()>(39, 6, QMC::AccessPublic, QMetaType::Void),
        // Signal 'appDrawerOpened'
        QtMocHelpers::SignalData<void()>(40, 6, QMC::AccessPublic, QMetaType::Void),
        // Signal 'searchWidgetOpenProgressChanged'
        QtMocHelpers::SignalData<void()>(41, 6, QMC::AccessPublic, QMetaType::Void),
        // Signal 'searchWidgetYChanged'
        QtMocHelpers::SignalData<void()>(42, 6, QMC::AccessPublic, QMetaType::Void),
        // Signal 'delegateDragXChanged'
        QtMocHelpers::SignalData<void()>(43, 6, QMC::AccessPublic, QMetaType::Void),
        // Signal 'delegateDragYChanged'
        QtMocHelpers::SignalData<void()>(44, 6, QMC::AccessPublic, QMetaType::Void),
        // Signal 'delegateDragStarted'
        QtMocHelpers::SignalData<void()>(45, 6, QMC::AccessPublic, QMetaType::Void),
        // Signal 'delegateDragDropped'
        QtMocHelpers::SignalData<void()>(46, 6, QMC::AccessPublic, QMetaType::Void),
        // Signal 'delegateDragCancelled'
        QtMocHelpers::SignalData<void()>(47, 6, QMC::AccessPublic, QMetaType::Void),
        // Signal 'delegateDragFromPageStarted'
        QtMocHelpers::SignalData<void(int, int, int)>(48, 6, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 49 }, { QMetaType::Int, 50 }, { QMetaType::Int, 51 },
        }}),
        // Signal 'delegateDragFromFavouritesStarted'
        QtMocHelpers::SignalData<void(int)>(52, 6, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 53 },
        }}),
        // Signal 'delegateDragFromAppDrawerStarted'
        QtMocHelpers::SignalData<void(QString)>(54, 6, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 55 },
        }}),
        // Signal 'delegateDragFromFolderStarted'
        QtMocHelpers::SignalData<void(FolioApplicationFolder *, int)>(56, 6, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 57, 58 }, { QMetaType::Int, 53 },
        }}),
        // Signal 'delegateDragFromWidgetListStarted'
        QtMocHelpers::SignalData<void(QString)>(59, 6, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 60 },
        }}),
        // Signal 'pageNumChanged'
        QtMocHelpers::SignalData<void()>(61, 6, QMC::AccessPublic, QMetaType::Void),
        // Signal 'folderPageNumChanged'
        QtMocHelpers::SignalData<void()>(62, 6, QMC::AccessPublic, QMetaType::Void),
        // Signal 'isDraggingDelegateChanged'
        QtMocHelpers::SignalData<void()>(63, 6, QMC::AccessPublic, QMetaType::Void),
        // Signal 'leftCurrentFolder'
        QtMocHelpers::SignalData<void()>(64, 6, QMC::AccessPublic, QMetaType::Void),
        // Signal 'folderAboutToOpen'
        QtMocHelpers::SignalData<void(qreal, qreal)>(65, 6, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QReal, 66 }, { QMetaType::QReal, 67 },
        }}),
        // Signal 'appDrawerGridYChanged'
        QtMocHelpers::SignalData<void(qreal)>(68, 6, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QReal, 67 },
        }}),
        // Signal 'appDrawerGridFlickRequested'
        QtMocHelpers::SignalData<void()>(69, 6, QMC::AccessPublic, QMetaType::Void),
        // Slot 'openAppDrawer'
        QtMocHelpers::SlotData<void()>(70, 6, QMC::AccessPublic, QMetaType::Void),
        // Slot 'closeAppDrawer'
        QtMocHelpers::SlotData<void()>(71, 6, QMC::AccessPublic, QMetaType::Void),
        // Slot 'openSearchWidget'
        QtMocHelpers::SlotData<void()>(72, 6, QMC::AccessPublic, QMetaType::Void),
        // Slot 'closeSearchWidget'
        QtMocHelpers::SlotData<void()>(73, 6, QMC::AccessPublic, QMetaType::Void),
        // Slot 'goToPage'
        QtMocHelpers::SlotData<void(int, bool)>(74, 6, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 49 }, { QMetaType::Bool, 75 },
        }}),
        // Slot 'goToFolderPage'
        QtMocHelpers::SlotData<void(int, bool)>(76, 6, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 49 }, { QMetaType::Bool, 75 },
        }}),
        // Slot 'openFolder'
        QtMocHelpers::SlotData<void(qreal, qreal, FolioApplicationFolder *)>(77, 6, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QReal, 78 }, { QMetaType::QReal, 79 }, { 0x80000000 | 57, 58 },
        }}),
        // Slot 'closeFolder'
        QtMocHelpers::SlotData<void()>(80, 6, QMC::AccessPublic, QMetaType::Void),
        // Slot 'openSettingsView'
        QtMocHelpers::SlotData<void()>(81, 6, QMC::AccessPublic, QMetaType::Void),
        // Slot 'closeSettingsView'
        QtMocHelpers::SlotData<void()>(82, 6, QMC::AccessPublic, QMetaType::Void),
        // Slot 'startDelegatePageDrag'
        QtMocHelpers::SlotData<void(qreal, qreal, qreal, qreal, int, int, int)>(83, 6, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QReal, 84 }, { QMetaType::QReal, 85 }, { QMetaType::QReal, 86 }, { QMetaType::QReal, 87 },
            { QMetaType::Int, 49 }, { QMetaType::Int, 50 }, { QMetaType::Int, 51 },
        }}),
        // Slot 'startDelegateFavouritesDrag'
        QtMocHelpers::SlotData<void(qreal, qreal, qreal, qreal, int)>(88, 6, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QReal, 84 }, { QMetaType::QReal, 85 }, { QMetaType::QReal, 86 }, { QMetaType::QReal, 87 },
            { QMetaType::Int, 53 },
        }}),
        // Slot 'startDelegateAppDrawerDrag'
        QtMocHelpers::SlotData<void(qreal, qreal, qreal, qreal, QString)>(89, 6, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QReal, 84 }, { QMetaType::QReal, 85 }, { QMetaType::QReal, 86 }, { QMetaType::QReal, 87 },
            { QMetaType::QString, 55 },
        }}),
        // Slot 'startDelegateFolderDrag'
        QtMocHelpers::SlotData<void(qreal, qreal, qreal, qreal, FolioApplicationFolder *, int)>(90, 6, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QReal, 84 }, { QMetaType::QReal, 85 }, { QMetaType::QReal, 86 }, { QMetaType::QReal, 87 },
            { 0x80000000 | 57, 58 }, { QMetaType::Int, 53 },
        }}),
        // Slot 'startDelegateWidgetListDrag'
        QtMocHelpers::SlotData<void(qreal, qreal, qreal, qreal, QString)>(91, 6, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QReal, 84 }, { QMetaType::QReal, 85 }, { QMetaType::QReal, 86 }, { QMetaType::QReal, 87 },
            { QMetaType::QString, 60 },
        }}),
        // Slot 'cancelDelegateDrag'
        QtMocHelpers::SlotData<void()>(92, 6, QMC::AccessPublic, QMetaType::Void),
        // Slot 'swipeStarted'
        QtMocHelpers::SlotData<void(qreal, qreal)>(93, 6, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QReal, 94 }, { QMetaType::QReal, 95 },
        }}),
        // Slot 'swipeEnded'
        QtMocHelpers::SlotData<void()>(96, 6, QMC::AccessPublic, QMetaType::Void),
        // Slot 'swipeCancelled'
        QtMocHelpers::SlotData<void()>(97, 6, QMC::AccessPublic, QMetaType::Void),
        // Slot 'swipeMoved'
        QtMocHelpers::SlotData<void(qreal, qreal, qreal, qreal)>(98, 6, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QReal, 99 }, { QMetaType::QReal, 100 }, { QMetaType::QReal, 94 }, { QMetaType::QReal, 95 },
        }}),
        // Slot 'dragStart'
        QtMocHelpers::SlotData<void()>(101, 6, QMC::AccessPublic, QMetaType::Void),
        // Slot 'dragMove'
        QtMocHelpers::SlotData<void(qreal, qreal)>(102, 6, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QReal, 94 }, { QMetaType::QReal, 95 },
        }}),
        // Slot 'dragDrop'
        QtMocHelpers::SlotData<void()>(103, 6, QMC::AccessPublic, QMetaType::Void),
        // Slot 'dragCancel'
        QtMocHelpers::SlotData<void()>(104, 6, QMC::AccessPublic, QMetaType::Void),
        // Method 'getPageDelegateAt'
        QtMocHelpers::MethodData<FolioDelegate *(int, int, int)>(105, 6, QMC::AccessPublic, 0x80000000 | 106, {{
            { QMetaType::Int, 49 }, { QMetaType::Int, 50 }, { QMetaType::Int, 51 },
        }}),
        // Method 'getFavouritesDelegateAt'
        QtMocHelpers::MethodData<FolioDelegate *(int)>(107, 6, QMC::AccessPublic, 0x80000000 | 106, {{
            { QMetaType::Int, 53 },
        }}),
        // Method 'getFolderDelegateAt'
        QtMocHelpers::MethodData<FolioDelegate *(int)>(108, 6, QMC::AccessPublic, 0x80000000 | 106, {{
            { QMetaType::Int, 53 },
        }}),
        // Method 'getPageDelegateScreenPosition'
        QtMocHelpers::MethodData<QPointF(int, int, int)>(109, 6, QMC::AccessPublic, 0x80000000 | 110, {{
            { QMetaType::Int, 49 }, { QMetaType::Int, 50 }, { QMetaType::Int, 51 },
        }}),
        // Method 'getFavouritesDelegateScreenPosition'
        QtMocHelpers::MethodData<QPointF(int)>(111, 6, QMC::AccessPublic, 0x80000000 | 110, {{
            { QMetaType::Int, 53 },
        }}),
        // Method 'getFolderDelegateScreenPosition'
        QtMocHelpers::MethodData<QPointF(int)>(112, 6, QMC::AccessPublic, 0x80000000 | 110, {{
            { QMetaType::Int, 53 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'swipeState'
        QtMocHelpers::PropertyData<HomeScreenState::SwipeState>(113, 0x80000000 | 114, QMC::DefaultPropertyFlags | QMC::EnumOrFlag, 0),
        // property 'viewState'
        QtMocHelpers::PropertyData<HomeScreenState::ViewState>(115, 0x80000000 | 116, QMC::DefaultPropertyFlags | QMC::EnumOrFlag, 1),
        // property 'dragState'
        QtMocHelpers::PropertyData<DragState*>(117, 0x80000000 | 118, QMC::DefaultPropertyFlags | QMC::EnumOrFlag | QMC::Constant),
        // property 'viewWidth'
        QtMocHelpers::PropertyData<qreal>(119, QMetaType::QReal, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 2),
        // property 'viewHeight'
        QtMocHelpers::PropertyData<qreal>(120, QMetaType::QReal, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 3),
        // property 'viewTopPadding'
        QtMocHelpers::PropertyData<qreal>(121, QMetaType::QReal, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 4),
        // property 'viewBottomPadding'
        QtMocHelpers::PropertyData<qreal>(122, QMetaType::QReal, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 5),
        // property 'viewLeftPadding'
        QtMocHelpers::PropertyData<qreal>(123, QMetaType::QReal, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 6),
        // property 'viewRightPadding'
        QtMocHelpers::PropertyData<qreal>(124, QMetaType::QReal, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 7),
        // property 'pageOrientation'
        QtMocHelpers::PropertyData<HomeScreenState::PageOrientation>(125, 0x80000000 | 126, QMC::DefaultPropertyFlags | QMC::EnumOrFlag, 8),
        // property 'favouritesBarLocation'
        QtMocHelpers::PropertyData<HomeScreenState::FavouritesBarLocation>(127, 0x80000000 | 128, QMC::DefaultPropertyFlags | QMC::EnumOrFlag, 9),
        // property 'pageRows'
        QtMocHelpers::PropertyData<int>(129, QMetaType::Int, QMC::DefaultPropertyFlags, 10),
        // property 'pageColumns'
        QtMocHelpers::PropertyData<int>(130, QMetaType::Int, QMC::DefaultPropertyFlags, 11),
        // property 'pageViewX'
        QtMocHelpers::PropertyData<qreal>(131, QMetaType::QReal, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 12),
        // property 'pageWidth'
        QtMocHelpers::PropertyData<qreal>(132, QMetaType::QReal, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 13),
        // property 'pageHeight'
        QtMocHelpers::PropertyData<qreal>(133, QMetaType::QReal, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 14),
        // property 'pageContentWidth'
        QtMocHelpers::PropertyData<qreal>(134, QMetaType::QReal, QMC::DefaultPropertyFlags, 15),
        // property 'pageContentHeight'
        QtMocHelpers::PropertyData<qreal>(135, QMetaType::QReal, QMC::DefaultPropertyFlags, 16),
        // property 'pageCellWidth'
        QtMocHelpers::PropertyData<qreal>(136, QMetaType::QReal, QMC::DefaultPropertyFlags, 17),
        // property 'pageCellHeight'
        QtMocHelpers::PropertyData<qreal>(137, QMetaType::QReal, QMC::DefaultPropertyFlags, 18),
        // property 'pageDelegateLabelHeight'
        QtMocHelpers::PropertyData<qreal>(138, QMetaType::QReal, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 19),
        // property 'pageDelegateLabelSpacing'
        QtMocHelpers::PropertyData<qreal>(139, QMetaType::QReal, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 20),
        // property 'folderViewX'
        QtMocHelpers::PropertyData<qreal>(140, QMetaType::QReal, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 21),
        // property 'folderPageWidth'
        QtMocHelpers::PropertyData<qreal>(141, QMetaType::QReal, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 22),
        // property 'folderPageHeight'
        QtMocHelpers::PropertyData<qreal>(142, QMetaType::QReal, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 23),
        // property 'folderPageContentWidth'
        QtMocHelpers::PropertyData<qreal>(143, QMetaType::QReal, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 24),
        // property 'folderPageContentHeight'
        QtMocHelpers::PropertyData<qreal>(144, QMetaType::QReal, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 25),
        // property 'folderOpenProgress'
        QtMocHelpers::PropertyData<qreal>(145, QMetaType::QReal, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 26),
        // property 'currentFolder'
        QtMocHelpers::PropertyData<FolioApplicationFolder*>(146, 0x80000000 | 57, QMC::DefaultPropertyFlags | QMC::EnumOrFlag, 28),
        // property 'folderGridLength'
        QtMocHelpers::PropertyData<qreal>(147, QMetaType::QReal, QMC::DefaultPropertyFlags, 27),
        // property 'settingsOpenProgress'
        QtMocHelpers::PropertyData<qreal>(148, QMetaType::QReal, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 29),
        // property 'appDrawerOpenProgress'
        QtMocHelpers::PropertyData<qreal>(149, QMetaType::QReal, QMC::DefaultPropertyFlags, 30),
        // property 'appDrawerY'
        QtMocHelpers::PropertyData<qreal>(150, QMetaType::QReal, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 31),
        // property 'searchWidgetOpenProgress'
        QtMocHelpers::PropertyData<qreal>(151, QMetaType::QReal, QMC::DefaultPropertyFlags, 34),
        // property 'searchWidgetY'
        QtMocHelpers::PropertyData<qreal>(152, QMetaType::QReal, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 35),
        // property 'delegateDragX'
        QtMocHelpers::PropertyData<qreal>(153, QMetaType::QReal, QMC::DefaultPropertyFlags, 36),
        // property 'delegateDragY'
        QtMocHelpers::PropertyData<qreal>(154, QMetaType::QReal, QMC::DefaultPropertyFlags, 37),
        // property 'currentPage'
        QtMocHelpers::PropertyData<int>(155, QMetaType::Int, QMC::DefaultPropertyFlags, 46),
        // property 'currentFolderPage'
        QtMocHelpers::PropertyData<int>(156, QMetaType::Int, QMC::DefaultPropertyFlags, 47),
        // property 'isDraggingDelegate'
        QtMocHelpers::PropertyData<bool>(157, QMetaType::Bool, QMC::DefaultPropertyFlags, 48),
    };
    QtMocHelpers::UintData qt_enums {
        // enum 'SwipeState'
        QtMocHelpers::EnumData<enum SwipeState>(158, 158, QMC::EnumFlags{}).add({
            {  159, SwipeState::None },
            {  160, SwipeState::DeterminingSwipeType },
            {  161, SwipeState::SwipingPages },
            {  162, SwipeState::SwipingOpenAppDrawer },
            {  163, SwipeState::SwipingCloseAppDrawer },
            {  164, SwipeState::SwipingAppDrawerGrid },
            {  165, SwipeState::SwipingOpenSearchWidget },
            {  166, SwipeState::SwipingCloseSearchWidget },
            {  167, SwipeState::SwipingFolderPages },
            {  168, SwipeState::AwaitingDraggingDelegate },
            {  169, SwipeState::DraggingDelegate },
        }),
        // enum 'ViewState'
        QtMocHelpers::EnumData<enum ViewState>(170, 170, QMC::EnumFlags{}).add({
            {  171, ViewState::SearchWidgetView },
            {  172, ViewState::PageView },
            {  173, ViewState::AppDrawerView },
            {  174, ViewState::FolderView },
            {  175, ViewState::SettingsView },
        }),
        // enum 'FavouritesBarLocation'
        QtMocHelpers::EnumData<enum FavouritesBarLocation>(176, 176, QMC::EnumFlags{}).add({
            {  177, FavouritesBarLocation::Bottom },
            {  178, FavouritesBarLocation::Left },
            {  179, FavouritesBarLocation::Right },
        }),
        // enum 'PageOrientation'
        QtMocHelpers::EnumData<enum PageOrientation>(180, 180, QMC::EnumFlags{}).add({
            {  181, PageOrientation::RegularPosition },
            {  182, PageOrientation::RotateClockwise },
            {  183, PageOrientation::RotateCounterClockwise },
            {  184, PageOrientation::RotateUpsideDown },
        }),
    };
    QtMocHelpers::UintData qt_constructors {};
    QtMocHelpers::ClassInfos qt_classinfo({
            {    1,    2 },
            {    3,    4 },
            {    5,    6 },
    });
    return QtMocHelpers::metaObjectData<HomeScreenState, void>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums, qt_constructors, qt_classinfo);
}
Q_CONSTINIT const QMetaObject HomeScreenState::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN15HomeScreenStateE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN15HomeScreenStateE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN15HomeScreenStateE_t>.metaTypes,
    nullptr
} };

void HomeScreenState::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<HomeScreenState *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->swipeStateChanged(); break;
        case 1: _t->viewStateChanged(); break;
        case 2: _t->viewWidthChanged(); break;
        case 3: _t->viewHeightChanged(); break;
        case 4: _t->viewTopPaddingChanged(); break;
        case 5: _t->viewBottomPaddingChanged(); break;
        case 6: _t->viewLeftPaddingChanged(); break;
        case 7: _t->viewRightPaddingChanged(); break;
        case 8: _t->pageOrientationChanged(); break;
        case 9: _t->favouritesBarLocationChanged(); break;
        case 10: _t->pageRowsChanged(); break;
        case 11: _t->pageColumnsChanged(); break;
        case 12: _t->pageViewXChanged(); break;
        case 13: _t->pageWidthChanged(); break;
        case 14: _t->pageHeightChanged(); break;
        case 15: _t->pageContentWidthChanged(); break;
        case 16: _t->pageContentHeightChanged(); break;
        case 17: _t->pageCellWidthChanged(); break;
        case 18: _t->pageCellHeightChanged(); break;
        case 19: _t->pageDelegateLabelHeightChanged(); break;
        case 20: _t->pageDelegateLabelSpacingChanged(); break;
        case 21: _t->folderViewXChanged(); break;
        case 22: _t->folderPageWidthChanged(); break;
        case 23: _t->folderPageHeightChanged(); break;
        case 24: _t->folderPageContentWidthChanged(); break;
        case 25: _t->folderPageContentHeightChanged(); break;
        case 26: _t->folderOpenProgressChanged(); break;
        case 27: _t->folderGridLengthChanged(); break;
        case 28: _t->currentFolderChanged(); break;
        case 29: _t->settingsOpenProgressChanged(); break;
        case 30: _t->appDrawerOpenProgressChanged(); break;
        case 31: _t->appDrawerYChanged(); break;
        case 32: _t->appDrawerClosed(); break;
        case 33: _t->appDrawerOpened(); break;
        case 34: _t->searchWidgetOpenProgressChanged(); break;
        case 35: _t->searchWidgetYChanged(); break;
        case 36: _t->delegateDragXChanged(); break;
        case 37: _t->delegateDragYChanged(); break;
        case 38: _t->delegateDragStarted(); break;
        case 39: _t->delegateDragDropped(); break;
        case 40: _t->delegateDragCancelled(); break;
        case 41: _t->delegateDragFromPageStarted((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[3]))); break;
        case 42: _t->delegateDragFromFavouritesStarted((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 43: _t->delegateDragFromAppDrawerStarted((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 44: _t->delegateDragFromFolderStarted((*reinterpret_cast<std::add_pointer_t<FolioApplicationFolder*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2]))); break;
        case 45: _t->delegateDragFromWidgetListStarted((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 46: _t->pageNumChanged(); break;
        case 47: _t->folderPageNumChanged(); break;
        case 48: _t->isDraggingDelegateChanged(); break;
        case 49: _t->leftCurrentFolder(); break;
        case 50: _t->folderAboutToOpen((*reinterpret_cast<std::add_pointer_t<qreal>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<qreal>>(_a[2]))); break;
        case 51: _t->appDrawerGridYChanged((*reinterpret_cast<std::add_pointer_t<qreal>>(_a[1]))); break;
        case 52: _t->appDrawerGridFlickRequested(); break;
        case 53: _t->openAppDrawer(); break;
        case 54: _t->closeAppDrawer(); break;
        case 55: _t->openSearchWidget(); break;
        case 56: _t->closeSearchWidget(); break;
        case 57: _t->goToPage((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[2]))); break;
        case 58: _t->goToFolderPage((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[2]))); break;
        case 59: _t->openFolder((*reinterpret_cast<std::add_pointer_t<qreal>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<qreal>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<FolioApplicationFolder*>>(_a[3]))); break;
        case 60: _t->closeFolder(); break;
        case 61: _t->openSettingsView(); break;
        case 62: _t->closeSettingsView(); break;
        case 63: _t->startDelegatePageDrag((*reinterpret_cast<std::add_pointer_t<qreal>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<qreal>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<qreal>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<qreal>>(_a[4])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[5])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[6])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[7]))); break;
        case 64: _t->startDelegateFavouritesDrag((*reinterpret_cast<std::add_pointer_t<qreal>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<qreal>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<qreal>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<qreal>>(_a[4])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[5]))); break;
        case 65: _t->startDelegateAppDrawerDrag((*reinterpret_cast<std::add_pointer_t<qreal>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<qreal>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<qreal>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<qreal>>(_a[4])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[5]))); break;
        case 66: _t->startDelegateFolderDrag((*reinterpret_cast<std::add_pointer_t<qreal>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<qreal>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<qreal>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<qreal>>(_a[4])),(*reinterpret_cast<std::add_pointer_t<FolioApplicationFolder*>>(_a[5])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[6]))); break;
        case 67: _t->startDelegateWidgetListDrag((*reinterpret_cast<std::add_pointer_t<qreal>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<qreal>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<qreal>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<qreal>>(_a[4])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[5]))); break;
        case 68: _t->cancelDelegateDrag(); break;
        case 69: _t->swipeStarted((*reinterpret_cast<std::add_pointer_t<qreal>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<qreal>>(_a[2]))); break;
        case 70: _t->swipeEnded(); break;
        case 71: _t->swipeCancelled(); break;
        case 72: _t->swipeMoved((*reinterpret_cast<std::add_pointer_t<qreal>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<qreal>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<qreal>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<qreal>>(_a[4]))); break;
        case 73: _t->dragStart(); break;
        case 74: _t->dragMove((*reinterpret_cast<std::add_pointer_t<qreal>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<qreal>>(_a[2]))); break;
        case 75: _t->dragDrop(); break;
        case 76: _t->dragCancel(); break;
        case 77: { FolioDelegate* _r = _t->getPageDelegateAt((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[3])));
            if (_a[0]) *reinterpret_cast<FolioDelegate**>(_a[0]) = std::move(_r); }  break;
        case 78: { FolioDelegate* _r = _t->getFavouritesDelegateAt((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])));
            if (_a[0]) *reinterpret_cast<FolioDelegate**>(_a[0]) = std::move(_r); }  break;
        case 79: { FolioDelegate* _r = _t->getFolderDelegateAt((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])));
            if (_a[0]) *reinterpret_cast<FolioDelegate**>(_a[0]) = std::move(_r); }  break;
        case 80: { QPointF _r = _t->getPageDelegateScreenPosition((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[3])));
            if (_a[0]) *reinterpret_cast<QPointF*>(_a[0]) = std::move(_r); }  break;
        case 81: { QPointF _r = _t->getFavouritesDelegateScreenPosition((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QPointF*>(_a[0]) = std::move(_r); }  break;
        case 82: { QPointF _r = _t->getFolderDelegateScreenPosition((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QPointF*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 44:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< FolioApplicationFolder* >(); break;
            }
            break;
        case 59:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 2:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< FolioApplicationFolder* >(); break;
            }
            break;
        case 66:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 4:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< FolioApplicationFolder* >(); break;
            }
            break;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (HomeScreenState::*)()>(_a, &HomeScreenState::swipeStateChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (HomeScreenState::*)()>(_a, &HomeScreenState::viewStateChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (HomeScreenState::*)()>(_a, &HomeScreenState::viewWidthChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (HomeScreenState::*)()>(_a, &HomeScreenState::viewHeightChanged, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (HomeScreenState::*)()>(_a, &HomeScreenState::viewTopPaddingChanged, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (HomeScreenState::*)()>(_a, &HomeScreenState::viewBottomPaddingChanged, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (HomeScreenState::*)()>(_a, &HomeScreenState::viewLeftPaddingChanged, 6))
            return;
        if (QtMocHelpers::indexOfMethod<void (HomeScreenState::*)()>(_a, &HomeScreenState::viewRightPaddingChanged, 7))
            return;
        if (QtMocHelpers::indexOfMethod<void (HomeScreenState::*)()>(_a, &HomeScreenState::pageOrientationChanged, 8))
            return;
        if (QtMocHelpers::indexOfMethod<void (HomeScreenState::*)()>(_a, &HomeScreenState::favouritesBarLocationChanged, 9))
            return;
        if (QtMocHelpers::indexOfMethod<void (HomeScreenState::*)()>(_a, &HomeScreenState::pageRowsChanged, 10))
            return;
        if (QtMocHelpers::indexOfMethod<void (HomeScreenState::*)()>(_a, &HomeScreenState::pageColumnsChanged, 11))
            return;
        if (QtMocHelpers::indexOfMethod<void (HomeScreenState::*)()>(_a, &HomeScreenState::pageViewXChanged, 12))
            return;
        if (QtMocHelpers::indexOfMethod<void (HomeScreenState::*)()>(_a, &HomeScreenState::pageWidthChanged, 13))
            return;
        if (QtMocHelpers::indexOfMethod<void (HomeScreenState::*)()>(_a, &HomeScreenState::pageHeightChanged, 14))
            return;
        if (QtMocHelpers::indexOfMethod<void (HomeScreenState::*)()>(_a, &HomeScreenState::pageContentWidthChanged, 15))
            return;
        if (QtMocHelpers::indexOfMethod<void (HomeScreenState::*)()>(_a, &HomeScreenState::pageContentHeightChanged, 16))
            return;
        if (QtMocHelpers::indexOfMethod<void (HomeScreenState::*)()>(_a, &HomeScreenState::pageCellWidthChanged, 17))
            return;
        if (QtMocHelpers::indexOfMethod<void (HomeScreenState::*)()>(_a, &HomeScreenState::pageCellHeightChanged, 18))
            return;
        if (QtMocHelpers::indexOfMethod<void (HomeScreenState::*)()>(_a, &HomeScreenState::pageDelegateLabelHeightChanged, 19))
            return;
        if (QtMocHelpers::indexOfMethod<void (HomeScreenState::*)()>(_a, &HomeScreenState::pageDelegateLabelSpacingChanged, 20))
            return;
        if (QtMocHelpers::indexOfMethod<void (HomeScreenState::*)()>(_a, &HomeScreenState::folderViewXChanged, 21))
            return;
        if (QtMocHelpers::indexOfMethod<void (HomeScreenState::*)()>(_a, &HomeScreenState::folderPageWidthChanged, 22))
            return;
        if (QtMocHelpers::indexOfMethod<void (HomeScreenState::*)()>(_a, &HomeScreenState::folderPageHeightChanged, 23))
            return;
        if (QtMocHelpers::indexOfMethod<void (HomeScreenState::*)()>(_a, &HomeScreenState::folderPageContentWidthChanged, 24))
            return;
        if (QtMocHelpers::indexOfMethod<void (HomeScreenState::*)()>(_a, &HomeScreenState::folderPageContentHeightChanged, 25))
            return;
        if (QtMocHelpers::indexOfMethod<void (HomeScreenState::*)()>(_a, &HomeScreenState::folderOpenProgressChanged, 26))
            return;
        if (QtMocHelpers::indexOfMethod<void (HomeScreenState::*)()>(_a, &HomeScreenState::folderGridLengthChanged, 27))
            return;
        if (QtMocHelpers::indexOfMethod<void (HomeScreenState::*)()>(_a, &HomeScreenState::currentFolderChanged, 28))
            return;
        if (QtMocHelpers::indexOfMethod<void (HomeScreenState::*)()>(_a, &HomeScreenState::settingsOpenProgressChanged, 29))
            return;
        if (QtMocHelpers::indexOfMethod<void (HomeScreenState::*)()>(_a, &HomeScreenState::appDrawerOpenProgressChanged, 30))
            return;
        if (QtMocHelpers::indexOfMethod<void (HomeScreenState::*)()>(_a, &HomeScreenState::appDrawerYChanged, 31))
            return;
        if (QtMocHelpers::indexOfMethod<void (HomeScreenState::*)()>(_a, &HomeScreenState::appDrawerClosed, 32))
            return;
        if (QtMocHelpers::indexOfMethod<void (HomeScreenState::*)()>(_a, &HomeScreenState::appDrawerOpened, 33))
            return;
        if (QtMocHelpers::indexOfMethod<void (HomeScreenState::*)()>(_a, &HomeScreenState::searchWidgetOpenProgressChanged, 34))
            return;
        if (QtMocHelpers::indexOfMethod<void (HomeScreenState::*)()>(_a, &HomeScreenState::searchWidgetYChanged, 35))
            return;
        if (QtMocHelpers::indexOfMethod<void (HomeScreenState::*)()>(_a, &HomeScreenState::delegateDragXChanged, 36))
            return;
        if (QtMocHelpers::indexOfMethod<void (HomeScreenState::*)()>(_a, &HomeScreenState::delegateDragYChanged, 37))
            return;
        if (QtMocHelpers::indexOfMethod<void (HomeScreenState::*)()>(_a, &HomeScreenState::delegateDragStarted, 38))
            return;
        if (QtMocHelpers::indexOfMethod<void (HomeScreenState::*)()>(_a, &HomeScreenState::delegateDragDropped, 39))
            return;
        if (QtMocHelpers::indexOfMethod<void (HomeScreenState::*)()>(_a, &HomeScreenState::delegateDragCancelled, 40))
            return;
        if (QtMocHelpers::indexOfMethod<void (HomeScreenState::*)(int , int , int )>(_a, &HomeScreenState::delegateDragFromPageStarted, 41))
            return;
        if (QtMocHelpers::indexOfMethod<void (HomeScreenState::*)(int )>(_a, &HomeScreenState::delegateDragFromFavouritesStarted, 42))
            return;
        if (QtMocHelpers::indexOfMethod<void (HomeScreenState::*)(QString )>(_a, &HomeScreenState::delegateDragFromAppDrawerStarted, 43))
            return;
        if (QtMocHelpers::indexOfMethod<void (HomeScreenState::*)(FolioApplicationFolder * , int )>(_a, &HomeScreenState::delegateDragFromFolderStarted, 44))
            return;
        if (QtMocHelpers::indexOfMethod<void (HomeScreenState::*)(QString )>(_a, &HomeScreenState::delegateDragFromWidgetListStarted, 45))
            return;
        if (QtMocHelpers::indexOfMethod<void (HomeScreenState::*)()>(_a, &HomeScreenState::pageNumChanged, 46))
            return;
        if (QtMocHelpers::indexOfMethod<void (HomeScreenState::*)()>(_a, &HomeScreenState::folderPageNumChanged, 47))
            return;
        if (QtMocHelpers::indexOfMethod<void (HomeScreenState::*)()>(_a, &HomeScreenState::isDraggingDelegateChanged, 48))
            return;
        if (QtMocHelpers::indexOfMethod<void (HomeScreenState::*)()>(_a, &HomeScreenState::leftCurrentFolder, 49))
            return;
        if (QtMocHelpers::indexOfMethod<void (HomeScreenState::*)(qreal , qreal )>(_a, &HomeScreenState::folderAboutToOpen, 50))
            return;
        if (QtMocHelpers::indexOfMethod<void (HomeScreenState::*)(qreal )>(_a, &HomeScreenState::appDrawerGridYChanged, 51))
            return;
        if (QtMocHelpers::indexOfMethod<void (HomeScreenState::*)()>(_a, &HomeScreenState::appDrawerGridFlickRequested, 52))
            return;
    }
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< DragState* >(); break;
        case 28:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< FolioApplicationFolder* >(); break;
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<HomeScreenState::SwipeState*>(_v) = _t->swipeState(); break;
        case 1: *reinterpret_cast<HomeScreenState::ViewState*>(_v) = _t->viewState(); break;
        case 2: *reinterpret_cast<DragState**>(_v) = _t->dragState(); break;
        case 3: *reinterpret_cast<qreal*>(_v) = _t->viewWidth(); break;
        case 4: *reinterpret_cast<qreal*>(_v) = _t->viewHeight(); break;
        case 5: *reinterpret_cast<qreal*>(_v) = _t->viewTopPadding(); break;
        case 6: *reinterpret_cast<qreal*>(_v) = _t->viewBottomPadding(); break;
        case 7: *reinterpret_cast<qreal*>(_v) = _t->viewLeftPadding(); break;
        case 8: *reinterpret_cast<qreal*>(_v) = _t->viewRightPadding(); break;
        case 9: *reinterpret_cast<HomeScreenState::PageOrientation*>(_v) = _t->pageOrientation(); break;
        case 10: *reinterpret_cast<HomeScreenState::FavouritesBarLocation*>(_v) = _t->favouritesBarLocation(); break;
        case 11: *reinterpret_cast<int*>(_v) = _t->pageRows(); break;
        case 12: *reinterpret_cast<int*>(_v) = _t->pageColumns(); break;
        case 13: *reinterpret_cast<qreal*>(_v) = _t->pageViewX(); break;
        case 14: *reinterpret_cast<qreal*>(_v) = _t->pageWidth(); break;
        case 15: *reinterpret_cast<qreal*>(_v) = _t->pageHeight(); break;
        case 16: *reinterpret_cast<qreal*>(_v) = _t->pageContentWidth(); break;
        case 17: *reinterpret_cast<qreal*>(_v) = _t->pageContentHeight(); break;
        case 18: *reinterpret_cast<qreal*>(_v) = _t->pageCellWidth(); break;
        case 19: *reinterpret_cast<qreal*>(_v) = _t->pageCellHeight(); break;
        case 20: *reinterpret_cast<qreal*>(_v) = _t->pageDelegateLabelHeight(); break;
        case 21: *reinterpret_cast<qreal*>(_v) = _t->pageDelegateLabelSpacing(); break;
        case 22: *reinterpret_cast<qreal*>(_v) = _t->folderViewX(); break;
        case 23: *reinterpret_cast<qreal*>(_v) = _t->folderPageWidth(); break;
        case 24: *reinterpret_cast<qreal*>(_v) = _t->folderPageHeight(); break;
        case 25: *reinterpret_cast<qreal*>(_v) = _t->folderPageContentWidth(); break;
        case 26: *reinterpret_cast<qreal*>(_v) = _t->folderPageContentHeight(); break;
        case 27: *reinterpret_cast<qreal*>(_v) = _t->folderOpenProgress(); break;
        case 28: *reinterpret_cast<FolioApplicationFolder**>(_v) = _t->currentFolderRaw(); break;
        case 29: *reinterpret_cast<qreal*>(_v) = _t->folderGridLength(); break;
        case 30: *reinterpret_cast<qreal*>(_v) = _t->settingsOpenProgress(); break;
        case 31: *reinterpret_cast<qreal*>(_v) = _t->appDrawerOpenProgress(); break;
        case 32: *reinterpret_cast<qreal*>(_v) = _t->appDrawerY(); break;
        case 33: *reinterpret_cast<qreal*>(_v) = _t->searchWidgetOpenProgress(); break;
        case 34: *reinterpret_cast<qreal*>(_v) = _t->searchWidgetY(); break;
        case 35: *reinterpret_cast<qreal*>(_v) = _t->delegateDragX(); break;
        case 36: *reinterpret_cast<qreal*>(_v) = _t->delegateDragY(); break;
        case 37: *reinterpret_cast<int*>(_v) = _t->currentPage(); break;
        case 38: *reinterpret_cast<int*>(_v) = _t->currentFolderPage(); break;
        case 39: *reinterpret_cast<bool*>(_v) = _t->isDraggingDelegate(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 3: _t->setViewWidth(*reinterpret_cast<qreal*>(_v)); break;
        case 4: _t->setViewHeight(*reinterpret_cast<qreal*>(_v)); break;
        case 5: _t->setViewTopPadding(*reinterpret_cast<qreal*>(_v)); break;
        case 6: _t->setViewBottomPadding(*reinterpret_cast<qreal*>(_v)); break;
        case 7: _t->setViewLeftPadding(*reinterpret_cast<qreal*>(_v)); break;
        case 8: _t->setViewRightPadding(*reinterpret_cast<qreal*>(_v)); break;
        case 13: _t->setPageViewX(*reinterpret_cast<qreal*>(_v)); break;
        case 14: _t->setPageWidth(*reinterpret_cast<qreal*>(_v)); break;
        case 15: _t->setPageHeight(*reinterpret_cast<qreal*>(_v)); break;
        case 20: _t->setPageDelegateLabelHeight(*reinterpret_cast<qreal*>(_v)); break;
        case 21: _t->setPageDelegateLabelSpacing(*reinterpret_cast<qreal*>(_v)); break;
        case 22: _t->setFolderViewX(*reinterpret_cast<qreal*>(_v)); break;
        case 23: _t->setFolderPageWidth(*reinterpret_cast<qreal*>(_v)); break;
        case 24: _t->setFolderPageHeight(*reinterpret_cast<qreal*>(_v)); break;
        case 25: _t->setFolderPageContentWidth(*reinterpret_cast<qreal*>(_v)); break;
        case 26: _t->setFolderPageContentHeight(*reinterpret_cast<qreal*>(_v)); break;
        case 27: _t->setFolderOpenProgress(*reinterpret_cast<qreal*>(_v)); break;
        case 30: _t->setSettingsOpenProgress(*reinterpret_cast<qreal*>(_v)); break;
        case 32: _t->setAppDrawerY(*reinterpret_cast<qreal*>(_v)); break;
        case 34: _t->setSearchWidgetY(*reinterpret_cast<qreal*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *HomeScreenState::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HomeScreenState::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN15HomeScreenStateE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int HomeScreenState::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 83)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 83;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 83)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 83;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 40;
    }
    return _id;
}

// SIGNAL 0
void HomeScreenState::swipeStateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void HomeScreenState::viewStateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void HomeScreenState::viewWidthChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void HomeScreenState::viewHeightChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void HomeScreenState::viewTopPaddingChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void HomeScreenState::viewBottomPaddingChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void HomeScreenState::viewLeftPaddingChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void HomeScreenState::viewRightPaddingChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void HomeScreenState::pageOrientationChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void HomeScreenState::favouritesBarLocationChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void HomeScreenState::pageRowsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}

// SIGNAL 11
void HomeScreenState::pageColumnsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 11, nullptr);
}

// SIGNAL 12
void HomeScreenState::pageViewXChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 12, nullptr);
}

// SIGNAL 13
void HomeScreenState::pageWidthChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 13, nullptr);
}

// SIGNAL 14
void HomeScreenState::pageHeightChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 14, nullptr);
}

// SIGNAL 15
void HomeScreenState::pageContentWidthChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 15, nullptr);
}

// SIGNAL 16
void HomeScreenState::pageContentHeightChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 16, nullptr);
}

// SIGNAL 17
void HomeScreenState::pageCellWidthChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 17, nullptr);
}

// SIGNAL 18
void HomeScreenState::pageCellHeightChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 18, nullptr);
}

// SIGNAL 19
void HomeScreenState::pageDelegateLabelHeightChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 19, nullptr);
}

// SIGNAL 20
void HomeScreenState::pageDelegateLabelSpacingChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 20, nullptr);
}

// SIGNAL 21
void HomeScreenState::folderViewXChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 21, nullptr);
}

// SIGNAL 22
void HomeScreenState::folderPageWidthChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 22, nullptr);
}

// SIGNAL 23
void HomeScreenState::folderPageHeightChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 23, nullptr);
}

// SIGNAL 24
void HomeScreenState::folderPageContentWidthChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 24, nullptr);
}

// SIGNAL 25
void HomeScreenState::folderPageContentHeightChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 25, nullptr);
}

// SIGNAL 26
void HomeScreenState::folderOpenProgressChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 26, nullptr);
}

// SIGNAL 27
void HomeScreenState::folderGridLengthChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 27, nullptr);
}

// SIGNAL 28
void HomeScreenState::currentFolderChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 28, nullptr);
}

// SIGNAL 29
void HomeScreenState::settingsOpenProgressChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 29, nullptr);
}

// SIGNAL 30
void HomeScreenState::appDrawerOpenProgressChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 30, nullptr);
}

// SIGNAL 31
void HomeScreenState::appDrawerYChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 31, nullptr);
}

// SIGNAL 32
void HomeScreenState::appDrawerClosed()
{
    QMetaObject::activate(this, &staticMetaObject, 32, nullptr);
}

// SIGNAL 33
void HomeScreenState::appDrawerOpened()
{
    QMetaObject::activate(this, &staticMetaObject, 33, nullptr);
}

// SIGNAL 34
void HomeScreenState::searchWidgetOpenProgressChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 34, nullptr);
}

// SIGNAL 35
void HomeScreenState::searchWidgetYChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 35, nullptr);
}

// SIGNAL 36
void HomeScreenState::delegateDragXChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 36, nullptr);
}

// SIGNAL 37
void HomeScreenState::delegateDragYChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 37, nullptr);
}

// SIGNAL 38
void HomeScreenState::delegateDragStarted()
{
    QMetaObject::activate(this, &staticMetaObject, 38, nullptr);
}

// SIGNAL 39
void HomeScreenState::delegateDragDropped()
{
    QMetaObject::activate(this, &staticMetaObject, 39, nullptr);
}

// SIGNAL 40
void HomeScreenState::delegateDragCancelled()
{
    QMetaObject::activate(this, &staticMetaObject, 40, nullptr);
}

// SIGNAL 41
void HomeScreenState::delegateDragFromPageStarted(int _t1, int _t2, int _t3)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 41, nullptr, _t1, _t2, _t3);
}

// SIGNAL 42
void HomeScreenState::delegateDragFromFavouritesStarted(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 42, nullptr, _t1);
}

// SIGNAL 43
void HomeScreenState::delegateDragFromAppDrawerStarted(QString _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 43, nullptr, _t1);
}

// SIGNAL 44
void HomeScreenState::delegateDragFromFolderStarted(FolioApplicationFolder * _t1, int _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 44, nullptr, _t1, _t2);
}

// SIGNAL 45
void HomeScreenState::delegateDragFromWidgetListStarted(QString _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 45, nullptr, _t1);
}

// SIGNAL 46
void HomeScreenState::pageNumChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 46, nullptr);
}

// SIGNAL 47
void HomeScreenState::folderPageNumChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 47, nullptr);
}

// SIGNAL 48
void HomeScreenState::isDraggingDelegateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 48, nullptr);
}

// SIGNAL 49
void HomeScreenState::leftCurrentFolder()
{
    QMetaObject::activate(this, &staticMetaObject, 49, nullptr);
}

// SIGNAL 50
void HomeScreenState::folderAboutToOpen(qreal _t1, qreal _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 50, nullptr, _t1, _t2);
}

// SIGNAL 51
void HomeScreenState::appDrawerGridYChanged(qreal _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 51, nullptr, _t1);
}

// SIGNAL 52
void HomeScreenState::appDrawerGridFlickRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 52, nullptr);
}
QT_WARNING_POP
