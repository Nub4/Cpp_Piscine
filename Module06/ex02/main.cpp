#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>

class Base{
    public:
        virtual ~Base() {};
};

class A : public Base {};
class B : public Base {};
class C : public Base {};

Base    *generate(void){
    Base *base;

    srand(time(0));
    switch (rand() % 3){
    case 0:
        base = new A;
        break;
    case 1:
        base = new B;
        break;
    case 2:
        base = new C;
        break;
    default:
        base = NULL;
    }
    return base;
}

void    identify(Base *p){
    if (dynamic_cast<A *>(p))
        std::cout << "A\n";
    else if (dynamic_cast<B *>(p))
        std::cout << "B\n";
    else if (dynamic_cast<C *>(p))
        std::cout << "C\n";
}

void    identify(Base &p){
    try{
        void(dynamic_cast<A &>(p));
        std::cout << "A\n";
    }
    catch(...){}
    
    try{
        void(dynamic_cast<B &>(p));
        std::cout << "B\n";
    }
    catch(...){}

    try{
        void(dynamic_cast<C &>(p));
        std::cout << "C\n";
    }
    catch(...){}
}

int main(void)
{
    Base *base = generate();
    identify(base);
    identify(*base);
    delete base;
    return 0;
}