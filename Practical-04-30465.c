#include <stdio.h>
#include <stdlib.h>

int main()
{   
          // Question 1
    
    int num,num1;
    printf("Enter the number :");
    scanf("%d",&num);

    if(num%2==0){
        printf("%d Number is even",num);
    }
    else{
        printf("%d number is odd",num);
    }

          // Part 2 Switch().....
    
    num1 = (num%2 +1);
    switch(num1){
        case 1:printf("%d Number is even",num);
        break;
        case 2:printf("%d Number is Odd",num);
    }


  
          // Question 2
    
    int operator;
    printf("These are the Arithmetic operators : \n");
    printf("1.Addition [+]\t\t 2.Substraction [-]\n");
    printf("3.Multiplication [*]\t\t 4.Divition  [/]\n\n");

    printf("Please enter the number of operator if you want");
    scanf("%d",&operator);

    switch(operator){
        case 1:printf("1.Addition       [+]");
        break;
        case 2:printf("2.Substraction   [-]");
        break;
        case 3:printf("3.Multiplication [*]");
        break;
        default:printf("4.Divition      [/]");

    }  

        


            // Question 3

        
     float PI=3.14159;
     float r,circumf,vol,area;
     printf("Enter The Radius : ");
     scanf("%f",&r);

     circumf  =2*PI*r;
     vol      =4/3*PI*r*r*r;
     area     =PI*r*r;

     printf("%f circumferense of the circle \n",circumf);
     printf("%f volume of the circle \n",vol);
     printf("%f area of the sphere \n ",area);
        

        
            // Question 4
        
     char character;
     printf("Enter a character: ");
     scanf("%c", &character);

     switch (character)
     {
           case 'a':printf(" a is a vowel \n");break;
           case 'e':printf(" e is a vowel \n");break;
           case 'i':printf(" i is a vowel \n");break;
           case 'o':printf(" o is a vowel \n");break;
           case 'u':printf(" u is a vowel \n");break;
           case 'A':printf(" A is a vowel \n");break;
           case 'E':printf(" E is a vowel \n");break;
           case 'I':printf(" I is a vowel \n");break;
           case 'O':printf(" O is a vowel \n");break;
           case 'U':printf(" U is a vowel \n");break;

      default:printf(" Invalid vowel \n");
      }
        

        
              // Question 5
        
      int month;
      printf("Enter the month number:");
      scanf("%d",&month);

      switch(month)
      {
            case  1:printf(" January has a 31 days"); break;
            case  2:printf(" February has a 28 days"); break;
            case  3:printf(" March has a 31 days"); break;
            case  4:printf(" April has a 31 days"); break;
            case  5:printf(" May has a 31 days"); break;
            case  6:printf(" June has a 31 days"); break;
            case  7:printf(" July has a 31 days"); break;
            case  8:printf(" August has a 31 days"); break;
            case  9:printf(" September has a 31 days"); break;
            case 10:printf(" October has a 31 days"); break;
            case 11:printf(" November has a 31 days"); break;
            case 12:printf(" December has a 31 days"); break;

      default :printf("Invalid month");
      }
        

    return 0;
}
