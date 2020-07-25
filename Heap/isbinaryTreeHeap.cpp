
/*
 A binary tree node has data, pointer to left child
   and a pointer to right child 
struct Node
{
    int data;
    Node* left;
    Node* right;
};
*/

/*You are required to complete this method */
bool isHeap(Node * tree)
{
 // Your code here
 
    if(tree == nullptr)
    {
        return true;
    }
    
    bool left = isHeap(tree->left);
    bool right = isHeap(tree->right);
    
    if(left && right)
    {
        if(tree->left != NULL)
        {
            if(tree->left->data < tree->data)
            {
                if(tree->right != NULL)
                {
                    if(tree->right->data < tree->data)
                    {
                        return true;
                    }
                    return false;
                }
                return true;
            }
            return false;
        }
        return true;
    }
    return false;
}