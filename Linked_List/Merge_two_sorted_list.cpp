ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {

        if (list1 == nullptr)
            return list2;

        if (list2 == nullptr)
            return list1;

        ListNode* temp = list1;

        while (temp->next != nullptr)
        {
            temp = temp->next;
        }

        temp->next = list2;

        bool swapped = true;

        while (swapped)
        {
            swapped = false;

            ListNode* newtemp = list1;
            ListNode* prev = nullptr;

            while (newtemp->next != nullptr)
            {
                if (newtemp->next->val < newtemp->val)
                {
                    ListNode* snode = newtemp->next;

                    newtemp->next = snode->next;
                    snode->next = newtemp;

                    if (prev == nullptr)
                    {
                        list1 = snode;
                    }
                    else
                    {
                        prev->next = snode;
                    }

                    prev = snode;
                    swapped = true;
                }
                else
                {
                    prev = newtemp;
                    newtemp = newtemp->next;
                }
            }
        }

        return list1;
    }
