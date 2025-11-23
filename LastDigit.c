#include <stdio.h>
int LastDigit(int a, int b){
    int res=1;
while(b>1)
{
    if (b&1)
    {
       res*=a;
    }
    a*=a;
    b/=2;

}
a*=res;
return a;
}
int main(){
    int n=0;
    int a=0;
    int b=0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &a, &b);
        printf("%d", LastDigit(a,b));
    }
    
}