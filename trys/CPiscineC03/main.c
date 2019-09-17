#include <stdio.h>
#include <string.h>

char	ft_strcmp(char *s1, char *s2);
char	ft_strncmp(char *s1, char *s2, unsigned int n);
char	*ft_strcat(char *dest, char *src);
char	*ft_strncat(char *dest, char *src, unsigned int nb);
char	*ft_strstr(char *str, char *to_find);
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

int		main(){
	
	char f[50] = "hola tio";
	char ff[] = "como estas";
	char *p = f;
	int i;
	i = strlcat(f, ff, 5);
	printf("%d - %s\n%s\n\n", i, f, ff);
	p = "hola tio";
	i = ft_strlcat(f, ff, 5);
	printf("%d - %s\n%s\n", i, f, ff);
}
