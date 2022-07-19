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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
       vector<int>store;
    for(int i=0;i<lists.size();i++)
        {
            ListNode *ptr=lists[i];
            while(ptr!=NULL)
            {
                store.push_back(ptr->val);
                ptr=ptr->next;
            }
        }
        sort(store.begin(),store.end());
        ListNode *ptr=new ListNode();
        ListNode *aux=ptr;
        for(int i=0;i<store.size();i++)
        {
            ListNode *temp=new ListNode(store[i]);
            temp->next=NULL;
            ptr->next=temp;
            ptr=ptr->next;
        }
        return aux->next; 
    }
};
