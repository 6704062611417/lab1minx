#include <stdio.h>

int main()
{  
    printf("Input n1:");
    scanf("%d",&n1);
    printf("Input n2:");
    scanf("%d",&n2);
    
    if(n1>n2){
        int re =  0;
        re += n1-n2;
        printf("n1 greater than n2:%d\n",re);
    }else if(n2>n1){
        int re =  0;
        re += n2-n1;
        printf("n2 greater than n1:%d\n",re);
    }

    return 0;
}