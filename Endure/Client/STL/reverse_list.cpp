typedef struct Node {
	int data;
	Node* Next;
}NODE;

NODE* Reverse_list(NODE* head) {
	NODE* p = head; // ���� ����Ʈ 
	NODE* q = nullptr; // �������� ���� ����Ʈ 
	NODE* r = nullptr; // �ӽú��� 

	while (p != nullptr)
	{
		r = q;
		q = p;
		p = p->Next;
		q->Next = r;
	}

	return q; // �������� �� ����Ʈ�� ù��° ��� 
}

/* curr, next, prv ���� */
NODE* Reverse_list_new(NODE* head) {
	NODE* curr = head;   // ���� ���
	NODE* prev = nullptr; // ���� ���
	NODE* next = nullptr; // ���� ���

	while (curr != nullptr) {
		next = curr->Next; // ���� ��带 ����
		curr->Next = prev; // ���� ����� ������ �ݴ�� ����
		prev = curr;       // ���� ��带 ���� ���� �̵�
		curr = next;       // ���� ��带 ���� ���� �̵�
	}

	return prev; // ���ο� ��� ��ȯ
}