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

    void pop(){
        Node* current = head;
        while(current->next != nullptr){
            current = current->next;
        }
        Node* Temp = current;
        current->next = nullptr;
        delete Temp;
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
    list.push(20);
    list.push(85);
    list.pop();
    list.display();    
    return 0;
}