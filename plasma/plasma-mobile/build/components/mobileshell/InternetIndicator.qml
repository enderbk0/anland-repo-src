/*
    SPDX-FileCopyrightText: 2021 Devin Lin <espidev@gmail.com>
    SPDX-FileCopyrightText: 2019 Marco Martin <mart@kde.org>
    SPDX-FileCopyrightText: 2013-2017 Jan Grulich <jgrulich@redhat.com>

    SPDX-License-Identifier: LGPL-2.1-only OR LGPL-3.0-only OR LicenseRef-KDE-Accepted-LGPL
*/

import QtQuick
import QtQuick.Layouts
import QtQuick.Controls as QQC2
import org.kde.kirigami as Kirigami

Item {
    id: connectionIcon

    readonly property string icon: "network-wireless"
    readonly property bool indicatorRunning: false

    readonly property QtObject wirelessStatus: QtObject {
        readonly property string hotspotSSID: ""
    }

    readonly property QtObject connectionIconProvider: QtObject {
        readonly property string connectionIcon: "network-wireless"
        readonly property bool connecting: false
    }

    // Internet icon, only show while visible
    Kirigami.Icon {
        id: internetIcon

        anchors.fill: parent
        visible: true
        source: connectionIcon.icon
    }
}
