#include<iostream>
using namespace std;
// the question to this is in file READ ME.
// in this program, only arrays are used. 
// we can make use of structures to make it even more simpler and lighter code.
// here, pointers can be used to reduce the space used by the program with check array.
// this program can help beginners to implement their idea with very very basic knowledge. without any higher datastructues.
/*
LOGIC:
we take the array elements to the array arr. then we read all the elements from the beginning to the end and check whether it is non-negative held do the following::
if it is non-negative v add it to the check array.
and initialise the other parts of check array with the initial position of the first element of the subarray.
if it is negative we are going to terminate it and continue with the next coming subarray in the same way as in the above statement.
finally, we sort the check array according to the given conditions and continue with the the subarray which is pointed by the first part of check array.
*/
int main()
{
int n;
cout << "Enter the number of array elements :";
cin >> n;
int arr[n],check[3][10]={0},z=0;
cout << "Enter the array elements:" << endl;
for(int i=0;i<n;i++)
{
cin >> arr[i];
} 
int past=0,x;
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
