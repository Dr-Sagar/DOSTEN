const http = require('http');

const hostname = '127.0.0.1';
const port = 3000;

const server = http.createServer((req, res) => {
  res.statusCode = 200;
  res.setHeader('Content-Type', 'text/HTML');
  res.end( 
   
    <html lang="en">
    <head>
         
        <title>Document</title>
    </head>
    <body>
        <h1 style="background-color: aqua;">Labrador in the cage</h1>
    </body>
    </html>);
});

server.listen(port, hostname, () => {
  console.log(`Server running at http://${hostname}:${port}/`);
});