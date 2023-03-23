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
    ListNode* insertionSortList(ListNode* head) {

            ListNode* curr=head;
            vector<int> A;

            while(curr)
            {
                A.push_back(curr->val);
                curr = curr->next;
            }

            sort(A.begin(),A.end());

            curr=head;
            for (auto i:A)
            {
                curr->val=i;
                curr=curr->next;
            }

            return head;
    }
};
