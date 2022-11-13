#include <stdio.h>
#include <math.h>
#include <conio.h>
#define PI 3.14
 void main()
 {
     int num,i;
     char s;
     printf(" WELCOME");
     printf("\n\n  choose one of the number \n 1 =  triangle \n 2 = rectangel \n 3 = square\n 4= circle\n 5=cylinder\n");
     scanf(" %d",&num);
     for ( i=1; i<=1;i++ )
     {
         if(num == 1)
         {
            printf("  \nchoose\n  A =  area \n B = perimmeter \n ");
            scanf(" %c",&s);
             if (  s== 'a' || s== 'A')
            {

             int n;
             float area=0,rc;
             printf("\n Choose the formula to find the area\n Enter \n   1  =  0.5*length * breath \n   2 = sqrt(s(s-a)(s-b)s-c))\n    3 = 0.5* ab*sinc\n  ");
             scanf(" %d",&n);
             if ( n== 1)
             {
                 int len , br;
                 printf(" Enter the length and breath of triangle  :\n");
                 scanf("%d%d",&len,&br);
                 area = 0.5 * len * br;
                 printf("  The area of triangle is %.2f \n",area);

             }
             else if ( n== 2 )
             {
                 int  n1,n2,n3;
                 float s;
                 printf(" Enter the  length of three side of triangle \n");
                 scanf(" %d%d%d",&n1,&n2,&n3);
                 s= (n1+n2+n3)/3;
                 printf( "%f ",s);
                 area = sqrt( s*(s-n1)*(s-n2)*(s-n3));
                 printf(" The area of triangle is %f\n", area);
             }
             else
             {
                 int a, b,c;
                 printf(" Enter the two side of triangle which makes angle in triangle\n");
                 scanf(" %d%d",&a,&b );
                 printf(" Enter the angle between two sides \n ");
                 scanf(" %d",&c);
                 rc= ( c* PI)/180;
                 area=0.5*a*b*sin(rc);
                 printf(" Area of triangel is %.2f",area);


            }
           }
         }
         else
         {
             i--;
             continue;
         }
     }
 }
