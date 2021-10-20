#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	int n;
	float sum = 1; //В сумме всегда начинается с единицы, поэтому можно начинать неё и уменьшить цикл
	float sum_temp;
	float one = 1;
	/*19-я строка без него почему-то не работает.
	Думает, что 1 это int, а не float. Как это работает - не знаю, но работает */

	cout << "Введите n: "; 
	cin >> n;

	for (int i = n; i > 1; i--)
	{
		sum_temp = one / n;
		sum = sum + sum_temp;

		n = n--;
	}
	cout << "Сумма равна: " << sum << endl;
}
