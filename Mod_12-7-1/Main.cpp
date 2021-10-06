#include <iostream>
#include <string>
#include "IsKPeriodic.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "");
    int K = 0; // проверяемая кратность

    string txt = "ABABABACABABABAC";
    int  len_txt = txt.size();
    cout << "Длина строки " << len_txt << endl;
    while (K < 1 || K > len_txt / 2) {
        cout << "Введите искомую кратность строки (целое К от 1 до половины длины строки): ";
        cin >> K;
    }
    if (IsKPeriodic(txt, K))  cout << "Строка кратна " << K << endl; 
    else cout << "Строка не кратна " << K << endl;

}