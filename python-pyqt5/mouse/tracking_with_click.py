import sys
from PyQt5.QtWidgets import QApplication, QLabel, QWidget
from PyQt5.QtCore import Qt, pyqtSignal 

class MouseTracker(QWidget):
    def __init__(self):
        super().__init__()
        self.initUi()
        self.setMouseTracking(True)
        self.clicked = pyqtSignal()
        self.pressed_position = None

    def initUi(self):
        self.setGeometry(300, 300, 300, 200)
        
        self.label = QLabel(self)
        self.label.resize(200, 40)

        self.show()

    def mouseMoveEvent(self, event):
        self.label.setText(f"Coords {event.x(), event.y()}")

    def mousePressEvent(self, event):
        if event.button() == Qt.LeftButton:
            self.pressed_position = event.pos()

    def mouseReleaseEvent(self, event):
        if (self.pressed_position is not None and
            event.button() == Qt.LeftButton and
            event.pos() in self.rect()):

            self.label.setText(f"Pressed at {event.x(), event.y()}")

        self.pressPos = None


if __name__ == "__main__":
    app = QApplication(sys.argv)
    ex = MouseTracker()
    sys.exit(app.exec_())

