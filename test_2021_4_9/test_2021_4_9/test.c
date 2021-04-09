//#include <stdio.h>
//struct ListNode {
//	int val;
//	struct ListNode *next;
//};
//struct ListNode* removeElements(struct ListNode* head, int val)
//{
//	if (head == NULL)//�ж��Ƿ�Ϊ�ձ�
//	{
//		return head;
//	}
//	struct ListNode* newhead = head;
//	while(newhead->val == val)
//	{
//		struct ListNode* tmp = head;
//		newhead = head->next;
//		free(tmp);
//		tmp = NULL;
//		head = head->next;
//	}
//	struct ListNode* after = head->next;
//	while (after != NULL)//�ж��Ƿ������
//	{
//		if (after->val == val)//�ж��Ƿ���Ҫɾ��
//		{
//			struct ListNode* tmp = after;
//			head->next = after->next;
//			free(tmp);
//			tmp = NULL;
//		}
//		head = after->next;
//	}
//	return newhead;
//}


//����һ�������ͷ�ڵ� head ��һ������ val ������ɾ���������������� 
//Node.val == val �Ľڵ㣬������ �µ�ͷ�ڵ�
#include <stdio.h>
struct ListNode {
	int val;
	struct ListNode *next;
};
struct ListNode* removeElements(struct ListNode* head, int val)
{
	struct ListNode* cur = head;
	struct ListNode* prev = NULL;
	while (cur != NULL)
	{
		if (cur->val == val)
		{
			struct ListNode* next = cur->next;
			if (cur == head)
			{
				free(cur);
				head = next;
				cur = next;
			}
			else
			{
				prev->next = next;
				free(cur);
				cur = next;
			}
		}
		else
		{
			prev = cur;
			cur = cur->next;
		}
	}
	return head;
}