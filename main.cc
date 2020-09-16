
// em++ main.cc my_classes.cc test1.cc test2.cc -o comp.html -s LINKABLE=1 -s EXPORT_ALL=1 -s EXPORTED_FUNCTIONS='["_like","_like2","_hello"]'


#include "my_classes.h"
using namespace test;
using namespace std;

extern "C" {
  int like(int a, int b) {

    myClass myObj;     // Create an object of MyClass
    return myObj.doSomething(a, b);

  }
  void like2() {

    myClass myObj;     // Create an object of MyClass
    myObj.doSomething();

  }
  void hello(char* text) {
    myClassHello hi;    // Create an object of MyClass
    hi.stringOut(text);
  }
}
