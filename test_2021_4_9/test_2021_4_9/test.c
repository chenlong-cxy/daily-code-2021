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
//#include <stdio.h>
//struct ListNode {
//	int val;
//	struct ListNode *next;
//};
//struct ListNode* removeElements(struct ListNode* head, int val)
//{
//	struct ListNode* cur = head;//��¼��ǰλ��
//	struct ListNode* prev = NULL;//��¼ǰһ��λ��
//	while (cur != NULL)//�ж������Ƿ��ȡ���
//	{
//		if (cur->val == val)//�ж��Ƿ�Ϊ��ɾ���Ľ��
//		{
//			struct ListNode* next = cur->next;//��¼��һ�����
//			if (cur == head)//�жϴ�ɾ������Ƿ�Ϊ��һ�����
//			{
//				free(cur);//�ͷŴ�ɾ�����
//				head = next;//ͷָ�����
//				cur = next;//��ǰλ�ú���
//			}
//			else
//			{
//				prev->next = next;//ǰһ�����ָ���ɾ�����ĺ�һ�����
//				free(cur);//�ͷŴ�ɾ�����
//				cur = next;//��ǰλ�ú���
//			}
//		}
//		else//���Ǵ�ɾ�����
//		{
//			prev = cur;//ǰָ�����
//			cur = cur->next;//��ǰλ��ָ�����
//		}
//	}
//	return head;//������ͷָ��
//}


//��תһ��������
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


//����һ��ͷ���Ϊ head �ķǿյ���������������м��㡣
//����������м��㣬�򷵻صڶ����м��㡣
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


//����һ����������������е�����k����㡣
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
//	if (head == NULL || head->next == NULL)//����Ϊ�ջ�ֻ��һ�����ʱ�����ط�ת
//		return head;
//	struct ListNode* n1 = NULL;
//	struct ListNode* n2 = head;
//	struct ListNode* n3 = head->next;//��¼��һ�����
//	while (n2)
//	{
//		n2->next = n1;//�����һ������ַ
//		n1 = n2;//n1ָ��n2
//		n2 = n3;//n2����
//		if (n3)//n3Ϊ��ʱ���ܺ���
//			n3 = n3->next;
//	}
//	return n1;//������ͷָ��
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
	while (fast&&fast->next)//ȷ��ѭ���ڲ�������Խ��
	{
		fast = fast->next->next;//fast������
		slow = slow->next;//slow��һ��
	}
	return slow;
}