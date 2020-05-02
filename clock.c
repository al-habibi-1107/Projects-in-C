#include<stdio.h>

struct time
{
 int sec;
 int min;
 int hr;
};
typedef struct time T;
void add(T *t1,T *t2);
void accept(T *t);
void main()
{
  T t1,t2;
  accept(&t1);
  accept(&t2);
  add(&t1,&t2);
}

void accept(T *t)
{  int n;
  printf("Enter the time in hr min sec:");
  scanf("%d %d %d",&t->hr,&t->min,&t->sec);
    if(t->sec >60)
    {n=t->sec/60;
        t->sec=t->sec-(n*60);
        t->min=t->min+n;
    }
        if(t->min >60)
        {n=t->min/60;
            t->min=t->min-(n*60);
            t->hr=t->hr+n;
        }
}

void add(T *t1,T *t2)
{
 printf("The final-sum time is: %d hrs %d mins %d sec",t1->hr+t2->hr,t1->min+t2->min,t1->sec+t2->sec);
}
