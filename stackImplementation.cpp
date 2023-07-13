#include<iostream>
using namespace std;

struct node
{
    int data;
    node *next;
};

node *head = NULL;

void push(int x)
{
    node *myNode = new node;
    myNode->data = x;
    myNode->next = NULL;
    if(head == NULL)
        head = myNode;
    else
    {
        myNode->next = head;
        head = myNode;
    }
}

void pop()
{
    if(head == NULL)
        cout<<"Stack is empty";
    else
    {
        node *myNode = head;
        head = head->next;
        delete myNode;
    }
}

int top()
{
    return head->data;
}

int main()
{
    cout<<"Enter the number of elements : ";
    int n;
    cin>>n;
    for(int i = 0;i<n;i++)
    {
        int temp;
        cin>>temp;
        push(temp);
    }
    cout<<"Elements : ";
    for(int i = 0;i<n;i++)
    {
        cout<<top()<<" ";
        pop();
    }
}