#include <math.h>
#include <stdio.h>
#define PI =  3.14159

//Follow the pdf step by step. First lets ask for user input then display the functions all at once. :D


void AskForx1() {
    
    double x1=0 ;
    
    printf("What is x1?\n");
    
    scanf("%lf", &x1);

    
}

void AskForx2() {
    
    double x2=0;
    
    printf("What is x2?\n");
    scanf("%lf", &x2);

    
}

void AskFory1(){

    double y1=0;
    
    printf("What is y1?\n");
    scanf("%lf", &y1);

    

}

void AskFory2 (){

    double y2=0;

    printf("What is y2?\n");
    scanf("%lf", &y2);
    
    

}


int main(int argc, char **argv){

//This is where we will call back other functions by simply stating the function name
    
    AskForx1(); 
    AskForx2();
    AskFory1();
    AskFory2();
    
    printf("%lf", 1);

    return 0;
}




