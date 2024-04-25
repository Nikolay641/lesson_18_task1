// lesson_18_task1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "Header.h"


int main()
{
    int N = 5;
    Computer* arr = new Computer[N]
    {
        {"HP", 1.2, 6, false, 20'000},
        {"Aser",3.2, 10, true, 43'000},
        {"Dell",4.2, 16, false, 80'000},
        {"Asus",3.2, 10, true, 48'000},
        {"Apple",5.0, 20, false, 90'000},
    };

    for (int i = 0; i < N; i++)
    {
        arr[i].showInfo();
    }



}

