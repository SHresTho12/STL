#include<iostream>

//For stl array you have to include array header file
#include<array>



using namespace std;
int main(){


int basicArray[10]  = {0,1,2,3,4,5,6,7,8,9};
//stl array header
array<int,10> stlArray = {0,1,2,3,4,5,6,7,8,9};  //--> same as the static array.
//Few benefits of the 
//you can use at and empty  operation on a stl array also you can take the front element and the last element by using front and end operation

cout<<stlArray.at(0)<<endl;
cout<<stlArray.empty()<<endl;
cout<<stlArray.front()<<endl;
cout<<stlArray.back()<<endl;


}