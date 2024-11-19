#include"libft.h"
char *ft_strrchr(const char *str, int search_str)
{
		char *st;
	        if(!(search_str %128))
			return (char *)(str + ft_strlen(str));
		/*i know i can just cast to char then ='\0'*/
		st=(char *)(str + ft_strlen(str)-1);
		 while(st!=(str-1))
		 {
			 if(*(st--)==(char)search_str)
				 return (++st);
		 }
		 return NULL;
}
