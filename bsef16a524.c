

#include <stdio.h>
#include <pthread.h>

void * SUM (void * val);

     int A[1000];
int main ()
{
  int a; void *sum[10];
  pthread t1, t2, t3, t4, t5, t6, t7, t8, t9, t10;
  pthread_create (&t1, NULL, EachSum, (void *)0);
  pthread_create (&t2, NULL, EachSum, (void *)100);
  pthread_create (&t3, NULL, EachSum, (void *)200);
  pthread_create (&t4, NULL, EachSum, (void *)300);
  pthread_create (&t5, NULL, EachSum, (void *)400);
  pthread_create (&t6, NULL, EachSum, (void *)500);
  pthread_create (&t7, NULL, EachSum, (void *)600);
  pthread_create (&t8, NULL, EachSum, (void *)700);
  pthread_create (&t9, NULL, EachSum, (void *) 800);
  pthread_create (&t10, NULL, EachSum, (void *)900);
  
  pthread_join(t1,&sum[0] );
  pthread_join(t2,&sum[1] );
  pthread_join(t3,&sum[2] );
  pthread_join(t4,& sum[3]);
  pthread_join(t5,&sum[4]);
  pthread_join(t6,&sum[5] );
  pthread_join(t7,&sum[6] );
  pthread_join(t8,&sum[7] );
  pthread_join(t9,&sum[8]);
  pthread_join(t10,&sum[9]);
  
   int total=0;
int tot[10];
for(a=0;a<10;a++)
{
   tot[i]=(int)sum[i];
	total+=tot[i];
}  
  printf("the sum of all threads is : %d",total);
  return 0;
}

void *SUM (void * val)
{
    int tot=(int)val + 100;
int tot2 =(int) val;
    int sum2 = 0;
    for (int i=tot2;i<tot;i++)
    {
        sum2 = sum2+A[i];
    }
return (void*)sum2;  
}


