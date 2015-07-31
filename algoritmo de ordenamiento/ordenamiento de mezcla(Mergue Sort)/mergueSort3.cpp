#include <iostream>
 
using namespace std;
 
void merge(int*,int*,int,int,int);
void mergesort(int *a, int*b, int low, int high)
{
    int pivot;
    if(low<high)
    {
        pivot=(low+high)/2;
        mergesort(a,b,low,pivot);
        mergesort(a,b,pivot+1,high);
        merge(a,b,low,pivot,high);
    }
}
void merge(int *a, int *b, int low, int pivot, int high)
{
    int h,i,j,k;
    h=low;
    i=low;
    j=pivot+1;
 
    while((h<=pivot)&&(j<=high))
    {
        if(a[h]<=a[j])
        {
            b[i]=a[h];
            h++;
        }
        else
        {
            b[i]=a[j];
            j++;
        }
        i++;
    }
    if(h>pivot)
    {
        for(k=j; k<=high; k++)
        {
            b[i]=a[k];
            i++;
        }
    }
    else
    {
        for(k=h; k<=pivot; k++)
        {
            b[i]=a[k];
            i++;
        }
    }
    for(k=low; k<=high; k++) a[k]=b[k];
}
 
int main()
{
    int a[] = {47,34,63,62,99,7,12,87,70,74,87,73,21,82,73,15,44,1,5,23,51,67,3,90,75,45,31,46,19,18};
    int num;
 
    num = sizeof(a)/sizeof(int);
 
    int b[num];
 
    mergesort(a,b,0,num-1);
 
    for(int i=0; i<num; i++)
        cout<<a[i]<<" \n";
    cout<<endl;
    
    system("pause");
    return 0;
    
    
}
