#include <iostream>
#include <cmath>
using namespace std;
    int main() {
    //Declaração das variáveis dos lados do triangulo
    int l1, l2, l3;
    //Declaração das variáveis do semiperímetro e da área
    float P, area;
    //Aqui a pessoa digita os lados do triângulo
    cin >> l1 >> l2 >> l3;
    //Um triângulo só pode existir se a soma de 2 lados 
    //forem maiores que o outro, então usamos esse if
    if (l1<(l2+l3) and l2<(l1+l3) and l3<(l1+l2)) {
    P = (l1+l2+l3)/2;
    //Fórmula da área:
    area = sqrt(P*(P-l1)*(P-l2)*(P-l3));
    //Saída da resposta:
    cout << area << endl;
    //Caso os lados fornecidos não formarem um triângulo
    } else {
        cout << "isso nao e um triangulo" << endl;

       }
return 0;
    
}