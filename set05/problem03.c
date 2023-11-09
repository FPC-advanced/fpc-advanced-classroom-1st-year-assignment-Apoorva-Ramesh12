 //Write a program to find the weight of the camel given height, length and stomach radius using four functions
 
 //weight = pi * stomach_radius^3 * sqrt(height * length)
#include<stdio.h>
#include<math.h>
 struct camel {
	float radius, height, length,weight;
};

typedef struct camel Camel;

Camel input();
float find_weight(Camel c);  //pass by value
void output(Camel c);
int main()
{
    Camel c;
    c=input();
    c.weight=find_weight(c);
    output(c);
    return 0;
}
Camel input()
{
    Camel c;
    printf("Enter the stomach radius of the camel:");
    scanf("%f",&c.radius);
    printf("Enter the height of the camel:");
    scanf("%f",&c.height);
    printf("Enter the length radius of the camel:");
    scanf("%f",&c.length);
}
float find_weight(Camel c)
{
    const float pi=3.14159265;
    return pi*pow(c.radius,3)*sqrt(c.height*c.length);
}
void output(Camel c)
{
    printf("The weight of the camel with\n Radius:%.2f\n Height:%.2f\n Length:%.2f\n is %.4f",c.radius,c.height,c.length,c.weight);
}



//  struct camel {
// 	float radius, height, length,weight;
// };

// typedef struct camel Camel;

// Camel input();
// void find_weight(Camel *c); //passing address variable
// void output(Camel c);