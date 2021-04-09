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
//#include <stdio.h>
//struct ListNode {
//	int val;
//	struct ListNode *next;
//};
//struct ListNode* removeElements(struct ListNode* head, int val)
//{
//	struct ListNode* cur = head;//记录当前位置
//	struct ListNode* prev = NULL;//记录前一个位置
//	while (cur != NULL)//判断链表是否读取完毕
//	{
//		if (cur->val == val)//判断是否为待删除的结点
//		{
//			struct ListNode* next = cur->next;//记录下一个结点
//			if (cur == head)//判断待删除结点是否为第一个结点
//			{
//				free(cur);//释放待删除结点
//				head = next;//头指针后移
//				cur = next;//当前位置后移
//			}
//			else
//			{
//				prev->next = next;//前一个结点指向待删除结点的后一个结点
//				free(cur);//释放待删除结点
//				cur = next;//当前位置后移
//			}
//		}
//		else//不是待删除结点
//		{
//			prev = cur;//前指针后移
//			cur = cur->next;//当前位置指针后移
//		}
//	}
//	return head;//返回新头指针
//}


//反转一个单链表
//#include <stdio.h>
//struct ListNode {
//	int val;
//	struct ListNode *next;
//};
//struct ListNode* reverseList(struct ListNode* head)
//{
//	if (head == NULL)
//	{
//		return head;
//	}
//	struct ListNode* prev = NULL;
//	struct ListNode* cur = head;
//	while (cur->next != NULL)
//	{
//		struct ListNode* after = cur->next;
//		cur->next = prev;
//		prev = cur;
//		cur = after;
//	}
//	cur->next = prev;
//	head = cur;
//	return head;
//}


//给定一个头结点为 head 的非空单链表，返回链表的中间结点。
//如果有两个中间结点，则返回第二个中间结点。
//#include <stdio.h>
//struct ListNode {
//	int val;
//	struct ListNode *next;
//};
//struct ListNode* middleNode(struct ListNode* head)
//{
//	struct ListNode* cur = head;
//	struct ListNode* mid = head;
//	int count = 1;
//	while (cur->next != NULL)
//	{
//		cur = cur->next;
//		if (count % 2 != 0)
//		{
//			mid = mid->next;
//		}
//		count++;
//	}
//	return mid;
//}


//输入一个链表，输出该链表中倒数第k个结点。
//#include <stdio.h>
//struct ListNode {
//	int val;
//	struct ListNode *next;
//};
//struct ListNode* FindKthToTail(struct ListNode* pListHead, int k)
//{
//	struct ListNode* cur = pListHead;
//	struct ListNode* ret = pListHead;
//	while (k)
//	{
//		if (cur == NULL)
//			return NULL;
//		cur = cur->next;
//		k--;
//	}
//	while (cur != NULL)
//	{
//		cur = cur->next;
//		ret = ret->next;
//	}
//	return ret;
//}


//#include <stdio.h>
//struct ListNode {
//	int val;
//	struct ListNode *next;
//};
//struct ListNode* reverseList(struct ListNode* head)
//{
//	if (head == NULL || head->next == NULL)//链表为空或只有一个结点时，不必反转
//		return head;
//	struct ListNode* n1 = NULL;
//	struct ListNode* n2 = head;
//	struct ListNode* n3 = head->next;//记录后一个结点
//	while (n2)
//	{
//		n2->next = n1;//保存后一个结点地址
//		n1 = n2;//n1指向n2
//		n2 = n3;//n2后移
//		if (n3)//n3为空时不能后移
//			n3 = n3->next;
//	}
//	return n1;//返回新头指针
//}


#include <stdio.h>
struct ListNode {
	int val;
	struct ListNode *next;
};
struct ListNode* middleNode(struct ListNode* head)
{
	struct ListNode* fast = head;
	struct ListNode* slow = head;
	while (fast&&fast->next)//确保循环内操作不会越界
	{
		fast = fast->next->next;//fast走两步
		slow = slow->next;//slow走一步
	}
	return slow;
}