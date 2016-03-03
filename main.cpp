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
    head = (NodeType *)malloc(sizeof(NodeType));   //创建头结点
    head->next = NULL;
    while(1){
        system("cls");
        printf("        ***************************************************************\n");
        printf("        *                                                             *\n");
        printf("        *                                                             *\n");
        printf("        *             青 岛 理 工 大 学 宿 舍 管 理 系 统             *\n");
        printf("        *                                                             *\n");
        printf("        *                                                             *\n");
        printf("        *                         1. 录入信息                         *\n");
        printf("        *                         2. 追加信息                         *\n");
        printf("        *                         3. 修改信息                         *\n");
        printf("        *                         4. 显示信息                         *\n");
        printf("        *                         5. 查询信息                         *\n");
        printf("        *                         6. 统计信息                         *\n");
        printf("        *                         7. 删除信息                         *\n");
        printf("        *                         8. 保存信息                         *\n");
        printf("        *                         9. 版权信息                         *\n");
        printf("        *                         0. 退出本程序                       *\n");
        printf("        *                                                             *\n");
        printf("        *                                                             *\n");
        printf("        ***************************************************************\n");
        printf("\n\n\n");
        loop0:
        printf("\t请输入操作数：");
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
                printf("\n*****输入错误，请重新输入！*****\n");
                goto loop0;
                break;
        }
    }
    return 0;
}
