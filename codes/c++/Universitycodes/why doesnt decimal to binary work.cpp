int decimalToBinary(int x)
{
    int number = x;
 int i;
    int arr[i];
    int mod=0;
   i=0;
   int modcopy=mod;


         while(number>0)
         {
             mod = number%2;
             modcopy=mod;
             arr[i]=modcopy;
             i++;
             //cout << "mod"<< mod<<endl;
             number =number /2;
             //cout <<"Number " <<number <<endl;
         }


//cout << "Printing the array"<<i<<endl;
int ans=0;
for (int k =i-1 ; k>=0 ; k--)
    {
        cout<<" "<< arr[k]<<" ";
        
        ans= ans+(arr[k]*pow(10,k));
        

    }
    return ans;

}
/*
int decimalToBinary(int x)
{
	int n = x;
	int i=1;
	int a[i];
	int mod;
	int ans=0;
	
	int p=0;
	while (n>0)
	{
		mod =n%2;
		n=n/2;
		
			a[i]=mod;
			ans = ans + (mod)*( pow(10,p++));
			++i;
			
		
		
		
	}
return  ans;

	

}
*/
