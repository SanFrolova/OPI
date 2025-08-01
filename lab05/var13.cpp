// var13
#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "RU");
    int i; cout << "Введите цифру от 1 до 7: "; cin >> i;
    
         if (i == 1) { cout << "Понедельник"; }
         else if (i == 2) { cout << "Вторник"; }
         else if (i == 3) { cout << "Среда"; }
         else if (i == 4) { cout << "Четверг"; }
         else if (i == 5) { cout << "Пятница"; }
         else if (i == 6) { cout << "Суббота"; }
         else if (i == 7) { cout << "Воскресенье"; }
         else { cout << "Error"; }
    
 return 0;
}

