#include <iostream>
using namespace std;
class C
{
private:
    string C1;
    int C2;
public:
    C();
    ~C();
    void MC1(){cout << "MC1" << endl;}
    void MC2(){cout << "MC2" << endl;}
    void MC3(){cout << "MC3" << endl;}
};

C::C(){}

C::~C(){}
