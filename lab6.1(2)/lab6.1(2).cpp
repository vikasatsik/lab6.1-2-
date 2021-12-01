﻿// lab6.1(2).cpp
// Пошук елементів одновимірного масиву ітераційним та рекурсивним способом
// Сацик Вікторії
//17 варіант

#include <iostream>
#include <iomanip>

using namespace std;

void Output(int* list, const int size, int i);
void Calculate(int* list, const int size, int& sum, int& count, int i);
void Filling(int* list, const int size, const int Min, const int Max, int i);

int main()
{

    srand((unsigned)time(NULL));

    const int n = 25;
    int r[n] = { 1 };

    int Min = 4;
    int Max = 73;

    int sum = 0;
    int count = 0;

    cout << "рекурсивний спосіб" << endl;
    cout << endl;

    Filling(r, n, Min, Max, 0);
    cout << "Before: "; Output(r, n, 0);

    Calculate(r, n, sum, count, 0);
    cout << "After:  "; Output(r, n, 0);

    cout << endl;

    cout << "Sum: " << setw(4) << sum << endl
        << "Count: " << setw(2) << count << endl;
}

void Filling(int* list, const int size, const int Min, const int Max, int i) {
    if (i < size)
    {
        list[i] = rand() % (Max - Min + 1) + Min;
        return Filling(list, size, Min, Max, ++i);
    }
}

void Calculate(int* list, const int size, int& sum, int& count, int i) {
    if (i < size) {
        if (!(list[i] % 6 == 0 || list[i] % 5 == 0)) { // всі кратні 6 або з індексами: крім кратних 5.
            sum += list[i];
            list[i] = 0;
            count++;
        }

        Calculate(list, size, sum, count, ++i);
    }
}

void Output(int* list, const int size, int i)
{
    if (i < size) {
        cout << setw(3) << list[i];
        return Output(list, size, ++i);
    }
    cout << endl;
}