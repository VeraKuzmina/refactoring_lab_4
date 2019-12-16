#include "AbstractThreadUser.h"
#include "ElevenThreadUser.h"
#include "WindowThreadUser.h"
#include <stdlib.h>
#include <iostream>
/*
��������� ����������� � ��������� �������, ���������� ��������� � ��� ����� ����� M � N 
(��� ���� M<<N), ������� ����� ������� ��� ��������, � ������ ������������ ���������
������������� ��������� A, ��������� N, �� ������ � ����������� ��������� B, �������� M. 
� ��� ����� ������� ����� �� ���� ��������� A � B ��������� ��������� D, ������ ����������� A � B. 
���������� ��������� ������� � �����.
*/

int main(int argc, char* argv[]) 
{
	int n = 0, m = 0;

	if (argc != 3) {
		std::cerr << "������� ����������� ��������" << std::endl;
		return 1;
	}

	n = atoi(argv[1]);

	m = atoi(argv[2]);
	if (n <= 0 || m <= 0) {
		std::cerr << "����������� �������� ������ ���� ������������� �������" << std::endl;
		return 1;
	}
	AbstractThreadUser *tu;	
	tu = new WindowThreadUser(n, m, "a.txt", "b.txt", "d.txt");
	tu->FirstThread();
	tu->SecondThread();
	tu->MainProg();
	delete tu;
	return 0;
}
