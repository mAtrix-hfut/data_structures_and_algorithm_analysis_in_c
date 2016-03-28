#include "linklist_imp_stack.h"
#include <stdlib.h>
#include <stdio.h>

extern int
is_empty(Stack s)
{
    return s->next == NULL;
}

extern Stack
create_stack(void)
{
    Stack s;

    s = (Stack)malloc(sizeof(stack_node));
    if (NULL == s)
    {
        // fatal error!!!
        printf("out of space!\n");
        return NULL;
    }

    s->next = NULL;
    make_empty(s);

    return s;
}

extern void
destroy_stack(Stack s)
{

}

extern void
make_empty(Stack s)
{
    if (NULL == s)
    {
        // should create stack first!
        printf("should create stack first!\n");
        return;
    }
    else
    {
        while (!is_empty(s))
            pop(s);
    }
}

extern void
push(element_type e, Stack s)
{
    ptr_stack_node temp_node;

    temp_node = (ptr_stack_node)malloc(sizeof(stack_node));
    if (NULL == temp_node)
    {
        // fatal error!!!
        printf("out of space!\n");
    }
    else
    {
        temp_node->element = e;
        temp_node->next    = s->next;
        s->next = temp_node;
    }
}

extern element_type
top(Stack s)
{
    if (!is_empty(s))
        return s->next->element;

    // empty stack
    printf("empty stack!\n");
    return 0;
}

extern void
pop(Stack s)
{
    ptr_stack_node first_node;

    if (is_empty(s))
    {
        // empty stack
        printf("empty stack!\n");
        return;
    }
    else
    {
        first_node = s->next;
        s->next = first_node->next;
        free(first_node);
    }
}
