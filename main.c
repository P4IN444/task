#include "libft.h"
#include <assert.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    printf("Running valid tests...\n");
    
    // 1. Valid Test: ft_strlen
    assert(ft_strlen("Hello") == 5);
    
    // 2. Valid Test: ft_toupper
    assert(ft_toupper('a') == 'A');
    
    // 3. Valid Test: ft_strjoin
    char *str = ft_strjoin("42", "Network");
    assert(strcmp(str, "42Network") == 0);
    free(str);
    
    printf("Valid tests passed!\n");

    // 4. Intentional Failing Test
    printf("Running the failing test...\n");
    assert(ft_strlen("Fail") == 99); // This is false and will cause an abort

    return (0);
}