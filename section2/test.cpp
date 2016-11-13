#include <iostream>
#include <vector>

using namespace std;


int main() 
{
    int a = 2;
    int b = 2;

    // Const and constexpr errors

    /* 
    const 

    int count(const vector<int>&);
    const vector<int> v {1, 2, 3, 4, 5};
    constexpr int rc = count(v);
    */

    if (!(a > b)) {
        cout << "Hello from if statement\n";
    }

    return 0;
}
