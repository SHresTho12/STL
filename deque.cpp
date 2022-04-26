#include<iostream>
#include<deque>

//its a double way queue 
using namespace std;
int main()
{

deque<int> stlDque;
stlDque.push_back(1);
stlDque.push_front(2);
stlDque.push_front(3);
stlDque.push_front(4);
stlDque.push_front(5);
stlDque.push_front(6);
for(int i:stlDque){
    cout<<i;
}
cout<<endl;
stlDque.pop_front();
for(int i:stlDque){
    cout<<i;
}
cout<<endl;
stlDque.pop_back();
for(int i:stlDque){
    cout<<i;
}
cout<<"Front :"<<stlDque.front()<<endl;
cout<<"Back :"<<stlDque.back()<<endl;
cout<<"AT: "<<stlDque.at(1)<<endl;
cout<<stlDque.empty()<<endl;
stlDque.erase(stlDque.begin(), stlDque.end());
cout<<stlDque.size()<<endl;
}