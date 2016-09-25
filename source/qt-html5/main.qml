import QtQuick 2.5
import QtQuick.Window 2.2
import QtWebEngine 1.2

Window {
    visible: true
    visibility: "FullScreen"

    WebEngineView {
        anchors.fill: parent
        url: "file:///" + applicationPath + "/html5/index.html"
    }
}
