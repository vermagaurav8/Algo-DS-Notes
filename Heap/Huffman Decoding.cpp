/*Complete the function below 
Which contains 2 arguments 
1) root of the tree formed while encoding
2) Encoded String*/
string decode_file(struct MinHeapNode* root, string s)
{
//add code here.

    string ans ="";
    struct MinHeapNode*curr = root;
    for(int i = 0;i<s.size();i++){
        
        if(s[i] == '0'){
            curr = curr->left;
        }
        else
            curr = curr->right;
        
        if(curr->right == NULL && curr->left == NULL){
            ans+=curr->data;
            curr = root;
        }
    }
    
    return ans+'\0';

}