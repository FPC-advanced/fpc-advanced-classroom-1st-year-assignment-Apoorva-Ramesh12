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



 struct camel {
	float radius, height, length,weight;
};

typedef struct camel Camel;

Camel input();
void find_weight(Camel *c); //passing address variable
void output(Camel c);