/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: katan <katan@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 22:17:37 by katan             #+#    #+#             */
/*   Updated: 2024/06/17 18:50:50 by katan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	char	*str;

	i = 0;
	j = ft_strlen(s1);
	if (!s1 || !set)
	{
		return (NULL);
	}
	while (s1[i] && ft_strchr(set, s1[i]))
	{
		i++;
	}
	while (s1[j - 1] && ft_strchr(set, s1[j - 1]))
	{
		j--;
	}
	str = (char *)malloc(sizeof(char) * (j - i + 1));
	ft_strlcpy(str, s1 + i, j - i + 1);
	str[j - i + 1] = '\0';
	return (str);
}
int main(void) 
{
    // Test cases
    char *result;
    
    // Test Case 1: Trim spaces from both ends
    result = ft_strtrim("  Hello, World!  ", " ");
    printf("Test 1: '%s'\n", result);
    free(result); // Always free the allocated memory after use
    
    // Test Case 2: Trim specific characters from both ends
    result = ft_strtrim("--Hello, World!--", "-");
    printf("Test 2: '%s'\n", result);
    free(result);
    
    // Test Case 3: Trim multiple types of characters
    result = ft_strtrim("!!!@@@Hello, World!!!@@@", "!@");
    printf("Test 3: '%s'\n", result);
    free(result);
    
    // Test Case 4: Trim no characters (set is empty)
    result = ft_strtrim("No trimming here", "");
    printf("Test 4: '%s'\n", result);
    free(result);
    
    // Test Case 5: Trim from an empty string
    result = ft_strtrim("", " ");
    printf("Test 5: '%s'\n", result);
    free(result);
    
    // Test Case 6: Trim with set containing all characters in string
    result = ft_strtrim("abcdefgh", "abcdefgh");
    printf("Test 6: '%s'\n", result);
    free(result);
    
    // Test Case 7: No characters to trim (set contains characters not in the string)
    result = ft_strtrim("Hello, World!", "xyz");
    printf("Test 7: '%s'\n", result);
    free(result);

    // Test Case 8: All characters are the same and to be trimmed
    result = ft_strtrim("xxxxx", "x");
    printf("Test 8: '%s'\n", result);
    free(result);

    // Test Case 9: Trim whitespace characters
    result = ft_strtrim("\t\n Hello, World! \t\n", " \t\n");
    printf("Test 9: '%s'\n", result);
    free(result);

    // Test Case 10: Handle NULL input for s1
    result = ft_strtrim(NULL, " ");
    printf("Test 10: '%s'\n", result); // Should not crash, handle as appropriate in your implementation
    free(result);

    // Test Case 11: Handle NULL input for set
    result = ft_strtrim("Hello, World!", NULL);
    printf("Test 11: '%s'\n", result); // Should not crash, handle as appropriate in your implementation
    free(result);

    // Test Case 12: Handle NULL inputs for both s1 and set
    result = ft_strtrim(NULL, NULL);
    printf("Test 12: '%s'\n", result); // Should not crash, handle as appropriate in your implementation
    free(result);

    return 0;
}
