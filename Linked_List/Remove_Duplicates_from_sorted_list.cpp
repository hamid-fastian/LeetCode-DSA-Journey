ListNode* deleteDuplicates(ListNode* head) {
        ListNode* temp = head;
while (temp!= nullptr)
{
	ListNode* newtemp = temp->next;
	while (newtemp!= nullptr)
	{
		if (temp->val == newtemp->val)
		{
			ListNode* NodetoDelete = newtemp;
		    newtemp = newtemp->next;
			temp->next = newtemp;
			delete NodetoDelete;
		}
		else
		{
			newtemp = newtemp->next;
		}
	}
	temp = temp->next;
}
return head;
    }
