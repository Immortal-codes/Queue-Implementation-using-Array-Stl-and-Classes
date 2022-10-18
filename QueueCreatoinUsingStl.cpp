#include<iostream>
#include<algorithm>
#include<queue>

using namespace std;

int main()
{
    queue<int>q;

    q.push(2);
    q.push(4);
    q.push(9);
    q.push(4);
    q.push(3);
    q.push(5);

    int x;
    x=q.size();
    

    for (int i = 0; i < x; i++)
    {
        cout<<q.front()<<" ";
        q.pop();

    }
    
}