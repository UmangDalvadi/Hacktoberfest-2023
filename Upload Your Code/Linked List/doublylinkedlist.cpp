#include<iostream>
using namespace std;
class node{
      public:
      int data;
      node *prev;
      node* next;
      node(int data){
        this->data=data;
        this->prev=NULL;
        this->next=NULL;



      }
};
void printnode(node* &head){
    node * temp=head;
    while (temp!=NULL)
    {
      
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    
}
void insertatead(node* &head,int d){
    node *temp=new node(d);
  temp->next=head;
  head->prev=temp;
  head=temp;
    
   
    
}
void insertattail(node * &tail,int d){
    node *temp=new node(d);
    tail->next=temp;
    temp->prev=tail;
    tail=temp;


}
int main(int argc, char const *argv[])
{
    node*node1=new node(10);
    node *head=node1;
    node *tail=node1;
   
    insertatead(head,10);
      insertattail(tail,100);
    printnode(head);

    
    return 0;
}
