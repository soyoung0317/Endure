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