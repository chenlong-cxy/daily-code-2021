while (parent&&cur->_bf)
{
	if (cur = parent->_left)
	{
		parent->_bf--;
	}
	else
	{
		parent->_bf++;
	}
	cur = parent;
	parent = parent->_parent;
}