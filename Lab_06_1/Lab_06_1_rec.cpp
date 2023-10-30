#include<iostream>
#include<iomanip>
using namespace std;

void Create(int* a, const int size, const int Low, const int High, int i)
{
	a[i] = Low + rand() % (High - Low + 1);
	if (i < size - 1)
		Create(a, size, Low, High, i + 1);
}



int Sum(int* a, const int size, int i)
{
	if (i < size)
	{

		if (a[i] > 0 || a[i] % 3 != 3)
			return a[i] + Sum(a, size, i + 1);
		else
			return Sum(a, size, i + 1);
	}
	else
		return 0;
}

int Number(int* a, const int size, int i)
{
	int num = 1;
	if (i < size) {
		if (a[i] > 0 || a[i] % 3 != 0)
			return num + Number(a, size, i + 1);
		else
			num = 0;
		return num + Number(a, size, i + 1);
	}
	return 0;
}

void Print(int* a, const int size, int i)
{
	cout << setw(4) << a[i];
	if (i < size - 1)
		Print(a, size, i + 1);
}

void PrintModifyed(int* a, const int size, int i)
{
	if (i < size) {
		if (a[i] > 0 || a[i] % 3 != 0) {
			a[i] = 0;
			cout << setw(4) << a[i];
		}
		else
			cout << setw(4) << a[i];
		PrintModifyed(a, size, i + 1);
	}
}
int main()
{
	srand((unsigned)time(NULL));
	const int n = 22;
	int a[n];
	int Low = -10;
	int High = 35;
	Create(a, n, Low, High, 0);
	cout << "mas =      ["; Print(a, n, 0);
	cout << "  ]"<< endl;
	cout << "Number = " << Number(a, n, 0) << endl;
	cout << "S = " << Sum(a, n, 0) << endl;
	cout << "Modifyed = ["; PrintModifyed(a, n, 0);
	cout << "  ]" << endl;
	
	return 0;
}


