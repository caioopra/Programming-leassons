import cherrypy
from random import sample
from string import hexdigits


class HelloWorld:
    @cherrypy.expose
    def index(self):
        return "Hello World!"
    
    @cherrypy.expose
    def generate(self, length=10):
        return "".join(sample(hexdigits, int(length))) 

if __name__ == "__main__":
    cherrypy.quickstart(HelloWorld())