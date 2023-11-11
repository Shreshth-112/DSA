#include <iostream>
#include <queue>

using namespace std;
void printq(queue<int> q) 
{
    cout << "front of queue: " << q.front() << endl;
    cout << "back of queue: " << q.back() << endl;
    cout << "QUEUE : ";
    while (q.empty() == false)
    {
        cout << q.front() << " " ;
        q.pop();
    }
    cout << endl;
}

void reverseQueue(queue<int> &q)
{
    if(q.empty()) 
      return;
    int x = q.front();
    q.pop();
    reverseQueue(q);
    q.push(x);
}

int main()
{
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    
    reverseQueue(q);
    printq(q);
  
    return 0;
}
    
