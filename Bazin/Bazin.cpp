#include <iostream>

using namespace std;

int main()
{
	int x, y, h1, h2, b;
	cout << "h1=";
	cin >> h1;
	cout << "h2=";
	cin >> h2;
	cout << "x=";
	cin >> x;
	cout << "y=";
	cin >> y;
	cout << "b=" << (b = (x - h1 * (y - x)) / (h2 + h1)) << ' ';
	cout << "a=" << (y - x) + b << endl;
	return 0;
}

/*
Un bazin se umple cu apa cu ajutorul a doua robinete. Daca lasam primul robinet
deschis timp de h1 ore si al doilea timp de h2 ore, in bazin vor fi x litri de apa.
Daca lasam primul robinet deschis timp de h1+1 ore si al doilea timp de h2-1
ore, in bazin vor fi y litri de apa. Scrieti un program care sa determine cati
litri de apa curg prin fiecare robinet intr-o ora.
~~~~~~~~~SOLUTIE~~~~~~~~~
Sa notam cu a cantitatea de apa care curge intr-o ora prin primul robinet si cu b
cantitatea de apa care curge intr-o ora prin cel de-al doilea robinet. Deducem
relatiile: x=h1*a+h2*b si y=(h1+1)*a+(h2-1)*b.
Daca scademe cele doua relatii, obtinem y-x=a-b, deci a=(y-x)+b. Inlocuim a in prima
relatie si obtinem x=h1*(y-x)+h1*b+h2*b, deci b=(x-h1*(y-x))/(h2+h1)*/