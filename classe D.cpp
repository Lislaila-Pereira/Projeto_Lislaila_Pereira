#include <iostream>
using namespace std;
class D
{
private:
    int D1, D2;
public:
    D();
    ~D();
    void MD1(){cout << "MD1" << endl;}
    void MD2(){cout << "MD2" << endl;}
    void MD3(){cout << "MD3" << endl;}
};

D::D(){}

D::~D(){}