



self& operator--()
{
	//��Ϊ��
	if (_node->_left)
	{
		Node* right = _node->_left;
		while (left->_right)
		{
			right = right->_right;
		}
		_node = right;
	}
	else //��Ϊ��
	{
		//�Ǹ��׵���
		if (_node == _parent->_right)
		{
			
		}
		else //�Ǹ��׵���
		{

		}
	}
	return *this;
}