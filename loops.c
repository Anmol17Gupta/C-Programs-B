#include <stdio.h>
/*
int sum(int arr[],int size){
    int min=arr[0],max=arr[0];

    for(int i=0;i<size;i++){
        if(arr[i]<min){
            min=arr[i];
        }

        else if(arr[i]>max){
            max=arr[i];
        }
    }
    return min+max;
}
int max(int arr[],int size){
    int max=arr[0];
    for(int i=0;i<size;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    return max;
}
int rev(int arr[],int size){
    int temp;
    for(int i=0;i<size/2;i++){
        temp=arr[i];
        arr[i]=arr[size-1-i];
        arr[size-1-i]=temp;
    }

    for(int i=0;i<size;i++){
        printf("%d,",arr[i]);
    }
}

int misNum(int arr[],int size){
    int misnum,sum=0,sum_no;
    for(int i=0;i<size;i++){
        sum+=arr[i];
    }
    sum_no=((size)*(size+1))/2;
    misnum=sum_no-sum;
    return misnum;
}
*/
void swap(int *m,int *n){
    int temp=*m;
    *m=*n;
    *n=temp;
    //return *m,*n;
}

void sort(int arr[],int size){
    for(int i=0;i<size-1;i++){
        int min=i;
        for(int j=i+1;j<size;j++){
            if(arr[j]<arr[min]){        //This condition is used find min
                min=j;
            }
        }
        

        if(min!=i){
                int temp = arr[i];
                arr[i] = arr[min];
                arr[min] = temp;
            }
         
    }
    for( int i=0;i<size;i++){
        printf("%d,",arr[i]);
    } 
}


int main(){
    int arr1[]={2,4,6},m=3;
    int arr2[]={1,3,5},n=3;
    int size=m+n;
    int arr[size];

    

//Merging of two arrays
    for(int i=0;i<m;i++){
        arr[i]=arr1[i];
    }

    for(int i=0;i<n;i++){
        arr[m+i]=arr2[i];
    } 

    printf("Merged array:\n");
    for( int i=0;i<size;i++){
        printf("%d,",arr[i]);
    } 
    
    
    
    printf("\nSorted Array\n");
    sort(arr,size);
      
        
}