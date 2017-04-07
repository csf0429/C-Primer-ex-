#include <iostream>
using namespace std;

int main(){
    int a = 0, b = 1;
    int *p1 = &a, *p2 = p1;

    //change the value of a pointer.
    p1 = &b;
    cout << *p1 << endl;
    //change the value to which the pointer points
    *p2 = b;
    cout << *p2 << endl;

    return 0;
}
