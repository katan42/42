

#include "libft.h"

//ft_strchr
int main(void)
{
    const char *str = "Hello, world!";
    char *ptr = ft_strchr(str, 'o');
   
	printf("ft_strchr\nFound character 'o' at position: %ld\n", ptr-str+1);
    return 0;
}

//ft_strrchr
int main(void)
{
	const char *str = "Hello, world!";
	char *ptr = ft_strrchr(str, 'o');
    
    printf("ft_strrchr\nFound last character 'o' at position: %ld\n", ptr-str+1);
    return 0;
} 
