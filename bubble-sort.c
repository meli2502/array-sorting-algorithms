#include <stdio.h>

int main()
{
  int n, v[100], i, ok=0, aux;
  scanf("%d", &n);
  for(i = 0; i < n; i ++)
	{
	   printf("v[%d]=", i);
	   scanf("%d", &v[i]);
	}
  while(!ok)
	{
	   ok=1;
	   for(i = 0; i < n-1; i ++)
		{
		   if(v[i] > v[i+1])
			{
			   ok = 0;
			   aux = v[i];
			   v[i] = v[i+1];
			   v[i+1] = aux; 
			}
		}
	}
  for(i = 0; i < n; i ++)
	{
	   printf("%d ", v[i]);
	}
  return 0;
}
