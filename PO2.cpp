#include<iostream>
using namespace std;

//Function for Union
void Union(int arr1[], int arr2[], int len1, int len2) {
    int f, i, j, k = 0;
    int arr3[100];
    for (i = 0; i < len1; i++) {
        arr3[k] = arr1[i];
        k++;
    }
    for (i = 0; i < len2; i++) {			//Union logic in this for loop
        f = 0;
        for (j = 0; j < len1; j++) {
            if (arr2[i] == arr1[j]) {
                f = 1;
            }}
        if (f == 0) {
            arr3[k] = arr2[i];
            k++;
        }  }
    cout << "Union of two array is:";
    for (i = 0; i < k; i++) {
        cout << arr3[i] << " ";
    }
}
 
//Function for Intersection
void Intersection(int arr1[], int arr2[], int len1, int len2) {
    int arr3[100];
    int i, j, k = 0;
    for (i = 0; i < len1; i++) {		//Intersection logic
        for (j = 0; j < len2; j++) {
            if (arr1[i] == arr2[j]) {
                arr3[k] = arr1[i];
                k++;
            }
        }
    }
    cout << "\nIntersection of two array is:";
    for (i = 0; i < k; i++) {
        cout << arr3[i] << " ";
    }
}

//Funnctiom fro A-B
void diference(int a[10],int b[10], int n1, int n2){
	int c[10],d[10],m=0,k=0,l,i,j;
    for( i=0;i<n1;i++){
        for(j=0;j<n2;j++){			//A-B logic
            if(b[j]==a[i])
             break;
        }
        if(j==n2){			
            for(l=0;l<k;l++){
                if(c[l]==a[i])
                 break;
            }
            if(l==k){
                c[k]=a[i];
                k++;
            }
        }}
    cout<<"\nDifference of A-B is:-\n";
     for(i=0;i<k;i++)
     {
         cout<<c[i]<<" ";
     }
    
}

//Funtion for A+B
void last(int arr1[], int arr2[], int len1, int len2){
        int arr3[200];
        int p = 0;
        int q = 0;
        int k = 0;
        while ( p < len1 && q < len2) {				// A+B LOGIC
            if (arr1[p] < arr2[q]) {

                arr3[k++] = arr1[p++];
            } else {
                arr3[k++] = arr2[q++]; 
            }
                
        }
        while ( p < len1) {
            arr3[k++] = arr1[p++];   
        }
        while ( q < len2) {
            arr3[k++] = arr2[q++];   
        }
        cout<<"\nA+B : "<<endl;
        for ( int c = 0; c < k; c++) {
            cout << arr3[c] << " ";   
        }               
}

void get(){
	    int arr1[100];
    int arr2[100];
    int arr3[100];
    int i, j, len1, len2;
	int ch;
    cout << "Enter size of 1st array:";
    cin>>len1;

    cout << "Enter 1st array elements:";
    for (i = 0; i < len1; i++) {
        cin >> arr1[i];
    }
    cout << "Enter size of 2nd array:";
    cin>>len2;

    cout << "Enter 2nd array elements:";
    for (i = 0; i < len2; i++) {
        cin >> arr2[i];
    }
    system("cls");
    do{
    	//main menu
    cout<<"\n\n1->Union\n2->Intersection\n3->A-B\n4->A+B\n5->Exit"<<endl;
	cout<<"Enetr your choice : ";
	cin>>ch;
	if(ch==1){
//	system("cls");	
    Union(arr1, arr2, len1, len2);}
    if(ch==2){
//    system("cls");	
    Intersection(arr1, arr2, len1, len2);
	}
	if(ch==3){
//	system("cls");
	diference(arr1, arr2, len1, len2);
	}
	if(ch==4){
//	system("cls");
	last(arr1, arr2, len1, len2);
	}
	if(ch==5){
		cout<<"\n\nYou are exit to this program..";
		exit(0);
	}
}while(ch!=5);

}

int main() {
get();
    return 0;
}

