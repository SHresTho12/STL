#include<iostream>
#include<queue>
using namespace std;

int main(){

priority_queue<int> maxHeap;

//implemented with the min heap
priority_queue<int,vector<int>,greater<int>> minHeap;

maxHeap.push(1);
maxHeap.push(2);
maxHeap.push(3);
maxHeap.push(4);

int  n  = maxHeap.size();
for(int i = 0 ; i < n ; i++){
    
    cout<<maxHeap.top();

    maxHeap.pop();
}

}