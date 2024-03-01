//Write a program to find the weight of the camel given height, length and stomach radius using four functions
 //weight = pi * stomach_radius^3 * sqrt(height * length)
#include<stdio.h>
struct camel {
	float radius, height, length,weight;
};

typedef struct camel Camel;

Camel input();
void find_weight(Camel *c); //passing address variable
void output(Camel c);
int main()
{
   Camel c;
   c=input();
   void find_weight(c);
   output(c);
   return 0;
}
Camel input()
{
    Camel cam;
    printf("Enter the radius of the camel:");
    scanf("%f",&cam.radius);
    printf("Enter the height of the camel:");
    scanf("%f",&cam.height);
    printf("Enter the length of the camel:");
    scanf("%f",&cam.length);
    printf("Enter the weight of the camel:");
    scanf("%f",&cam.weight);
    return cam;
}
void find_weight(Camel *c)
{
    const float pi=3.14159265;
    c->weight=pi*pow(c->radius,3)*sqrt(c->height*c->length);
}
void output(Camel c)
{
    printf("The weight of the camel with\n Radius:%f\n Height:%f\n Length:%f\n is %f",c.radius,c.height,c.length,c.weight);
}


