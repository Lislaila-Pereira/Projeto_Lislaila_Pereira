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
    void MD4(){cout << "MD4" << endl;}
};

D::D(){}

D::~D(){}
