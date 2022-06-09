// HomeWork_Week_5_6.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	cout << "HomeTask#5.1:   1\n"
		<< "HomeTask#5.2:   2\n"
		<< "HomeTask#5.3:   3\n"
		<< "HomeTask#6.1:   4\n"
		<< "HomeTask#6.2:   5\n"
		<< "HomeTask#6.3:   6\n"
		<< "HomeTask#6.4:   7\n"
		<< "HomeTask#6.5:   8\n"
		<< "Exit: press any key\n\n";
	int home_task;
	cin >> home_task;
	if (home_task == 1)
	{
		cout << "\nHomeTask#5.1\n\n";
		int code;
		char simv;
		cout << "Введите символ:\n";
		cin >> simv;
		code = (int)simv;
		if (((code >= 97) && (code <= 122)) ||
			((code >= 65) && (code <= 90)))
			cout << "Вы ввели букву\n";
		else if (((code >= 48) && (code <= 57)))
			cout << "Вы ввели число\n";
		else if (((code >= 44) && (code <= 46)) ||
			(code == 33) || (code == 58) ||
			(code == 59) || (code == 63))
			cout << "Вы ввели знак препинания\n";
		else cout << "Символ относится к категории другое\n";
	}
	else if (home_task == 2)
	{
		cout << "\nHomeTask#5.2\n\n";
		int user, comp, min;
		float tele_2 = 2, beeline = 3, megafon = 4, yota = 1.5;
		cout << "Введите вашего мобильного оператора:\n";
		cout << "Tele2 : введите 1\n"
			<< "Beeline : введите 2\n"
			<< "Megafon : введите 3\n"
			<< "Yota : введите 4\n";
		cin >> user;
		cout << "Введите оператора собеседника:\n";
		cout << "Tele2 : введите 1\n"
			<< "Beeline : введите 2\n"
			<< "Megafon : введите 3\n"
			<< "Yota : введите 4\n";
		cin >> comp;
		cout << "Введите колличество минут:\n";
		cin >> min;
		if (user == comp)
			cout << "Звонки внутри одной сети бесплатны!\n";
		else if (user == 1)
			cout << "Стоимость разговора равна: " << tele_2 * min << " руб \n";
		else if (user == 2)
			cout << "Стоимость разговора равна: " << beeline * min << " руб \n";
		else if (user == 3)
			cout << "Стоимость разговора равна: " << megafon * min << " руб \n";
		else if (user == 4)
			cout << "Стоимость разговора равна: " << yota * min << " руб \n";
		else cout << "Вы ввели неверного оператора!\n";
	}
	else if (home_task == 3)
	{
		cout << "\nHomeTask#5.3\n\n";
		cout << "Выберите пункт меню: \n";
		cout << "1 - Зная желаемый доход и колличество опозданий,"
			<< "посчитать, сколько строк кода нужно написать Васе.\n"
			<< "2 - Зная колличество строк кода написанное Васей и желаемый"
			<< " объём зарплаты,посчитать, сколько раз можно опоздать.\n"
			<< "3 - Зная колличество строк кода и коллличество опозданий"
			<< ",посчитать, сколько денег заплатят и заплатят ли.\n";
		int menu, z_dohod, late, salary, str_nn;
		float shtraf = 0, st_1_str = 0.5,temp;
		cin >> menu;
		switch (menu)
		{
		case 1 :
		{
			cout << "Введите желаемый доход Васи: ";
			cin >> z_dohod;
			cout << endl;
			cout << "Введите колличество опозданий: ";
			cin >> late;
			cout << endl;
			str_nn = z_dohod / st_1_str;
			if (late >= 3)
			{
				shtraf = late / 3 * 20;
				str_nn = str_nn + shtraf / st_1_str;
			}
			cout << "Васе нужно написать " << str_nn << " строк кода.\n";
			break;
		}
		case 2 :
		{
			cout << "Введите колличество строк кода написанное Васей: ";
			cin >> str_nn;
			cout << endl;
			cout << "Введите желаемый доход: ";
			cin >> z_dohod;
			cout << endl;
			temp = str_nn * st_1_str;
			if (z_dohod >= temp)
			{
				cout << "Вася не может опоздать\n";
			}
			else
			{
				late = (temp - z_dohod) / 20 * 3;
				cout << "Вася может опоздать " << late + 2 << " раз \n";
			}
			break;
		}
		case 3 :
		{
			cout << "Введите колличество строк кода, написанное Васей: ";
			cin >> str_nn;
			cout << endl;
			cout << "Введите колличество опозданий: ";
			cin >> late;
			cout << endl;
			temp = str_nn * st_1_str;
			if (late >= 3)
			{
				shtraf = late / 3 * 20;
				if (shtraf >= temp)
				{
					cout << "Васе не заплатят\n";
				}
				else
				{
					salary = temp - shtraf;
					cout << "Васе заплатят: " << salary << " $ \n";
				}
			}
			else
			{
				cout << "Вася не опаздывал и ему заплатят " << temp << " $ \n";
			}
			break;
		}
		default :
			cout << "Неправильный ввод!!!\n";

		}
	}
	else if (home_task == 4)
	{
		cout << "\nHomeTask#6.1\n\n";
		int a, sum = 0;
		cout << "Введите число: ";
		cin >> a;
		while (a <= 500)
		{
			sum = sum + a;
			a++;
		}
		cout << "Сумма равна " << sum;
	}
	else if (home_task == 5)
	{
	cout << "\nHomeTask#6.2\n\n";
	int x, y;
	cout << "X = ";
	cin >> x;
	cout << endl;
	cout << "Y = ";
	cin >> y;
	cout << endl;
	cout << "X в степени Y = " << pow(x, y);
    }
	else if (home_task == 6)
	{
	cout << "\nHomeTask#6.3\n\n";
	int a = 1000;
	float sr_ar = 0;
	for (int i = 1; i <= a; i++)
	{
		sr_ar = sr_ar + i;
	}
	sr_ar = sr_ar / 1000;
	cout << "Среднее арифметическое равно " << sr_ar;
    }
	else if (home_task == 7)
	{
		cout << "\nHomeTask#6.4\n\n";
		int a, result = 1;
		cout << "Введите число от 1 до 20: ";
		cin >> a;
		cout << endl;
		if (a < 1 || a > 20)
		{
			cout << "ошибка число не попадает в дмапазон от 1 до 20!!!\n";
		}
		else
		{
			for (int i = a; i <= 20; i++)
			{
				result = result *= i;
			}
			cout << "Произведение равно " << result;
		}
	}
	else if (home_task == 8)
	{
	cout << "\nHomeTask#6.5\n\n";
	int k;
	cout << "Введите число: ";
		cin >> k;
		cout << endl;
		for (int i = 2; i < 10; i++)
		{
			cout << k << " X " << i << " = " << k * i << endl;
		}
    }
	else
	{
	cout << "Have a good day :)\n";
    }
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
