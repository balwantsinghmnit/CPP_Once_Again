#include<iostream>
using namespace std;

struct Node{
    int data;
    struct Node *prev, *next;
};

struct Node* CreateNode(int data){
    struct Node* temp_node = (struct Node*)malloc(sizeof(struct Node));
    temp_node->data = data;
    temp_node->prev = nullptr;
    temp_node->next = nullptr;
    return temp_node;
}

void PrintList(struct Node* head){
    cout <<"LinkedList: ";
    while(head){
        cout<<head->data<<" ";
        head = head->next;
    }
    cout<<endl;
}

struct Node* DeleteFirstNode(struct Node* head){
    if(head==nullptr){
        return head;
    }
    struct Node* temp = head;
    head = head->next;
    head->prev = nullptr;
    free(temp);
    return head;
}

struct Node* DeleteLastNode(struct Node* head){
    if(head==nullptr){
        return head;
    }
    if(head->next==nullptr){
        free(head);
        head = nullptr;
        return head;
    }
    struct Node* temp = head;
    while(temp->next->next){
        temp = temp->next;
    }
    struct Node* temp2 = temp->next;
    temp->next = nullptr;
    temp=nullptr;
    free(temp2);
    return head;
}

int getLength(struct Node* head){
    int length = 0;
    while(head){
        length += 1;
        head = head->next;
    }
    return length;
}

struct Node* InsertAtBeginning(struct Node* head, int data){
    struct Node* temp_node = CreateNode(data);
    if(head==nullptr){
        return temp_node;
    }
    temp_node->next = head;
    head = temp_node;
    return head;
}

struct Node* InsertNode(struct Node* head, int position, int data) {
    if(position > getLength(head) || position<0){
        cout<<"Invalid Position to insert\n";
        return head;
    }
    if(position==0){
        return InsertAtBeginning(head, data);
    }
    struct Node* temp_node = head;
    struct Node* addition_node = CreateNode(data);
    for(int i=0;i<position-1;i++){
        temp_node = temp_node->next;
    }
    addition_node->next = temp_node->next;
    temp_node->next = addition_node;
    if(addition_node->next)
        addition_node->next->prev = addition_node;
    addition_node->prev = temp_node;
    temp_node = nullptr;
    addition_node=nullptr;
    return head;
}

struct Node* InsertNodeAtEnd(struct Node* head, int data){
    return InsertNode(head,getLength(head),data);
}

struct Node* ReverseList(struct Node* head){
    struct Node *prev=nullptr, *curr=head, *next=nullptr;
    while(curr!=nullptr){
        next = curr->next;
        curr->next = prev;
        curr->prev = next;
        prev = curr;
        curr = next;
    }
    return prev;
}

struct Node* ReverseListUsingRecursion(struct Node* head){
    if(head==nullptr){
        return head;
    }
    struct Node* temp_node = head->prev;
    head->prev = head->next;
    head->next = temp_node;

    if(head->prev==nullptr)
        return head;
    return ReverseListUsingRecursion(head->prev);
}

int main(){
    struct Node* head = CreateNode(3);
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