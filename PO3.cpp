#include<iostream>
using namespace std;
//Function of conjunction
void conjunction(int arr1[],int arr2[]){
	int i;
	cout<<"[ ";
	 for(i=0;i<4;i++){
		if(arr1[i]==1 && arr2[i]==1){		//conjunction logic
			cout<<"1 , ";
		}else{
			cout<<"0 , ";
		}}
	cout<<" ]"<<endl;
}

//Function for disjunction
void disjunction(int arr1[],int arr2[]){
	int i;
	cout<<"[ ";
	for( i=0;i<4;i++){
		if(arr1[i]==1 ||  arr2[i]==1){		//disjunction logic
			cout<<"1 , ";
		}else{
			cout<<"0 , ";
		}}
	cout<<" ]"<<endl;
}

//Function For exclusive
void exclusive(int arr1[],int arr2[]){
	cout<<"[ ";
	for(int i=0;i<4;i++){
		if(arr1[i]==arr2[i]){		//exclusive logic
			cout<<"0 , ";
		}else{
			cout<<"1 , ";
		}}
	cout<<" ]"<<endl;
}

//Function for conditional
void conditional(int arr1[],int arr2[]){
	cout<<"[ ";
	for(int i=0;i<4;i++){
		if(arr1[i]==1 && arr2[i]==0){		//conditional logic
			cout<<"0 , ";
		}else{
			cout<<"1 , ";
		}}
	cout<<" ]"<<endl;
}

//Function for biconditional
void biconditional(int arr1[],int arr2[]){
	cout<<"[ ";
	for(int i=0;i<4;i++){ 
		if(arr1[i]==arr2[i]){		//biconditional logic
			cout<<"1 , ";
		}else{
			cout<<"0 , ";
		}}
	cout<<" ]"<<endl;
}

int main(){
int p[50],q[50],index;
int size,choice;
cout<<"Enter the size of array p:";
cin>>size;
cout<<"Enter the elements of array p:"<<endl;
for(index=0;index<size;index++){
	cin>>p[index];
	
}
cout<<"Enter the size of array q:";
cin>>size;
cout<<"Enter the elements of array q:"<<endl ;
for(index=0;index<size;index++){
	cin>>p[index];	
}
do{
	system("cls");
	cout<<endl;
	//main menu
cout<<"1.conjunction\n2.disjunction\n3.exclusive\n4.conditional\n5.biconditional"<<endl;
cout<<"Enter your choice: ";
cin>>choice;
	system("cls");
	if(choice==1){
	cout<<endl<<"Conjunction   = ";
	conjunction(p,q);
	break;
	}
	if(choice==2){
	cout<<endl<<"Disjunction   = ";
	disjunction(p,q);
	break;
	}
	if(choice==3){
	cout<<endl<<"Exclusive     = ";
	exclusive(p,q);
	break;
}
	if(choice==4){
	cout<<endl<<"Conditional    = ";
	conditional(p,q);
	break;
}
	if(choice==5){
	cout<<endl<<"Biconditional  = ";
	biconditional(p,q);
	break;
}
if(choice==6){
	cout<<"\nYou are exit from this program ";
}
}while(choice!=6);

}
     
