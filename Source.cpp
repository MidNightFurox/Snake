#include<iostream>
#include<stdlib.h>
using namespace std;
#define WIDTH 100
#define HEIGHT 50
int x = 10, y = 10;

void board()
{
	for (int i = 0; i < HEIGHT; i++)
	{
		cout << "\t\t\t\%";
		for (int j = 0; j < WIDTH - 2; j++)
		{
			if (i == 0 || i == HEIGHT - 1)
				cout << "%";
			else if (j == x && i==y)
				cout << "%%";
			else
				cout<<" ";
		}
		cout << "%\n";
	}
}

int main()
{
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	while (true)
	{
		board();
		x++;
		system("cls");
	}
	
}