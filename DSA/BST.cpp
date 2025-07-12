#include<iostream>
#include<vector>
#include<queue>
using namespace std;

class Node{
public:
    int data;
    Node *left, *right;

    Node(int data){
        this->data = data;
        this->left = this->right = nullptr;
    }
};

bool Search(Node* root, int key){
    if(root==nullptr){
        return false;
    }
    if(root->data==key){
        return true;
    }
    if(root->data>key){
        return Search(root->left,key);
    }
    return Search(root->right,key);
}

Node* InsertNode(Node* root, int val){
    if(root==nullptr){
        return new Node(val);
    }

    if(root->data>val){
        root->left = InsertNode(root->left,val);
    } else {
        root->right = InsertNode(root->right,val);
    }
    return root;
}

Node* BuildTree(vector<int> arr){
    Node* root = nullptr;
    for(int x:arr){
        root = InsertNode(root,x);
    }
    return root;
}


void InorderTraversal(Node* root){
    if(root==nullptr){
        return;
    }
    InorderTraversal(root->left);
    cout <<root->data<<" ";
    InorderTraversal(root->right);
}

Node* GetInorderSuccessor(Node* root){
    while(root!=nullptr && root->left!=nullptr){
        root = root->left;
    }
    return root;
}

Node* DeleteNode(Node* root, int key){
    if(root==nullptr){
        return nullptr;
    }
    if(root->data>key){
        root->left = DeleteNode(root->left,key);
    } else if(root->data<key){
        root->right = DeleteNode(root->right,key);
    } else {
        if(root->left==nullptr){
            Node* temp = root->right;
            delete root;
            return temp;
        } else if(root->right==nullptr){
            Node* temp = root->left;
            delete root;
            return temp;
        } else {
            Node* IS = GetInorderSuccessor(root->right);
            root->data = IS->data;
            root->right = DeleteNode(root->right, IS->data);
        }
    }
    return root;
}

int main(){
    vector<int> arr = {3,2,1,5,6,4};
    Node* root = BuildTree(arr);
    cout<<"Before: ";
    InorderTraversal(root);

    DeleteNode(root, 2);

    cout<<"\nAfter: ";
    InorderTraversal(root);

    cout<<"\n"<<Search(root,5)<<endl;
    cout<<Search(root,7)<<endl;
    return 0;
}