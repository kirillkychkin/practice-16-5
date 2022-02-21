// practice-16-5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <ctime>
int main()
{
    const int N = 4;
    int arr[N][N];
    int sum = 0;

    std::time_t time = std::time(0);
    struct tm now;
    localtime_s(&now, &time);
    int day = now.tm_mday;
    int row = day % N;

    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < N; ++j)
        {
            arr[i][j] = i + j;
            if (row == i)
                sum += arr[i][j];
            std::cout << arr[i][j] << " ";
        }
        std::cout << "\n";
    }


    std::cout << "The sum of the elements of the " << row << "row: " <<sum;

}

