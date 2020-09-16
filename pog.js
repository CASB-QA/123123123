//em++ main.cc my_classes.cc test1.cc test2.cc -o comp.html -s LINKABLE=1 -s EXPORT_ALL=1 -s EXTRA_EXPORTED_RUNTIME_METHODS='["stringToUTF8", "UTF8ToString"]'
//-s EXPORTED_FUNCTIONS='["_like","_like2","_hello"]'
const Module = require("./comp.js")

Module.onRuntimeInitialized = () => {
    var jsString = 'Hello';
    var lengthBytes = (jsString.length+1)*2;
    var stringOnWasmHeap = Module._malloc(lengthBytes);
    Module.stringToUTF8(jsString, stringOnWasmHeap, lengthBytes);
    console.log(stringOnWasmHeap);
    console.log(Module._hello(stringOnWasmHeap));
}





