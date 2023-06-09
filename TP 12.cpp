#include<bits/stdc++.h>
using namespace std;

int ContarPalabras(string frase);

int main()
{
	string Frase;
	cout<<"Ingresar una FRASE: "<<endl;
	getline(cin, Frase);
	
	cout<<"Hay "<<ContarPalabras(Frase)<<" palabras "<<endl;
	
	return 0;
}
int ContarPalabras(string frase)
{
	int cont=1;
	
	for(int i=0; i<frase.size(); i++)
	{
		if(frase[i]==' ')
		{
			cont++;
		}
	}
return cont;
}
