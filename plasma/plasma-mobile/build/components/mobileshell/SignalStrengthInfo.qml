/*
 *  SPDX-FileCopyrightText: 2021 Devin Lin <devin@kde.org>
 *  SPDX-FileCopyrightText: 2015 Marco Martin <mart@kde.org>
 *  SPDX-FileCopyrightText: 2021 Tobias Fella <fella@posteo.de>
 *
 *  SPDX-License-Identifier: GPL-2.0-or-later
 */

pragma Singleton

import QtQuick 2.1

QtObject {
    // Stubbed for Termux/Android where Cellular/ModemList is unavailable
    readonly property QtObject _modemList: QtObject {
        readonly property QtObject primaryModem: null
        readonly property bool modemAvailable: false
    }

    readonly property string icon: "network-mobile-0"

    readonly property string label: ""

    readonly property bool showIndicator: false
}
