/*
    SPDX-FileCopyrightText: 2021 Devin Lin <devin@kde.org>
    SPDX-FileCopyrightText: 2019 Marco Martin <mart@kde.org>
    SPDX-FileCopyrightText: 2013-2017 Jan Grulich <jgrulich@redhat.com>

    SPDX-License-Identifier: LGPL-2.1-only OR LGPL-3.0-only OR LicenseRef-KDE-Accepted-LGPL
*/

pragma Singleton

import QtQuick 2.2
import QtQuick.Layouts 1.4

QtObject {
    id: root
    readonly property bool isVisible: false
    readonly property string icon: "network-bluetooth"

    property bool deviceConnected: false

    function updateStatus() {
        root.deviceConnected = false;
    }

    Component.onCompleted: {
        updateStatus();
    }
}

