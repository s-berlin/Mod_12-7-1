#include <iostream>
#include <string>
#include "IsKPeriodic.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "");
    int K = 0; // ����������� ���������

    string txt = "ABABABACABABABAC";
    int  len_txt = txt.size();
    cout << "����� ������ " << len_txt << endl;
    while (K < 1 || K > len_txt / 2) {
        cout << "������� ������� ��������� ������ (����� � �� 1 �� �������� ����� ������): ";
        cin >> K;
    }
    if (IsKPeriodic(txt, K))  cout << "������ ������ " << K << endl; 
    else cout << "������ �� ������ " << K << endl;

}