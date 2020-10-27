#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
#include "linked_list.h"

void test_init_list() {
    struct List *list = init_list();
    assert(sizeof(list) == sizeof(struct List*));
    assert(list->first == NULL);
    printf("test_init_list: OK");
}

void test_add_first(int* test_value, int n) {
    struct List *list = init_list();
    for(int i = 0; i < n; i++) {
        add_first(list, test_value[i]);
    }
    int j = 0;
    for (struct ListNode* i = list->first; i != NULL; i = i->next, j++) {
        assert(test_value[n - j - 1] == i->data);
    }
    printf("test_add_first: OK");
}

void test_add_last(int* test_value, int n) {
    struct List *list = init_list();
    for(int i = 0; i < n; i++) {
        add_last(list, test_value[i]);
    }
    int j = 0;
    for (struct ListNode* i = list->first; i != NULL; i = i->next, j++) {
        assert(test_value[j] == i->data);
    }
    printf("test_add_last: OK");
}

int main() {
    int n = 4;
    int test_value[n];
    test_value[0] = 5;
    test_value[1] = 10;
    test_value[2] = 33;
    test_value[3] = 40;

    test_init_list(); printf("\n");
    test_add_first(test_value, n); printf("\n");
    test_add_last(test_value, n);

    return 0;
}