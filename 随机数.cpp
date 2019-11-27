#include<iostream>
#include<cstdlib>     //rand和srand函数的库文件，也可以写 stdlib.h 
#include<ctime>        //将随机数种子按照当前电脑时间设置， 所以加此库文件，也可以写  time.h 
int random(int n)
{
	int m=rand()%n;
	return m;
}

int main()
{
	srand((unsigned)time(NULL));     //将随机数种子重置，为了使用方便，所有程序都可按此原文本写入。注意NULL要全部大写 以及调用time库文件 
	int a;
	a=rand()%x;            //  或 a=random(x); x表示随机数的范围，例如0-10的范围，我们就将x写为11 
}
/*  1-10的范围     1+random(10-1+1)
    2-10的范围    2+random(10-2+1)
	6-18的范围      6+random(18-6+1)
	a-b的范围        a+random(b-a+1)*/ 
