#include <iostream>
using namespace std;
char key[]="5361274";
int* indexArray(char *arr,int size,bool asc=true);

int main(){
    
   int s=sizeof(key)/sizeof(char)-1;
    int *index=indexArray(key,s);
    for(int i=0;i<s;i++){
        cout<<key[index[i]]<<"|";
    }
return 0;
}



int* indexArray(char *arr,int size,bool asc){
    bool* checkInfo= new bool[size]{false};
    int * indexSorted=new int[size]{0};
int index=0;
//char preMin=0;


for(int i=0;i<size;i++){
char min=127;
if (!asc) min=-127;
index=0;
 for(int j=0;j<size;j++){
   if(checkInfo[j]==false ){  
       if(asc){
    if(min>key[j] ){   
        index=j;  
        min=key[j] ;     
    }
       }
       else{
           if(min<key[j] ){   
        index=j;  
        min=key[j] ;
       }
       }
}
}
checkInfo[index]=true;
indexSorted[i]=index;
}
delete[] checkInfo;
checkInfo=NULL;
return indexSorted;
}
