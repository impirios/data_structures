#include<iostream>
 using namespace std;

 void merge(int*,int,int );

 void mergesort(int arr[],int first,int last)
 {
     cout<<"inside mergesort"<<endl;
     for (int i = first; i <= last; i++)
     {
         cout << arr[i] << " ";
     }
     cout << endl;
     cout<<"f = "<<first<<" l = "<<last<<endl;
     if (first >= last)
     {
         return;
     }
     int mid = (first+last)/2;



     mergesort(arr,first,mid);
     mergesort(arr,mid+1,last);

     merge(arr,first,last);

 }


 void merge(int *ar,int L,int R)
 {
     cout << "inside merge" << endl;


     int M = (L+R)/2;
     int pA = L;
     int pB = M+1;
     int temp[100];
     int i=L;

     while(pA<=M&&pB<=R)
     {
        if(ar[pA]>ar[pB])
        {
            temp[i++] = ar[pB++];
        }
        else
        {
            temp[i++] = ar[pA++];           
        }
         
     }

     while(pA<=M)
     {
        temp[i++] = ar[pA++];
     }

     while(pB<=R)
     {
        temp[i++] = ar[pB++];
     }


     for(int i=L;i<=R;i++)
     {
        ar[i] = temp[i];
     }
     for (int i = L; i <= R; i++)
     {
         cout << ar[i] << " ";
     }
     cout << endl;
     cout << "fm = " << L << " lm = " << R << endl;
 }

 int main()
 {
     int arr[10] = {10,9,8,7,6,5,4,3,2,1};

     mergesort(arr,0,9);

     for(int i=0;i<10;i++)
     {
         cout<<arr[i]<<endl;
     }

 }