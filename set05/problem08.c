//Write program to find the weight of a truck load of n camels.
// Take inputs for:
// - truck weight
// - height, radius and length of n different camels

// total_truck_weight = truck_weight + weight_of_camels
#include<stdio.h>
#include<math.h>
typedef struct _camel {
    float radius, height, length, weight;
} Camel;

void input(int n, Camel c[n], float *truck_weight);g
void find_camel_weight(int n, Camel c[n]);
float compute_total_weight(int n, Camel c[n], float truck_weight);
void output(float total_weight);
int main()
{
    int n;
    float truck_weight;
    Camel c[n];
    input(n,c,&truck_weight);
    find_camel_weight(n,c);
    float total_weight;
    total_weight=compute_total_weight(n,c,truck_weight);
    output(total_weight);
    return 0;
}
void input(int n, Camel c[n], float *truck_weight)
{
    printf("Enter the number of camels:");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("Enter the height for camel no. %d",i+1);
        scanf("%f",&c[i].height);
        printf("Enter the radius for camel no. %d",i+1);
        scanf("%f",&c[i].radius);
        printf("Enter the length for camel no. %d",i+1);
        scanf("%f",&c[i].length);
    }
    printf("Enter the truck weight:");
    scanf("%f",truck_weight);
}
void find_camel_weight(int n, Camel c[n])
{
    const float pi=3.14;
    for(int i=0;i<n;i++)
    {
        c[i].weight=pi*pow(c[i].radius,3)*sqrt(c[i].height*c[i].length);
    }
}
float compute_total_weight(int n, Camel c[n], float truck_weight)
{
    float total_weight=0;
    for(int i=0;i<n;i++)
    {
        total_weight=c[i].weight+c[i+1].weight;
    }
    total_weight+=truck_weight;
    return total_weight;
}
void output(float total_weight)
{
    printf("The total truck weight is %.2f",total_weight);
}