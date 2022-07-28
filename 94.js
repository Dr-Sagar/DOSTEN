// console.log("Say Hello to the World!");


const { debug } = require('console');
const http = require('http');

const hostname = '127.0.0.1';
const port = 3000;

const server = http.createServer((req, res) => {
  res.statusCode = 200;
  res.setHeader('Content-Type', 'text/html');
  res.end(`<!DOCTYPE html>
  <html lang="en">
    <head>
      <meta charset="UTF-8" />
      <meta http-equiv="X-UA-Compatible" content="IE=edge" />
      <meta name="viewport" content="width=device-width, initial-scale=1.0" />
      <title>Random Image</title>
  
      <link
        rel="icon"
        type="image"
        href="https://source.unsplash.com/random/?animals"
      />
  
      <style>
        header {
          margin: auto auto;
        }
        body {
          display: flex;
        }
  
        .kl {
          border-radius: 30px;
        }
      </style>
    </head>
    <body>
      <header>
        <h3 style="text-align: justify">DOSTEN WEBPAGE</h3>
  
        <img
          class="kl"
          style="height: 450px"
          src="https://source.unsplash.com/random/?animals"
          alt="Animals"
        />
      </header>
    </body>
  </html>
  `);
//   (debug=True)
});

server.listen(port, hostname, () => {
  console.log(`Server running at http://${hostname}:${port}/`);
});