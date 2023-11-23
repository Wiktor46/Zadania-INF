#include <stdio.h>

#include <Windows.h>




double vel;

int beafort;







int main() {
    SetConsoleOutputCP(CP_UTF8);
printf("Enter wind speed, the app will get you the Beaufort Scale\n");
scanf("%lf", &vel);

if (vel <= 3){

beafort = 1;

}
else if(vel >= 4 && vel <= 6 ){

    beafort = 2;

}
else if(vel >= 7 && vel <= 11){

     beafort = 3;
}
else if(vel >= 12 && vel <= 19){
   beafort = 4;
}
else if(vel >= 20 && vel <= 29){
    beafort = 5;

}
else if(vel >= 30 && vel <= 39){
    beafort = 6;
}
else if(vel >= 40 && vel <= 50){
    beafort = 7;
}
else if(vel >= 51 && vel <= 62){
     beafort = 8;
}
else if(vel >= 63 && vel <= 75){
     beafort = 9;
}
else if(vel >= 76 && vel <= 87){
     beafort = 10;
}
else if(vel >= 88 && vel <= 102){
     beafort = 11;
}
else if(vel >= 103 && vel <= 117){
     beafort = 12;
}
else if(vel >= 118 ){
    printf("It's over 12.\n");
}
else if(vel <= 0){
    printf("\nYou inputted a wrong number! It must be greater than/equal to 0!\n");
}



printf("The Beaufort Scale for %lf kph wind is: %d", vel, beafort);



    return 0;
}

