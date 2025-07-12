#include<iostream>
#include<vector>
#include<queue>
using namespace std;

static int index = -1;

class Node{
public:
    int data;
    Node *left, *right;

    Node(int data){
        this->data = data;
        this->left = this->right = nullptr;
    }
};

Node* BuildTree(vector<int> preoder){
    index += 1;
    if(preoder[index]==-1){
        return nullptr;
    }
    Node* root = new Node(preoder[index]);
    root->left = BuildTree(preoder);
    root->right = BuildTree(preoder);
    return root;
}

void PreorderTraversal(Node* root){
    if(root==nullptr){
        return;
    }
    cout <<root->data<<" ";
    PreorderTraversal(root->left);
    PreorderTraversal(root->right);
}

void InorderTraversal(Node* root){
    if(root==nullptr){
        return;
    }
    InorderTraversal(root->left);
    cout <<root->data<<" ";
    InorderTraversal(root->right);
}

void PostorderTraversal(Node* root){
    if(root==nullptr){
        return;
    }
    PostorderTraversal(root->left);
    PostorderTraversal(root->right);
    cout <<root->data<<" ";
}

void LevelorderTraversal(Node* root){
    queue<Node*> q;
    q.push(root);
    q.push(nullptr);

    while(q.size()>0){
        Node* temp = q.front();
        q.pop();

        if(temp==nullptr){
            if(!q.empty()){
                cout<<endl;
                q.push(nullptr);
                continue;
            } else {
                break;
            }
        }
        cout<<temp->data<<" ";

        if(temp->left){
            q.push(temp->left);
        }
        if(temp->right){
            q.push(temp->right);
        }
    }
}

void MorrisInorderTraversal(Node* root){
    Node* curr = root;
    vector<int> ans;
    while(curr!=nullptr){
        if(curr->left==nullptr){
            ans.push_back(curr->data);
            curr=curr->right;
        } else{
            Node* IP = curr->left;
            while(IP->right != nullptr && IP->right != curr){
                IP = IP->right;
            }
            if(IP->right==nullptr){
                IP->right = curr;
                curr = curr->left;
            } else {
                IP->right = nullptr;
                ans.push_back(curr->data);
                curr = curr->right;
            }
        }
    }
    cout<<"\n";
    for(int x:ans){
        cout<<x<<" ";
    }
    cout<<endl;
}

int main(){
    vector<int> preorder = {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1};
    Node* root = BuildTree(preorder);
    PreorderTraversal(root);
    cout<<endl;
    InorderTraversal(root);
    cout<<endl;
    PostorderTraversal(root);
    cout<<"\n";
    LevelorderTraversal(root);
    MorrisInorderTraversal(root);
    return 0;
}