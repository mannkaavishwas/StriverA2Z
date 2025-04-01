#include<bits/stdc++.h>
#include<iostream>
// #include<math.h>
using namespace std;
int main(){
    pair<int, pair<int,pair<int,int>>> s={1,{3,{4,5}}};
    cout<< s.second.second.second << endl;
    /// kuch is an array ie kuch=some array
    pair<int,int> kuch[]={{2,3},{1,4},{7,6}}; 
    //    index             0   1       2
    cout<< kuch[1].second ;//4
    return 0;
}