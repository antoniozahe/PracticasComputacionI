// Calculadora.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
	//Variables
	int cont{1};
	double num1, num2;
	char op;
	string result{ "Su resultado es " }, keeprunning{"si"};

	//Calculadora
	while (cont==1) {
		//Solicitud de números y operador
		cout << "Ingrese su primer numero... Por favor solo meta numeros (no letras), que si no se rompe esta cosa :'(" << endl;
		cin >> num1;

		cout << "Ingrese su operacion deseada (+,-,*,/,%)" << endl;
		cin >> op;

		cout << "Ingrese su segundo numero... Por favor solo meta numeros (no letras), que si no se rompe esta cosa :'(" << endl;
		cin >> num2;

			//Suma
			if (op == '+')
			{
				cout << result << num1 + num2 << endl;
			}
			//Resta
			else if (op == '-')
			{
				cout << result << num1 - num2 << endl;
			}
			//Multiplicación
			else if (op == '*')
			{
				cout << result << num1 * num2 << endl;
			}
			//División
			else if (op == '/')
			{
				if (num2 == 0)
				{
					cout << "Error: División entre 0" << endl;
				}
				else
				{
					cout << result << num1 / num2 << endl;
				}
			}
			
			else if (op == '%')
			{
				if (num2 == 0) {
					cout << "Error: División entre 0" << endl;
				}
				else {
					cout << result << fmod(num1,num2) << endl;
				}
			}

			else
			{
				cout << "Verifique haber ingresado un operador correcto (+,-,*,/,%)." << endl;
			}
			cout << "Quieres seguir usandome? Responde 'si' o 'no'." << endl;
			cin >> keeprunning;

			if (keeprunning.compare("si") != 0)
			{
				cout << "Gracias por usarme! Lo disfruté mucho! :D" << endl;
				return { cont == 0 };
			}
			
	}


}
/*
Mejoras Posibles:
- Se rompe si en input de números se usan caracteres (Check if Num is char or double)

*/