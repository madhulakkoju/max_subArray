#include<iostream>
using namespace std;


int main()
{
int n;
cout << "Enter the number of array elements :";
cin >> n;
int arr[n],check[3][10];
cout << "Enter the array elements:" << endl;
for(int i=0;i<n;i++)
{
cin >> arr[i];
} 
int past=0,x,y;
for(int i=0;i<n;i++)
{
x = arr[i];
if(past < 0 && x < 0)
{
continue;
}
else if( x < 0 && past > 0)
{
z++;
}
else if( x > 0 && past < 0)
{
check[0][z] = x;
check[1][z] = 1;
check[2][z] = i;

}

else
{
check[0][z] += x;
check[1][z] += 1;
}
past = x;
}
int temp;
for(int i =0; i <= z; i++)
{
for(int j = i + 1; j< z;j++)
{
if(check[0][i]<check[0][j])
{
//swap

temp= check[0][j];
check[0][j]=check[0][i];
check[0][i]=temp;

temp= check[1][j];
check[1][j]=check[1][i];
check[1][i]=temp;

temp= check[2][j];
check[2][j]=check[2][i];
check[2][i]=temp;
}
else if(check[0][i]==check[0][j])
{
if(check[1][i]<check[1][j])
{
//swap
temp= check[0][j];
check[0][j]=check[0][i];
check[0][i]=temp;

temp= check[1][j];
check[1][j]=check[1][i];
check[1][i]=temp;

temp= check[2][j];
check[2][j]=check[2][i];
check[2][i]=temp;
}
else if(check[1][i]==check[1][j])
{

if(check[2][i]>check[2][j])
{
//swap
temp= check[0][j];
check[0][j]=check[0][i];
check[0][i]=temp;

temp= check[1][j];
check[1][j]=check[1][i];
check[1][i]=temp;

temp= check[2][j];
check[2][j]=check[2][i];
check[2][i]=temp;
}
}
}
}
}
for(int i =check[2][0];i<check[2][0]+check[1][0];i++)
{

cout<<arr[i]<<" ";
}
return 0;
}
