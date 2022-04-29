#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){





    int a = 5 , b = 7 , c = 2;
    cout<<max(a,b)<<endl;
    cout<<min(a,c)<<endl;
    swap(a,c);
    cout<<a;
    //you can also reverse the string by using

    string s = "hello";
    reverse(s.begin(), s.end());
    cout<<s<<endl;
    vector<int> v;
v.push_back(1);
v.push_back(3);
v.push_back(6);
v.push_back(7);
    
    sort(v.begin(),v.end());
    
    }