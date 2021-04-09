//#include <stdio.h>
//struct ListNode {
//	int val;
//	struct ListNode *next;
//};
//struct ListNode* removeElements(struct ListNode* head, int val)
//{
//	if (head == NULL)//判断是否为空表
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
//	while (after != NULL)//判断是否遍历完
//	{
//		if (after->val == val)//判断是否需要删除
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


//给你一个链表的头节点 head 和一个整数 val ，请你删除链表中所有满足 
//Node.val == val 的节点，并返回 新的头节点
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