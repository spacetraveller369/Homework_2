// Homework_2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cmath>

int main()
{
  /*1.Написать программу, которая находит среднее арифметическое значение трёх вещественных чисел.

	double a, b, c;
	std::cin >> a >> b >> c;
	std::cout << "(" << a << "+" << b << "+" << c << ")" << "/3" << "=" << (a + b + c) / 3;
	return 0;

	2.Написать программу, которая находит процент P от числа N.

	double p, n;
	std::cin >> p >> n;
	std::cout << "(" << n << "/" << "100" << ")" << "*" << p << "=" << (n / 100) * p; 
	return 0;

	3.Написать программу, которая переводит километры в сухопутные и морские мили. 
	
	setlocale(LC_ALL, "RUS");

	double kilometers;
	std::cout << "Введите количество километров: ";
	std::cin >> kilometers;

	double landMiles = kilometers * 0.621371;
	double nauticalMiles = kilometers * 0.539957;

	std::cout << kilometers << " километров равно " << landMiles << " сухопутных миль./n";
	std::cout << kilometers << " километров равно " << nauticalMiles << " морских миль./n";

	return 0;

	4.Пользователь вводит с клавиатуры время в секундах.
	Перевести это значение в дни, часы, минуты и секунды.
	Например, 43512 секунд – это 12 часов, 5 минут и 12 секунд.

	setlocale(LC_ALL, "RUS");

	int totalSeconds;

	std::cout << "Введите время в секундах: ";
	std::cin >> totalSeconds;

	int days = totalSeconds / 86400;
	int remainingSeconds = totalSeconds % 86400;

	int hours = remainingSeconds / 3600;
	remainingSeconds %= 3600;

	int minutes = remainingSeconds / 60;

	int seconds = remainingSeconds % 60;

	std::cout << totalSeconds << " секунд равно " << days << " дней, "
		<< hours << " часов, " << minutes << " минут, "
		<< seconds << " секунд.";

	return 0;

	5. Преподаватель вводит с клавиатуры количество студентов, сдавших домашние задание, и количество «должников».
	Посчитать, сколько процентов составляют «должники» от общего числа студентов.
	
	setlocale(LC_ALL, "RUS");

	int passedStudents, debtors;

	std::cout << "Введите количество студентов, сдавших домашнее задание: ";
	std::cin >> passedStudents;

	std::cout << "Введите количество 'должников': ";
	std::cin >> debtors;

	int totalStudents = passedStudents + debtors;

	double percentDebtors = (static_cast<double>(debtors) / totalStudents) / 100;

	std::cout << "Процент 'должников' от общего числа студентов: " << percentDebtors << "%";

	return 0;

   6. Пользователь вводит с клавиатуры сумму в гривнах (дробное число). Вывести по отдельности количество гривен и количество копеек 
	(например, ввести 45.67 гривен - получить и вывести 45 гривен 67 копеек)

	setlocale(LC_ALL, "RUS");
 
		double sum;
		std::cout << "Введите сумму в гривнах: ";
		std::cin >> sum;

		int hryvnias = static_cast<int>(sum);

		double fractional_part = sum - hryvnias;
		int kopeikas = static_cast<int>(fractional_part * 100);


		std::cout << hryvnias << " гривен " << kopeikas << " копеек ";

		return 0;


	7.Ввести с клавиатуры 3 - значное число и «перевернуть» его(например, ввести 357 – получить и вывести 753).

	setlocale(LC_ALL, "RUS");

	int n, reverse = 0, rem;

	std::cout << "Введите число: ";
	std::cin >> n;

	while (n > 0) 
	
	{
		rem = n % 10;
		reverse = reverse * 10 + rem;
		n /= 10;
	}

	std::cout << "Перевернутое число: " << reverse;
	return 0;

//8.Сколько товара ценой Y можно купить на Х гривен и сколько получить сдачи ?
    
	setlocale(LC_ALL, "RUS");

	double X, Y;

	std::cout << "Введите количество гривен (X): ";
	std::cin >> X;

	std::cout << "Введите цену товара (Y): ";
	std::cin >> Y;


	int quantity = static_cast<int>(X / Y); 


	double change = X - (quantity * Y);

	std::cout << "Вы можете купить " << quantity << " единиц товара.\n";
	std::cout << "Сдача составит: " << change << " гривен.\n";

return 0;*/

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
