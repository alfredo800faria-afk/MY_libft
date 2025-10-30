/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam                                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 12:00:00 by exam            #+#    #+#             */
/*   Updated: 2025/10/30 20:24:00 by srusso-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <ctype.h>
#include <limits.h>
#include "libft.h"

/* Global failure flag */
static int g_failed = 0;

/* Helper macros */
#define TEST(name, cond) \
    do { if (cond) printf("[PASS] %s\n", name); \
         else { printf("[FAIL] %s\n", name); g_failed = 1; } } while(0)

#define TEST_STR(name, s1, s2) TEST(name, strcmp(s1, s2) == 0)
#define TEST_INT(name, a, b)   TEST(name, (a) == (b))
#define TEST_PTR(name, p)      TEST(name, (p) != NULL)
#define TEST_NULL(name, p)     TEST(name, (p) == NULL)

/* Function prototypes */
void test_ft_atoi(void);
void test_ft_isprint(void);
void test_ft_lstlast(void);
void test_ft_memmove(void);
void test_ft_strchr(void);
void test_ft_strmapi(void);
void test_ft_toupper(void);
void test_ft_bzero(void);
void test_ft_itoa(void);
void test_ft_lstmap(void);
void test_ft_memset(void);
void test_ft_strdup(void);
void test_ft_strncmp(void);
void test_ft_calloc(void);
void test_ft_lstadd_back(void);
void test_ft_lstnew(void);
void test_ft_putchar_fd(void);
void test_ft_striteri(void);
void test_ft_strnstr(void);
void test_ft_isalnum(void);
void test_ft_lstadd_front(void);
void test_ft_lstsize(void);
void test_ft_putendl_fd(void);
void test_ft_strjoin(void);
void test_ft_strrchr(void);
void test_ft_isalpha(void);
void test_ft_lstclear(void);
void test_ft_memchr(void);
void test_ft_putnbr_fd(void);
void test_ft_strlcat(void);
void test_ft_strtrim(void);
void test_ft_isascii(void);
void test_ft_lstdelone(void);
void test_ft_memcmp(void);
void test_ft_putstr_fd(void);
void test_ft_strlcpy(void);
void test_ft_substr(void);
void test_ft_isdigit(void);
void test_ft_lstiter(void);
void test_ft_memcpy(void);
void test_ft_split(void);
void test_ft_strlen(void);
void test_ft_tolower(void);

/* Helper for list content */
static void free_node(void *p) { free(p); }

int main(void)
{
    printf("=== LIBFT EXAM UNIT TESTS ===\n\n");

    test_ft_atoi();
    test_ft_isprint();
    test_ft_lstlast();
    test_ft_memmove();
    test_ft_strchr();
    test_ft_strmapi();
    test_ft_toupper();
    test_ft_bzero();
    test_ft_itoa();
    test_ft_lstmap();
    test_ft_memset();
    test_ft_strdup();
    test_ft_strncmp();
    test_ft_calloc();
    test_ft_lstadd_back();
    test_ft_lstnew();
    test_ft_putchar_fd();
    test_ft_striteri();
    test_ft_strnstr();
    test_ft_isalnum();
    test_ft_lstadd_front();
    test_ft_lstsize();
    test_ft_putendl_fd();
    test_ft_strjoin();
    test_ft_strrchr();
    test_ft_isalpha();
    test_ft_lstclear();
    test_ft_memchr();
    test_ft_putnbr_fd();
    test_ft_strlcat();
    test_ft_strtrim();
    test_ft_isascii();
    test_ft_lstdelone();
    test_ft_memcmp();
    test_ft_putstr_fd();
    test_ft_strlcpy();
    test_ft_substr();
    test_ft_isdigit();
    test_ft_lstiter();
    test_ft_memcpy();
    test_ft_split();
    test_ft_strlen();
    test_ft_tolower();

    if (!g_failed)
        printf("\n=== ALL TESTS PASSED ===\n");
    else
        printf("\n=== SOME TESTS FAILED ===\n");

    return g_failed ? 1 : 0;
}

/* ====================== IMPLEMENTATIONS ====================== */

