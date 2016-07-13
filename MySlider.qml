import QtQuick 2.0
import Qt.labs.controls 1.0

Item {
    width: 150
    height: 30
    clip: false
    visible: true
    Rectangle {
        id: rectangle1
        x: 0
        y: 0
        width: 150
        height: 30
        color: "#f0f0f0"
    }

    RangeSlider {
        id: slider1
        transformOrigin: Item.Center
        anchors.fill: parent
        leftPadding: 5.9
        first.value: 0.5
        second.value: 0.5
    }


}
