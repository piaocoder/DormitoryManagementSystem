#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <conio.h>
#include "student.h"

NodeType *head;
extern void Load();
extern void Add();
extern void Modify();
extern void Show();
extern void Query_interface();
extern void Del_interface();
extern void Save();
extern void Explain();

int main(){
    system("cls");
    system("color F9");
    head = (NodeType *)malloc(sizeof(NodeType));   //����ͷ���
    head->next = NULL;
    while(1){
        system("cls");
        printf("        ***************************************************************\n");
        printf("        *                                                             *\n");
        printf("        *                                                             *\n");
        printf("        *             �� �� �� �� �� ѧ �� �� �� �� ϵ ͳ             *\n");
        printf("        *                                                             *\n");
        printf("        *                                                             *\n");
        printf("        *                         1. ¼����Ϣ                         *\n");
        printf("        *                         2. ׷����Ϣ                         *\n");
        printf("        *                         3. �޸���Ϣ                         *\n");
        printf("        *                         4. ��ʾ��Ϣ                         *\n");
        printf("        *                         5. ��ѯ��Ϣ                         *\n");
        printf("        *                         6. ͳ����Ϣ                         *\n");
        printf("        *                         7. ɾ����Ϣ                         *\n");
        printf("        *                         8. ������Ϣ                         *\n");
        printf("        *                         9. ��Ȩ��Ϣ                         *\n");
        printf("        *                         0. �˳�������                       *\n");
        printf("        *                                                             *\n");
        printf("        *                                                             *\n");
        printf("        ***************************************************************\n");
        printf("\n\n\n");
        loop0:
        printf("\t�������������");
        int op;
        scanf("%d",&op);
        switch(op){
            case 1:
                Load();
                break;
            case 2:
                Add();
                break;
            case 3:
                Modify();
                break;
            case 4:
                Show();
                break;
            case 5:
                Query_interface();
                break;
            case 6:
                //Sum();
                break;
            case 7:
                Del_interface();
                break;
            case 8:
                Save();
                break;
            case 9:
                Explain();
                break;
            case 0:
                exit(0);
                break;
            default :
                printf("\n*****����������������룡*****\n");
                goto loop0;
                break;
        }
    }
    return 0;
}
