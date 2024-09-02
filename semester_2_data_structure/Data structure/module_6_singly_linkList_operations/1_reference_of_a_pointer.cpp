#include <iostream>
using namespace std;

void reference(int *&p)
{
    p = NULL;
}

int main()
{
    int x = 10;
    int *ptr = &x;
    reference(ptr);
    cout << ptr << endl;
    return 0;
}