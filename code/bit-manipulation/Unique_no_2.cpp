#include <iostream>
#include <vector>
using namespace std;
void findUnique2(vector<int> a,int n){
    
    int res=0;
    for(int i=0;i<n;i++){
        res = res^a[i];
    }
    // find the rightmost set bit in res
    int i=0;
    int temp=res;
    while(temp>0){
        if(temp&1){
            break;
        }
        i++;
        temp = temp>>1;
    }
    
    int mask = (1<<i);
    
    int firstNo = 0;
    for(int i=0;i<n;i++){
        if((mask&a[i])!=0){
            firstNo = firstNo^a[i];
        }
    }
    
    int secondNo = res^firstNo;
    cout<<firstNo<<endl;
    cout<<secondNo<<endl;
    
}


int main(){
    
    int n;
    
    vector<int> v;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int temp;
        cin>>temp;
        v.push_back(temp);
    }
    
    findUnique2(v,n);
    
    
    return 0;
    
    
}
