
Node* lca (Node*root,int first, int second) {
    if(root == nullptr) {
        return nullptr;
    }
    
    if(root->data == first || root->data == second ) {
        return root;
    }
    
    Node* left = lca(root->left, first,second);
    Node* right = lca(root->right, first,second);
    
    if(left && right){
        return root;
    }
    
    if(left == nullptr)
        return right;
    
    if(right == nullptr)
        return left;
    
    else
        return root;
}

int find(Node* root, bool state, int turns, int first, int second) {
    if(root == nullptr) {
        return 0;
    }
    
    if(root->data == first || root->data == second) {
        return turns;
    }
    
    int left = find(root->left, 0, state==0?turns:turns+1,first,second);
    int right = find(root->right, 1, state==1?turns:turns+1, first,second);
    
    return max(left,right);
}

// function should return the number of turns required to go from first node to second node 
int NumberOFTurns(struct Node* root, int first, int second)
{
  // Your code goes here
  
  Node* LCA = lca(root,first,second);
  
  int answer = 0;
  
  if(LCA->data == first || LCA->data == second) {
      answer = 0;
  } else {
      answer = 1;
  }
  
  if(LCA->left) {
      answer += find(LCA->left, 0, 0, first,second);
  }
  if(LCA->right) {
      answer += find(LCA->right, 1, 0, first,second);
  }
  
  return answer==0?-1:answer;
}
