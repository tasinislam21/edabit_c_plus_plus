#include <iostream>
#include <vector>
#include <string>


std::string sevenBoom(std::vector<int> arr) {
    for (int value : arr) {
        std::string full_string = std::to_string(value);
        for (int i = 0; i < full_string.length(); i++) {
            if (full_string[i] == '7') {
                return "Boom!";
            }         
        }    
    }
    return "there is no 7 in the array";
}

int main()
{
    std::cout << sevenBoom({1, 2, 3, 4, 5, 6, 7}) << "\n";
    std::cout << sevenBoom({8, 6, 33, 100}) << "\n";
    std::cout << sevenBoom({2, 55, 60, 97, 86}) << "\n";

}
