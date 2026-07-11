# SPDX-FileCopyrightText: 2023 Devin Lin <devin@kde.org>
# SPDX-License-Identifier: GPL-2.0-or-later

plasma_install_package(finished org.kde.plasma.mobileinitialstart.finished mobileinitialstart)
plasma_install_package(systemnavigation org.kde.plasma.mobileinitialstart.systemnavigation mobileinitialstart)
if(KF6ModemManagerQt_FOUND AND KF6NetworkManagerQt_FOUND)
    add_subdirectory(cellular)
endif()
add_subdirectory(prepare)
add_subdirectory(time)
if(KF6NetworkManagerQt_FOUND)
    add_subdirectory(wifi)
endif()
