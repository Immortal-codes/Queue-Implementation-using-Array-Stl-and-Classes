#include <iostream>
#include <algorithm>

using namespace std;

int queue[10];
int n = 10;
int front = -1;
int rear = -1;

void Insert()
{
    int val;
    if (rear == n - 1)
    {
        cout << "overflow";
    }
    else if (front == -1)
    {
        front = 0;
        cin >> val;
        rear++;
        queue[rear] = val;
    }
}

void Delete()
{
    if (front == -1 || front > rear)
    {

        cout << "underflow";
        return;
    }
    else
    {
        cout << queue[front];
        front++;
    }
}

void Display()
{
    if (front == -1)
    {
        cout << "queue is empty";
    }

    for (int i = front; i <= rear; i++)
        cout << queue[i] << " ";
    cout << endl;
}

int main()
{
    int ch;
    cout << "1) Insert element to queue" << endl;
    cout << "2) Delete element from queue" << endl;
    cout << "3) Display all the elements of queue" << endl;
    cout << "4) Exit" << endl;
    do
    {
        cout << "Enter your choice : " << endl;
        cin >> ch;
        switch (ch)
        {
        case 1:
            Insert();
            break;
        case 2:
            Delete();
            break;
        case 3:
            Display();
            break;
        case 4:
            cout << "Exit" << endl;
            break;
        default:
            cout << "Invalid choice" << endl;
        }
    } while (ch != 4);
    return 0;
}