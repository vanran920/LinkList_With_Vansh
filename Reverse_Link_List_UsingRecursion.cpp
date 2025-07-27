#include<bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* reverseNode(Node* head)
{
    if( head == nullptr || head->next == nullptr)
    {
        return head;
    }
    Node* newHead = reverseNode(head->next);
    Node* front = head->next;
    front->next = head;
    head->next = nullptr;
    return newHead; 
}
void printLinKList(Node* head)
{
    while(head!=nullptr)
    {
        Node* temp = head;
        cout<<head->data<<endl;
        head = head->next;
        delete temp;
    }
}
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
        cout<<"Enter the value of "<<(i+1)<<" ";
        int val;
        cin>>val;
        Node* newNode = new Node();
        newNode->data = val;
        newNode->next = nullptr;
        
        if(head == nullptr)
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
    Node* newhead = reverseNode(head);
    printLinKList(newhead);
}