void test_ft_atoi(void)
{
    TEST_INT("ft_atoi basic",          ft_atoi(" \t\n  -12345"), -12345);
    TEST_INT("ft_atoi +42",            ft_atoi("+42"), 42);
    TEST_INT("ft_atoi 0",              ft_atoi("0"), 0);
    TEST_INT("ft_atoi overflow >MAX",  ft_atoi("99999999999999999999"), 2147483647);
    TEST_INT("ft_atoi overflow <MIN",  ft_atoi("-99999999999999999999"), -2147483648);
}

void test_ft_isprint(void)
{
    TEST_INT("ft_isprint 'A'", ft_isprint('A'), 1);
    TEST_INT("ft_isprint ' '", ft_isprint(' '), 1);
    TEST_INT("ft_isprint 31", ft_isprint(31), 0);
    TEST_INT("ft_isprint 127", ft_isprint(127), 0);
}

void test_ft_lstlast(void)
{
    t_list *a = ft_lstnew(strdup("A"));
    t_list *b = ft_lstnew(strdup("B"));
    t_list *c = ft_lstnew(strdup("C"));
    a->next = b; b->next = c;
    TEST("ft_lstlast", strcmp((char *)ft_lstlast(a)->content, "C") == 0);
    ft_lstclear(&a, free_node);
}

void test_ft_memmove(void)
{
    char src1[] = "123456789";
    char dst1[20] = "";
    char dst2[20] = "";
    memmove(dst1, src1 + 2, 5);
    ft_memmove(dst2, src1 + 2, 5);
    TEST_STR("ft_memmove forward", dst1, dst2);

    char overlap[] = "abcdefghi";
    char overlap_ft[] = "abcdefghi";
    memmove(overlap + 2, overlap, 6);
    ft_memmove(overlap_ft + 2, overlap_ft, 6);
    TEST_STR("ft_memmove overlap", overlap, overlap_ft);
}

void test_ft_strchr(void)
{
    const char *s = "Hello, world!";
    TEST("ft_strchr 'o'", ft_strchr(s, 'o') - s == 4);
    TEST("ft_strchr '!'", ft_strchr(s, '!') - s == 12);
    TEST("ft_strchr '\\0'", ft_strchr(s, '\0') - s == 13);
    TEST_NULL("ft_strchr not found", ft_strchr(s, 'z'));
}

static char map_upper(unsigned int i, char c) { (void)i; return toupper(c); }

void test_ft_strmapi(void)
{
    char *res = ft_strmapi("abc", map_upper);
    TEST_STR("ft_strmapi", res, "ABC");
    free(res);
}

void test_ft_toupper(void)
{
    TEST_INT("ft_toupper 'a'", ft_toupper('a'), 'A');
    TEST_INT("ft_toupper 'Z'", ft_toupper('Z'), 'Z');
    TEST_INT("ft_toupper '5'", ft_toupper('5'), '5');
}

void test_ft_bzero(void)
{
    char buf[10] = "123456789";
    ft_bzero(buf, 5);
   // TEST("ft_bzero", memcmp(buf, "\0\0\0\0\0""56789", 10) == 0);
	TEST("ft_bzero", memcmp(buf, (char[10]){0,0,0,0,0,'6','7','8','9',0}, 10) == 0);
}

void test_ft_itoa(void)
{
    char *s;
    s = ft_itoa(-12345);  TEST_STR("ft_itoa -12345", s, "-12345"); free(s);
    s = ft_itoa(0);       TEST_STR("ft_itoa 0", s, "0"); free(s);
    s = ft_itoa(2147483647); TEST_STR("ft_itoa INT_MAX", s, "2147483647"); free(s);
    s = ft_itoa(-2147483648); TEST_STR("ft_itoa INT_MIN", s, "-2147483648"); free(s);
}

static void *map_dup(void *content)
{
    return strdup((char *)content);
}

void test_ft_lstmap(void)
{
    t_list *l = ft_lstnew(strdup("A"));
    ft_lstadd_back(&l, ft_lstnew(strdup("B")));
    ft_lstadd_back(&l, ft_lstnew(strdup("C")));

    t_list *mapped = ft_lstmap(l, map_dup, free_node);
    TEST("ft_lstmap size", ft_lstsize(mapped) == 3);
    TEST("ft_lstmap content", !strcmp((char*)mapped->content, "A") &&
                             !strcmp((char*)mapped->next->content, "B") &&
                             !strcmp((char*)mapped->next->next->content, "C"));
    ft_lstclear(&l, free_node);
    ft_lstclear(&mapped, free_node);
}

