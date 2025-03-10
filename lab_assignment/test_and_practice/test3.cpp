#include<iostream>
#include <vector>



void merge(std::vector<int> &A, int l, int mid, int h){

    int n1 = mid - l +1;
    int n2 = h - mid;
    int a[n1]; int b[n2];

    for(int i = 0; i < n1; i++){
        a[i] = A[l + i];
    }

    for(int i = 0; i < n2; i++){
        b[i] = A[mid +1 + i];
    }

    int i = 0;
    int j = 0;
    int k = l;
    
    while(i < n1 && j < n2){
        if(a[i] < b[j]){
            A[k] = a[i];
            k++; i++;
        }
        else{
            A[k] = b[j];
            k++; j++;
        }
    }
    while(i < n1){
        A[k] = a[i];
        i++;
    }
    while(j < n2){
        A[k] = b[j];
        k++; j++;
    }
}


void mergeSort(std::vector<int> &A, int l, int h){

    if(l < h){
        int mid = (l+h)/2;
        mergeSort(A,l,mid);
        mergeSort(A, mid+1,h);

        merge(A, l, mid, h);
    }
    return;

}

int main(){
    std::vector<int> A;
    int n; std::cin >> n;
    for(int i = 0; i < n; i++){
        int a; std::cin >> a;
        A.push_back(a);
    }

    mergeSort(A, 0, A.size());

    for(int x:A){
        std::cout << x;
    }    

}