// my_classes.h
#include <iostream>
#include <string>
namespace test
{
    class myClass
    {
    public:
        int doSomething(int fNumber, int sNumber);
        void doSomething();
    };

    class myClassHello
    {
    public:
        void stringOut(std::string text);
    };

}