
#include <cstdio>

void menu();
int main()
{
    menu();
    return 0;
}

void menu() {
    printf("欢迎进入这个bug很多的系统！\n\n");//用户指南
    printf("若想录入信息请输入1\n\n若想显示已录入信息请输入2\n\n若想修改（删除）某个学生的信息并显示请输入3\n\n");
    printf("若想修改（增加）信息并显示请输入4\n\n若想查询某一个学生的成绩请输入5\n\n若想成绩排序请输入6（由大到小）\n\n登出系统请输入0\n\n");
    printf("请选择您需要的操作：");
    int countSystemCnt,inputNumber = 0;
    scanf("%d", &inputNumber);
    while (inputNumber != 0){
        if (inputNumber == 1 && countSystemCnt == 0){
            while (inputNumber != 1){
                printf("请先录入信息\n");
                scanf("%d", &inputNumber);
                if (inputNumber == 0){
                    goto end;
                }
            }
        }
        switch (inputNumber) {
            case 1:
                printf("录入信息\n");
                break;
            case 2:
                printf("显示已录入信息\n");
                break;
            case 3:
                printf("修改（删除）某个学生的信息并显示\n");
                break;
            case 4:
                printf("修改（增加）信息并显示\n");
                break;
            case 5:
                printf("查询某一个学生的成绩\n");
                break;
            case 6:
                printf("成绩排序\n");
                break;
        }
        printf("请选择您需要的操作：");
        scanf("%d", &inputNumber);
        printf("\n");
        countSystemCnt ++;
    }
    end:
    printf("已退出系统\n");
}