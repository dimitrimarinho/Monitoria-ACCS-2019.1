#include <iostream>
#include <queue>

using namespace std;

struct filme{
	int duracao;
	int reassistir;
};

int main(){

	queue <filme> fila;
	filme mov;
	int n,i,x,tempo=90,dias=0,flag=0;

	cin >> n;

	for(i=0;i<n;i++)
	{
		cin >> x;
		mov.duracao=x;
		mov.reassistir=0;
		fila.push(mov);
	}

	if(n>0)
		dias++;

	while(!fila.empty())
	{
		if(!flag)
		{	
			mov = fila.front();
			fila.pop();
		}

		if(mov.duracao>=45 && mov.reassistir==0)
		{
			mov.reassistir=1;
			fila.push(mov);
			if(mov.duracao<=tempo)
			{
				tempo-=mov.duracao;
				flag=0;
			}
			else
			{
				tempo=90;
				dias++;
				flag=1;
			}
		}
		else if(mov.duracao<=tempo)
		{
			tempo-=mov.duracao;
			flag=0;
		}
		else
		{
			tempo=90;
			dias++;
			flag=1;
		}		

	}

	cout << dias << endl;



	return 0;
}
