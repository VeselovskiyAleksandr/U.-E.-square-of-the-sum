﻿// U. E. square of the sum.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "Helpers.h"
#include <string>
#include <locale.h>
#include <time.h>
#include <stdio.h>
#include <stdlib.h> 

int main()
{
  setlocale(LC_ALL, "rus");
   std::cout << "\n Задание к уроку 16.";
   int arraySize = 0;
   std::cout << "\n" << "Укажите размерность массива\n";
   std::cin >> arraySize;
   for (int i = 0; i < arraySize; ++i)
   {
	   for (int j = 0; j < arraySize; ++j)
	   {
		   std::cout << i + j << " ";
	   }
	   std::cout << "\n";
   }
    tm buf;
   time_t t = time(nullptr);
   localtime_s(&buf, &t);
   int day = buf.tm_mday;
int sum = 0;
	 for (int j = 0; j < arraySize; j++)
	 {
		 sum += j;
	 } 
   std::cout << "\n"<<sum+ arraySize*(day % arraySize);
   return 0;
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
