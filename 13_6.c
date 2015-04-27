void
censor(char *str)
{
	int i = 0;
	for (i = 0; i < n; i++)
	{	
		for (k = i, j = 0; j < 3; j++, k++)
		{
			if (str[k] != "foo"[j])
			{
				break;
			}
		}
	}	
}
