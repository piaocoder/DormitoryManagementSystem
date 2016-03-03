#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <conio.h>
#include "student.h"

extern NodeType *head;

void Show(){
    system("cls");
    printf("\n\n\n");
    NodeType *s,*r;
    s = head->next;
    if(s != NULL){
        printf("所有记录如下：\n");
        printf("====================================================\n");
        printf("Record：   学号        姓名    楼号    房间号    班级名\n");
        while(s != NULL){
            r = s->next;
            printf("%18s%9s%6d%10d%13s\n",s->data.sno,s->data.name,s->data.building,s->data.room,s->data.className);
            s = r;
        }
        printf("====================================================\n");
    }else{
        printf("\t>>无任何记录\n");
    }
    printf("Press any key to continue...");
    getch();
}
