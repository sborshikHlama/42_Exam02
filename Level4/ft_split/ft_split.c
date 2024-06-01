#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int count_words(char *str)
{
	int count = 0;
	int i = 0;
	while (str[i])
	{
		while(str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
			i++;
		if (str[i])
			count++;
		while(str[i] && (str[i] != ' ' && str[i] != '\n' && str[i] != '\t'))
			i++;
	}
	return (count);
}

void ft_strncpy(char *str1, char *str2, int n)
{
	int i = 0;
    while (i < n)
    {
        str1[i] = str2[i];
        i++;
    }
    str1[i] = '\0';
}

char    **ft_split(char *str)
{
	int i = 0;
	int j = 0;
	int k = 0;
	char **result;
	int count = count_words(str);
	result = (char **)malloc(sizeof(char *) * (count + 1));
	if (!result) return 0;
	while (str[i])
	{
		while(str[i] && str[i] == ' ' || str[i] == '\t')
			i++;
		j = i;
		while(str[i] && (str[i] != ' ' && str[i] != '\t' && str[i] != '\n'))
			i++;
		if (j < i)
		{
			result[k] = malloc(sizeof(char) * (i - j + 1));
			ft_strncpy(result[k++], &str[j], i - j);
		}
	}
	result[k] = NULL;
	return (result);
}

// int main(void)
// {
// 	char *str = "Hello World";
//     char **result = ft_split(str);
// 	printf("%s\n", result[1]);

//     return (0);
// }
