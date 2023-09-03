//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// design the class in the most optimal way

class LRUCache
{
    private:
        struct node {
            int key, val;
            node* prev;
            node* next;
            
            node(int k, int v) {
                key = k;
                val = v;
            }
        };
        
        node* head = new node(-1, -1);
        node* tail = new node(-1, -1);
        
        int capacity;
        unordered_map<int, node*> mp;
        
    public:
    //Constructor for initializing the cache capacity with the given value.
    LRUCache(int cap)
    {
        // code here
        capacity = cap;
        head->next = tail;
        head->prev = nullptr;
        tail->next = nullptr;
        tail->prev = head;
    }
    
    void insert(node* temp)
    {
        temp->next=head->next;
        head->next->prev=temp;
        head->next=temp;
        temp->prev=head;
        
        mp[temp->key]=temp;
    }

    void rem(node* temp)
    {
        temp->prev->next=temp->next;
        temp->next->prev=temp->prev;
    }
    
    //Function to return value corresponding to the key.
    int GET(int key)
    {
        // your code here
        if(mp.find(key) == mp.end())
            return -1;
        
        node* curr = mp[key];
        rem(curr);
        insert(curr);
        return curr->val;
    }
    
    //Function for storing key-value pair.
    void SET(int key, int value)
    {
        // your code here 
        //If key is already present in the cache
        if(mp.find(key)!=mp.end())
        {
            node* cur=mp[key];
            cur->val=value;
            
            rem(cur);
            insert(cur);
            
        }
        //if key is not present and also the cache size is less than this capacity
        else if(mp.size()<capacity)
        {
            node* newnode=new node(key,value);
            insert(newnode);
        }
        //when cache size is full and need to insert new key
        else
        {
            //permanently remove the least used node
            node* cur=tail->prev;
            rem(cur);
            mp.erase(cur->key);
            delete cur;
            
            //insert the new node
            node* newnode=new node(key,value);
            insert(newnode);
            
            
        }
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int capacity;
        cin >> capacity;
        LRUCache *cache = new LRUCache(capacity);
        
        int queries;
        cin >> queries;
        while (queries--)
        {
            string q;
            cin >> q;
            if (q == "SET")
            {
                int key;
                cin >> key;
                int value;
                cin >> value;
                cache->SET(key, value);
            }
            else
            {
                int key;
                cin >> key;
                cout << cache->GET(key) << " ";
            }
        }
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends