from PyQt5 import QtWidgets
from PyQt5.QtWidgets import QApplication, QMainWindow
import sys


class MyWindow(QMainWindow):
    def __init__(self):
        super(MyWindow, self).__init__()
        self.setGeometry(200, 200, 300, 300)
        self.setWindowTitle("Teste QT")
        self.initUI()

    def initUI(self):
        self.label = QtWidgets.QLabel(self)
        self.label.setText("First label")
        self.label.move(50, 50)   # já considera essa posição como sendo em relação a esquerda em cima

        self.button1 = QtWidgets.QPushButton(self)
        self.button1.setText("Botao1")
        self.button1.clicked.connect(self.clicked)
    
    def clicked(self):
        self.label.setText("Button pressed")
        self.update()
    
    def update(self):
        self.label.adjustSize()

def window():
    app = QApplication(sys.argv)
    win = MyWindow()
    
    win.show()
    sys.exit(app.exec_())


window()
