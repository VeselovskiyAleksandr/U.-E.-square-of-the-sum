
float square(float x, float y) {
	return (x + y) * (x + y);
}

//������� ������ ����� ���� � ����������� �� ��������.

void SortByParity(int Row, bool Parity)
{
	for (int i = 0; i * 2 + int(Parity) <= Row; ++i)
	{
		std::cout << i * 2 + int(Parity) << " ";
	}
}