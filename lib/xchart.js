
//

//
// Load bindings binary
//
var oldDir = process.cwd();
//try {
//  // ensure we're in the right location so we can dynamically load the bundled Qt libraries
//  process.chdir(__dirname + '/../deps/qt-4.8.0/' + process.platform + '/' + process.arch);
//} catch (e) {
//  // if no local deps/ dir, assume shared lib linking. keep going
//}

var xchart = require(__dirname + '/../build/Release/xchart.node');
process.chdir(oldDir);

module.exports = xchart;
