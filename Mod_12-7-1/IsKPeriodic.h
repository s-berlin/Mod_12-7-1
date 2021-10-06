#include <iostream>
#include <string>

using namespace std;

bool IsKPeriodic(string txt, int K)
//  �������� ������ �� ������ txt ����� �
{
    setlocale(LC_ALL, "");

    int  len_txt = txt.size();

    if (len_txt % K != 0) return false;                       // ������ �� ����� ���� ������ �, ���� ����� ������ �� ������� �� �        

    for (int j = 1; j < len_txt / K; j++) {                   // ��� ������� j-�� ���������� ������ K, ������� �� 2-��,
         for (int i = 0; i < K; i++) { 
             if (txt[i + j * K] != txt[i]) return false;      // ���������, ����� �� �� ���������������� �������� ������� ���������� ������ �
         }
    }
    return true;                       
};