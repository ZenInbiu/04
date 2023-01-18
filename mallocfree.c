#include <stdio.h>
#include <stdlib.h> // thư viện malloc và free
typedef struct{
    char *name;
    char *open;
    char *close;
    struct island *next;
}island;

//Hàm trả về con trỏ 
island* create(char *name){
//Nếu không dùng malloc thì sẽ ko in ra được tên vì i lưu stack và thoát hàm sẽ hủy 
//Dùng con trỏ thì ko cần lo đến độ dài chuỗi nhập vào
//Dùng mảng name thì sẽ chỉ lưu được 8 ký tự
    island *i = malloc(sizeof(island));
//strdup để lưu name vào malloc 
    i->name = strdup(name);
    i->open = "09:00";
    i->close = "17:00";
    return i; 
    free(i);
    free(name);
}
void display(island *start){
    island *i = start;
    for(; i != NULL; i = i->next){
        printf("Name: %s open %s-%s", i->name, i->open, i->close);
   }
}
int main(){
    char name[80];
    fgets(name, 80, stdin);
    island *p_island0 = create(name);
    fgets(name, 80, stdin);
    island *p_island1 = create(name);
    p_island0->next = p_island1;
//Không truyền &p_island0 vì create()trả về địa chỉ rồi thì không cần "&" nữa
    display(p_island0);
}