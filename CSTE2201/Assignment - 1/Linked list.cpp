#include <bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node *next;
};
struct node *head;
void insertatNth(int data, int n){
    node *tmp1 = new node();
    tmp1->data = data;
    tmp1->next = NULL;
    if(n == 1){
        tmp1->next = head;
        head = tmp1;
        return;
    }
    node *tmp2 = head;
    for(int i = 0; i < n - 2; i++)
        tmp2 = tmp2->next;
    tmp1->next = tmp2->next;
    tmp2->next = tmp1;
}
void deleteatNth(int n){
    node *tmp1 = head;
    if(n == 1){
        head = tmp1->next;
        free(tmp1);
        return;
    }
    for(int i = 0; i < n-2; i++)
        tmp1 = tmp1->next;
    node *tmp2 = tmp1->next;
    tmp1->next = tmp2->next;
    free(tmp2);
}
void print(){
    node *tmp = head;
    while(tmp != NULL){
        printf("%d ", tmp->data);
        tmp = tmp->next;
    }
    printf("\n");
}
int main(){
    insertatNth(2, 1);
    insertatNth(3, 2);
    insertatNth(4, 1);
    insertatNth(5, 3);
    deleteatNth(1);
    print();
    return 0;
}
