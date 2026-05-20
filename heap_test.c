#include "libft.h"
#include <stdio.h>

int main(void)
{
    t_heap *heap;
    
    heap->arr = NULL;
    heap->cap = 0;
    heap->size = 0;

    int b = 4;
    int l = 55;
    int c = 13;
    int a = 9;

    if (pop(heap) == -1)
    {
        printf("Invalid test: dont use pop when the array is empty");
        return 1;
    }
    insert(heap, &a);
    insert(heap, &l);
    insert(heap, &b);
    insert(heap, &c);

    for (int i = 0; i < heap->size; i++)
        printf("%d\n", heap->arr[i]);
}
