#include <stdio.h>
#include <stdlib.h>

int main()
{
             // 01 Question

    char name[20];
    char school[20];
    printf("Enter Your Name :");
    scanf("%s",name);
    printf("Enter Your School :");
    scanf("%s",school);
    printf("\n");
    printf("%s \n",name);
    printf("%s",school);    


           // 02 Question
    
    printf("* \n");
    printf("** \n");
    printf("*** \n");
    printf("**** \n");
    printf("***** \n");
    printf("****** \n");
    

           // 03 Question

    int integer;
    char character[10];
    float floa;
    double doubl;

    printf("Enter the Integer :");
    scanf("%d",&integer);
    printf("Enter the Character :");
    scanf("%s",&character);
    printf("Enter the float :");
    scanf("%f",&floa);
    printf("Enter the double :");
    scanf("%lf",&doubl);

    printf("%d \n",integer);
    printf("%s \n",character);
    printf("%f \n",floa);
    printf("%lf \n",doubl);


           // 04 Question
    
    int num1,num2,total;
    printf("Enter the number :");
    scanf("%d",&num1);
    printf("Ënter the number :");
    scanf("%d",&num2);
    total =num1+num2;
    printf("Total is %d",total);
    

           // 05 Question

    float no1,no2,tot;

    printf("Enter the number :");
    scanf("%f",&no1);
    printf("Ënter the number :");
    scanf("%f",&no2);
    tot =no1+no2;
    printf("Total is %f",tot);


           // 06 Question
   
    char name[20];
    int birth;
    printf("Enter your Name :");
    scanf("%s",&name);
    printf("Enter your Birth Year :");
    scanf("%d",&birth);

    printf("%s \n",name);
    printf("%d \n",birth); 


           // 07 Question
   
    int num1,num2;
    printf("Enter the number 1 :");
    scanf("%d",&num1);
    printf("Enter the number 2 :");
    scanf("%d",&num2);
    printf("Number 1 is %d \n",num2);
    printf("Number 2 is %d \n",num1);


            // 08 Question

    printf("The color: %s\n", "black");
    printf("First number: %d\n", 12312);
    printf("Second number: %010d\n", 20);
    printf("Third number: %i\n", 1234); 
    printf("Float number: %3.2f\n", 3.23159);
    printf("Hexadecimal: %x\n", 255);
    printf("Octal: %o\n", 255);
    printf("Unsigned value: %u\n", 150);
    printf("Just print the percentage sign %%\n", 10);*/

    return 0;
}
