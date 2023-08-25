/*
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};
*/

int traverse(Node* root, int &maxSum) {
    if(!root) 
        return 0;
    
    int left = INT_MIN, right =INT_MIN;
    
    if(root->left) 
        left = traverse(root->left, maxSum);
    
    if(root->right)
        right =  traverse(root->right, maxSum);
    
    if(root->left && root->right)
        maxSum = max(maxSum, left+right+root->data);
    
    int x = max(left,right);
    
    if(x == INT_MIN) 
        x = 0;
    
    return x + root->data;
}

int maxPathSum(Node* root)
{ 
    // code here   
    int maxSum = std::numeric_limits<int>::min();
    traverse(root,maxSum);
    return maxSum;
}
