#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <conio.h>
#include "student.h"

extern NodeType *head;

void Modify(){                                      //�޸�һ��ѧ����¼��ֻ�ܴθó�ѧ�������������
    char sno[10];
    while(1){
        system("cls");
        printf("\n\n\n**********�� �� ѧ �� ס �� �� Ϣ**********\n");
        printf("\n   ������Ҫ�޸�ѧ����ѧ�ţ�");
        scanf("%s",sno);
        NodeType *s;
        s = head->next;
        while(s != NULL && strcmp(s->data.sno,sno) != 0){
            s = s->next;
        }
        if(s != NULL){
            printf("Record��   ѧ��        ����    ¥��    �����    �༶��\n");
            printf("%18s%9s%6d%10d%13s\n",s->data.sno,s->data.name,s->data.building,s->data.room,s->data.className);
            printf("\n\t���Ҫ�޸���y/n��?");
            if(tolower(getch()) == 'y'){
                printf("\n\t����������Ϣ:\n");
                printf("����:");
                scanf("%s",s->data.name);
                printf("¥��:");
                scanf("%d",&s->data.building);
                printf("�����:");
                scanf("%d",&s->data.room);
                printf("�༶��:");
                scanf("%s",s->data.className);
                printf("\n�����Ľ��:\n");
                printf("Record��   ѧ��        ����    ¥��    �����    �༶��\n");
                printf("%18s%9s%6d%10d%13s\n",s->data.sno,s->data.name,s->data.building,s->data.room,s->data.className);
            }
        }else{
            printf("\t>>û�и�ѧ��������,�޷������޸Ĳ���!\n");
        }
        printf("�Ƿ�����޸�(y/n)?");
        if(tolower(getch()) == 'n')
            break;
    }
}
