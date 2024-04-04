
float square(float x, float y) {
	return (x + y) * (x + y);
}

//функция вывода чисел ряда в зависимости от чётности.

void SortByParity(int Row, bool Parity)
{
	for (int i = 0; i * 2 + int(Parity) <= Row; ++i)
	{
		std::cout << i * 2 + int(Parity) << " ";
	}
}