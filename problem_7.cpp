#include <iostream>
using namespace std;
 

void num(int a)
{
 
    for (int i = a; i > -1; i--)
        cout << i <<endl;
 
}
 

int main()
{
    int a = 10;
 
  num(a);
 
    return 0;
}
