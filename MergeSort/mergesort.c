#include <stdio.h>
#include <stdlib.h>
int iSIZE = 20;
void merge_sort(int a[], int low, int high);
void merge(int a[],int low, int mid, int high);
void print(int a[]);

void merge_sort(int a[], int low, int high){
  int mid;
  if(low < high){
    mid = (low+high)/2;
    merge_sort(a, low, mid);
    merge_sort(a, mid+1, high);
    merge(a, low, mid, high);
  }
}

void merge(int a[], int low, int mid, int high){
  int result[30];
  int i,j,k,m;
  i=low;
  j=mid+1;
  k=low;
  while(i <= mid && j <= high){
    if(a[i] < a[j]){
      result[k++] = a[i++];
    }else{
      result[k++] = a[j++];
      }
    }
    if (i > mid){
      for(m = j; m <= high; m++){
        result[k++] = a[m];
      }
    }else{
      for(m = i; m<= mid; m++){
        result[k++] = a[m];
      }
    }

  for(m = low; m <= high; m++)
  a[m] = result[m];
}

int main(){
int count, N;
int *array;

  scanf("%d",&N);
  array = (int*)malloc(sizeof(int)*(N));

  for(int a=0; a<N; a++){
    scanf("%d", &array[a]);
  }

  count = sizeof(array) * N / sizeof(int);

  merge_sort(array, 0, N);

  printf("\n");

  for(int i = 0; i<N; i++){
    printf("%d ", array[i]);
  }
  free(array);
  return 0;
}
