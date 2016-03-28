#ifndef __LINKLIST_IMP_STACK_H__
#define __LINKLIST_IMP_STACK_H__

typedef int element_type;

typedef struct tag_stack_node {
    element_type    element;
    struct tag_stack_node *next;
} stack_node;

typedef stack_node *ptr_stack_node;
typedef ptr_stack_node Stack;

// external function declare
extern int is_empty(Stack s);
extern Stack create_stack(void);
extern void destroy_stack(Stack s);
extern void make_empty(Stack s);
extern void push(element_type e, Stack s);
extern element_type top(Stack s);
extern void pop(Stack s);

#endif // __LINKLIST_IMP_STACK_H__
