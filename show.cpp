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
        printf("���м�¼���£�\n");
        printf("====================================================\n");
        printf("Record��   ѧ��        ����    ¥��    �����    �༶��\n");
        while(s != NULL){
            r = s->next;
            printf("%18s%9s%6d%10d%13s\n",s->data.sno,s->data.name,s->data.building,s->data.room,s->data.className);
            s = r;
        }
        printf("====================================================\n");
    }else{
        printf("\t>>���κμ�¼\n");
    }
    printf("Press any key to continue...");
    getch();
}
