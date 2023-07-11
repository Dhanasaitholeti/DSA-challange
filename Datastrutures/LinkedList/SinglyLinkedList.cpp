#include<iostream>

using namespace std;

class Node{
    public:
    int Data;
    Node *Next;
    Node(int x): Data(x) , Next(nullptr) {}
};

class LList{
    public:
    Node* head;
    LList(): head(nullptr) {}

    void append(int x){
        Node* newnode = new Node(x);

        if(head == nullptr){
            head = newnode;
            return;
        } 

        Node* current = head;
        while(current->Next != nullptr){
                current = current->Next;
        }
        current->Next = newnode; 
    }

    void prepend(int x){
        Node* newnode = new Node(x);
        newnode->Next = head;
        head = newnode;
    }


    void display(){
        Node* current = head;
        while(current){
            cout << current->Data << " ";
            current = current->Next;
        }

    }




};


int main(){
    LList List;
    List.append(45);
    List.append(65);
    List.append(78);
    List.prepend(77);
    List.append(5);
    List.display();
    return 0;
}