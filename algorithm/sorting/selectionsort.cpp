void selectionsort(int a[],int n)
{
	for(int i=0;i<n-1;i++)
		imin = i;
	{
        for(int j=i+1;j<n;j++)
        {
        	if(a[j]<a[imin])
        	{
                 imin = j;
        	}
        }
        int temp = a[i];
        a[i]=a[imin];
        a[imin]=temp;
	}
}