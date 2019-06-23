#include <iostream>
using namespace std;

bool isSorted(int *a,int n){

    if(n==1)
        return true;
    if(a[0]<a[1] && isSorted(a+1,n-1))
        return true;
    return false;
        
}

int main() {
   
   int a[] = {1,2,3,5,7};
   int n = 5;

   if(isSorted(a,n))
        cout << "Yes Sorted" << endl;
    else
        cout << "Not Sorted" << endl;
   return 0;
}
