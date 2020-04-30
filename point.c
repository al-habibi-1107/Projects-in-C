//This program is to find out the distance between two
//points in space

#include<stdio.h>
#include<math.h>
struct point   // A structure to hold the x and y coordinates 
{
  float x;
  float y;
};
typedef struct point pt;
void accept(pt *P1,pt *P2); // function definition to accept the coordinates
void display(float);  // function to display the distance

void main()
{ 
  pt P1,P2;
  float dist;
  accept(&P1,&P2);
  dist=sqrt(pow(P2.x-P1.x,2)+pow(P2.y-P1.y,2));
  display(dist);

}

void accept(pt *P1,pt *P2)
{
  printf("Enter the x and y coordinates of Point 1:");
  scanf("%f %f",&P1->x,&P1->y);
  printf("Enter the x and y coordinates of Point 2:");
  scanf("%f %f",&P2->x,&P2->y);
}

void display(float dist)
{
  printf("\n The distance between the points is %f units",dist);

}
