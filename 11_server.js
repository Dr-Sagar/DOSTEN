// Failed


const http = require('http');
const fs = require('fs');

const hostname = '127.0.0.1';
const port = 3000;

const home=fs.readFileSync('./11_index.html')
const services=fs.readFileSync('./11_search.html')
const about=fs.readFileSync('./11_about.html')
const contact=fs.readFileSync('./11_contact.html')

const server=http.createServer((req,res)=>{
    res.statusCode=200;
    res.setHeader('Content-type,text/html');
    res.end('hello World!');
});

server.listen(port,hostname,()=>{
// server.listen(3000,'127.0.0.1',()=>{
    console.log('Server running at http://${hostname}:${port}/');
}); 