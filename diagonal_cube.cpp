#include <iostream>
#include <cmath>
#include <iomanip>

double cubeDiagonal(double volume) {
    double line_size = std::cbrt(volume);
	double base_diag = std::sqrt(std::pow(line_size, 2) + std::pow(line_size, 2));
    double main_diag = std::sqrt(std::pow(base_diag, 2) + std::pow(line_size, 2));
    double value = (int)(main_diag * 100 + .5);
    return (double)value / 100;    
}

int main()
{
    std::cout << cubeDiagonal(8) << "\n";
    std::cout << cubeDiagonal(343) << "\n";
    std::cout << cubeDiagonal(1157.625) << "\n";

}
