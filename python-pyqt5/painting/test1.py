import sys
from PyQt5.QtWidgets import QApplication, QWidget
from PyQt5.QtGui import QPainter, QColor


class MyWidget(QWidget):
    def __init__(self):
        super().__init__()

        self.setGeometry(100, 100, 300, 200)
        self.setWindowTitle("drawing")

    def paintEvent(self, event):
        painter = QPainter(self)
        painter.setPen(QColor(255, 0, 0))
        painter.drawRect(50,50, 100, 100)
        print("asdasdas")

if __name__ == "__main__":
    app = QApplication(sys.argv)
    widget = MyWidget()
    widget.show()
    sys.exit(app.exec_())
