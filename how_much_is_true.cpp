#include <iostream>
#include <vector>
using namespace std;

int countTrue(vector<bool> arr) {
    int true_count = 0;
    if (arr.size() == 0) {
        return true_count;
    }
    for (bool ar : arr) {
        if (ar) {
            true_count += 1;
        }
    }
    return true_count;
}

int main()
{
    vector<bool> example1 = { true, false, false, true, false };
    vector<bool> example2 = { false, false, false, false };
    vector<bool> example3 = { };
    cout << countTrue(example1) << "\n";;
    cout << countTrue(example2) << "\n";;
    cout << countTrue(example3) << "\n";;

}
