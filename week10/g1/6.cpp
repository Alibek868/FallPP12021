#include <iostream>
#include <vector>

using namespace std;

void print(vector<int> v){
    cout << &v << endl;
    v.push_back(100);
    cout << v.size() << endl;
    vector<int> :: iterator it;
    /*for(it = v.begin(); it != v.end(); ++it){
        cout << *it << " ";
    }*/
}

int main(){

    vector<int> v;

    int n, x;
    cin >> n;

    for(int i = 0; i < n; ++i){
        cin >> x;
        v.push_back(x);
    }

    cout << &v << endl;
    print(v);

    cout << v.size() << endl;

    

    return 0;
}
