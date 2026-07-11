// SPDX-FileCopyrightText: 2025 Devin Lin <devin@kde.org>
// SPDX-License-Identifier: GPL-2.0-or-later

pragma Singleton

import QtQuick

QtObject {
    // Stubbed for Termux/Android where PlasmaNM is unavailable
    readonly property QtObject handler: QtObject {
        function enableAirplaneMode(enable) {}
        function createHotspot() {}
        function stopHotspot() {}
        function enableWireless(enable) {}
    }

    readonly property QtObject wirelessStatus: QtObject {
        readonly property string hotspotSSID: ""
        readonly property string wifiSSID: ""
    }
}