#ifndef LIBFT_H
# define LIBFT_H
#include <string.h>
void  *ft_memset(void *str, int c, size_t n);
void ft_bzero(void *s, size_t n);
void *ft_memcpy(void *dest, const void *src, size_t n);
void *ft_memmove(void *dest, const void *src, size_t n);
void *ft_memcpy(void *dest, const void *src, size_t n);
int ft_memcmp(const void *s1, const void *s2, size_t n);
void *ft_memchr(const void *s, int c, size_t n);
size_t ft_strlen(const char *s);
char *ft_strdup(const char *src);
size_t ft_strlcat(char *dest, const char *src, size_t n);
size_t ft_strlcpy(char *dest, const char *src, size_t n);
char *ft_strchr(const char *s, int c);
char *ft_strrchr(const char *s, int c);
char *ft_strnstr(const char *big, const char *little, size_t len);
int ft_atoi(const char *nptr);
int ft_isalpha(int c);
int ft_isdigit(int c);
int ft_isalnum(int c);
int ft_isascii(int c);
int ft_isprint(int c);
int ft_toupper(int c);
int ft_tolower(int c);
void *ft_calloc(size_t nmemb, size_t size);
// part 2: Additional functions
char *ft_substr(char const *s, unsigned int start, size_t len);
#endif