void test_ft_memset(void)
{
    char buf[10];
    char ft_buf[10];
    memset(buf, 'A', 10);
    ft_memset(ft_buf, 'A', 10);
    TEST("ft_memset", memcmp(buf, ft_buf, 10) == 0);
}

void test_ft_strdup(void)
{
    char *s = ft_strdup("Hello");
    TEST_STR("ft_strdup", s, "Hello");
    free(s);
}

void test_ft_strncmp(void)
{
    TEST_INT("ft_strncmp equal", ft_strncmp("abc", "abc", 10), 0);
    TEST_INT("ft_strncmp len", ft_strncmp("abc", "abd", 2), 0);
    TEST_INT("ft_strncmp diff", ft_strncmp("abc", "abd", 3), -1);
}

void test_ft_calloc(void)
{
    int *p = (int *)ft_calloc(5, sizeof(int));
    int ok = 1;
    for (int i = 0; i < 5; ++i) if (p[i] != 0) ok = 0;
    TEST("ft_calloc zeroed", ok);
    free(p);
}

void test_ft_lstadd_back(void)
{
    t_list *lst = ft_lstnew(strdup("first"));
    ft_lstadd_back(&lst, ft_lstnew(strdup("last")));
    TEST("ft_lstadd_back", !strcmp((char*)ft_lstlast(lst)->content, "last"));
    ft_lstclear(&lst, free_node);
}

void test_ft_lstnew(void)
{
    t_list *node = ft_lstnew(strdup("test"));
    TEST("ft_lstnew content", !strcmp(node->content, "test"));
    TEST("ft_lstnew next", node->next == NULL);
    free(node->content);
    free(node);
}

void test_ft_putchar_fd(void)
{
    ft_putchar_fd('X', 1);
    printf(" (expected X)\n");
}

static void iteri_upper(unsigned int i, char *c) { (void)i; *c = toupper(*c); }

void test_ft_striteri(void)
{
    char s[] = "abc";
    ft_striteri(s, iteri_upper);
    TEST_STR("ft_striteri", s, "ABC");
}

void test_ft_strnstr(void)
{
    const char *hay = "Foo Bar Baz";
    TEST("ft_strnstr found", ft_strnstr(hay, "Bar", 20) == hay + 4);
    TEST_NULL("ft_strnstr limited", ft_strnstr(hay, "Baz", 7));
    TEST("ft_strnstr empty needle", ft_strnstr(hay, "", 20) == hay);
}

void test_ft_isalnum(void)
{
    TEST_INT("ft_isalnum '5'", ft_isalnum('5'), 1);
    TEST_INT("ft_isalnum 'z'", ft_isalnum('z'), 1);
    TEST_INT("ft_isalnum '?'", ft_isalnum('?'), 0);
}

void test_ft_lstadd_front(void)
{
    t_list *lst = ft_lstnew(strdup("old"));
    ft_lstadd_front(&lst, ft_lstnew(strdup("new")));
    TEST("ft_lstadd_front", !strcmp((char*)lst->content, "new"));
    ft_lstclear(&lst, free_node);
}

void test_ft_lstsize(void)
{
    t_list *lst = NULL;
    ft_lstadd_back(&lst, ft_lstnew(NULL));
    ft_lstadd_back(&lst, ft_lstnew(NULL));
    TEST_INT("ft_lstsize", ft_lstsize(lst), 2);
    ft_lstclear(&lst, NULL);
}

void test_ft_putendl_fd(void)
{
    ft_putendl_fd("Hello putendl", 1);
}

void test_ft_strjoin(void)
{
    char *s = ft_strjoin("Hello", " World");
    TEST_STR("ft_strjoin", s, "Hello World");
    free(s);
}

void test_ft_strrchr(void)
{
    const char *s = "abca";
    TEST("ft_strrchr 'a'", ft_strrchr(s, 'a') - s == 3);
    TEST_NULL("ft_strrchr not found", ft_strrchr(s, 'z'));
}

void test_ft_isalpha(void)
{
    TEST_INT("ft_isalpha 'A'", ft_isalpha('A'), 1);
    TEST_INT("ft_isalpha '1'", ft_isalpha('1'), 0);
}

