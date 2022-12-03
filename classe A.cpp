#include <iostream>
using namespace std;
class A
{
private:
    int A1;
    float A2;
public:
    A(){ 
        cout<<"Digite o valor de A1: ";
        cin>>A1;
        cout<<"\nDigite o valor de A2: ";
        cin>>A2;
    };
    ~A();
    int getA1(){ return A1;}
    float getA2() { return A2; }
    void MA1(){ cout<<"MA1" << endl; }
    void MA2(){ cout<<"MA2" << endl; }
    void MA3(){ cout<<"Alteracao a classe A partir do clone" << endl; }
};
A::~A(){}

int main(){
 
}

/*2.	Crie duas classes na linguagem que preferir, uma chamada A e a outra B. A classe A tem os atributos int A1 e float A2. A classe B tem os atributos int B1, float B2. O aluno pode alterar o tipo de variável para adequar a declaração a linguagem escolhida (int, integer, Integer,... ou float, real, decimal,....). Crie os gets e sets para esses atributos. A classe A deve ter os métodos MA1() e MA2(). A classe B deve ter os métodos MB1() e MB2(). Dentro de cada método coloque uma instrução de comando que manda imprimir o nome do método.  Adicione (upload) dessas duas classes, A e B, no GitHub. Atenção, não se esqueça de apresentar o código das duas classes no relatório e a tela mostrando os dois arquivos inseridos no repositório do Github.*/