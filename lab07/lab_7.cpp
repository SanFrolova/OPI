
#include <iostream>

#include "transition1.h"
#include "transition2.h"
#include "transition3.h"
using namespace std;
int main() {
    setlocale(LC_ALL, "RU");

    int numberCase;
    cout << "Выберете:\n   1)определение разницы значений кодов латинского алфавита \n   2)определение разницы значений кодов символа русского алфавита \n   3)вывод кода символа, соответствующего введенной цифре \n   4)выход из программы" << endl;
    cin >>numberCase;
        switch (numberCase) {
        case 1: {
            solveTaskWithLatinSymbol();
            break;
        }

        case 2: { 

            solveTaskWithRussianSymbol();
            break;
        }

        case 3: {
            solveTaskWithNumber();
            break;
        }


        case 4: { break; }

        default: cout << "Error";

            break;
        }
 

    return 0;
}