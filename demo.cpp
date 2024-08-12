#include<iostream>

using namespace std;

void nhap_mang(int n, int *arr){
    


    cout<<"Nhap "<< n <<" phan tu trong mang\n";
    for (int i = 0; i < n; i++)
    {
        cin >>arr[i];   
    }
    
}
void xuat_mang(int n, int *arr){
    cout<< "Mang vua nhap la: \n";
    for (int i = 0; i < n; i++)
    {
        cout<<"["<<arr[i]<<"]";
    }
    cout<<endl;
}

void sx_mang(int n, int *arr){
    for (int i = 0; i < n-1; i++)
    {   for (int  j = 0; j < n-i-1; j++)
    {   if (arr[j]< arr[j+1])
    {
        swap(arr[j], arr[j+1]);
    }
    
   
        
    }
    
        
    }
    cout<<"Mang sau sap xep la: \n";
    for (int  i = 0; i < n; i++)
    {
        cout<<"["<<arr[i]<<"]";
    }
    
}



 int tong(int n, int *arr){
    int sum =0;
    for (int i = 0; i < n; i++)
    {
         sum += arr[i];
    }
    return sum;
    

 }


int main(){
    int n;
    cout<<"Nhap kich thuoc cua mang: "<<endl;
    cin >> n;
    int *arr=new int[n];
nhap_mang(n, arr);
xuat_mang(n, arr); 
int sum =tong(n , arr);
cout<< "Tong cac phan tu trong mang la: "<< sum<<endl;

sx_mang(n, arr);

return 0;
}