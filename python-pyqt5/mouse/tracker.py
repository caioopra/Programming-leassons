import sys
from PyQt5.QtWidgets import QApplication, QLabel, QWidget


class MouseTracker(QWidget):
    def __init__(self):
        super().__init__()
        self.initUi()
        self.setMouseTracking(True)

    def initUi(self):
        self.setGeometry(300, 300, 300, 200)
        
        self.label = QLabel(self)
        self.label.resize(200, 40)

        self.show()

    def mouseMoveEvent(self, event):
        self.label.setText(f"Coords {event.x(), event.y()}")


if __name__ == "__main__":
    app = QApplication(sys.argv)
    ex = MouseTracker()
    sys.exit(app.exec_())

