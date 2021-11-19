



self& operator--()
{
	//左不为空
	if (_node->_left)
	{
		Node* right = _node->_left;
		while (left->_right)
		{
			right = right->_right;
		}
		_node = right;
	}
	else //左为空
	{
		//是父亲的右
		if (_node == _parent->_right)
		{
			
		}
		else //是父亲的左
		{

		}
	}
	return *this;
}