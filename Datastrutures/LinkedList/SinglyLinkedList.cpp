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

    void addAtPosition(int pos,int val){
        Node* newnode = new Node(val);
        Node* current = head;
        int count = 1;
        while(count != pos){
            current = current->Next;
            count++;
        }
        Node* Temp = current->Next;
        current -> Next = newnode;
        newnode->Next = Temp;
    }

    void prepend(int x){
        Node* newnode = new Node(x);
        newnode->Next = head;
        head = newnode;
    }

    void removeAtFirst() {
        Node* current = head;
        head  = current->Next;
        delete current;     
    }

    void removeAtLast(){
        Node* current = head;
        while(current->Next->Next!= nullptr){
            current = current->Next;
        }
        Node* Temp = current->Next->Next;
        current->Next = nullptr;
        delete Temp;
    }

    void deleteAtPosition(int pos){
        int count = 1;
        Node* current = head;
        while(count != pos){
            current = current->Next;
            count++; 
        }
        Node* Temp = current->Next;
        current->Next = current->Next->Next;
        delete Temp;
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
    List.append(99);
    List.append(65);
    List.addAtPosition(1,23);
    List.display();
    return 0;
}