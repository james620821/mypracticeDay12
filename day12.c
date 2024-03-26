#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void increase(int n[3]);
void increase_constant(int);
int max(int v[], int);
void f(int v[3]);
int main()
{
    //(重要)影片19 陣列的複製，當呼叫副程式參數值是陣列，參數值不會複製一份，其值會因函式而改變
    //當呼叫副程式參數值是一般數值，參數值則會複製一份，其值不會因副程式的執行而改變
    //以下為例子:
    /*
    int n[3]={1, 2, 3};
    int v=1;
    increase(n);
    for(int i=0; i<3; i++)
    {
        printf("n[%d] = %d\n",i, n[i]);
    }
    increase_constant(v);
    printf("%d",v);
    */
    //影片19-2 可對任意大小陣列求最大值的函式
    /*
    int a[3]={3, 9, 7};
    printf("Max: %d\n", max(a, 3));
    int b[5]={3, 9, 1, 2, 7};
    printf("Max: %d\n", max(b, 5));
    */
    //影片19-4 使用sizeof求陣列長度，sizeof不能用在函式裡(重要)
    /*
    int v[3]={1, 2, 3};
    printf("Size of int: %zu\n",sizeof(int));
    printf("Size of v[0]: %zu\n",sizeof(v[0]));
    printf("Size of v[0]: %zu\n",sizeof(v));
    printf("Size of v[0]: %zu\n",sizeof(v)/sizeof(v[0]));
    f(v);
    */
    //影片19-5 用保留值標記陣列長度
    int a[4]={3,9,7,-1};
    printf("Max: %d\n", maxa(a));
    return 0;
}
int maxa(int a[])
{
    int max=a[0],i=1;
    while (a[i]!=-1)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
        i++;
    }
    return max;
}
void f(int v[3])
{
    printf("Size of int: %zu\n",sizeof(int));
    printf("Size of v[0]: %zu\n",sizeof(v[0]));
    printf("Size of v[0]: %zu\n",sizeof(v));
    printf("Size of v[0]: %zu\n",sizeof(v)/sizeof(v[0]));
}

int max(int v[], int N)
{
    int max=v[0], i;
    for (i=0; i<N; i++)
    {
        if(v[i]>max)
        {
            max=v[i];
        }
    }
    return max;
}

void increase(int n[3])
{
    int i;
    for(i=0; i<3; i++)
    {
        n[i]++;
    }
}
void increase_constant(int v)
{
    v++;
}
