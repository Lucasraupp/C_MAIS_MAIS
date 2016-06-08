#include<iostream.h>
#include<conio.h>

void main()
{
	int n1,n2,n3,n4;
	float media;

	cout<<"\nDigite n1\t";
	cin>>n1;
	cout<<"\nDigite n2\t";
	cin>>n2;
	cout<<"\nDigite n3\t";
	cin>>n3;
	cout<<"\nDigite n4\t";
	cin>>n4;

	media = (n1+n2+n3+n4)/4

	if (media >= 5)
		cout<<"\n\nAluno aprovado\t";

	else
		cout<<"\n\Aluno reprovado\t";

	getch();
}

