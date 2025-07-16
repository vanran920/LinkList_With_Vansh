#include<bits/stdc++.h>
using namespace std;

struct Node {
  int data;
  Node* next;
};


int main()
{
    cout<<"How many node you want to reverse :- "<<endl;
    int n;
    cin>>n;
    cout<<"Enter the value in node :- "<<endl;
    Node* head = nullptr;
    Node* tail = nullptr;
    for(int i = 0; i<n; i++ )
    {
        int value;
        cout<<" The value of Node "<<(i+1)<<" ";
        cin>>value;
        Node* newNode = new Node();
        newNode->data = value;
        newNode->next = nullptr;
        if( head == nullptr )
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
    }
    // Revrese node
    Node* prev = nullptr;
    Node* curr = head;
    while(curr)
    {
        Node* front = curr->next;
        curr->next = prev;
        prev = curr;
        curr = front;
    }
    
    cout<<"Print the node in Reverse order:- "<<endl; 
    head = prev;
    while(head!=nullptr)
    {
        cout<<head->data<<endl;
        Node* temp = head;
        head = head->next;
        delete temp;
    }
}