#include<stdio.h>
#include<string.h>
int main()
{
    int point(char num[]);
    int point3(char num[]);
    void change(int a);
    int qian,k;
    char a[30], b[30], c[30], d[30],x[30],y[30],z[30]={'\0'};
    scanf("%s%s%s%s", a, b, c, d);
    if (strcmp(a, "整数") != 0 || strcmp(b, "钱包") != 0 || strcmp(c, "等于") != 0) {
        printf("格式错误");
        return 0;
    }
    else {
    	if(d[4]=='\0') qian=point(d);
    	else qian=point3(d);
	}
    for(;;) {
        scanf("%s%s", x, y);
        if (strcmp(x, "看看") == 0 && strcmp(y, "钱包") == 0){
            change(qian);
            break;
        }
        if (strcmp(x, "钱包") == 0) {
            if (strcmp(y, "增加") == 0) {
                scanf("%s", z);
                if(z[4]=='\0') k = point(z);
                else k = point3(z);
				qian += k;
            }
            if (strcmp(y, "减少") == 0) {
                scanf("%s", z);
                if(z[4]=='\0') k = point(z);
                else k = point3(z);
                qian -= k;
            }
        }
        else printf("格式错误");
    }
    return 0;
}

int point(char num[])
{
    int i, a, b, c;
    char x[2], y[2];
    if (strcmp("零", num) == 0) return 0;
    else if (strcmp("一", num) == 0) return 1;
    else if (strcmp("二", num) == 0) return 2;
    else if (strcmp("三", num) == 0) return 3;
    else if (strcmp("四", num) == 0) return 4;
    else if (strcmp("五", num) == 0) return 5;
    else if (strcmp("六", num) == 0) return 6;
    else if (strcmp("七", num) == 0) return 7;
    else if (strcmp("八", num) == 0) return 8;
    else if (strcmp("九", num) == 0) return 9;
    else if (strcmp("十", num) == 0) return 10;
    else  {
        for (i = 0; i < 2; i++){
            x[i] = num[i];
            y[i] = num[i + 2];
        }
        if (strcmp("十", x) == 0){
            a = 10;
            b = point(y);
            c = a + b;
        }
        else {
            a = point(x);
            b = point(y);
            c = a * 10 + b;
        }
        return c;
	}
}

int point3(char num[])
{
	int point(char num[]);
	int i, a, b, c, d;
    char x[2], y[2], z[2];
	for (i = 0; i < 2; i++) {
		x[i] = num[i];
		y[i] = num[i + 2];
		z[i] = num[i + 4]; 
	}
	a = point(x);
	b = point(y);
	c = point(z);
	d = a * 100 + b * 10 + c;
	return d;
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
