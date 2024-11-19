#include"libft.h"
static int	count_digit(int n)
{
	int	digit;

	digit=0;
	if(!n)
		return 1;
	if(n < 0)
		digit++;
	while(n)
	{
		digit++;
		n/=10;
	}
	return digit;
}
char *ft_itoa(int n)
{
	char	*re;
	int	i;
	unsigned int	nb;

	i=count_digit(n);
	re=malloc((i+1) * sizeof(char));
	if(!re)
		return NULL;
	nb=n;
	if(n < 0)
	{
		re[0]='-';
		nb=-n;
	}
	re[i--]='\0';
	if(0==n)
		re[i]='0';
	while(nb)
	{
		re[i--]=(nb % 10) + '0';
		nb/=10;
	}
	return re;
}
/* prevoius mistake if 0 return "0" wrong cause its  string litral */
/*#include<stdio.h>
int	main(void)
{
	printf("%s \n",ft_itoa(123456));
	printf("%s \n",ft_itoa(-123456));
	printf("%s \n",ft_itoa(0));
	return 0;
}*/
