#include<stdio.h> 
#include<string.h>
int main()
{
    void change(int a); 
    int k, i;
    for(i=0;i<5;i++)
    {
    	scanf("%d",&k);
    	change(k); 
	}
    return 0;
}

void change(int a)
{
    void exchange(int b);
    int x,y,c,d;
    if (a < 0){
    	printf("��");
		change(-a); 
	}
	else{
		if (a <= 10) exchange(a);
        else if (a > 10 && a < 20) {
        printf("ʮ");
        x = a % 10;
        exchange(x);
        }
        else if (a >= 20 && a % 10 == 0 && a < 100) {
        y = a / 10;
        exchange(y);
        printf("ʮ");
        }
        else if(a==100) printf("һ��");
	    else if(a>100){
	    c=a/100;
	    exchange(c);
	    printf("��");
        d=a%100; 
        if(d<10){
    	printf("��");
    	exchange(d);
	   }
        
	    if(d>=10){
        if(d<=20) printf("һ");
		change(d); 	
		} 
	 } 
        else {
        x = a / 10;
        exchange(x);
        printf("ʮ");
        y = a % 10;
        exchange(y);
       }
	   }
   
}

void exchange(int b)
{
    if (b == 0)printf("��");
    if (b == 1)printf("һ");
    if (b == 2)printf("��");
    if (b == 3)printf("��");
    if (b == 4)printf("��");
    if (b == 5)printf("��");
    if (b == 6)printf("��");
    if (b == 7)printf("��");
    if (b == 8)printf("��");
    if (b == 9)printf("��");
    if (b == 10)printf("ʮ");
}
