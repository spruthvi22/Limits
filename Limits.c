/*
* Author:Pruthvi Suryadevara
* Email: pruthvi.suryadevara@tifr.res.in
* Description: C function to print min and max of diferrent data types
*/

#include<stdio.h>
#include<math.h>
int main()
{
  printf("Max of char is %f \n",(pow(2,8*sizeof(char)-1)-1));
  printf("Min of char is %f \n",(pow(2,8*sizeof(char)-1)*-1));
  printf("Max of int is %f \n",(pow(2,8*sizeof(int)-1)-1));
  printf("Min of int is %f \n",pow(2,8*sizeof(int)-1)*-1);
  printf("Max of long int is %f \n",pow(2,8*sizeof(long int)-1)-1);
  printf("Min of long int is %f \n",pow(2,8*sizeof(long int)-1)*-1);
  printf("Max of float is %lE \n",(pow(2,24-1)-1)*pow(10,127));
  printf("Min of float is %lE \n",pow(2,24-1)*pow(10,127)*-1);
  printf("Max of double is %LE \n",(pow(2,53-1)-1)*powl(10,1023));
  printf("Min of double is %LE \n",pow(2,53-1)*powl(10,1023)*-1);
  return 0;
}
