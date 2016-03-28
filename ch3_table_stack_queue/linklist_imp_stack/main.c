#include <stdio.h>
#include <stdlib.h>
#include "linklist_imp_stack.h"

int main()
{
    Stack stack = create_stack();

    int i = 0;
    for (i = 0; i < 10; i++)
    {
        push(i, stack);
    }

    while(!is_empty(stack))
    {
        printf("stack top is:%2d\n", top(stack));

        pop(stack);
    }

    destroy_stack(stack);

    return 0;
}
