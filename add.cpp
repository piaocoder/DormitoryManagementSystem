#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <conio.h>
#include "student.h"

extern NodeType *head;

void Add(){
    StType st;
    while(1){
        system("cls");
        printf("\n\n\n******************** �� �� �� Ϣ ********************\n");
        printf("\n������ѧ��ס����Ϣ\n\n");
        printf("ѧ�ţ�");
        scanf("%s",st.sno);
        printf("������");
        scanf("%s",st.name);
        printf("¥�ţ�");
        scanf("%d",&st.building);
        printf("����ţ�");
        scanf("%d",&st.room);
        printf("�༶����");
        scanf("%s",st.className);
        NodeType *s,*r;
        r = head;
        while(r->next != NULL && strcmp(r->next->data.sno,st.sno)){
            r = r->next;
        }
        if(r->next != NULL && strcmp(r->next->data.sno,st.sno) == 0){         //������ѧ�ŵļ�¼������ʾ��Ӧ��Ϣ
            printf("\t>>ѧ���ظ�\n");
        }else{
            s = (NodeType *)malloc(sizeof(NodeType));//�½�һ��ѧ���ڵ�
            s->data = st;
            s->next = r->next;
            r->next = s;
            printf("��������ϢΪ��\n");
            printf("Record��   ѧ��        ����    ¥��    �����    �༶��\n");
            printf("%18s%9s%6d%10d%13s\n",s->data.sno,s->data.name,s->data.building,s->data.room,s->data.className);
        }
        printf("�Ƿ����׷��(y/n)?");
        if(tolower(getch()) == 'n')
            break;
    }
}
