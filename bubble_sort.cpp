#include<iostream>

using namespace std;

int main()
{   
    int n;
    int * arr;
    cout<<"Enter the number of elements you want:";
    cin>>n;
    arr=new int[n];

    cout<<"Enter "<<n<<" elements:";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    cout<<"Bubble sort:";
    int pass,last;
    last=n;
    for(int i=0;i<n-1;i++)
    {
        int exch=0;
        for(int j=0;j<last-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                exch++;
            }
        }
        if(exch==0){
        cout<<"Array sorted"<<endl;
        break;
        }
        else
        {
            last-=1;
        }
    }
    for(int k=0;k<n;k++)
    {
        cout<<arr[k]<<" ";
    }
    return 0;
}