#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <conio.h>
#include "student.h"

extern NodeType *head;

void Save(){
    system("cls");
    printf("\n\n\n**********     �� �� �� Ϣ ��     **********\n");
    FILE *fp;
    NodeType *p = head->next;
    if((fp=fopen("record.dat","wb")) == NULL){     //��дģʽ��
        printf("\t���ܽ���record.dat�ļ�\n");
        exit(2);
    }
    while(p != NULL){
        fwrite(&p->data,sizeof(StType),1,fp);
        p = p->next;
    }
    printf("\n\n\n**********   ¼ �� �� Ϣ �� �� �� **********\n");
    printf("Press any key to continue...");
    getch();
    fclose(fp);                                     //�ر��ļ�
}
