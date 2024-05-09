#include <iostream>
#include <locale>

using namespace std;
int main() {
locale::global(locale("pt_BR.UTF-8"));

// EXERCICIO 1
// 1 – Escreva um programa que mostre os números de um a dez

	/*int numero = 1;
	while (numero <= 10) {
		cout << numero;
		numero += 1;
	}*/

// EXERCICIO 2
// 2 – Peça para o usuário informar um número e mostre a tabuada desse valor

	//int tab;
	//cout << "Informe um numero: ";
	//cin >> tab;
	//for (int n = 1; n <= 10; n++) {
	//	int resultado = tab * n;
	//	/* cout << resultado << "\n"; */
	//	cout << tab << " x " << n << " = " << resultado << "\n";
	//}

// EXERCICIO 3
// 3 – Faça um programa que mostre os números de 0 a 50, mostrando - os de 5 em 5 (ex: 0, 5, 10, 15...)

	/*for (int i = 0; i <= 50; i += 5) {
	cout << i << "\n";
	}*/

// EXERCICIO 4
/* 4 – Escreva um programa que lê o número digitado pelo usuário cinco vezes e mostre
	- Se o número for maior que 100, escreva “NÚMERO ESPECIAL”
	- Senão, escreva “NÚMERO COMUM” */

	/*int vezes = 0;
	int numero;
	while (vezes <= 5) {
		vezes += 1;
		cout << "Informe um número: ";
		cin >> numero;

		if (numero > 100) {
			cout << "NÚMERO ESPECIAL" << "\n";
		}

		else {
			cout << "NÚMERO COMUM" << "\n";
		}
	}*/

// EXERCICIO 5
// 5 – Mostre a sequência de números de 1 a 31 pulando de 2 em 2 (ex: 1, 3, 5, 7...)

	/*for (int i = 1; i <= 31; i += 2) {
	cout << i << "\n";
	}*/

// EXERCICIO 6
/* 6 – Faça um programa que leia cinco números e mostre :
	-Se o número for maior que zero, escreva “NÚMERO POSITIVO”
	- Senão, se o número for menor que zero, escreva “NÚMERO NEGATIVO”
	- Senão, escreva “O NÚMERO É ZERO” */

	int vezes = 0;
	int numero;
	while (vezes <= 5) {
		vezes += 1;
		cout << "Informe um número: ";
		cin >> numero;

		if (numero > 0) {
		cout << "NÚMERO POSITIVO" << "\n";
		}
		else if (numero < 0 ){
		cout << "NÚMERO NEGATIVO" << "\n";
		} 
		else {
		cout << "O NÚMERO É IGUAL A 0";
		}
	}

}