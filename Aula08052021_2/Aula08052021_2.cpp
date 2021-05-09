#include <iostream>
#include <time.h>
#include <locale.h>
#include <Windows.h>
	
using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int r1, r2, r3, r4, r5, p1, p2, p3, p4, p5, guesses,contador;
	char op, choice;
	srand(time(NULL));
	do
	{
		r1 = rand() % 6 + 1;
		r2 = rand() % 6 + 1;
		r3 = rand() % 6 + 1;
		r4 = rand() % 6 + 1;
		r5 = rand() % 6 + 1;

		cout << r1 << " " << r2 << " " << r3 << " " << r4 << " " << r5 << " " << endl;
	} while (r1 == r2 || r1 == r3 || r1 == r4 || r2 == r3 || r2 == r4 || r3 == r4);

	do
	{
		//menu
		cout << "\nInforme a opcao desejada: " << endl << "1 - Jogar" << endl << "2 - Dificuldade" << endl << "3 - Sobre" << endl << "4 - Fim" << endl;
		cin >> op;

		switch (op)
		{
			//jogar
			//medium
		case'1':
			cout << "Digite um numero de 1 a 6: ";
			cin >> p1;
			cout << "Digite um numero de 1 a 6: ";
			cin >> p2;
			cout << "Digite um numero de 1 a 6: ";
			cin >> p3;
			cout << "Digite um numero de 1 a 6: ";
			cin >> p4;
			if (p1 == r1)
			{
				cout << "\nCor correta na posicao correta";
			}
			else if (p1 == r2 || p1 == r3 || p1 == r4)
			{
				cout << "\nCor correta na posicao errada";
			}
			if (p2 == r2)
			{
				cout << "\nCor correta na posicao correta";
			}
			else if (p2 == r1 || p2 == r3 || p2 == r4)
			{
				cout << "\nCor correta na posicao errada";
			}
			if (p3 == r3)
			{
				cout << "\nCor correta na posicao correta";
			}
			else if (p3 == r1 || p3 == r2 || p3 == r4)
			{
				cout << "\nCor correta na posicao errada";
			}
			if (p4 == r4)
			{
				cout << "\nCor correta na posicao correta";
			}
			else if (p4 == r1 || p4 == r2 || p4 == r3)
			{
				cout << "\nCor correta na posicao errada";
			}
			break;

		case '2':
			//dificuldade
			cout << "Informe a dificuldade desejada: " << endl;
			cout << "1 = Facil. 2 = Medio. 3 = Dificil." << endl;
			cin >> choice;

			if (choice == '3') 
			{
				guesses = 12;
				cout << "Modo Dificil Selecionado" << endl;
		case 'd':
			cout << "Digite um numero de 1 a 6: ";
			cin >> p1;
			cout << "Digite um numero de 1 a 6: ";
			cin >> p2;
			cout << "Digite um numero de 1 a 6: ";
			cin >> p3;
			cout << "Digite um numero de 1 a 6: ";
			cin >> p4;
			cout << "Digite um numero de 1 a 6: ";
			cin >> p5;
			if (p1 == r1)
			{
				cout << "\nCor correta na posicao correta";
			}
			else if (p1 == r2 || p1 == r3 || p1 == r4)
			{
				cout << "\nCor correta na posicaoo errada";
			}
			if (p2 == r2)
			{
				cout << "\nCor correta na posicao correta";
			}
			else if (p2 == r1 || p2 == r3 || p2 == r4)
			{
				cout << "\nCor correta na posicao errada";
			}
			if (p3 == r3)
			{
				cout << "\nCor correta na posicao correta";
			}
			else if (p3 == r1 || p3 == r2 || p3 == r4)
			{
				cout << "\nCor correta na posicao errada";
			}
			if (p4 == r4)
			{
				cout << "\nCor correta na posicao correta";
			}
			else if (p4 == r1 || p4 == r2 || p4 == r3)
			{
				cout << "\nCor correta na posicao errada";
			}
			if (p5 == r5)
			{
				cout << "\nCor correta na posicao correta";
			}
			else if (p5 == r1 || p5 == r2 || p5 == r3 || p5 == p4)
			{
				cout << "\nCor correta na posicao errada";
			}
			break;
			}
			else if (choice == '2') 
			{
				guesses = 10;
				cout << "Modo Medio Selecionado" << endl;
				cout << "Digite um numero de 1 a 6: ";
				cin >> p1;
				cout << "Digite um numero de 1 a 6: ";
				cin >> p2;
				cout << "Digite um numero de 1 a 6: ";
				cin >> p3;
				cout << "Digite um numero de 1 a 6: ";
				cin >> p4;
				if (p1 == r1)
				{
					cout << "\nCor correta na posicao correta";
				}
				else if (p1 == r2 || p1 == r3 || p1 == r4)
				{
					cout << "\nCor correta na posicao errada";
				}
				if (p2 == r2)
				{
					cout << "\nCor correta na posicao correta";
				}
				else if (p2 == r1 || p2 == r3 || p2 == r4)
				{
					cout << "\nCor correta na posicao errada";
				}
				if (p3 == r3)
				{
					cout << "\nCor correta na posicao correta";
				}
				else if (p3 == r1 || p3 == r2 || p3 == r4)
				{
					cout << "\nCor correta na posicao errada";
				}
				if (p4 == r4)
				{
					cout << "\nCor correta na posicao correta";
				}
				else if (p4 == r1 || p4 == r2 || p4 == r3)
				{
					cout << "\nCor correta na posicao errada";
				}
				break;
			}
			else
			{
				guesses = 8;
				cout << "Modo Facil Selecionado" << endl;
		case 'h':
			cout << "Digite um numero de 1 a 6: ";
			cin >> p1;
			cout << "Digite um numero de 1 a 6: ";
			cin >> p2;
			cout << "Digite um numero de 1 a 6: ";
			cin >> p3;
			if (p1 == r1)
			{
				cout << "\nCor correta na posicao correta";
							}
			else if (p1 == r2 || p1 == r3 || p1 == r4)
			{
				cout << "\nCor correta na posicao errada";
			}
			if (p2 == r2)
			{
				cout << "\nCor correta na posicao correta";
			}
			else if (p2 == r1 || p2 == r3 || p2 == r4)
			{
				cout << "\nCor correta na posicaoo errada";
			}
			if (p3 == r3)
			{
				cout << "\nCor correta na posicaoo correta";
			}
			else if (p3 == r1 || p3 == r2 || p3 == r4)
			{
				cout << "\nCor correta na posicaoo errada";
			}
			}
				break;
		case '3':
			//sobre
			cout << "Desenvolvimento Pelo Aluno de Ciencia da Computacao Hemerson Augusto" << endl << " Na data de maio/2021 " << endl << " Com a Professora Cristina Ono Horita de Algoritmo e Programacao" << endl;
			break;
		case '4':
			//fim
			cout << "FIM" << endl;
			return 0;
			break;
			}

		} while (op != 4);
		return 0;
	}	