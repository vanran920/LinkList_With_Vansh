#include<bits/stdc++.h>
using namespace std;

struct Node{
  int data;
  Node* next;
};

int main()
{
    Node* head = nullptr;
    Node* tail = nullptr;
    
    cout<<"How many Node will be create :- "<<endl;
    int n;
    cin>>n;
    
    for(int i = 0; i<n; i++ )
    {
        int value;
        cout<<"The value of "<<i+1<<" is :- ";
        cin>>value;
        
        Node* node = new Node();
        node->data = value;
        node->next = nullptr;
        
        if( head == nullptr)
        {
            head = node;
            tail = node;
        }
        else
        {
            tail->next = node;
            tail = node;
        }
    }
    
    cout<<endl;
    cout<<"Print the Value :- "<<endl;
    Node* temp = head;
    while( temp!= nullptr )
    {
        cout<<temp->data<<endl;
        temp = temp->next;
    }
    
    while(head!=nullptr)
    {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
}