#include <fstream>
#include <iostream>
#include <string>
#include <vector>

using namespace std;


int main()
{
	fstream fout;

	fout.open("bar.csv", ios::out | ios::app);

	cout << "enter data";

	int a[4];

	for (int i = 0; i < 4; i++)
	{
		cin >> a[i];
	}

	for (int i = 0; i < 4; i ++)
	{
		fout << a[i] << "\n";
	}
}
