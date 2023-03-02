
#include<stdio.h>
int main(){
    int a,b,c=0;
    scanf("%d%d",&a,&b);
    for(int i=a;i<=b;i++){
        int lucky=0,x=i;
        while(x){
            if(x%10!=4 && x%10!=7){
                lucky++;
                x=x/10;
            }if(lucky==0){
                printf("%d ",i);
                c++;
            }else printf("-1\n");
        }
    }return 0;
}
