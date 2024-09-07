#include <math.h>
#include <stdio.h>
#define PI 3.14159
//Follow the pdf step by step. First lets ask for user input then display the functions all at once. :D
//haha just kidding just copy and past this code each time to ask for inputs (I made this)

// double askForUserInput(){   <--- I had trouble trying to implement this into my code, So i resorted to just asking each time
   
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

double distancer(double Ax,double Bx,double Cx,double Dx){

double Adding = pow(Dx-Cx, 2) + pow(Bx-Ax, 2);
double distance = sqrt(Adding);

return distance;

}
    

double calculateDistance(){  // calculates distance between the two points
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

    
    double Distance = distancer(x1,x2,y1,y2);
    printf( "– Point #1 entered: x1 = %.3lf; y1 = %.3lf;\n– Point #2 entered: x2 = %.3lf; y2 = %.3lf\n– The distance between the two points is %.3lf\n", x1,y1,x2,y2, Distance);

    return  Distance ;
}



double calculatePerimeter(){ //calculates the perimeter 

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

// Perimeter of a circle is PI * Diameter

    double Perimeter = (PI) * (distancer(x1,x2,y1,y2));

    printf( "– Point #1 entered: x1 = %.3lf; y1 = %.3lf;\n– Point #2 entered: x2 = %.3lf; y2 = %.3lf; \n– The perimeter of the city encompassed by your request is %.3lf\n", x1,y1,x2,y2, Perimeter);

    double difficulty = 2;
    return difficulty ;
}

double calculateArea(){ //calculates the area 


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

// Area of a circle is PI (D/2)^2

    double Area1 = (distancer(x1,x2,y1,y2)/2);
    double Area = PI * pow(Area1, 2);

    printf( "– Point #1 entered: x1 = %.3lf; y1 = %.3lf;\n– Point #2 entered: x2 = %.3lf; y2 = %.3lf;\n– The area of the city encompassed by your request is %.3lf\n", x1,y1,x2,y2, Area);

    double difficulty = 2;

    return difficulty; 

}

double calculateWidth(){ // calculates the width assuming that the x axis represents width

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

    printf( "– Point #1 entered: x1 = %.3lf; y1 = %.3lf;\n– Point #2 entered: x2 = %.3lf; y2 = %.3lf; \n– The width of the city encompassed by your request is %.3lf\n", x1,y1,x2,y2, Width);

    double Difficulty = 1;
    
    return Difficulty;

}

double calculateHeight(){ //calculates height assuming the y axis represents height

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

    printf( "– Point #1 entered: x1 = %.3lf; y1 = %.3lf;\n– Point #2 entered: x2 = %.3lf; y2 = %.3lf;\n– The height of the city encompassed by your request is %.3lf", x1,y1,x2,y2, Width);

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