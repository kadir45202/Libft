#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
    int i;
    int j;
    int k;
    int l;
    char *str;

    i = 0;
    j = 0;
    k = 0;
    l = 0;
    if (s1 == NULL)
        return (NULL);
    while (s1[i] == ' ' || s1[i] == '\t' || s1[i] == '\n')
        i++;
    l = ft_strlen(s1);
    while (s1[l] == ' ' || s1[l] == '\t' || s1[l] == '\n')
        l--;
    if (i > l)
        return (ft_strdup(""));
    str = (char *)malloc(sizeof(char) * (l - i + 2));
    if (str == NULL)
        return (NULL);
    while (i <= l)
    {
        if (ft_strchr(set, s1[i]) == NULL)
        {
            str[j] = s1[i];
            j++;
        }
        i++;
    }
    str[j] = '\0';
    return (str);
}