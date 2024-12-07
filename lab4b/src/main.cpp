#include <iostream>
#include "utils.h"

int main() {

    std::vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    auto [unique, most_frequent] = MostFrequent(v);
    std::cout << "Number of unique elements: " << unique << std::endl;
    std::cout << "Most frequent element appears: " << most_frequent << " times" << std::endl;

    Prepare("./static/linetables.txt");
    
    return 0;
}