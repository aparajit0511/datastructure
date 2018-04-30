#include<stdio.h>
long int arr[100000];
int top=-1;
void push(long int c)
{
    top=top+1;
    arr[top]=c;
}
int pop()
{
    if(top==-1)
    {
        return 0;
    }
    long int item;
    item=arr[top];
    top=top-1;
    return item;
}
int main()
{
    int i,j,k,n,a;
    long int q,c,item;
    scanf("%ld",&q);
    for(i=0;i<q;i++)
    {
        scanf("%d",&a);
        switch(a)
        {
            case 1:item=pop();
                    if(item==0)
                    {
                        printf("No Food");
                    }
                    else
                    {
                        printf("%ld",item);
                    }
                    break;
            case 2:scanf("%ld",&c);
                    push(c);
                    break;
        }
        printf("\n");
    }
}
