#include "libft.h"

void swap(int *a, int *b)
{
    int    temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

int grow(t_heap *heap)
{
    int *new_arr;
    int new_cap;

    if(heap->cap == 0)
        new_cap = 8;
    else
        new_cap = heap->size - 2;
    new_arr = malloc(sizeof(int) * new_cap);
    if(!new_arr)
        return -1;
    if (heap->arr)
        ft_memcpy(new_arr, heap->arr, sizeof(int) * heap->size);
    free(heap->arr);
    heap->arr = new_arr;
    heap->cap = new_cap;
    return 0;
}

int    insert(t_heap *heap, int *element){
    int parent;
    int cur;

    if ((heap->size == heap->cap) && grow(heap) != 0)
        return -1;
    heap->arr[heap->size] = *element;
    heap->size++;
    cur = heap->size - 1;
    while (cur != 0)
    {
        parent = (cur - 1) / 2;
        if (heap->arr[cur] < heap->arr[parent])
        {
            swap(&heap->arr[cur], &heap->arr[parent]);
            cur = parent;
        }
        else   
            break;
    }
    return 0;
}

void heapify(t_heap *heap, int i)
{
    int root = i;
    int l = 2 * i + 1;
    int r = 2 * i + 2;

    if (l < heap->size && heap->arr[l] < heap->arr[root])
        root = l;
    if (r < heap->size && heap->arr[r] < heap->arr[root])
        root = r;
    if (root != i)
    {
        swap(&heap->arr[root], &heap->arr[i]);
        heapify(heap, root);
    }
}

int pop(t_heap *heap)
{
    int out;
    
    if (heap->size <= 0)
        return -1;
    out = heap->arr[0];
    heap->arr[0] = heap->arr[heap->size - 1];
    heap->size--;
    if (heap->size)
        heapify(heap, 0);
    return out;
}
