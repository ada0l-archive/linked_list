#include <stdlib.h>
#include <stdio.h>
#include "linked_list.h"

void using_list_node_without_list();
void using_list();

int main() {
    printf("Using list node without list struct: \n");
    using_list_node_without_list();
    printf("\nUsing list:\n");
    using_list();

    return 0;
}

void using_list_node_without_list() {
    struct ListNode* node_1 = (struct ListNode*) malloc(sizeof(struct ListNode));
    struct ListNode* node_2 = (struct ListNode*) malloc(sizeof(struct ListNode));
    struct ListNode* node_3 = (struct ListNode*) malloc(sizeof(struct ListNode));

    node_1->data = 10;
    node_1->next = node_2;

    node_2->data = 11;
    node_2->next = node_3;

    node_3->data = 12;
    node_3->next = 0;

    print_nodes(node_1);

    struct ListNode* node_4 = (struct ListNode*) malloc(sizeof(struct ListNode));
    node_4->data = 1;
    node_4->next = node_1;

    print_nodes(node_4);

    struct ListNode* node_5 = (struct ListNode*) malloc(sizeof(struct ListNode));
    node_5->data = 5;
    node_5->next = node_3;
    node_2->next = node_5;

    printf("\n");
    print_nodes(node_4);
}

void using_list() {
    struct List *list = init_list();
    add_first(list, 2);
    add_first(list, 3);
    add_last(list, 3);
    add_last(list, 10);
    print_list(list);
}

