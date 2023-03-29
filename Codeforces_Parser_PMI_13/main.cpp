#include <iostream>
#include "Head.h"
#include "include/Solution_stud.h"

using namespace std;

int main()
{
    Solution_stud a;
    string s = "234";
    a.set_Solution(s);
    cout << a.get_Solution() << endl;
    return 0;
}
