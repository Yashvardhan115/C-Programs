#include <stdio.h>

int factorial(int n) {
    int f=1;
    for(int i;i<=n;i++){
        f=f*i;
    }
    return f;
}
    int main(){
        int n;
        scanf("%d",&n);
        int result =factorial(n);
        printf("%d",result);
        return 0;
    }
