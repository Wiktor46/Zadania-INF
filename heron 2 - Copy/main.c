#include <stdio.h>
#include "math.h"
#include <stdlib.h>
#include <windows.h>

#include "fundef.c" //

#include "funprops.c"
 int program; // it

//double xa;
//double ya;
//double xb;
//double yb;
//double xc;
//double yc;
//
//
//double la;
//double lb;
//double lc;
//
//double heron(double la, double lb, double lc);
//
//
//double heronc();

int main() {
    SetConsoleOutputCP(CP_UTF8);
     printf("Heron formula calculator. \n\n");

     printf("1 if you want to input lengths of sides\n");
     printf("2 if you want to input coordinates\n");
    printf("Enter:\n");
     scanf("%d", &program);

switch(program){
    case 1:

        printf("You have chosen the length option.\n");
        printf("Enter a:\n");
        scanf("%lf", &la);
        printf("Enter b:\n");
        scanf("%lf",&lb);
        printf("Enter c:\n");
        scanf("%lf",&lc);
        printf("\nThe area of triangle is: %lf\n\n", heron(la,lb,lc));
        break;

    case 2:
        printf("You have chosen the coordinate option.\n");
        printf("Enter Xa:\n");
        scanf("%lf",&xa );
        printf("Enter Ya:\n");
        scanf("%lf",&ya );
        printf("Enter Xb:\n");
        scanf("%lf",&xb );
        printf("Enter Yb:\n");
        scanf("%lf",&yb );
        printf("Enter Xc:\n");
        scanf("%lf",&xc );
        printf("Enter Yc:\n");
        scanf("%lf",&yc );



        printf("\n The area of triangle is: %lf\n\n", heronc(xa, xb,xc,ya,yb,yc));

   break;
    default:
        printf("Sorry, there are only two options. Choose either 1 or 2!\n");
}


    system("pause");
    return 0;
}