void test_ft_lstclear(void)
{
    t_list *lst = ft_lstnew(strdup("A"));
    ft_lstadd_back(&lst, ft_lstnew(strdup("B")));
    ft_lstclear(&lst, free_node);
    TEST("ft_lstclear", lst == NULL);
}

void test_ft_memchr(void)
{
    const char *s = "Hello";
    TEST("ft_memchr 'l'", (char *)ft_memchr(s, 'l', 5) - s == 2);
    TEST_NULL("ft_memchr not found", ft_memchr(s, 'x', 5));
}

void test_ft_putnbr_fd(void)
{
    ft_putnbr_fd(-12345, 1);
    printf("\n");
}

void test_ft_strlcat(void)
{
    char dst[20] = "abc";
    size_t r = ft_strlcat(dst, "defgh", 10);
    TEST_STR("ft_strlcat dst", dst, "abcdefgh");
    TEST_INT("ft_strlcat ret", r, 8);
}

void test_ft_strtrim(void)
{
    char *s = ft_strtrim("  \t  Hello  \n ", " \t\n");
    TEST_STR("ft_strtrim", s, "Hello");
    free(s);
}

void test_ft_isascii(void)
{
    TEST_INT("ft_isascii 65", ft_isascii(65), 1);
    TEST_INT("ft_isascii 128", ft_isascii(128), 0);
}

void test_ft_lstdelone(void)
{
    t_list *node = ft_lstnew(strdup("delete"));
    ft_lstdelone(node, free_node);
    printf("[PASS] ft_lstdelone (no crash)\n");
}

void test_ft_memcmp(void)
{
    TEST_INT("ft_memcmp equal", ft_memcmp("abc", "abc", 3), 0);
    TEST_INT("ft_memcmp diff", ft_memcmp("abc", "abd", 3), -1);
}

void test_ft_putstr_fd(void)
{
    ft_putstr_fd("putstr test", 1);
    printf("\n");
}

void test_ft_strlcpy(void)
{
    char dst[10];
    size_t r = ft_strlcpy(dst, "1234567890", 6);
    TEST_STR("ft_strlcpy dst", dst, "12345");
    TEST_INT("ft_strlcpy ret", r, 10);
}

void test_ft_substr(void)
{
    char *s = ft_substr("Hello World", 6, 5);
    TEST_STR("ft_substr", s, "World");
    free(s);
}

void test_ft_isdigit(void)
{
    TEST_INT("ft_isdigit '7'", ft_isdigit('7'), 1);
    TEST_INT("ft_isdigit 'a'", ft_isdigit('a'), 0);
}

static void iter_inc(void *p) { *(int*)p += 1; }

void test_ft_lstiter(void)
{
    int a = 1, b = 2, c = 3;
    t_list *lst = ft_lstnew(&a);
    ft_lstadd_back(&lst, ft_lstnew(&b));
    ft_lstadd_back(&lst, ft_lstnew(&c));
    ft_lstiter(lst, iter_inc);
    TEST("ft_lstiter", a == 2 && b == 3 && c == 4);
    ft_lstclear(&lst, NULL);
}

void test_ft_memcpy(void)
{
    char src[] = "abcdef";
    char dst[10];
    ft_memcpy(dst, src, 6);
    dst[6] = '\0';
    TEST_STR("ft_memcpy", dst, "abcdef");
}

void test_ft_split(void)
{
    char **tab = ft_split("  one  two three  ", ' ');
    TEST("ft_split count", tab && tab[0] && tab[1] && tab[2] && !tab[3]);
    TEST_STR("ft_split[0]", tab[0], "one");
    TEST_STR("ft_split[1]", tab[1], "two");
    TEST_STR("ft_split[2]", tab[2], "three");
    for (int i = 0; tab[i]; ++i) free(tab[i]);
    free(tab);
}

void test_ft_strlen(void)
{
    TEST_INT("ft_strlen empty", ft_strlen(""), 0);
    TEST_INT("ft_strlen abc", ft_strlen("abc"), 3);
}

void test_ft_tolower(void)
{
    TEST_INT("ft_tolower 'A'", ft_tolower('A'), 'a');
    TEST_INT("ft_tolower 'z'", ft_tolower('z'), 'z');
    TEST_INT("ft_tolower '5'", ft_tolower('5'), '5');
}
