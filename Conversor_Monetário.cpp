#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <math.h>

using namespace std;

double calc(double cotacao, double qtd){
  double result;

  result = cotacao * qtd;

  return result;

}

void menu(){

    cout << "*****************" << endl;
    cout << "*      MENU     *" << endl;
    cout << "*****************" << endl;
    cout << "* 1 |  Executar *" << endl;
    cout << "* 2 |    Sair   *" << endl;
    cout << "*****************" << endl;

}


int main() {
  setlocale(LC_ALL, "Portuguese");
  double cot, dolar, real;
  int tecla;

  MENU:
  menu();
  cout << "Digite a op��o desejada: ";
  cin >> tecla;

  switch (tecla){
      case 1:
          cout << endl;
          goto A;
          break;
      case 2:
          goto OUT;
          break;
      default:
          cout << "Op��o inv�lida!!" << endl << endl;
          goto MENU;
  }

  A:

  cout << "Digite a cota��o do dolar: R$ ";
  cin >> cot;
  cout << "Digite o quanto de d�lares voc� possui: $ ";
  cin >> dolar;

  real = calc(cot, dolar);

  cout << endl << "$" << dolar << " em moeda brasileira vale R$" << real << endl  << endl;

  goto MENU;

  OUT:
  return 0;

}


