
/*#include <iostream>
#include <cctype>
setlocale(LC_ALL, "RU");
void task1(char X) {

    if (isalpha(X) && isupper(X)) { int difference = X - tolower(X);        std::cout << "Разница кодов: " << difference << std::endl; }
    else { std::cout << "Ошибка: введите прописную латинскую букву." << std::endl; }
}
void task2(char Y) {
    if ((Y >= 'А' && Y <= 'Я') || (Y >= 'а' && Y <= 'я')) { int difference = std::toupper(Y) - std::tolower(Y);        std::cout << "Разница кодов: " << difference << std::endl; }
    else { std::cout << "Ошибка: введите русскую букву." << std::endl; }
}
void task3(char Z) {
    if (isdigit(Z)) { std::cout << "Код символа: " << static_cast<int>(Z) << std::endl; }
    else { std::cout << "Ошибка: введите цифру." << std::endl; }
}
int main() {
    int option;    char input;    while (true) {
        std::cout << "Выберите вариант: 1, 2, 3, или 4 для выхода: ";        std::cin >> option;
        if (option == 4) break;        std::cout << "Введите символ: ";        std::cin >> input;
        switch (option) { case 1:                task1(input);                break;            case 2:                task2(input);                break;            case 3:                task3(input);                break;            default:                std::cout << "Неверный вариант." << std::endl; }
    }
    return 0;
}
*/



#include <cctype>
#include <iostream>
using namespace std;
int main() {
    setlocale(LC_ALL, "RU");
    int c;
    cout << "Выберете:\n   1)определение разницы значений кодов латинского алфавита \n   2)определение разницы значений кодов символа русского алфавита \n   3)вывод кода символа, соответствующего введенной цифре \n   4)выход из программы" << endl;
    cin >> c;
    switch (c) {
        case 1: {
            char X; cout << "Введите вторую букву фамилии на английском языке: "; cin >> X;
            if (isalpha(X)) {
                short razn1;
                razn1 = tolower(X) - toupper(X);
                cout << "Разница между значениями кодов в Windows-1251 заданной буквы Х латинского алфавита в прописном и строчном написании : " << razn1;
            }
            else {
                cout << "Error:(";
            }
        }

        case 2: {
            char Y; cout << "Введите вторую букву имени на русском языке : "; cin >> Y;
            if ((Y >= 'А' && Y <= 'Я') || (Y >= 'а' && Y <= 'я')) {
                short razn2;
                razn2 = tolower(Y) - toupper(Y);
                cout << "Разница между значениями кодов в Windows-1251 заданной буквы Х латинского алфавита в прописном и строчном написании : " << razn2;
            }
            else {
                cout << "Error:(";
            }
        }


  
    
    
    
    
    
    }





    return 0;
}