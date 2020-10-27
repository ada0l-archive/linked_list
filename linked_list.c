#include <stdlib.h>
#include <stdio.h>

struct ListNode {
    int data;
    struct ListNode* next;
};

struct List {
    struct ListNode* first;
};

struct List* init_list() {
    struct List* list = (struct List*) malloc(sizeof(struct List));
    list->first = NULL;
    return list;
}

void add_first(struct List* list, int value) {
    struct ListNode* node = (struct ListNode*) malloc(sizeof(struct ListNode));
    node->data = value;
    node->next = list->first;
    list->first = node;
}

void add_last(struct List* list, int value) {
    struct ListNode** i = &list->first;
    for(; *i; i = &(*i)->next);
    struct ListNode* node = (struct ListNode*) malloc(sizeof(struct ListNode));
    node->data = value;
    node->next = NULL;
    *i = node;
}

void print_nodes(struct ListNode* node) {
    for (struct ListNode* i = node; i != NULL; i = i->next) {
        printf("%d ", i->data);
    }
}

void print_list(struct List* list) {
    print_nodes(list->first);
}

