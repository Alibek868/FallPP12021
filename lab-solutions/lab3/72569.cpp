#include <iostream>
using namespace std;

    int main(int argc, char const *argv[])
    {
        int n = 0;
        cin >> n;
        int a[n];
        int max = 0;

        for(int  i = 0; i < n; i++)
        {
            cin >> a[i];
        }
       
      
        for(int  i = 0; i < n; i++)
        {
           if(a[i] > a[max]);
                    max = i;
        }
        cout << max + 1;
        
        return 0;
    }