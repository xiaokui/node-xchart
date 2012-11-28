
var addon = require('./build/Release/hello');
console.log(addon.hello());


//
var addon = require('./build/Release/addon');
console.log( 'This should be eight:', addon.add(3,5) );


//
var addon = require('./build/Release/addon1');

var obj = new addon.MyObject(10);
console.log( obj.plusOne() ); // 11
console.log( obj.plusOne() ); // 12
console.log( obj.plusOne() ); // 13
