#include <iostream>
using namespace std;

class B
{
private:
    int B1;
    float B2;
public:
    B(){ 
        cout<<"Digite o valor de B1: ";
        cin>>B1;
        cout<<"\nDigite o valor de B2: ";
        cin>>B2;
    };
    ~B();
    int getB1() { return B1; }
    float getB2() { return B2; }
    void MB1(){ cout << "MB1" << endl; }
    void MB2(){ cout << "MB2" << endl; }
};

B::~B(){}

int main(){
}

/*2.	Crie duas classes na linguagem que preferir, uma chamada A e a outra B. A classe A tem os atributos int A1 e float A2. A classe B tem os atributos int B1, float B2. O aluno pode alterar o tipo de variável para adequar a declaração a linguagem escolhida (int, integer, Integer,... ou float, real, decimal,....). Crie os gets e sets para esses atributos. A classe A deve ter os métodos MA1() e MA2(). A classe B deve ter os métodos MB1() e MB2(). Dentro de cada método coloque uma instrução de comando que manda imprimir o nome do método.  Adicione (upload) dessas duas classes, A e B, no GitHub. Atenção, não se esqueça de apresentar o código das duas classes no relatório e a tela mostrando os dois arquivos inseridos no repositório do Github.*/