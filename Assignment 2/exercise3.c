void addvector(int *r, const int *a, const int *b, unsigned int len)
{
  unsigned int i;
  for(i=0;i<len;i++)
  {
    	int *item = (r + i);
	int a_value = *(a + i);
	int b_value = *(b + i);
	(*item)  = a_value + b_value ;
  }
}
