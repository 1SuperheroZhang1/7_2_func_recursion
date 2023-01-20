#include <stdio.h>
/*
 * 7.2 递归调用
 *   递归函数：把函数自身调用自身的操作，称为递归函数，递归函数一定要有结束条件，否则会产生死循环！
 *   递归的好处：递归在解决一些问题时，可以让问题变得简单，降低编程的难度。
 *
 * */

//求n的阶乘
int fact(int n){
    if(n==1){
        return 1;
    }
    return n*fact(n-1);
}
/*求台阶：假如有n个台阶，一次只能上1个台阶或2个台阶，请问走到第n个台阶有几种走法？
 *  假如有n个台阶，一次只能上一个台阶或2个台阶，那么总计就有3种走法：第一种为每次上1个台阶，
 *  第二种为先上2个台阶，再上1个台阶；第三种为先上1个台阶，再上2个台阶。
 * */
int step(int n){
    if(n==1||n==2){
        return n;
    }
    return step(n-1)+ step(n-2);
}
int main() {
    int n;
    scanf("%d",&n);
    //求n的阶乘
//    printf("fact(%d)=%d\n",n, fact(n));
    //求台阶
    printf("step(%d)=%d\n",n, step(n));
    return 0;
}
