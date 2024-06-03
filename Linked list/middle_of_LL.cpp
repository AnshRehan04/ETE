#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    Node(int d){
        this->data=d;
        this->next=NULL;
    }
};
void insert(Node* &head,int val){
    if(head==NULL){
        head=new Node(val);
        return ;
    }
    Node* temp=head;
    while (temp->next)
    {
        temp=temp->next;
    }
    temp->next=new Node(val);
}
void printll(Node* &head){
    Node* temp=head;
    while (temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
Node* middle(Node* &head){
    Node* slow=head;
    Node* fast=head;
    while (fast!=NULL && fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;
    
}
int main(){
    Node* head=NULL;
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin>>val;
        insert(head,val);
    }
    // printll(head);
    Node* mid=middle(head);
    if (mid!=NULL)
    {
        cout<<"middle is "<<mid->data<<" ";
    }
    else{
        cout<<"List is Empty ";
    }
    
}