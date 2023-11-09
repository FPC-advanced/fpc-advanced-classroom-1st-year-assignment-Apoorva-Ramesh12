//Write a program to find the weight of a camel, given height, length and stomach radius using four functions.
//weight = pi * stomach_radius^3 * sqrt(height * length)
#include<stdio.h>
#include<math.h>
void input_camel_details(float *radius, float *height, float *length);
float find_weight(float radius, float height, float length);
void output(float radius, float height, float length, float weight);
int main()
{
    float radius,height,length;
    input_camel_details(&radius,&height,&length);
    float weight;
    weight=find_weight(radius,height,length);
    output(radius,height,length,weight);
    return 0;
}
void input_camel_details(float *radius, float *height, float *length)
{
    printf("Enter the stomach radius of the camel:");
    scanf("%f",radius);
    printf("Enter the height of the camel:");
    scanf("%f",height);
    printf("Enter the length of the camel:");
    scanf("%f",length);
}
float find_weight(float radius, float height, float length)
{
    float weight;
    const float pi=3.14159265;
    weight=pi*pow(radius,3)*sqrt(height*length);
    return weight;
}
void output(float radius,float height,float length,float weight)
{
    printf("The weight of the camel with\n Radius:%.2f\n Height:%.2f\n Length:%.2f\n is %.4f",radius,height,length,weight);
}