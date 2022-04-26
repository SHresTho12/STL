#include<iostream>
#include<stack>
using namespace std;
int main(){
   


stack<string> stlStack;

stlStack.push("I");
stlStack.push("Love");
stlStack.push("You");


cout<<stlStack.top()<<endl;
cout<<stlStack.size()<<endl;
cout<<stlStack.empty()<<endl;

stlStack.pop();
cout<<stlStack.top()<<endl;
stlStack.emplace("hi");
cout<<stlStack.top()<<endl;

//you can also swap elements of the one stack with the other
stack<string> stlStack2;
stlStack2.swap(stlStack);

cout<<stlStack.size()<<endl;

cout<<stlStack2.size()<<endl;


}