#include <iostream>
#include <locale.h>

using namespace std;
int main() {
    setlocale(LC_ALL, "Russian");
    string ������� = "�������";
    double ����1 = 120.0;

    string ���� = "����";
    double ����2 = 70.0;

    string ���������� = "����������";
    double ����3 = 1200.0;

    int ���_��1, ���_��2, ���_��3; 
    double ����; 

    cout << "1. " << ������� << " - " << ����1 << " ������\n";
    cout << "2. " << ���� << " - " << ����2 << " ������\n";
    cout << "3. " << ���������� << " - " << ����3 << " ������\n";

   
    cout << "������� " << ������� << " �� ������ ������? ";
    cin >> ���_��1;

    cout << "������� " << ���� << " �� ������ ������? ";
    cin >> ���_��2;

    cout << "������� " << ���������� << " �� ������ ������? ";
    cin >> ���_��3;

    ���� = (���_��1 * ����1) + (���_��2 * ����2) + (���_��3 * ����3);

   
    cout << "�������� �����: " << ���� << " ������\n";

    return 0;
}