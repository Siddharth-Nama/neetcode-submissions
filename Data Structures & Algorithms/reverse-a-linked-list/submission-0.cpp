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
    ListNode* reverseList(ListNode* head) {
        if(head == NULL || head->next == NULL) return head;
        ListNode* prevprevhead = NULL;
        ListNode* prevhead = head;
        ListNode* newhead = head->next;
        ListNode* prevheadnextnext = newhead->next;
        int count = 1;

        while(newhead != NULL){
            cout<<"step : "<<count<<endl;
            count++;
            cout << "prevprevhead : " << (prevprevhead ? prevprevhead->val : -1) << endl;
cout << "prevhead : " << (prevhead ? prevhead->val : -1) << endl;
cout << "newhead : " << (newhead ? newhead->val : -1) << endl;
cout << "prevheadnextnext : " << (prevheadnextnext ? prevheadnextnext->val : -1) << endl;
            prevhead->next  = prevprevhead;
            newhead->next = prevhead;


            prevprevhead = prevhead;
            prevhead = newhead;
            newhead = prevheadnextnext;
            if (prevheadnextnext != NULL)
                prevheadnextnext = prevheadnextnext->next;
        
            
        } 
        return prevhead;
    }
};
