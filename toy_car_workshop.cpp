#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int cars(int wheels, int bodies, int figures) {
    int least_wheel = wheels / 4;
    int least_figures = figures / 2;
    return min({least_wheel, least_figures, bodies});	
}

int main()
{
    cout << cars(2, 48, 76) << "\n";
    cout << cars(43, 15, 87) << "\n";
    cout << cars(88, 37, 17) << "\n";

}

