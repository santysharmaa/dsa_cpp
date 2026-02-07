#include <iostream>
using namespace std;
int main(){
    int x = 10;

    int& myref = x;

    cout<<x<<endl;
    cout<<"Initial value "<<myref<<endl;
    x = 20;

    cout<<"value of "<<myref<<endl;

    return 0;


}
