#include"libft.h"
char *ft_strchr(const char *str, int search_str)
{

	if(!(search_str %128))
		return (char *)(str + ft_strlen(str));
	/*i know i can just cast to char then ='\0'*/
	while(*str)
	{
		if(*(str++)==(char)search_str)
			return (char *)(--str);
	}
	return NULL;
}

