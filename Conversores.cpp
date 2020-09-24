#include <iostream>
#include <stdlib.h> 
#include <locale.h>
#include <stdio.h>
#include <conio.h>
#include <string>
#include <list>
#include <cstring>
#include <sstream>
#include <math.h>


using namespace std;


int tec, decimal, modi, contador, decimal3, decimal1, divi, i, x;
int bina, bina2, j;
list <int> result;


int main() {
	setlocale(LC_ALL, "Portuguese");


string n;
int n2, n3, exp, exp2, cont;
int isolado;
int gaveta[200];
int sobra, total;
int divisor[200];
int resultt [200];
int pare;

		pare = 2;

		while (pare != 1)
			
		{
				
		cout << "\n";
		cout << "\n";
		cout << "\n";
		cout << "\n";	

		cout << "Escolha uma das opções: " << endl;
		cout << "\n";
		cout << "\n";
		cout << "\n";
		cout << "\n";
		cout << "Digite 1 para transformar um numero decimal e binário." << endl;
		cout << "Digite 2 para transformar um numero binário em decimal." << endl;
		cin >> tec;
		system("cls");


		if (tec == 1)

		{
			cout << "Digite o numero decimal : " ;
			cin >> decimal;
			

			decimal1 = decimal;
			decimal3 = decimal;
			
			do 
			{ 
			
				modi = decimal % 2;

				if (modi == 1) 

				{
					decimal = (decimal - 1)/2;
					contador++;
				}


				if (modi == 0) 

				{
					decimal = decimal / 2;
					contador++;
				}
			

			} while (decimal != 1);

			
			
			for (i = 0; i <= contador; i++)
			{ 
			
				modi = decimal1 % 2;

				if (modi == 1) 

				{
					decimal1 = (decimal1 - 1)/2;
					result.push_front(1);
				
				}


				if (modi == 0) 

				{
					decimal1 = decimal1 / 2;
					result.push_front(0);
				
				}
			

			} 
			
			
			cout << "O numero "<<decimal3<< " em binário é: "<<endl;
			
			for (i = 0; i <= contador; i++)

			{
				cout <<result.front();
				result.pop_front();
			}

		}
		
		
		if (tec == 2)
			
			{
				
				
				cout << "Digite um numero binario de até 10 digitos : ";
	cin >> n;


	stringstream s(n);
	s >> n2;
	n3 = n2;

	cont = n.size();
	exp = cont -1;
	exp2 = cont -1;
	total = 0;

		for (i = 0; i < cont; i++)
			
			{
				
				divisor [i] = pow (10, exp);
				exp = exp - 1;
		
			}


		for (i = 0; i < cont; i++)


		{
			isolado = n3 / divisor[i];
			gaveta[i] = isolado;

			sobra = n3 % divisor [i];
		
			n3 = sobra;

		
	
		}
		
		
		for (i = 0, x = exp2; i < cont, x >= 0; i++, x--)


		{
			
				resultt [i] = gaveta [i] * (pow (2,x));
		
				
				if (resultt [i] != 0)
					
					{
					total = resultt [i] + total;
					}
				  	
		}
		
		
		 cout << "O resultado em decimal é " <<total;	
				
			}
			
			
		}
			
			


	return 0;

}















