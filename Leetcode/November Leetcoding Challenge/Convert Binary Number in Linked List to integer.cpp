/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */


class Solution {
public:
    int getDecimalValue(ListNode* head) {
        int num=0, i=0, len=0;
        ListNode *node;
        node = head;
        while(node)
        {
            node = node->next;
            len++;
        }
     
        node = head;
        while(node)
        {
            num = num + ((node->val) *pow(2,len-1));
            len--;
            node= node->next;
        }
       return num;
    }
};
