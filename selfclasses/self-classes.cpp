#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node*next;
    node(int value){
        data=value;
        next=nullptr;
    }
};
int main(){
    node*first=new node(10);
     node*second=new node(20);
      node*third=new node(30);
    first->next=second;
    second->next=third;
    node*temp=first;
    while(temp!=nullptr){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    delete first;
    delete second;
    delete third;
    return 0;
}