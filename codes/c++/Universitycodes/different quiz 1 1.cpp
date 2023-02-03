#include <iostream>
using namespace std ;

float maxoffloat(float A[10])
{
	float  max=A[0];
	int i ;
	
	for (i=0; i < 10 ; i++)
	{
		if (max<A[i])
		{
			max =A[i];
		}
	}
	return max;
}

int  maxofint(int A[10])
{
	int max=A[0];
	int i ;
	
	for (i=0; i < 10 ; i++)
	{
		if (max<A[i])
		{
			max =A[i];
		}
	}
	return max;
}
float sumab(int maxint ,float maxfloat)
{
	float sum = maxint+ maxfloat ;
	return sum;
}

void sortingint(int A[10])
{
	int temp;
	int i,j;
	for (i=0 ;i < 10 ; i++)
	{
		for (j=i+1; j<10 ; j++)
		{
			if (A[i]>A[j])
			{
				temp= A[i];
				A[i]=A[j] ;
				A[j]=temp;
			}
		}
		
	}
	
		for (i=0 ;i < 10 ; i++)
	{
		
		cout <<A[i]<<" ";
		
	}
}

void sortinfloat(float B[10])
{
	float temp;
	int i,j;
	for (i=0 ;i < 10 ; i++)
	{
		for (j=i+1; j<10 ; j++)
		{
			if (B[i]>B[j])
			{
				temp= B[i];
				B[i]=B[j] ;
				B[j]=temp;
			}
		}
		
	}
	
		for (i=0 ;i < 10 ; i++)
	{
		
		cout <<B[i]<<" ";
		
	}
}

void merge (int A[10],float B[10])
{
	int i=0;int j=0;
	float C[20];
	for (i=0;i<10; i++)
	{
		C[j++]= A[i];
	}
		for (i=0;i<10; i++)
	{
		C[j++]= B[i];
	}
			for (j=0;j<20; j++)
	{
	cout <<C[j] <<" ";
	}

}

int main ()
{
	int A[10] = {10,2,421,55,12,435,23,35,6,22};
	float B[10] = {10.32,2.75,421.235,55.5,1.2,43.5,2.3,3.5,6.0,22.77};
int maxint = 	maxofint(A);
//	cout << endl;
float maxfloat = 	maxoffloat(B);
sumab(maxint , maxfloat);
cout << sumab(maxint , maxfloat);

sortingint(A);
sortinfloat(B);
cout << endl;
 merge (A,B);


	
}
