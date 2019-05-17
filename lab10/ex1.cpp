///��������� ������ �������-21 ���-10 ������-1
/*
����������� ��������� ���������� ���������� � �������������� ������ string ���������� STL,
�������� � ������������� ������������� ������� ������ string � ���������� ���������� STL.

��� ������ ����.
������������� ������ ���� �� ����������� ���� ����, ������ ����� ����� ����� ������ ���� ������������� �� ��������.
������������ ����������� �� ���� �������, ������������ ������ ����� ������ ����� 2 �������� ��������� �������:
����� �����, ������� �� ������ ������� (�������� ������� ��������� ����� ���, ��, ��), ��������� � ����� �����.
*/

#include <conio.h>
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    const int STR_LEN = 64;
    string *str = new string[STR_LEN];
    int len, n = 0;

    ifstream file;
    file.open("string.txt");
    if (file.is_open())
        while (!file.eof() && n < STR_LEN)
            file >> str[n++];
    file.close();
    len = n;

    cout << endl << "All words:" << endl;
    for (int i = 0; i < len; i++)
        cout << str[i] << endl;

    for (int i = 0; i < len - 1; i++)
        for (int j = i + 1; j < len; j++)
            if (str[i].compare(str[j]) > 0)
                str[i].swap(str[j]);

    for (int i = 0; i < len - 1; i++)
        for (int j = i + 1; j < len; j++)
            if (str[i].length() > str[j].length())
                str[i].swap(str[j]);

    cout << endl << "All words after sorting:" << endl;
    for (int i = 0; i < len; i++)
        cout << str[i] << endl;

    for (int i = 0; i < len; i++) {
        if (str[i].length() > 2) {

        }
    }

    delete str;
    getch();
    return 0;
}
