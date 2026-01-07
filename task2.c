#include <stdio.h>
#include <stdlib.h>
struct node {
    int data;
    struct node *next;
};
struct node *head = NULL;
void insert() {
    struct node *n, *t;
    n = (struct node *)malloc(sizeof(struct node));
    printf("Enter value: ");
    scanf("%d", &n->data);
    n->next = NULL;
    if (head == NULL) {
        head = n;
    } 
    else {
        t = head;
        while (t->next != NULL)
            t = t->next;
        t->next = n;
    }
}
void delete() {
    struct node *t = head, *p = NULL;
    int val;
    if (head == NULL) {
        printf("List empty\n");
        return;
    }
    printf("Enter value to delete: ");
    scanf("%d", &val);
    if (head->data == val) {
        head = head->next;
        free(t);
        return;
    }
    while (t != NULL && t->data != val) {
        p = t;
        t = t->next;
    }
    if (t == NULL) {
        printf("Value not found\n");
        return;
    }
    p->next = t->next;
    free(t);
}

void display() {
    struct node *t = head;
    if (head == NULL) {
        printf("List empty\n");
        return;
    }
    while (t != NULL) {
        printf("%d -> ", t->data);
        t = t->next;
    }
    printf("NULL\n");
}
int main() {
    int ch;
while (1) {
        printf("\n1.Insert  \n2.Delete  \n3.Display  \n4.Exit\n");
        printf("select your choice(no):");
        scanf("%d", &ch);
        if (ch == 1) insert();
        else if (ch == 2) delete();
        else if (ch == 3) display();
        else break;
    }
    return 0;
}
