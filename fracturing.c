#include <math.h>
#include <stdio.h>
#define PI =  3.14159

//Follow the pdf step by step. First lets ask for user input then display the functions all at once. :D


double AskForx1() {
    
    double x1=0;
    
    printf("What is x1?\n");
    
    scanf("%lf", &x1);
    return x1; 
}

double AskForx2() {
    
    double x2=0;
    
    printf("What is x2?\n");
    scanf("%lf", &x2);

    return x2;
}

double AskFory1(){

    double y1=0;
    
    printf("What is y1?\n");
    scanf("%lf", &y1);

    return y1;
    

}

double AskFory2 (){

    double y2=0;

    printf("What is y2?\n");
    scanf("%lf", &y2);
    
    return y2;

}

double calculateDistance(){

    double x1 = AskForx1(); 
    double x2 = AskForx2(); 
    double y1= AskFory1();
    double y2= AskFory2();

    double DifferenceSum = (x2-x1) * (x2-x1) + (y2-y1)*(y2-y1);

    double Distance = sqrt(DifferenceSum);
    printf("%lf", Distance);

    return Distance;

}

int main(int argc, char **argv){

//This is where we will call back other functions by simply stating the function name
   double calculateDistance();

    
   

    return 0;
}



