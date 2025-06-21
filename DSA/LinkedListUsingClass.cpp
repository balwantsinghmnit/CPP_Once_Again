#include<iostream>
using namespace std;

class Node{
public:
    int data;
    struct Node* next;
    Node(){
        next = nullptr;
    }
};

Node* CreateNode(int data){
    Node* temp_node = new Node();
    temp_node->data = data;
    return temp_node;
}

void PrintList(Node* head){
    cout <<"LinkedList: ";
    while(head){
        cout<<head->data<<" ";
        head = head->next;
    }
    cout<<endl;
}

Node* DeleteFirstNode(Node* head){
    if(head==nullptr){
        return head;
    }
    Node* temp = head;
    head = head->next;
    delete temp;
    return head;
}

Node* DeleteLastNode(Node* head){
    if(head==nullptr){
        return head;
    }
    if(head->next==nullptr){
        delete head;
        head = nullptr;
        return head;
    }
    Node* temp = head;
    while(temp->next->next){
        temp = temp->next;
    }
    Node* temp2 = temp->next;
    temp->next = nullptr;
    temp=nullptr;
    delete temp2;
    return head;
}

int getLength(Node* head){
    int length = 0;
    while(head){
        length += 1;
        head = head->next;
    }
    return length;
}

Node* InsertAtBeginning(Node* head, int data){
    Node* temp_node = CreateNode(data);
    if(head==nullptr){
        return temp_node;
    }
    temp_node->next = head;
    head = temp_node;
    return head;
}

Node* InsertNode(Node* head, int position, int data){

    if(position > getLength(head) || position<0){
        cout<<"Invalid Position to insert\n";
        return head;
    }
    if(position==0){
        return InsertAtBeginning(head, data);
    }
    Node* temp_node = head;
    Node* addition_node = CreateNode(data);
    for(int i=0;i<position-1;i++){
        temp_node = temp_node->next;
    }
    addition_node->next = temp_node->next;
    temp_node->next = addition_node;
    temp_node = nullptr;
    addition_node=nullptr;
    return head;
}

Node* InsertNodeAtEnd(Node* head, int data){
    return InsertNode(head,getLength(head),data);
}

Node* ReverseList(Node* head){
    Node *prev=nullptr, *curr=head, *next=nullptr;
    while(curr!=nullptr){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}

Node* ReverseListUsingRecursion(Node* head){
    if(head==nullptr || head->next==nullptr){
        return head;
    }
    Node* last_node = ReverseListUsingRecursion(head->next);
    head->next->next = head;
    head->next = nullptr;
    return last_node;
}

int main(){
    Node* head = CreateNode(3);
    head->next = CreateNode(4);
    PrintList(head);

    head = InsertAtBeginning(head, 1);
    PrintList(head);

    head = InsertNode(head, 1, 2);
    PrintList(head);

    head = InsertNodeAtEnd(head, 5);
    PrintList(head);

    head = ReverseList(head);
    PrintList(head);

    head = ReverseListUsingRecursion(head);
    PrintList(head);

    head = DeleteFirstNode(head);
    PrintList(head);
    head = DeleteLastNode(head);
    PrintList(head);
    
    return 0;
}