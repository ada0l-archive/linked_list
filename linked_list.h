#ifndef LINKED_LIST_H
#define LINKED_LIST_H
struct ListNode {
    int data;
    struct ListNode* next;
};

struct List {
    struct ListNode* first;
};
struct List* init_list();
void add_first(struct List* list, int value);
void print_elements(struct List* list);
void add_last(struct List* list, int value);
void print_nodes(struct ListNode* node);
void print_list(struct List* list);
#endif