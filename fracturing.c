#include <math.h>
#include <stdio.h>
#define PI =  3.14159

//Follow the pdf step by step. First lets ask for user input then display the functions all at once. :D
//haha just kidding just copy and past this code each time to ask for inputs

// double askForUserInput(){
   
//     double x1=0;
//     double x2=0;
//     double y1=0;
//     double y2=0;
   
//     printf("What is x1?");
//     scanf("%lf", &x1);

//     printf("What is x2?");
//     scanf("%lf", &x2);

//     printf("What is y1?");
//     scanf("%lf", &y1);

//     printf("What is y2?");
//     scanf("%lf", &y2);

//     return 0;
// }

double calculateDistance(){
    double x1=0;
    double x2=0;
    double y1=0;
    double y2=0;
   
    printf("Time to calculate Distance! \nWhat is x1?");
    scanf("%lf", &x1);

    printf("What is x2?");
    scanf("%lf", &x2);

    printf("What is y1?");
    scanf("%lf", &y1);

    printf("What is y2?");
    scanf("%lf", &y2);

    double Adding = pow(y1-y2, 2) + pow(x1-x2, 2);
    
    double Distance = sqrt(Adding);
    printf( "– Point #1 entered: x1 = %.3lf; y1 = %.3lf;\n– Point #2 entered: x2 = %.3lf; y2 = %.3lf\n– The distance between the two points is %.3lf\n", x1,y1,x2,y2, Distance);

    return  Distance ;
}


double calculatePerimeter(){

    

    double x1=0;
    double x2=0;
    double y1=0;
    double y2=0;
   
    printf("Time to calculate Perimeter! \nWhat is x1?");
    scanf("%lf", &x1);

    printf("What is x2?");
    scanf("%lf", &x2);

    printf("What is y1?");
    scanf("%lf", &y1);

    printf("What is y2?");
    scanf("%lf", &y2);

    double vertical = (y2 - y1) ;
    double horizontal = (x2 - x1);

    double Perimeter = 2 * fabs(vertical) + 2 * fabs(horizontal);

printf( "– Point #1 entered: x1 = %.3lf; y1 = %.3lf;\n– Point #2 entered: x2 = %.3lf; y2 = %.3lf- \n– The perimeter of the city encompassed by your request is %.3lf\n", x1,y1,x2,y2, Perimeter);


    double difficulty = 1;
    return difficulty ;
}

double calculateArea(){


    double x1=0;
    double x2=0;
    double y1=0;
    double y2=0;
   
    printf("Time to calculate Area! \nWhat is x1?");
    scanf("%lf", &x1);

    printf("What is x2?");
    scanf("%lf", &x2);

    printf("What is y1?");
    scanf("%lf", &y1);

    printf("What is y2?");
    scanf("%lf", &y2);

    double Area = (y2-y1) * (x2-x1); 

    printf( "– Point #1 entered: x1 = %.3lf; y1 = %.3lf;\n– Point #2 entered: x2 = %.3lf; y2 = %.3lf-\n– The area of the city encompassed by your request is %.3lf\n", x1,y1,x2,y2, Area);

    double difficulty = 1;

    return difficulty; 

}

double calculateWidth(){

    double x1=0;
    double x2=0;
    double y1=0;
    double y2=0;
   
    printf("Time to calculate Width! \nWhat is x1?");
    scanf("%lf", &x1);

    printf("What is x2?");
    scanf("%lf", &x2);

    printf("What is y1?");
    scanf("%lf", &y1);

    printf("What is y2?");
    scanf("%lf", &y2);

    double Width = fabs(x2-x1);

    printf( "– Point #1 entered: x1 = %.3lf; y1 = %.3lf;\n– Point #2 entered: x2 = %.3lf; y2 = %.3lf- \n– The width of the city encompassed by your request is %.3lf\n", x1,y1,x2,y2, Width);

    double Difficulty = 1;
    
    return Difficulty;

}

double calculateHeight(){

    double x1=0;
    double x2=0;
    double y1=0;
    double y2=0;
   
    printf("Time to calculate Height! \nWhat is x1?");
    scanf("%lf", &x1);

    printf("What is x2?");
    scanf("%lf", &x2);

    printf("What is y1?");
    scanf("%lf", &y1);

    printf("What is y2?");
    scanf("%lf", &y2);

    double Width = fabs(y2-y1);

    printf( "– Point #1 entered: x1 = %.3lf; y1 = %.3lf;\n– Point #2 entered: x2 = %.3lf; y2 = %.3lf-\n– The height of the city encompassed by your request is %.3lf", x1,y1,x2,y2, Width);

    double Difficulty = 1;

    return Difficulty;
}



int main(int argc, char **argv){

//This is where we will call back other functions by simply stating the function name

calculateDistance();
calculatePerimeter();
calculateArea();
calculateWidth();
calculateHeight();



    return 0;
}