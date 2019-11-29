#include <iostream>
#include <ctime>
using namespace std;

int main() {
srand(time(0));
  
const int srow=5;
const int scol=5;
int Array[srow][scol];


int row;
cout<<"Enter row";
cin>>row;

int col;
cout<<"Enter col";
cin>>col;

for(int i=0;i<row;i++){
 for(int j=0;j<col;j++){
  Array[i][j]=-5+rand()%10;
}
}

for(int i=0;i<row;i++){
  cout<<endl;
 for(int j=0;j<col;j++){
  cout<<Array[i][j]<<" ";
}
}
cout<<endl;
/*11.	всі додатні елементи зменшити на 1, всі від’ємні елементи збільшити на 1;*/

for(int i=0;i<row;i++){
 for(int j=0;j<col;j++){
  if(Array[i][j]>0)
  Array[i][j]--;
  else if(Array[i][j]<0)
  Array[i][j]++;
  else 
  continue;}
}

for(int i=0;i<row;i++){
  cout<<endl;
 for(int j=0;j<col;j++){
  cout<<Array[i][j]<<" ";
}
}

}