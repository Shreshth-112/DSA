#include <iostream>
#include <queue>
#include <stack>
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

void reverseQueue(queue<int> q)
{
    stack<int> rev;
    while(q.empty() == false)
    {
        rev.push(q.front());
        q.pop();
    }
    cout << "REVERSED : "; 
    while(rev.empty() == false) 
    {
        cout << rev.top() << " ";
        rev.pop();
    }
}

int main()
{
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    
    printq(q);
    reverseQueue(q);
  
    return 0;
}
    
