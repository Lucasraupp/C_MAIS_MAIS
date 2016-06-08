#include<math.h>
#include<iostream.h>
#include<conio.h>
#include<dos.h>

void main()
{
	char x;
	cout<<"Digite uma letra";
	cin>>x;
	if(x=='a'|x=='e'|x=='i'|x=='o'|x=='u')
		cout<<"\nvoce digitou uma vogal!!";
	else
		cout<<"\nvoce digitou uma consoante";

	getch();
}

