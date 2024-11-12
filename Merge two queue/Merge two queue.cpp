#include <iostream>
#include <queue>
using namespace std;

queue<int> mergeQueues(queue<int>& queue1, queue<int>& queue2) {
    queue<int> mergedTwoQueue;

    
    while (!queue1.empty()) {
        mergedTwoQueue.push(queue1.front());
        queue1.pop();
    }

  
    while (!queue2.empty()) {
        mergedTwoQueue.push(queue2.front());
        queue2.pop();
    }

    return mergedTwoQueue;
}

int main() {
    

    queue<int> queue1;
    queue<int> queue2;

    queue1.push(1);
    queue1.push(2);
    queue1.push(3);
    queue2.push(4);
    queue2.push(5);
    queue2.push(6);
    queue<int> mergedTwoQueue = mergeQueues(queue1, queue2);
    cout << "Merged Two Queue: ";
    while (!mergedTwoQueue.empty()) {
        cout << mergedTwoQueue.front() << " ";
        mergedTwoQueue.pop();
    }

   return 0;
}