import sys
from PyQt5.QtWidgets import QApplication, QMainWindow, QGraphicsView, QGraphicsScene, QGraphicsEllipseItem, QGraphicsRectItem, QPushButton, QVBoxLayout, QWidget
from PyQt5.QtGui import QBrush, QColor, QPainter
from PyQt5.QtCore import Qt

class Viewport(QGraphicsView):
    def __init__(self):
        super().__init__()
        
        self.setScene(QGraphicsScene(self))
        self.setSceneRect(-500, -500, 1000, 1000)  # Set the initial scene bounds
        
        self.setRenderHint(QPainter.Antialiasing)
        
        self.zoom_factor = 1.0

    def wheelEvent(self, event):
        # Implement zooming using the mouse wheel
        zoom_in_factor = 1.2
        zoom_out_factor = 1 / zoom_in_factor
        
        if event.angleDelta().y() > 0:
            self.zoom_factor *= zoom_in_factor
        else:
            self.zoom_factor *= zoom_out_factor
        
        self.scale(self.zoom_factor, self.zoom_factor)

class MyWindow(QMainWindow):
    def __init__(self):
        super().__init__()
        
        self.setWindowTitle("Zoomable Viewport")
        
        self.viewport = Viewport()
        self.setCentralWidget(self.viewport)

        self.zoom_in_button = QPushButton("Zoom In")
        self.zoom_out_button = QPushButton("Zoom Out")

        self.zoom_in_button.clicked.connect(self.zoom_in)
        self.zoom_out_button.clicked.connect(self.zoom_out)

        button_layout = QVBoxLayout()
        button_layout.addWidget(self.zoom_in_button)
        button_layout.addWidget(self.zoom_out_button)

        button_container = QWidget()
        button_container.setLayout(button_layout)

        self.addDockWidget(Qt.RightDockWidgetArea, button_container)

        # Add shapes to the scene
        ellipse_item = QGraphicsEllipseItem(-50, -50, 100, 100)
        ellipse_item.setBrush(QBrush(QColor(255, 0, 0)))
        
        rect_item = QGraphicsRectItem(-75, -75, 150, 150)
        rect_item.setBrush(QBrush(QColor(0, 0, 255)))
        
        self.viewport.scene().addItem(ellipse_item)
        self.viewport.scene().addItem(rect_item)

    def zoom_in(self):
        self.viewport.zoom_factor *= 1.2
        self.viewport.scale(self.viewport.zoom_factor, self.viewport.zoom_factor)

    def zoom_out(self):
        self.viewport.zoom_factor *= 1 / 1.2
        self.viewport.scale(self.viewport.zoom_factor, self.viewport.zoom_factor)

if __name__ == "__main__":
    app = QApplication(sys.argv)
    mainWindow = QMainWindow()
    wind = MyWindow(mainWindow)
    wind.show()
    sys.exit(app.exec_())