#include<iostream>
#include<map>
using namespace std;


int main(){

// all the keys will be unique
//one key points to the only one value 
//value of two key can be same but the key of two values must be different
map<int,string> stlMap;
stlMap[1] = "I";
stlMap[2] = "Love";
stlMap[3] = "You";

for(auto i : stlMap){
    cout<<i.second<<endl;
}

cout<<stlMap.count(3)<<endl;

stlMap.erase(3);
for(auto i : stlMap){
    cout<<i.second<<endl;
}
    
}