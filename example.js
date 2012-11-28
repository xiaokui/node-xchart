
var addon = require('./build/Release/addon1');

var http = require('http');
http.createServer(function (req, res) {
        res.writeHead(200, {'Content-Type': 'text/plain'});

        var obj = new addon.MyObject(10);
        console.log( obj.plusOne() ); // 11
        console.log( obj.plusOne() ); // 12
        console.log( obj.plusOne() ); // 13

        res.end('Hello World\n');
        }).listen(1337, '127.0.0.1');
console.log('Server running at http://127.0.0.1:1337/');
