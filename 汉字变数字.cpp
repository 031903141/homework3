#include<stdio.h>
#include<string.h>
char z[30]={'\0'};
int main()
{
    int point(char num[]);
    int point3(char num[]);
    int k, i;
    for(i=0;i<5;i++)
    {
    	scanf("%s", z);
        if(z[4]=='\0') k = point(z);
        else k = point3(z);
        printf("%d\n",k);
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
	
