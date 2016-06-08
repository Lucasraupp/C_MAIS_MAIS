#include <math.h>
#include <iostream.h>
#include <dos.h>

void main()
{
	double graus, raio, base, expoente, x;

	cout<<"\nDigite um angulo->\t";
	cin>>graus;
	cout<<"\n\nDigite a distancia do raio do circulo->\t";
	cin>>raio;
	cout<<"\n\nDigite a base ->\t";
	cin>>base;
	cout<<"\nDigite o Expoente ->\t";
	cin>>expoente;
	system("cls");
	x=pow(base,expoente);
	cout<<"oseno de" <<graus<<"e"<<sin(graus)<<"\n\n";
	cout<<base<<"elevado a"<<expoente<<"e"<<x<<"\n\n";
	cout<<"A raiz quadrada de\t"<<x<<"e\t" <<sqrt(x)<<"\n\n";
	cout<<"A raiz cubica de\t "<<raio<<" cm de raio tem\t";
	cout<<2*M_PI*raio<<"cm de comprimento.\n\n";
	system("pause");

}


