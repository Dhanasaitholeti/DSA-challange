#include<iostream>
#include<vector>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* prev;
    Node(int x): data(x),next(nullptr),prev(nullptr) {}
};


class DoubleLList{
    public:
    Node* head;
    DoubleLList():head(nullptr){}
    
    void push(int x){ //same as append
        Node* newnode = new Node(x);
        if(head == nullptr){
            head = newnode;
            return;
        }
        Node* curr = head;
        while(curr->next != nullptr){
            curr = curr->next;
        }
        curr->next = newnode;
        newnode->prev = curr;
    }

    void display(){
        Node* curr = head;
        while(curr){
            cout << curr->data<< " ";
            curr = curr->next;
        }
    }

};



int main(){
    DoubleLList list;
    list.push(10);
    list.push(15);
    list.display();    
    return 0;
}