#include<bits/stdc++.h>
using namespace std;
int main(){
    // VECTOR IS CONTAINER WHICH IS DYNAMIC IN NATURE. IE THEY HAVE VARIABLE SIZE
    vector<int> vec;
    vec.push_back(23);
    vec.emplace_back(25);
    cout << vec[0] <<endl <<vec[1] <<endl;
    return 0;
}