#include<bits/stdc++.h>
using namespace std;
class Node{
public:
    int val;
    Node* next;
    Node(int val){
        this->val=val;
        this->next=NULL;
    }
};
class Queue{
public:
    Node* head;
    Node* tail;
    int sz;
    Queue(){
        head=tail=NULL;
        sz=0;
    }
    void push(int data){
        Node* a=new Node(data);
        if(sz==0)head=tail=a;
        else{
            tail->next=a;
            tail=a;
        }
        sz++;
    }
    void pop(){
        if(sz==0){
            cout<<"empty"<<endl;
        }
        Node* temp=head;
        head=head->next;
        sz--;
        delete(temp);
    }
    int front(){
        if(sz==0){
            cout<<"empty"<<endl;
            return -1;
        }
        return head->val;
    }
    int back(){
        if(sz==0){
            cout<<"empty"<<endl;
            return -1;
        }
        return tail->val;
    }
    int size(){
        Node* temp=head;
        int len=0;
        while(temp){
            len++;
            temp=temp->next;
        }
        return len;
    }
    void display(){
        Node* temp=head;
        while(temp){
            cout<<temp->val<<" ";
            temp=temp->next;
        }
        return;
    }
};
int main(){
    Queue q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.display();
    cout<<endl;
    q.pop();
    q.display();
}