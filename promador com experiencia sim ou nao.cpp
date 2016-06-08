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

		if (progr=='s')
		{
			if (exp>5)
				{
				cout<<"\n\Parabens envie curriculo\t";
				}
			else
				{
				cout<<"\n\Precisa mais experiencia\t";
				}
		}
		else
			{
			cout<<"faca um curso de c++";
			}


		getch();
	}

