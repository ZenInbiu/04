#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct node
{
    int data;
    struct node *next;
}node;
//tạo node
node* makenew(int x){
    node *ptr = malloc(sizeof(node));
    ptr->data = x;
    ptr->next = NULL;
    return ptr;
}
//duyệt node
/*vì mỗi node là một con trỏ kiểu node nên quản lí bằng con trỏ head*/
void duyet(node *head){
    while (head != NULL){
        printf("%d \n", head->data);
//head được gán bằng địa chỉ của node tiếp theo
        head = head->next;
    }
}
/*thay đổi danh sách liên kết nên truyền con trỏ*/
void pushfront(node **head, int x){
    //tạo node mới 
    node *newNode = makenew(x);
    newNode->next = *head;
    *head = newNode;
}
int main(){
    node *head = NULL;
    for(int i = 0; i <= 5; i++) pushfront(&head, i);
    duyet(head);
}
