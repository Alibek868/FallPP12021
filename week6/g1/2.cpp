#include <iostream>


using namespace std;

int apb(int a, int b);

int main(){

    
    int x = apb(2, 3);

    cout << x << endl;



    return 0;
}

int apb(int a, int b){
    return a + b;
}
