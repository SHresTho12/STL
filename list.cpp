//the list stl is made with the implementation of the double way lineked list
#include<iostream>
#include<list>
using namespace std;
int main(){
   list<int> stlList;

   //you can copy onelist into another list
   list<int>stlListCopy(stlList);

   //you can directly declare and initialize all the values of the stlList
   list<int>stlListC(5,100);




   stlList.push_back(1);
   stlList.push_back(2);
   stlList.push_back(3);
   stlList.push_front(4);
   stlList.push_front(5);
   for(int i:stlList){
       cout<<i<<" ";   }




       stlList.pop_front();
       stlList.pop_back();
       cout<<endl<<stlList.size()<<endl<<stlList.empty()<<endl;
       stlList.erase(stlList.begin());
        for(int i:stlList){
       cout<<i<<" ";   }
       stlList.clear();
}