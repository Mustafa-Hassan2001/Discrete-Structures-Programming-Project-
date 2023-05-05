#include<iostream>
using namespace std;
//Function for symmatric
void symmatric(){
	int A[10][10], i, j, m, n, x = 0, y = 0;
    cout << "Enter the number of rows and columns : ";
    cin >> m >> n;
    cout << "Enter the matrix elements : ";
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            cin >> A[i][j];
    for (i = 0; i < m; i++){
        for( j = 0; j < n; j++){		//symmatric logic
            if (A[i][j] != A[j][i])
                x = 1;
            else if (A[i][j] == -A[j][i])
                    y = 1;
        }}
    if (x == 0)
        cout << "The matrix is symmetric.\n ";
    else if (x == 1)
        cout << "The matrix is Anti-symmetric.\n ";
    for (i = 0; i < m; i++){
            for (j = 0; j < n; j++)	
                cout << A[i][j] << " ";
            cout << "\n ";
        }}

// Function for reflexive
void reflexi(){
		int A[10][10], i, j, m, n, x = 0, y = 0;
    cout << "Enter the number of rows and columns : ";
    cin >> m >> n;
    cout << "Enter the matrix elements : ";
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            cin >> A[i][j];
    for (i = 0; i < m; i++){
        for( j = 0; j < n; j++){		//reflexive logic
        	if(i==j & A[i][j] != 1){
        		x=1;
			}}
}
if(x==0)
	cout<<"\nMatrix is reflexive.\n";
if(x==1)
	cout<<"\nMatrix is irreflexive.\n";	
	    for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)	
                cout << A[i][j] << " ";
            cout << "\n ";
        }
}

//Function for Transitive
void Transitive(){
		int A[10][10], i, j, m, n, x = 0, y = 0;
		  bool check=true;
    cout << "Enter the number of rows and columns : ";
    cin >> m >> n;
    cout << "Enter the matrix elements : ";
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            cin >> A[i][j];
           
		for(int i=0;i<m;i++){
			for(int j=0;j<m;j++){
				for(int k=0;k<m;k++){			//Transitive logic
                 if ((i!=j && j!=k) && (A[i][j] == 1 && A[j][k] == 1 && A[k][i] != 1)){
                   y=1;
				}}}
	}
		if(check==0){
			cout<<endl<<"The matrix is transitive.\n";
		}	
		else{
			cout<<endl<<"The matrix is not transitive.\n";
		}
		for (i = 0; i < m; i++){
            for (j = 0; j < n; j++)	
                cout << A[i][j] << " ";
            cout << "\n ";
        }
        }

int main (){

	int ch;
	//main menu
	do{
		
			cout<<endl;
	cout<<"1->Symmatric\n2->reflexive\n3->Transitive\n4->Exit\n";
	cout<<"Enter your choice : ";
	cin>>ch;
	system("cls");
	if(ch==1)
    symmatric();
    if(ch==2)
	reflexi();
	if(ch==3)
    Transitive();
    if(ch==4){
    	cout<<"\nYour are exit form this program";
	}
}while(ch!=4);

    return 0;
}

