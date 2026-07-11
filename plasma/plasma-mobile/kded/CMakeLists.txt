# SPDX-FileCopyrightText: 2023 Devin Lin <devin@kde.org>
# SPDX-License-Identifier: GPL-2.0-or-later OR LicenseRef-KDE-Accepted-GPL

if(KF6ModemManagerQt_FOUND AND KF6NetworkManagerQt_FOUND)
    add_subdirectory(autodetectapn)
endif()
add_subdirectory(start)