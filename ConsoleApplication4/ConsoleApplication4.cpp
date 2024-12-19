#include <iostream>
#include <vector>
#include <limits>
using namespace std;

int main() {
    system("chcp 1251>null");
    /*int number;
    cout << "Введіть ціле число: ";
    cin >> number;
    cout << "Дільники числа " << number << ":\n";
    for (int i = 1; i <= number; ++i) {
        if (number % i == 0) {
            cout << i << " ";
        }
    }
    */


    /*int num1, num2;
    cout << "Введіть перше число: ";
    cin >> num1;
    cout << "Введіть друге число: ";
    cin >> num2;

    cout << "Спільні дільники чисел " << num1 << " і " << num2 << ":\n";
    for (int i = 1; i <= min(num1, num2); ++i) {
        if (num1 % i == 0 && num2 % i == 0) {
            cout << i << " ";
        }
    }*/

    vector<int> sequence;
    int num;
    cout << "Вводьте натуральні числа (0 для завершення):\n";

    while (true) {
        cin >> num;
        if (num == 0) break;
        sequence.push_back(num);
    }

    if (sequence.size() < 2) {
        cout << "Недостатньо даних для визначення другого за величиною елемента.\n";
        return 0;
    }

    int max_num = INT_MIN, second_max = INT_MIN, min_num = INT_MAX;

    for (int n : sequence) {
        if (n > max_num) {
            second_max = max_num;
            max_num = n;
        }
        else if (n > second_max && n < max_num) {
            second_max = n;
        }
        if (n < min_num) {
            min_num = n;
        }
    }

    cout << "Найбільший елемент: " << max_num << "\n";
    cout << "Найменший елемент: " << min_num << "\n";
    cout << "Другий за величиною елемент: " << second_max << "\n";

    return 0;
}
