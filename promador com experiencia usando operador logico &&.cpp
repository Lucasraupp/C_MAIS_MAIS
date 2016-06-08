#include<iostream.h>
#include<conio.h>

void main()
{
		int exp;
		char progr;
		cout<<"\Voce programa em c++ (s/n)\t";
		cin>>progr;
		cout<<"\nQuanto tempo tem de experiencia em anos\t";
		cin>>exp;
		if(progr=='s' && exp>5)
			{
			cout<<"\n\Parabens envie seu curriculo\t";
			}
		else
			{
			cout<<"\n\Seus dados nao atendem a vaga";
			}
		getch();
}


