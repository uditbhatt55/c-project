#include<stdio.h>
int main()
{int populationofcity,popu_in1,rate1,rate2,popu_in2;
printf("population of a city=");
scanf("%d",&populationofcity);
printf("rate of increase in first year=");
scanf("%d",&rate1);
//population in first year
popu_in1=populationofcity+(populationofcity*rate1/100);
printf("population in first year=%d\n",popu_in1);
//population in second year
printf("rate of increase in second year=");
scanf("%d",&rate2);
popu_in2=popu_in1+(popu_in1*rate2/100);
printf("population in second year=%d",popu_in2);
return 0;




}