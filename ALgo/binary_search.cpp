#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;
int main(){

vector<int> vec;
vec.push_back(1);
vec.push_back(2);

vec.push_back(3);

vec.push_back(4);
vec.push_back(5);
vec.push_back(6);
vec.push_back(7);


cout<<binary_search(vec.begin(),vec.end(),4);
cout<<binary_search(vec.begin(),vec.end(),10);



}