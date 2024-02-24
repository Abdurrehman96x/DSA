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
// insertion of Node at first
void insertAtHead(Node* &head , int val){
    Node* new_node = new Node(val);
    new_node->next = head;
    head =new_node;
}
void display(Node* head){
    Node* temp = head;
    while(temp!= NULL){
        cout<<temp->val<<"->";
        temp= temp->next;
    }
    cout<<"NULL"<<endl;
}
void insertAtTail(Node* &head,int val){
    Node* new_node = new Node(val);

    Node* temp = head;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    // temp has reach last node
    temp->next = new_node;
}
void insertAtposition(Node* &head, int val,int pos){
    if(pos==0){
        insertAtHead(head,val);
        return;
    }
    Node* new_node = new Node(val);
    Node* temp = head;
    int current_pos =0;
    while(current_pos!= pos-1){
        temp= temp->next;
        current_pos++;
    }
    // temp is poniting to node at pos-1
    new_node->next = temp->next;
    temp->next = new_node;
    
}
void updateAtPosition(Node* &head ,int k,int val){  // k is the position
    Node* temp = head;
    int curr_pos = 0;
    while(curr_pos!= k){
        temp =temp->next;
        curr_pos++;
    }
    temp->val= val;
}
// Deletion
void deleteAtHead(Node* &head){
    Node* temp = head;
    head = head->next;
    free(temp);
}
void deleteAtTail(Node* &head){
    Node* second_last = head;
    while(second_last->next->next != NULL){
        second_last= second_last->next;
    }
    // Now second_last points to second last node
    Node* temp =second_last->next;
    second_last->next =NULL;
    free(temp);
}
void deleteAtPosition(Node* &head,int pos){
    if(pos==0){
        deleteAtHead(head);
        return;
    }
    int curr_pos =0;
    Node* prev = head;
    while(curr_pos!= pos-1){
        prev=prev->next;
        curr_pos++;
    }
    // now prev is pointing to node at pos-1
    Node* temp = prev->next;
    prev->next= prev->next->next;
    free(temp);

}
// Delete alternate node
void DeleteAlternateNodes(Node* &head){
    Node* curr_node = head;
    while(curr_node != NULL && curr_node->next != NULL){
        Node* temp = curr_node->next;   // this is the node to be deleted
        curr_node->next = curr_node->next->next;
        free(temp);
        curr_node = curr_node->next;

    }
}
// delete duplicate node
void deleteDuplicateNode(Node* &head){
    Node* curr_node = head;
    while(curr_node!= NULL){
        while(curr_node->next!=NULL && curr_node->val == curr_node->next->val){
            // delete curr_next
            Node* temp = curr_node->next; // node to be deleted
            curr_node->next = curr_node->next->next;
            free(temp);
            // this loop ends when current node and next node values are different
            // or linkedlist ends
        }
        curr_node = curr_node->next;
    }
}
void reverse(Node* &head){
    if(head== NULL){
        return;         //base case
    }
    reverse(head->next);
    cout<<head->val<<" ";
}
Node* reverseLL(Node* head){
    Node* prev_ptr =NULL;
    Node* curr_ptr = head;

    // current->next= prev_ptr;
    //move all 3 ptr by one step a head
    while(curr_ptr!=NULL){
        Node* next_ptr= curr_ptr->next;
        curr_ptr->next= prev_ptr;
        prev_ptr= curr_ptr;
        curr_ptr=next_ptr;
    }
    // when loop ends , prev ptr pointing to my last node which is new head
    Node* new_head = prev_ptr;
    return new_head;
}
int main(){
    /*
    Node* n =new Node(2);
    cout<<n->val<<" "<<n->next<<endl;
    */
    Node* head= NULL;
    insertAtHead(head,1);
    display(head);
    insertAtHead(head,2);
    display(head);
    insertAtHead(head,2);
    display(head);
    insertAtHead(head,3);
    display(head);
    insertAtHead(head,3);
    display(head);
    insertAtHead(head,3);
    display(head);
    deleteDuplicateNode(head);
    display(head);

    //reverse(head);
   // reverseLL(head);
    //display(head);

    /*updateAtPosition(head,2,5);
    display(head);

    insertAtTail(head,69);
    display(head);

    insertAtposition(head,44,3);
    display(head);

    deleteAtHead(head);
    display(head);

    deleteAtTail(head);
    display(head);

    deleteAtPosition(head,1);
    display(head);

    DeleteAlternateNodes(head);
    display(head);
    */
    return 0;
}   