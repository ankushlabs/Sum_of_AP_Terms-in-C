// find sum of Terms of AP
#include <stdio.h>
void sum_of_terms(int*,int,int);
int main()
{   int n=0,t=0;
    printf("Enter the terms you want to enter:- ");
    scanf("%d",&t);
    if(t<2){
        printf("2 Terms are required !!");
    }
    else{
        int sequence[t];
        printf("Enter the sequence:- ");
        for(int i=0;i<t;i++){
                printf("Term %d= ",i+1);
                scanf("%d",&sequence[i]);
        }
        printf("Enter the term who's sum want to calculate:- ");
        scanf("%d",&n);
        sum_of_terms(sequence,n,t);
    }
    
    
    return 0;
}
void sum_of_terms(int* ar, int n,int size){
    int a=0,d=0,first_d;
    first_d = ar[1] - ar[0];
    for(int i=1;i<size;i++){
        d = ar[i] - ar[i-1];
        if(d!=first_d){
            printf("d is not common difference !!\n");
            break;
        }
    }
    if(d!=first_d){
        printf("Sequence is not an AP!!!!\n");
    }
    else{
        a = ar[0];
        printf("The common differnce is :- %d\t",d);
        printf("The first term is :- %d\n",a);
        int sum = (n*(2*a+(n-1)*d))/2;
        printf("The sum of terms is :- %d",sum);
    }
    
}
