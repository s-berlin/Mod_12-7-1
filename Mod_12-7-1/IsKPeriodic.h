#include <iostream>
#include <string>

using namespace std;

bool IsKPeriodic(string txt, int K)
//  Проверка кратна ли строка txt числу К
{
    setlocale(LC_ALL, "");

    int  len_txt = txt.size();

    if (len_txt % K != 0) return false;                       // Строка не может быть кратна К, если длина строки не делится на К        

    for (int j = 1; j < len_txt / K; j++) {                   // Для каждого j-го подмассива длиной K, начиная со 2-го,
         for (int i = 0; i < K; i++) { 
             if (txt[i + j * K] != txt[i]) return false;      // проверяем, равен ли он соответствующему элементу первого подмассива длиной К
         }
    }
    return true;                       
};