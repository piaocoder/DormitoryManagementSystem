#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <conio.h>
#include "student.h"

extern NodeType *head;

void Load(){
    system("cls");
    printf("\n\n\n**********     ¼ �� �� Ϣ ��     **********\n");
    FILE *fp;
    NodeType *s,*r;
    StType st;
    int n;
    char sno[10];
    if((fp=fopen("record.dat","rb")) == NULL){
        printf("\t>>���ܴ�record.dat�ļ�\n");
        exit(1);
    }
    fseek(fp,0,2);
    n = ftell(fp)/sizeof(StType);
    if(n > 0){                                      //�ļ�����
        r = head;                                      //rָ��ͷ���
        rewind(fp);
        for(int i = 0; i < n; i++){                 //β�巨
            fread(&st,sizeof(StType),1,fp);         //��ȡһ��ѧ����¼
            s = (NodeType *)malloc(sizeof(NodeType));//�½�һ��ѧ���ڵ�
            s->data = st;
            r->next = s;                            //��*p�ڵ�����ĩβ
            r = s;                                  //*rʼ��ָ��β�ڵ�
        }
        r->next = NULL;                             //β�ڵ��next��Ϊnull
        fclose(fp);
    }else{
        printf("\n\n\n\t>>���κμ�¼\n");
        fclose(fp);
    }
    printf("\n\n\n**********   ¼ �� �� Ϣ �� �� �� **********\n");
    printf("Press any key to continue...");
    getch();
}
