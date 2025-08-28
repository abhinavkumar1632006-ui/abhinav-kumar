
              #include <stdio.h>
int main()
{
  int a,b,c,sum,avg;
  printf("Enter three number\n");
  scanf("%d %d %d",&a,&b,&c);
  
  sum=a+b+c;
  avg=sum/3;
  printf("sum of the numbers= %d\n",sum);
  printf("avarage of the numbers= %d\n",avg);

    return 0;
}
