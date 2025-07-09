#include<stdio.h>
void bubblesort(int arr[],int n) { //function for bubble sort
int i,j,temp;
 for(i=0;i<n-1;i++) {
    for(j=0;j<n-1-i;j++){
        if(arr[j]>arr[j+1]){
            temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
    }
 }
}

void printarray(int arr[],int n){ //function for print
int i;
for(i=0;i<n;i++){
    printf("%d\n", arr[i]);
}
    printf("\n");
}
//main function

int main(){
 int arr[]={11, 87, 56, 33, 55, 90};
int n=sizeof(arr) / sizeof(arr[0]);

printf("original array\n: ");
printarray(arr,n);

bubblesort(arr,n);
printf("after sorting\n: ");
printarray(arr,n);
return 0;
}




