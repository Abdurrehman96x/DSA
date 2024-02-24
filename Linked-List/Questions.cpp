#include <iostream>
using namespace std;
class Node{
public:
    int val;
    Node* next;

    Node(int data){
        val = data;
        next = NULL;
    }
};
class LinkedList{
public:
    Node* head;

    LinkedList(){
        head = NULL;
    }

    void insertAtTail(int value)
    {
        Node* new_node = new Node(value);
        if (head != NULL){ // Linkedlist is empty
            head = new_node;
            return;
        }
        Node* temp = head;
        while (temp->next != NULL){
            temp = temp->next;
        }
        temp->next = new_node;
    }

    void display(){
        Node* temp = head;
        while(temp!= NULL){
            cout<<temp->val<<"->";
            temp= temp->next;
        }
        cout<<"NULL"<<endl;
    }
};
int main(){
    LinkedList ll;
    ll.insertAtTail(1);
    ll.insertAtTail(2);
    ll.insertAtTail(3);
    ll.insertAtTail(4);
    ll.insertAtTail(5);
    ll.display();
    
    return 0;
}