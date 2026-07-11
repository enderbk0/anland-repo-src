# Install script for directory: /data/data/com.termux/files/home/plasmamobile/plasma-mobile/components/mobileshell

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/data/data/com.termux/files/usr")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "RelWithDebInfo")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "0")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

# Set path to fallback-tool for dependency-resolution.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "/data/data/com.termux/files/usr/bin/llvm-objdump")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "plasma-mobile" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/qt6/qml/org/kde/plasma/private/mobileshell/libqml_org_kde_plasma_private_mobileshell_mobileshellplugin.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/qt6/qml/org/kde/plasma/private/mobileshell/libqml_org_kde_plasma_private_mobileshell_mobileshellplugin.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/qt6/qml/org/kde/plasma/private/mobileshell/libqml_org_kde_plasma_private_mobileshell_mobileshellplugin.so"
         RPATH [[$ORIGIN/../../../../../../lib]])
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/qt6/qml/org/kde/plasma/private/mobileshell" TYPE MODULE FILES "/data/data/com.termux/files/home/plasmamobile/plasma-mobile/build/components/mobileshell/libqml_org_kde_plasma_private_mobileshell_mobileshellplugin.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/qt6/qml/org/kde/plasma/private/mobileshell/libqml_org_kde_plasma_private_mobileshell_mobileshellplugin.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/qt6/qml/org/kde/plasma/private/mobileshell/libqml_org_kde_plasma_private_mobileshell_mobileshellplugin.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/qt6/qml/org/kde/plasma/private/mobileshell/libqml_org_kde_plasma_private_mobileshell_mobileshellplugin.so"
         OLD_RPATH ":::::::::::::::::::::::::::::"
         NEW_RPATH [[$ORIGIN/../../../../../../lib]])
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/data/data/com.termux/files/usr/bin/llvm-strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/qt6/qml/org/kde/plasma/private/mobileshell/libqml_org_kde_plasma_private_mobileshell_mobileshellplugin.so")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "plasma-mobile" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/qt6/qml/org/kde/plasma/private/mobileshell" TYPE FILE FILES "/data/data/com.termux/files/home/plasmamobile/plasma-mobile/build/components/mobileshell/qmldir")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "plasma-mobile" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/qt6/qml/org/kde/plasma/private/mobileshell" TYPE FILE FILES "/data/data/com.termux/files/home/plasmamobile/plasma-mobile/build/components/mobileshell/mobileshellplugin.qmltypes")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "plasma-mobile" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/qt6/qml/org/kde/plasma/private/mobileshell" TYPE FILE RENAME "kde-qmlmodule.version" FILES "/data/data/com.termux/files/home/plasmamobile/plasma-mobile/build/components/mobileshell/mobileshellplugin-kde-qmlmodule.version")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "plasma-mobile" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/qt6/qml/org/kde/plasma/private/mobileshell" TYPE FILE FILES
    "/data/data/com.termux/files/home/plasmamobile/plasma-mobile/components/mobileshell/qml/actiondrawer/ActionDrawer.qml"
    "/data/data/com.termux/files/home/plasmamobile/plasma-mobile/components/mobileshell/qml/actiondrawer/ActionDrawerOpenSurface.qml"
    "/data/data/com.termux/files/home/plasmamobile/plasma-mobile/components/mobileshell/qml/actiondrawer/ActionDrawerWindow.qml"
    "/data/data/com.termux/files/home/plasmamobile/plasma-mobile/components/mobileshell/qml/components/AppLaunch.qml"
    "/data/data/com.termux/files/home/plasmamobile/plasma-mobile/components/mobileshell/qml/components/BaseItem.qml"
    "/data/data/com.termux/files/home/plasmamobile/plasma-mobile/components/mobileshell/qml/components/Constants.qml"
    "/data/data/com.termux/files/home/plasmamobile/plasma-mobile/components/mobileshell/qml/components/Flickable.qml"
    "/data/data/com.termux/files/home/plasmamobile/plasma-mobile/components/mobileshell/qml/components/FlickableOpacityGradient.qml"
    "/data/data/com.termux/files/home/plasmamobile/plasma-mobile/components/mobileshell/qml/components/GridView.qml"
    "/data/data/com.termux/files/home/plasmamobile/plasma-mobile/components/mobileshell/qml/components/HapticsEffect.qml"
    "/data/data/com.termux/files/home/plasmamobile/plasma-mobile/components/mobileshell/qml/components/ListView.qml"
    "/data/data/com.termux/files/home/plasmamobile/plasma-mobile/components/mobileshell/qml/components/MarqueeLabel.qml"
    "/data/data/com.termux/files/home/plasmamobile/plasma-mobile/components/mobileshell/qml/components/PanelBackground.qml"
    "/data/data/com.termux/files/home/plasmamobile/plasma-mobile/components/mobileshell/qml/components/ScreenEdgeDragEffect.qml"
    "/data/data/com.termux/files/home/plasmamobile/plasma-mobile/components/mobileshell/qml/components/StartupFeedbackPanelFill.qml"
    "/data/data/com.termux/files/home/plasmamobile/plasma-mobile/components/mobileshell/qml/components/StartupFeedbackWindows.qml"
    "/data/data/com.termux/files/home/plasmamobile/plasma-mobile/components/mobileshell/qml/components/TextDropShadow.qml"
    "/data/data/com.termux/files/home/plasmamobile/plasma-mobile/components/mobileshell/qml/components/VelocityCalculator.qml"
    "/data/data/com.termux/files/home/plasmamobile/plasma-mobile/components/mobileshell/qml/dataproviders/AudioInfo.qml"
    "/data/data/com.termux/files/home/plasmamobile/plasma-mobile/components/mobileshell/qml/dataproviders/BatteryInfo.qml"
    "/data/data/com.termux/files/home/plasmamobile/plasma-mobile/components/mobileshell/qml/dataproviders/BluetoothInfo.qml"
    "/data/data/com.termux/files/home/plasmamobile/plasma-mobile/components/mobileshell/qml/dataproviders/NetworkInfo.qml"
    "/data/data/com.termux/files/home/plasmamobile/plasma-mobile/components/mobileshell/qml/dataproviders/SignalStrengthInfo.qml"
    "/data/data/com.termux/files/home/plasmamobile/plasma-mobile/components/mobileshell/qml/homescreen/BlurEffect.qml"
    "/data/data/com.termux/files/home/plasmamobile/plasma-mobile/components/mobileshell/qml/homescreen/DeviceLock.qml"
    "/data/data/com.termux/files/home/plasmamobile/plasma-mobile/components/mobileshell/qml/homescreen/HomeScreen.qml"
    "/data/data/com.termux/files/home/plasmamobile/plasma-mobile/components/mobileshell/qml/homescreen/WallpaperSelector.qml"
    "/data/data/com.termux/files/home/plasmamobile/plasma-mobile/components/mobileshell/qml/navigationpanel/GesturePanel.qml"
    "/data/data/com.termux/files/home/plasmamobile/plasma-mobile/components/mobileshell/qml/navigationpanel/NavigationPanel.qml"
    "/data/data/com.termux/files/home/plasmamobile/plasma-mobile/components/mobileshell/qml/navigationpanel/NavigationPanelAction.qml"
    "/data/data/com.termux/files/home/plasmamobile/plasma-mobile/components/mobileshell/qml/navigationpanel/NavigationPanelButton.qml"
    "/data/data/com.termux/files/home/plasmamobile/plasma-mobile/components/mobileshell/qml/popups/actionbuttons/ActionButton.qml"
    "/data/data/com.termux/files/home/plasmamobile/plasma-mobile/components/mobileshell/qml/popups/actionbuttons/ActionButtonsProvider.qml"
    "/data/data/com.termux/files/home/plasmamobile/plasma-mobile/components/mobileshell/qml/popups/actionbuttons/RotationButton.qml"
    "/data/data/com.termux/files/home/plasmamobile/plasma-mobile/components/mobileshell/qml/popups/notifications/NotificationPopup.qml"
    "/data/data/com.termux/files/home/plasmamobile/plasma-mobile/components/mobileshell/qml/popups/notifications/NotificationPopupManager.qml"
    "/data/data/com.termux/files/home/plasmamobile/plasma-mobile/components/mobileshell/qml/popups/notifications/NotificationPopupProvider.qml"
    "/data/data/com.termux/files/home/plasmamobile/plasma-mobile/components/mobileshell/qml/popups/notifications/PulseAudio.qml"
    "/data/data/com.termux/files/home/plasmamobile/plasma-mobile/components/mobileshell/qml/popups/kscreenosd/KScreenOSDProvider.qml"
    "/data/data/com.termux/files/home/plasmamobile/plasma-mobile/components/mobileshell/qml/popups/volumeosd/AudioApplet.qml"
    "/data/data/com.termux/files/home/plasmamobile/plasma-mobile/components/mobileshell/qml/popups/volumeosd/DeviceListItem.qml"
    "/data/data/com.termux/files/home/plasmamobile/plasma-mobile/components/mobileshell/qml/popups/volumeosd/icon.js"
    "/data/data/com.termux/files/home/plasmamobile/plasma-mobile/components/mobileshell/qml/popups/volumeosd/ListItemBase.qml"
    "/data/data/com.termux/files/home/plasmamobile/plasma-mobile/components/mobileshell/qml/popups/volumeosd/PopupCard.qml"
    "/data/data/com.termux/files/home/plasmamobile/plasma-mobile/components/mobileshell/qml/popups/volumeosd/StreamListItem.qml"
    "/data/data/com.termux/files/home/plasmamobile/plasma-mobile/components/mobileshell/qml/popups/volumeosd/VolumeChangedPopup.qml"
    "/data/data/com.termux/files/home/plasmamobile/plasma-mobile/components/mobileshell/qml/popups/volumeosd/VolumeOSD.qml"
    "/data/data/com.termux/files/home/plasmamobile/plasma-mobile/components/mobileshell/qml/popups/volumeosd/VolumeOSDProvider.qml"
    "/data/data/com.termux/files/home/plasmamobile/plasma-mobile/components/mobileshell/qml/popups/volumeosd/VolumeSlider.qml"
    "/data/data/com.termux/files/home/plasmamobile/plasma-mobile/components/mobileshell/qml/popups/PopupProviderLoader.qml"
    "/data/data/com.termux/files/home/plasmamobile/plasma-mobile/components/mobileshell/qml/statusbar/indicators/BatteryIndicator.qml"
    "/data/data/com.termux/files/home/plasmamobile/plasma-mobile/components/mobileshell/qml/statusbar/indicators/BluetoothIndicator.qml"
    "/data/data/com.termux/files/home/plasmamobile/plasma-mobile/components/mobileshell/qml/statusbar/indicators/InternetIndicator.qml"
    "/data/data/com.termux/files/home/plasmamobile/plasma-mobile/components/mobileshell/qml/statusbar/indicators/SignalStrengthIndicator.qml"
    "/data/data/com.termux/files/home/plasmamobile/plasma-mobile/components/mobileshell/qml/statusbar/indicators/VolumeIndicator.qml"
    "/data/data/com.termux/files/home/plasmamobile/plasma-mobile/components/mobileshell/qml/statusbar/ClockText.qml"
    "/data/data/com.termux/files/home/plasmamobile/plasma-mobile/components/mobileshell/qml/statusbar/StatusBar.qml"
    "/data/data/com.termux/files/home/plasmamobile/plasma-mobile/components/mobileshell/qml/widgets/krunner/KRunnerScreen.qml"
    "/data/data/com.termux/files/home/plasmamobile/plasma-mobile/components/mobileshell/qml/widgets/mediacontrols/BlurredBackground.qml"
    "/data/data/com.termux/files/home/plasmamobile/plasma-mobile/components/mobileshell/qml/widgets/mediacontrols/MediaControlsSource.qml"
    "/data/data/com.termux/files/home/plasmamobile/plasma-mobile/components/mobileshell/qml/widgets/mediacontrols/MediaControlsWidget.qml"
    "/data/data/com.termux/files/home/plasmamobile/plasma-mobile/components/mobileshell/qml/widgets/notifications/BaseNotificationItem.qml"
    "/data/data/com.termux/files/home/plasmamobile/plasma-mobile/components/mobileshell/qml/widgets/notifications/NotificationBodyLabel.qml"
    "/data/data/com.termux/files/home/plasmamobile/plasma-mobile/components/mobileshell/qml/widgets/notifications/NotificationCard.qml"
    "/data/data/com.termux/files/home/plasmamobile/plasma-mobile/components/mobileshell/qml/widgets/notifications/NotificationEditContextMenu.qml"
    "/data/data/com.termux/files/home/plasmamobile/plasma-mobile/components/mobileshell/qml/widgets/notifications/NotificationFooterActions.qml"
    "/data/data/com.termux/files/home/plasmamobile/plasma-mobile/components/mobileshell/qml/widgets/notifications/NotificationGroupHeader.qml"
    "/data/data/com.termux/files/home/plasmamobile/plasma-mobile/components/mobileshell/qml/widgets/notifications/NotificationItem.qml"
    "/data/data/com.termux/files/home/plasmamobile/plasma-mobile/components/mobileshell/qml/widgets/notifications/NotificationJobDetails.qml"
    "/data/data/com.termux/files/home/plasmamobile/plasma-mobile/components/mobileshell/qml/widgets/notifications/NotificationJobItem.qml"
    "/data/data/com.termux/files/home/plasmamobile/plasma-mobile/components/mobileshell/qml/widgets/notifications/NotificationPopupItem.qml"
    "/data/data/com.termux/files/home/plasmamobile/plasma-mobile/components/mobileshell/qml/widgets/notifications/NotificationReplyField.qml"
    "/data/data/com.termux/files/home/plasmamobile/plasma-mobile/components/mobileshell/qml/widgets/notifications/NotificationsModelType.qml"
    "/data/data/com.termux/files/home/plasmamobile/plasma-mobile/components/mobileshell/qml/widgets/notifications/NotificationsUtils.js"
    "/data/data/com.termux/files/home/plasmamobile/plasma-mobile/components/mobileshell/qml/widgets/notifications/NotificationsWidget.qml"
    "/data/data/com.termux/files/home/plasmamobile/plasma-mobile/components/mobileshell/qml/widgets/notifications/NotificationTimeText.qml"
    "/data/data/com.termux/files/home/plasmamobile/plasma-mobile/components/mobileshell/qml/widgets/notifications/ThumbnailStrip.qml"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "plasma-mobile" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/qt6/qml/org/kde/plasma/private/mobileshell/actiondrawer/private" TYPE FILE FILES
    "/data/data/com.termux/files/home/plasmamobile/plasma-mobile/components/mobileshell/qml/actiondrawer/private/BrightnessItem.qml"
    "/data/data/com.termux/files/home/plasmamobile/plasma-mobile/components/mobileshell/qml/actiondrawer/private/Handle.qml"
    "/data/data/com.termux/files/home/plasmamobile/plasma-mobile/components/mobileshell/qml/actiondrawer/private/QuickSettings.qml"
    "/data/data/com.termux/files/home/plasmamobile/plasma-mobile/components/mobileshell/qml/actiondrawer/private/QuickSettingsDelegate.qml"
    "/data/data/com.termux/files/home/plasmamobile/plasma-mobile/components/mobileshell/qml/actiondrawer/private/QuickSettingsDrawer.qml"
    "/data/data/com.termux/files/home/plasmamobile/plasma-mobile/components/mobileshell/qml/actiondrawer/private/QuickSettingsFullDelegate.qml"
    "/data/data/com.termux/files/home/plasmamobile/plasma-mobile/components/mobileshell/qml/actiondrawer/private/QuickSettingsMinimizedDelegate.qml"
    "/data/data/com.termux/files/home/plasmamobile/plasma-mobile/components/mobileshell/qml/actiondrawer/private/QuickSettingsPanel.qml"
    "/data/data/com.termux/files/home/plasmamobile/plasma-mobile/components/mobileshell/qml/actiondrawer/private/ContentContainer.qml"
    "/data/data/com.termux/files/home/plasmamobile/plasma-mobile/components/mobileshell/qml/actiondrawer/private/LandscapeContentContainer.qml"
    "/data/data/com.termux/files/home/plasmamobile/plasma-mobile/components/mobileshell/qml/actiondrawer/private/NotificationDrawer.qml"
    "/data/data/com.termux/files/home/plasmamobile/plasma-mobile/components/mobileshell/qml/actiondrawer/private/PortraitContentContainer.qml"
    )
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
if(CMAKE_INSTALL_LOCAL_ONLY)
  file(WRITE "/data/data/com.termux/files/home/plasmamobile/plasma-mobile/build/components/mobileshell/install_local_manifest.txt"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
endif()
