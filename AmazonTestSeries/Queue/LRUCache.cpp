//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// design the class in the most optimal way

class LRUCache
{
    private:
    class Node {
        public:
        int key;
        int val;
        Node *prev, *next;
        
        Node(int k, int v) {
            key = k;
            val = v;
            prev = next = nullptr;
        }
    };
    
    Node *head = new Node(-1, -1);
    Node *tail = new Node(-1, -1);
    unordered_map<int, Node*> mp;
    int size;
    
    void addNode(Node *ptr) {
        ptr->prev = head;
        ptr->next = head->next;
        head->next->prev = ptr;
        head->next = ptr;
    }
    
    void deleteNode(Node *ptr) {
        Node *next_of_ptr = ptr->next;
        Node *prev_of_ptr = ptr->prev;
        
        prev_of_ptr->next = next_of_ptr;
        next_of_ptr->prev = prev_of_ptr;
        
        delete ptr;
    }
    
    public:
    
    LRUCache(int cap)
    {
        size = cap;
        head->next = tail;
        tail->prev = head;
    }
    
    int GET(int key)
    {
        if(mp.find(key) != mp.end()) {
            Node* resnode = mp[key];
            int res = resnode->val;
            deleteNode(resnode);

            Node *newNode = new Node(key, res);
            addNode(newNode);
            mp[key] = newNode;
            
            return res;
        }
        return -1;
    }
    
    void SET(int key, int value)
    {
        if(mp.find(key) != mp.end()) {
            Node* resnode = mp[key];
            deleteNode(resnode);
        }
        else if(mp.size() == size) {
            mp.erase(tail->prev->key);
            deleteNode(tail->prev);
        }
        
        Node *newNode = new Node(key, value);
        addNode(newNode);
        mp[key] = newNode;
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