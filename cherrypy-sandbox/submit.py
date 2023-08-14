import random
import string
import cherrypy
import json

class Generator:
    @cherrypy.expose
    def index(self):
        return """
        <html>
            <head></head>
            <body>
                <form method="get" action="generate">
                <input type="text" value="10" name="length" />
                <button type="submit">Generate</button>
            </body>
        </html>
        """
    
    @cherrypy.expose 
    def generate(self, length=10):
        return "".join(random.sample(string.hexdigits, int(length)))
    
    
    @cherrypy.expose
    def json(self):
        response = "Pong"
        return json.dumps({"Ping": response})
    
if __name__ == "__main__":
    cherrypy.quickstart(Generator())
