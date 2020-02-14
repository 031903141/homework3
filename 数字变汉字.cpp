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
    	printf("负");
		change(-a); 
	}
	else{
		if (a <= 10) exchange(a);
        else if (a > 10 && a < 20) {
        printf("十");
        x = a % 10;
        exchange(x);
        }
        else if (a >= 20 && a % 10 == 0 && a < 100) {
        y = a / 10;
        exchange(y);
        printf("十");
        }
        else if(a==100) printf("一百");
	    else if(a>100){
	    c=a/100;
	    exchange(c);
	    printf("百");
        d=a%100; 
        if(d<10){
    	printf("零");
    	exchange(d);
	   }
        
	    if(d>=10){
        if(d<=20) printf("一");
		change(d); 	
		} 
	 } 
        else {
        x = a / 10;
        exchange(x);
        printf("十");
        y = a % 10;
        exchange(y);
       }
	   }
   
}

void exchange(int b)
{
    if (b == 0)printf("零");
    if (b == 1)printf("一");
    if (b == 2)printf("二");
    if (b == 3)printf("三");
    if (b == 4)printf("四");
    if (b == 5)printf("五");
    if (b == 6)printf("六");
    if (b == 7)printf("七");
    if (b == 8)printf("八");
    if (b == 9)printf("九");
    if (b == 10)printf("十");
}
