#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <conio.h>
#include "student.h"

extern NodeType *head;

void Query(int op){
    NodeType *s,*r;
    s = head->next;
    printf("\n\n\n**********�� ѯ ѧ �� ס �� �� Ϣ**********\n");
    int sum = 0;
    if(op == 1){
        printf("\n   ������Ҫ��ѯѧ����ѧ�ţ�");
        char sno[10];
        scanf("%s",sno);
        while(s != NULL){
           if(strcmp(s->data.sno,sno) == 0){
                if(sum == 0){
                   printf("Record��   ѧ��        ����    ¥��    �����    �༶��\n");
                    sum++;
                }
                printf("%18s%9s%6d%10d%13s\n",s->data.sno,s->data.name,s->data.building,s->data.room,s->data.className);
           }
           s = s->next;
        }
    }else if(op == 2){
        printf("\n   ������Ҫ��ѯѧ����������");
        char name[20];
        scanf("%s",name);
        while(s != NULL){
           if(strcmp(s->data.name,name) == 0){
                if(sum == 0){
                    printf("Record��   ѧ��        ����    ¥��    �����    �༶��\n");
                    sum++;
                }
                printf("%18s%9s%6d%10d%13s\n",s->data.sno,s->data.name,s->data.building,s->data.room,s->data.className);
           }
           s = s->next;
        }
    }else if(op == 3){
        printf("\n   ������Ҫ��ѯѧ���ķ���ţ�");
        int room;
        scanf("%d",&room);
        while(s != NULL){
           if(s->data.room == room){
                if(sum == 0){
                    printf("Record��   ѧ��        ����    ¥��    �����    �༶��\n");
                    sum++;
                }
               printf("%18s%9s%6d%10d%13s\n",s->data.sno,s->data.name,s->data.building,s->data.room,s->data.className);
           }
           s = s->next;
        }
    }else{
        printf("\n   ������Ҫ��ѯѧ���İ༶����");
        char className[10];
        scanf("%s",className);
        while(s != NULL){
           if(strcmp(s->data.className,className) == 0){
                if(sum == 0){
                    printf("Record��   ѧ��        ����    ¥��    �����    �༶��\n");
                    sum++;
                }
                printf("%18s%9s%6d%10d%13s\n",s->data.sno,s->data.name,s->data.building,s->data.room,s->data.className);
           }
           s = s->next;
        }
    }
    if(sum == 0){
        printf("\n ���޴���Ϣ!\n");
    }
    printf("Press any key to continue...");
    getch();
}

void Query_interface(){
    while(1){
        system("cls");
        printf("        ***************************************************************\n");
        printf("        *                                                             *\n");
        printf("        *                                                             *\n");
        printf("        *             �� �� �� �� �� ѧ �� �� �� �� ϵ ͳ             *\n");
        printf("        *                                                             *\n");
        printf("        *                                                             *\n");
        printf("        *                    1. ��ѧ�Ų�ѯ                            *\n");
        printf("        *                    2. ��������ѯ                            *\n");
        printf("        *                    3. ������Ų�ѯ                          *\n");
        printf("        *                    4. ���༶��ѯ                            *\n");
        printf("        *                    0. ������ѯ�����ϲ�                      *\n");
        printf("        ***************************************************************\n");
        printf("\n\n\n");
        loop1:
        printf("\t�������������");
        int op;
        scanf("%d",&op);
        switch(op){
            case 0:
                return ;
            case 1:
                Query(1);
                break;
            case 2:
                Query(2);
                break;
            case 3:
                Query(3);
                break;
            case 4:
                Query(4);
                break;
            default :
                printf("\n*****����������������룡*****\n");
                goto loop1;
                break;
        }
    }
}
