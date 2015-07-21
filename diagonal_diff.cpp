#include <iostream>

using namespace std;

int main() {
int n;
cin>>n;
int n1 = n;
int arr[n][n];
int main_diagonal = 0;
int sec_diagonal = 0;

for( int i = 0; i < n; i++){
        for(int j = 0; j < n; j++) {
                cin>>arr[i][j];
        }
}

int i1 = 0,j1 = 0;
for(int i = 0; i < n; i++) {
 main_diagonal += arr[i1][j1];
 i1++;
 j1++;
}

for( int i = 0; i < n; i++) {
 n1--;	
 sec_diagonal += arr[i][n1];
}

int diff = main_diagonal - sec_diagonal;
 
diff = diff < 0 ? diff * -1 : diff;
cout<<diff;
return 0;
}       

