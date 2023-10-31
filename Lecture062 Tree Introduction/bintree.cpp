#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node * left;
    node * right;

    node(int d){
        data=d;
        left=NULL;
        right=NULL;
    };
};

node* treebuilder(node *root){

    cout<< "Enter the node: "<<endl ;
    int data;
    cin >> data;
    root = new node(data);
    if(data==-1){
        return NULL;
    }
    cout << "Enter data for inserting in left of " << data << endl;
    int leftData;
    root->left= treebuilder(root->left);

    cout << "Enter data for inserting in right of " << data << endl;
    int rightData;
    root->right= treebuilder(root->right);
    
    return root;
    


}

int main(){

    node *root;
    root = treebuilder(root);


}