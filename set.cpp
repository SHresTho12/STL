#include<iostream>
#include<set>

using namespace std;

//you can not enter same element twice in a set
// if you add 5 three times it will store only one 5
//also set inserts its element in a sorted order
//implemented with binary search tree

int main(){

set<int> stlSet;
stlSet.insert(1);

stlSet.insert(2);
stlSet.insert(3);

stlSet.insert(4);

stlSet.insert(1);    
for(int  i : stlSet){
    cout<<i<<endl;
}cout<<endl;
set<int>:: iterator it;
it = stlSet.begin();
it++;
stlSet.erase(it);
for(int  i : stlSet){
    cout<<i<<endl;
}cout<<endl;


cout<<stlSet.count(1);



//the find operator returns the iterator 

set<int>:: iterator itr = stlSet.find(1);
cout<<*itr<<endl;
}