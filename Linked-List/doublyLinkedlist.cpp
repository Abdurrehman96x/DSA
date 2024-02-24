#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node* prev;
    Node(int data){
        val=data;
        prev= NULL;
        next = NULL;
    }
};
class doublyLinkedList{
    public:
    Node* head;
    Node* tail;

    doublyLinkedList(){
        head= NULL;
        tail= NULL;
    }

    void display(){
        Node* temp =head;
        while(temp!= NULL){
            cout<<temp->val<<"<->";
            temp=temp->next;
        }
        cout<<endl;
    }

    void insertAtstart(int val){
        Node* new_node = new Node(val);
        if(head==NULL){
            head= new_node;
            tail=new_node;
            return;
        }
        new_node->next = head;
        head->prev= new_node;
        head= new_node;
        return;
    }

    void insertAtTail(int val){
        Node* new_node = new Node(val);
        if(tail==NULL){
            head= new_node;
            tail = new_node;
            
            return;
        }
        tail->next=new_node;
        new_node->prev= tail;
        tail= new_node;
        return;
    }

    void insertAtposition(int val,int k){
        Node* temp= head;
        int count =1;
        while(count<(k-1)){
            temp= temp->next;
            count++;
        }
        Node* new_node = new Node(val);
        new_node->next = temp->next;
        temp->next = new_node;

        new_node->prev= temp;
        new_node->next->prev= new_node;
        return;
    }

    void deleteAtHead(){
        if(head == NULL){
            return;
        }
        Node* temp =head;
        head=head->next;
        if(head==NULL){
            tail=NULL;
        }else{
            head->prev = NULL;

        }
        free(temp);
        return;
    }
    void deleteAtTail(){
        if(tail == NULL){
            head=NULL;
            return;
        }
        Node* temp= tail;
        tail=tail->prev;
        if(tail == NULL){
            head= NULL;
        }else{
            tail->next = NULL;
        }
        free(temp);
        return;
    }

    void deleteAtPosition(int k){
        // assuming k is less than or equal to leng of dll
        Node* temp = head;
        int count =1;
        while(count<k){
            temp=temp->next;
            count++;
        }
        temp->prev->next= temp->next;
        temp->next->prev =temp->prev;
        free(temp);
    }
};
void reverseDLL(Node* &head , Node* &tail){
    Node* curr_ptr = head;
    while(curr_ptr){        // curr-ptr!= NULL
        Node* next_ptr =curr_ptr->next;
        curr_ptr->next=curr_ptr->prev;
        curr_ptr->prev = next_ptr;
        curr_ptr = next_ptr;
    }
    // swapping head and tail
    Node* new_head = tail;
    tail= head;
    head = new_head;
}

int main(){
    
    
    /*Node* new_node = new Node(3);
    doublyLinkedList dll;
    dll.head = new_node;
    dll.tail = new_node; 
    cout<<dll.head->val<<endl;
    */
    doublyLinkedList dll;
    dll.insertAtstart(1);
    dll.insertAtstart(3);
    dll.insertAtstart(4);
    dll.insertAtstart(16);
    dll.display();
    dll.insertAtTail(69);
    dll.display();

    dll.insertAtposition(7,2);
    dll.display();

    dll.deleteAtHead();
    dll.display();

    dll.deleteAtTail();
    dll.display();

    dll.deleteAtPosition(3);
    dll.display();

    reverseDLL(dll.head,dll.tail);
    dll.display();
    return 0;
}