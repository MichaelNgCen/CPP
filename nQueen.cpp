// Michael Ng Cen
#include <iostream>
using namespace std;

bool ok(int q[], int column){
    for(int i=0; i<column; i++){
        if( (q[column]==q[i]) || (column-i == q[column]-q[i] )|| (column-i == q[i]-q[column]) )
            return false;
    }
    return true;
};

void nextRow(int q[], int column){
    q[column]++;
}

void backTrack(int & column, int cas){  
    column--;
}

void nextColumn(int q[], int & column){
    column++;
    q[column]=-1;
}

int main(){
    cout<<"Please input the number of queens: "<<endl;
    int N;
    cin>>N;

    int index = 0;
    for(int i=1; i<=N; i++){
        int *q = new int[i];
        int c=1;
        int counter = 0;
        q[0]=0;
        q[c]=-1;
        while(true){
            while(c >= 0 && c < i){
                while(q[c] < i){
                    nextRow(q, c);
                    if(q[c] == i){
                        backTrack(c,1); 
                        break;
                    }
                    if(ok(q,c)){
                        nextColumn(q,c);
                        break;
                    }
                }
            }
            backTrack(c,2);
            if(c <= -1)
                break;
            counter++;
        }
        delete[] q;
        index++;
        cout<<index<<". There are  "<<counter<<" solutions to the "<< index <<" queens problem."<<endl;

    }
    exit(1);
}