#include <iostream>

using namespace std;

int main(){

   int x;

   cin >> x;

   if(x % 2 == 0 && x != 0){
       cout << "even";
   }else{
       if(x != 0){
           cout << "odd";
       }
   }

    return 0;
}