// Write a program to find out the mood of a Camel.

//Camel is:
//  - sick when its `stomach_radius` is less than `height` and less than `length`
//  - happy when its `height` is less than `length` and less than `stomach_radius`.
//  - tense when its `length` is less than `height` and `stomach_radius`.
#include<stdio.h>
#include<math.h>
void input_camel_details(float *radius, float *height, float *length);
int find_mood(float radius, float height, float length);
void output(float radius, float height, float length, int mood);
int main()
{
    float radius,height,length;
    input_camel_details(&radius,&height,&length);
    int mood;
    mood=find_mood(radius,height,length);
    output(radius,height,length,mood);
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
int find_mood(float radius, float height, float length)
{
    int mood;
    if(radius<height && radius<length)
    {
        mood=1;
    }
    else if(height<length && height<radius)
    {
        mood=2;
    }
    else
    {
        mood=3;
    }
    return mood;
}
void output(float radius, float height, float length, int mood)
{
    if(mood==1)
    {
        printf("Tha camel is sick!");
    }
    else if(mood==2)
    {
        printf("The camel is happy!");
    }
    else{
        printf("The camel is tensed.");
    }
}
