#include<iostream>
#include<vector>
//Vector is a dynamic array 
//when ever the vector gets full it doubles its size automatically
//as vector is a dynamic array it is not mandatory to specify the size of the vector while declaring it.




using namespace std;
int main(){


vector<int> stlVect;


// the difference between in the capacity and the size operator is that the size operator shows how many elements are there in the vector and capacity operator shows how many elements can be in the vector.
stlVect.push_back(1);
cout<<stlVect.size()<<endl;
stlVect.push_back(4);
stlVect.push_back(5);
cout<<stlVect.size()<<endl;
cout<<stlVect.capacity()<<endl;


//at,front,back operation point
cout<<stlVect.at(2)<<endl;
cout<<stlVect.front()<<endl;
cout<<stlVect.back()<<endl;

stlVect.push_back(2);
//pops the last element from the vector
stlVect.pop_back();

//we can also clear the whole vector with the clear operation . we have to know that it does not makes the capacity of the vector 0 only the size of the vector is 0 .
stlVect.clear();
cout<<stlVect.size()<<endl;
cout<<stlVect.capacity()<<endl;

//you can also directly initialize the vector with a specific value and size

vector<int> stlVect2(5,1); //size of the vector is 5 and all the value of the vector is 1

//you can directly copy a whole vector in the other vector
vector<int> stlVectCopy(stlVect);//the stlVectCopy is the exact copy of the stlVect
}