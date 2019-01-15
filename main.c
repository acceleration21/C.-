#include <stdio.h>

int main()
{

    while (1)
    {

        int qian;
        printf("1--存钱");
        printf("2--取钱");
        printf("3--余额");
        printf("4--退出");

        printf("请输入相应编码:\n");
        int code;
        scanf("%d", &code);

        if (code == 1)
        {
            int cun;
            scanf("%d", &cun);
            qian += cun;
            printf("存錢成功，回車繼續\n");

            char x;
            scanf("%c", &x);
            scanf("%c", &x);
        }
        if (code == 2)
        {
        }
        if (code == 3)
        {
        }
        if (code == 4)
        {
        }
    }

    return 0;
}
