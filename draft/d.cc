//
// My sample file
//
//#include <stdio.h>
#include <iostream>
#include <array>
//#include <string>
//#include <vector>
//#include <unoredered_map>
//#include <algorithm>
//#include <cmath>
#define endl "\n"
using namespace std;

array<int ,5> ar;

int main()
{
    ios::sync_with_stdio(false), cin.tie(0);
    
    int j = 1;
    for (auto &i : ar)
        i = j++;

    for (auto &i : ar)
        cout << i << endl;

    return 0;
}
