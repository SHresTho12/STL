#include<iostream>
#include<queue>
using namespace std;


int main(){

    queue<string> stlSqueue;


    stlSqueue.push("I");
    stlSqueue.push("Love");
    stlSqueue.push("you");

cout<<stlSqueue.front()<<endl;

stlSqueue.pop();
cout<<stlSqueue.front()<<endl;
cout<<stlSqueue.size()<<endl;
stlSqueue.emplace("you Too");
cout<<stlSqueue.front()<<endl;
cout<<stlSqueue.back()<<endl;
cout<<stlSqueue.empty()<<endl;
}