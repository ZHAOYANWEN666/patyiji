#include<stdio.h>
int main(){
    int n[1001]={0},num,i;
    int A[6]={0},c1=0,c2=0;
    double A4=0.0;
    scanf("%d",&num);
    if(num<=1000){
        for(i=0;i<num;i++){
            scanf("%d",&n[i]);
        }
        A[4]=1;
        for(i=0;i<num;i++){
            if(n[i]%10==0){
                A[1]=A[1]+n[i];
            }
            if(n[i]%5==1){
                c2++;
                if(c2%2==0){
                    A[2]=A[2]-n[i];
                }else{
                    A[2]=A[2]+n[i];
                }
            }
            if(n[i]%5==2){
                A[3]++;
            }
            if(n[i]%5==3){
                A4=A4+n[i];
                c1++;
            }
            if(n[i]%5==4){
                if(A[5]<n[i]) A[5]=n[i];
            }

        }

        for(i=1;i<4;i++){
            if(A[i]==0){
                printf("N ");
            }else{
                printf("%d ",A[i]);
            }
        }

        if(A4==0){
            printf("N ");
        }else{
            printf("%0.1f ",A4/c1);
        }

        if(A[5]==0){
            printf("N");
        }else{
            printf("%d",A[5]);
        }
    }
    return 0;
}


