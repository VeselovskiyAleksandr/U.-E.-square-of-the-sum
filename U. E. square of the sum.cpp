// U. E. square of the sum.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "Helpers.h"
#include <string>
#include <locale.h>
#include <time.h>
//#include "ExampleGameModeBase.h"
#include <stdio.h>
#include <stdlib.h> 

int main()
{
  setlocale(LC_ALL, "rus");
	std::cout << "\n Задание к уроку 13.\n";

	float x = 0, y = 0;
   std::cout << "\nВведите первый множитель: ";
  std:: cin >> x;
  std::cout << "\nВведите второй множитель: ";
  std::cin >> y;
	 std:: cout << square(x, y);

   std::cout << "\n Задание к уроку 14.";

  std:: string str = "skillbox";
  std::cout << "\nВведите строку: ";
  std::cin >> str;
   std::cout<<"\n" << str << " " << str.length()<<" "<<str[0]<<" "<<str[str.length()-1];
  
   std::cout << "\n Задание к уроку 15.";

  bool b=true;
  int n=0;
	  std::cout << "\n" << "Для вывода чётных чисел введите 0, для вывода нечётных - любое другое число\n";
	  std::cin >> n;
	  //Обеспечение правильности ввода переменной типа bool.
	  if (n == 0)
	  {
		  b = false;
	  }
	  else
	  {
		  b = true;
	  }
   std::cout << "\n" << "Укажите наибольшее число ряда\n"; 
 std:: cin >> n;
   SortByParity(n, b);



   std::cout << "\n Задание к уроку 16.";
   std::cout << "\n" << "Укажите размерность массива\n";
   std::cin >> n;
   for (int i = 0; i < n; ++i)
   {
	   for (int j = 0; j < n; ++j)
	   {
		   std::cout << i + j << " ";
	   }
	   std::cout << "\n";
   }
   tm buf;
   const int SIZE = 5;
   char st[SIZE] = { 0 };
   time_t t = time(nullptr);
   errno_t err = localtime_s(&buf, &t);
   if (err) {
	   std::cout << "Error" << std::endl;
	   return 1;
   }
  // size_t count = std::strftime(st, SIZE,
	//   "Сегодня:\n%A %d %b %Y %H:%M:%S\n%d.%m.%Y", &Tm);
   size_t count = std::strftime(st, SIZE,"\n%d", &buf);
   if (!count)
   {
	   std::cout << "Error" << std::endl;
	   return 1;
   }
  int date =((int)st[1]-48)*10+((int)st[2]-48);
 int remainderDateByNumber = date % n;
 //std::cout << "\nrem " << remainderDateByNumber<<" data "<<date<<" rasm "<<n;
 int sum = 0;
 for (int i = 0; i < n; i++) {
	 for (int j = 0; j < n; j++)
	 {
		 if (i == remainderDateByNumber)
		 {
         sum += (i+j);
	//	 std::cout << "\n" << sum << "\n";
		 }
	 }
	// sum += (i + remainderDateByNumber);
	 
 }
 //sum += remainderDateByNumber;
   std::cout << "\n"<<sum;
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
