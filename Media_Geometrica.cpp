#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <math.h>
#include <iomanip>

using namespace std;

//setw() = funcao c++ para dar espa�amentos
//setfill() = preenchimento de espa�os com um paractere ou conjunto de caracteres especificos
//setprecision() = determina��o das precis�o casas decimais 
//setbase() = converte o 'cout <<' para uma base comum, podendo ser octal(8), decimal(10) ou hexadecimal(16)

double valor01, valor02, valor03, resultado;

//inicializa��o das fun��es
void MenuDeControle();
double lerPrimeiroValor();
double lerSegundoValor();
double lerTerceiroValor();
double CalcularMedia(double n1, double n2, double n3);
void ExibirResultado();

void MenuDeControle(){
    cout << " " << setfill('=') << setw(27) <<  " " << endl;
    cout << "|      M�dia Geom�trica    |" << endl;
    cout << "|" << setfill('_') << setw(27) <<  "|" << endl;
    cout << "|                          |" << endl;
    cout << "| 1 |  Ler valores         |" << endl;
    cout << "| 2 |  Calcular m�dia      |" << endl;
    cout << "| 3 |  Exibir Resultado    |" << endl;
    cout << "| 4 |  Sair                |" << endl;
    cout << "|" << setfill('_') << setw(27) <<  "|" << endl;
}

int main() {
  setlocale(LC_ALL, "Portuguese");
  int tecla;
//Menu de controle
  MENU:
  MenuDeControle();
  cout << "\nDigite a op��o desejada: ";
  cin >> tecla;

  switch (tecla){
      case 1:
          cout << endl;
          valor01 = lerPrimeiroValor();
          valor02 = lerSegundoValor();
          valor03 = lerTerceiroValor();
          system("cls");
          goto MENU;
          break;
      case 2:
          resultado = CalcularMedia (valor01, valor02, valor03);
          system("cls");
          goto MENU;
          break;
      case 3:
          ExibirResultado();
          system("cls");
          goto MENU;
          break;
      case 4:
          goto OUT;
          break;
      default:
          cout << "Op��o inv�lida!!" << endl << endl;
          system("pause");
          system("cls");
          goto MENU;
  }

OUT:
  cout << endl;
  system("cls");
  return 0;
}


double lerPrimeiroValor(){
double a;
  cout << "Digite o primeiro n�mero: ";
  cin >> a;
  return a;
}

double lerSegundoValor(){
double b;
  cout << "Digite o segundo n�mero: ";
  cin >> b;
  return b;
}

double lerTerceiroValor(){
double c;
  cout << "Digite o terceiro n�mero: ";
  cin >> c;
  return c;
}

//Fun��o de calcular m�dia geom�trica
double CalcularMedia(double n1, double n2, double n3){
  double result;
  result = cbrt((n1 * n2 * n3));
  cout << "M�dia Geom�trica Calculada Com Sucesso!!"<<endl;
  system("pause");
  return result;
}

//Fun��o void para exibir tudo na tela
void ExibirResultado()  {
  cout << endl << "Primeiro valor: " << valor01;
  cout << endl << "Segundo valor: " << valor02;
  cout << endl << "Terceiro valor:" << valor03 << endl;
  cout << endl << "m�dia Geom�trica " << setprecision(4) << resultado << endl  << endl;
  cout << "Se desejar fazer uma nova consulta, pressione 1\n\n";
  system("pause");
  }  
