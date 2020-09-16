// my_classes.cc
#include "my_classes.h" // header in local directory
#include "test1.h"
#include "test2.h"

using namespace test;
using namespace std;
int myClass::doSomething(int fNumber, int sNumber)
{
    testClass1 tmpTest1;
    testClass2 tmpTest2;
    return tmpTest1.testMethod1(fNumber, sNumber) + tmpTest2.testMethod2(fNumber, sNumber);
}
void myClass::doSomething()
{
    cout << "Error cannot calculate numbers" << endl;
}
void myClassHello::stringOut(string text)
{
    cout << text << endl;
}