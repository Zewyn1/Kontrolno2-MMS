#include<stdio.h>
int digitreplace(int n, int digit, int replace) {
    int res=0, d=1;
    int rem;
    while(n) {
        //finding the remainder from the back
        rem = n%10;
        //Checking whether the remainder equal to the
        //digit we want to replace. If yes then replace.
        if(rem == digit)
            res = res + replace * d;
            //Else dont replace just store the same in res.
        else
            res = res + rem * d;
        d *= 10;
        n /= 10;
    }
    printf("%d\n", res);
    return 0;
}
//main function
int main(int argc, char const *argv[]) {
    int n;
    scanf("%d", &n);
    int digit[10]= {0,1,2,3,4,5,6,7,8,9};
    int replace[10] ={'!','#','/','~','=','`','/','>','.',','};
    for(int i=0;i<10;i++){
        digitreplace(n, digit[i], replace[i]);
    }
    return 0;
}
