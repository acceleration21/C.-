#include <stdio.h>

int main()
{
    int qian = 0;
    while (1)
    {

        printf("1--存钱\n");
        printf("2--取钱\n");
        printf("3--余额\n");
        printf("4--退出\n");

        printf("请输入相应编码:\n");
        int code;
        scanf("%d", &code);

        if (code == 1)
        {
            int cun;
            printf("输入要存钱的数额\n");
            scanf("%d", &cun);
            qian += cun;
            printf("存钱成功，回车继续\n");

            char x;
            scanf("%c", &x);
            scanf("%c", &x);
        }
        if (code == 2)
        {
            printf("输入要取的数额\n");
            int qu;
            scanf("%d", &qu);

            if (qu > qian)
            {
                printf("取钱实拍，余额不足\n");
                char x;
                scanf("%d", &x);
                
            }
            else
            {

                qian -= qu;

                printf("取钱成功回车继续\n");
                char x;
                scanf("%d", &x);
                scanf("%d", &x);
            }
        }

        if (code == 3)
        {
            printf("当前余额为:\n");
            printf("%d\n", qian);

            printf("回车继续\n");
            char x;
            scanf("%c", &x);
            scanf("%c", &x);
        }

        if (code == 4)
        {
            printf("回车退出\n");
            break;
        }
    }

    return 0;
}
