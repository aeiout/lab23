#include<iostream>
#include<cstdlib>
using namespace std;

int main(int argc,char *argv[]){
    double sum=0,average=0;
    int N=argc;
    if(N==1){
        cout<<"Please input numbers to find average.\n";
    }else{
        for(int i=0;i<N;i++){
        sum=atoi(argv[i])+sum;
    }
        
        average=sum/(N-1);
        cout<<"---------------------------------\n";
        cout<<"Average of "<< N-1<<" numbers = "<<average<<endl;
        cout<<"---------------------------------\n";
    }
    return 0;
}
