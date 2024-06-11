#inlcude<iostream>
using namespace std;
struct tree{
    int data;
    tree* left;
    tree* right;
    tree(int val){
        left = nullptr;
        right = nullptr;
        data = val;
    }
};
tree* create(int data){
    return new tree(data);
}
void insert(tree* root, int data){
    if(root == nullptr){
        root = create(data);
        return;
    }
    if(data < root-> data){
        insert(root->left,data);
    }else{
        insert(root->right,data);
    }
}
int main(){
    tree* root = nullptr;
    insert(root,5);
    insert(root,50);
    insert()
}
