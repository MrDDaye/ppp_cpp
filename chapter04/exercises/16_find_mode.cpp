/*
    Jeffrey D. Daye
    August 30th, 2022
    Chapter 4 - Exercise 16
    Find the mode of a series of positive integers.
*/

#include <iostream>
#include <unordered_map>

int main()
{
    std::unordered_map<int, int> counts;
    int mode = 0;
    std::cout << "Enter a series of positive integers seperated by spaces. Place '|' followed by pressing 'enter' to terminate:" << std::endl;

    for(int number; std::cin >> number;) {
        if(counts.count(number) == 0) {
            counts[number] = 1;
        }
        else {
            counts[number] += 1;
        }
        if(counts[number] > counts[mode]) {
            mode = number;
        }
    }

    std::cout << "The mode is " << mode << std::endl;

    return 0;
}