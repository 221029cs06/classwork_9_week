#include <iostream>
using namespace std;
void num(int n){
    if(n>=1){
        num(n-1);
        cout<<n<<endl;
    }
}
int main() {
    num(50);
    return 0;
}

