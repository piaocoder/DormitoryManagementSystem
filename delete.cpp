#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <conio.h>
#include "student.h"

extern NodeType *head;

void Delete(){
    char sno[10];
    while(1){
        system("cls");
        printf("\n\n\n**********ɾ �� ѧ �� ס �� �� Ϣ**********\n");
        printf("\n   ������Ҫɾ��ѧ����ѧ�ţ�");
        scanf("%s",sno);
        NodeType *s,*r;
        r = head;
        s = head->next;
        while(s != NULL){
            if(strcmp(s->data.sno,sno) == 0)
                break;
            r = s;
            s = s->next;
        }
        if(s != NULL){
            r->next = s->next;
            free(s);
            printf("\tѧ��Ϊ%s�ļ�¼��ɾ��\n",sno);
        }else{
            printf("\t>>�ļ���û�и�ѧ��������,�޷�����ɾ������!\n");
        }
        printf("�Ƿ����ɾ��(y/n)?");
        if(tolower(getch()) == 'n')
            break;
    }
}

void Deleteall(){
    system("cls");
    NodeType *s,*r;
    s = head->next;
    if(s != NULL){
        r = s->next;
        free(s);
        s = r;
    }
    head->next = NULL;
    printf("\n\n\n");
    printf("ȫ�����������Ϣ��ɾ��\n\n");
    printf("Press any key to continue...");
    getch();
}

void Del_interface(){
    while(1){
        system("cls");
        printf("        ***************************************************************\n");
        printf("        *                                                             *\n");
        printf("        *                                                             *\n");
        printf("        *             �� �� �� �� �� ѧ �� �� �� �� ϵ ͳ             *\n");
        printf("        *                                                             *\n");
        printf("        *                                                             *\n");
        printf("        *                    1. ��ѧ��ɾ��                            *\n");
        printf("        *                    2. ȫ��ɾ��                              *\n");
        printf("        *                    0. ������ѯ�����ϲ�                      *\n");
        printf("        ***************************************************************\n");
        printf("\n\n\n");
        loop2:
        printf("\t�������������");
        int op;
        scanf("%d",&op);
        switch(op){
            case 0:
                return ;
            case 1:
                Delete();
                break;
            case 2:
                Deleteall();
                break;
            default :
                printf("\n*****����������������룡*****\n");
                goto loop2;
                break;
        }
    }
}
