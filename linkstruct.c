#include <stdio.h>
typedef struct 
{
    const char *name;
    const char *open;
    const char *closes;
    //đệ quy struct
    struct place *next;
}place;
void display(place *start){
    place *i = start;
    //loop đến khi nào NULL và sau đó gán i là giá trị của next
    for(; i != NULL; i = i->next){
        printf("Name %s open: %s-%s \n", i->name, i->open, i->closes);
    }
}
int main(){
     place TS = {"Okoonzz", "10:00", "12:00", NULL};
     place HS = {"Rocev", "07:00", "10:00", NULL};
     place RS = {"Peak", "14:00", "18:00", NULL};
     place KS = {"Cozz", "17:00", "20:00", NULL};
    TS.next = &HS;
    HS.next = &RS;
    //Tiếp đến sẽ in ra của KS 
    RS.next = &KS;
    place AS = {"Now", "00:00", "15:00", NULL};
    //Muốn chèn thêm AS vào giữa RS và KS 
    RS.next = &AS;
    AS.next = &KS;
    display(&TS); 
}