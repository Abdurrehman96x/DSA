#include <iostream>
#include <vector>
using namespace std;
int largest_elementIN_array(){
    int array[]={1,2,3,4,5,6,7}; 
    int size = 7;
    for(int i =0;i<size;i++){
        if(array[0]<array[i]){
            array[0]= array[i];
        }
    }
    cout<<array[0];
    return 0;

}
int array_manipulation_Quest(){
    int array[]={2,3,1,3,2,4,1};  // output is equal to 4!!
    int size = 7;
    for(int i =0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(array[i]==array[j]){
                 array[i]=array[j]=-1;
            }
        }
    }
    int unique =0;
    for(int i =0;i<size;i++){
        if(array[i]>-1){
            unique= array[i];
        }
    }
    cout<<unique<<endl;
}
int target_sum_triplets(){
    vector<int>v(6);
    for(int i=0;i<v.size();i++){
        cin>>v[i];
    }
    int target_sum=0;
    int sum;
    cout<<"Enter the target sum:";
    cin>>sum;
    for(int i=0;i<v.size();i++){
        for(int j = i+1;j<v.size();j++){
            for(int k=j+1;k<v.size();k++){
                if(v[i]+v[j]+v[k]==sum){
                target_sum +=1;
            }
            
        }
        
        }
    }
    cout<<target_sum;
    return 0;
}


int target_sum(){           // TARGEt Sum = Sum of pairs is equal to given value
    vector<int>v(7);
    for(int i=0;i<v.size();i++){
        cin>>v[i];
    }
    int target_sum=0;
    int sum;
    cout<<"Enter the target sum:";
    cin>>sum;
    for(int i=0;i<v.size();i++){
        for(int j = i+1;j<v.size();j++){
            if(v[i]+v[j]==sum){
            target_sum +=1;
        }
        
        }
    }
    cout<<target_sum;
    return 0;
}

int find_last_occurance(){
    vector<int>v(7);
    for(int i =0;i<7;i++){
        cin>>v[i];

    }
    cout<<"Enter X:";
    int x;
    cin>>x;

    int occurance;
    for(int i=0;i<v.size();i++){
        if(v[i]==x){
            occurance =i;
        }
    }
    cout<<"last Occurance is:"<<occurance;
    return 0;

}


int num_of_occurance(){
    vector<int>v(5);
    for(int i =0;i<v.size();i++){
        cin>>v[i];

    }
    cout<<"Enter x:";
    int x;
    cin>>x;
    int occurance =0;
    for(int i=0;i<v.size();i++){
        if(v[i]==x){
            occurance+=1;
        }
    }
    cout<<"Num of occurance is:"<<occurance;
    return 0;
}
int find_last_occurance2(){
    vector<int>v(6);
    for(int i =0;i<6;i++){
        cin>>v[i];
    }
    cout<<"ENTER X:";
    int x;
    cin>>x;
    int occurance;
    for(int i=v.size()-1;i>0;i--){
        if(v[i]==x){
            occurance=i;
            break;
        }
    }
    cout<<"last occurance is:"<<occurance;
    return 0;
}

int cout_thenumof_ele_strickly_greaterTHANvalue(){
    vector<int>v(6);
    for(int i =0;i<6;i++){
        cin>>v[i];
    }
    cout<<"Enter the element:";
    int ele,count;
    cin>>ele;
    count=0;
    for(int i=0;i<v.size();i++){
        if(v[i]>ele){
            count+=1;
        }
    }
    cout<<"THE NUMBER OF ELEMENT WHICH IS GREATER THAN "<<ele<<" IS:"<<count;
    return 0;

}

int array_is_sorted_OR_not(){  //DOUBT!!!!
    int array[]={1,2,3,4,5,6};
    bool sortedflag= true;
    for(int i =0;i<6;i++){
        if(array[i]<=array[i-1]){
            sortedflag= false;
        }
    }
    cout<<sortedflag<<endl;
    return 0;
}
int diff_ofsumof_element_even_and_odd(){
    int array[]={1,2,1,2,1,2,1};
    int anssum=0;
    for(int i =0;i<7;i++){
        if(i%2==0){
            anssum+=array[i];
        }
        else{
            anssum-=array[i];
        }
    }
    cout<<anssum;
    return 0;
}
int Rotate_the_array_k_times(){
    int array[]={1,2,3,4,5};
    int n=5;
    int k=8;
    //for k is Greater than n
    k=k%n;
    int j=0;
    int ansarray[5];
    //inserting the k element in ansarray
    for(int i=n-k;i<n;i++){
        ansarray[j++]=array[i];    
    }
    //for inserting the n-k element in ansarray
    for(int i=0;i<=k;i++){
        ansarray[j++] = array[i];
    }
    for(int i=0;i<n;i++){
        cout<<ansarray[i]<<" ";
    }
    cout<<endl;
    return 0;

}
/*int Rotate_the_array_Optimise(){    //ERROR?????
    vector<int> v();
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);

    int k=2;
    k=k%v.size();
    reverse(v.begin(),v.end());
    reverse(v.begin(),v.begin()+k);
    reverse(v.begin()+k,v.end());
    for(int a:v){
        cout<<a<<" ";

    }
    cout<<endl;
}*/
    
void sortZeroesAndOnces(vector<int> &v){
    int zeroes_count=0;
    for(int ele:v){
        if(ele==0){
            zeroes_count++;
        }
    }
    for(int i=0;i<v.size();i++){
        if(i<zeroes_count){
            v[i]=0;
        }
        else{
            v[i]=1;
        }
    }
}  
void two_pointer_forSortZeroesAndOnces(vector<int> &v){
    int left_ptr =0;
    int right_ptr = v.size()-1;
    while(left_ptr<right_ptr){
        if(v[left_ptr] ==1 && v[right_ptr] ==0){
            v[left_ptr++]=0;
            v[right_ptr--]=1;

        }
        if(v[left_ptr]==0){
            left_ptr++;
        }
        if(v[right_ptr]==1){
            right_ptr--;
        }
    }
}
void two_pointer_sort_OddAndEven_in_array(vector<int> &v){
    int left_ptr=0;
    int right_ptr = v.size()-1;
    while(left_ptr<right_ptr){
        if(v[left_ptr]%2==0 && v[right_ptr]%2==1){
            swap(v[left_ptr],v[right_ptr]);
        }
        if(v[left_ptr]%2==1){
            left_ptr++;
        }
        if(v[right_ptr]%2==0){
            right_ptr--;
        }
     }
}
void sortedSquarearray(vector<int> &v){
    vector<int> ans;
    int left_ptr=0;
    int right_ptr = v.size()-1;
    while(left_ptr<right_ptr){
        if(abs(v[left_ptr])<abs(v[right_ptr])){
            ans.push_back(v[right_ptr]*v[right_ptr]);
            right_ptr--;
        }
        else{
            ans.push_back(v[left_ptr]*v[left_ptr]);
            left_ptr--;
        }
    }
    for(int i =0;i<v.size();i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}
void prefix_sum(vector<int> &v){
    for(int i =1;i<v.size();i++){
        v[i]+=v[i-1];
    }
}
bool prefix_suffix_sum(vector<int> &v){    // 6 2 4 3 1
    int total_sum = 0;                     // total sum 16
    for(int i =0; i<v.size();i++){         // prefix_sum = 6+2 = 8
        total_sum+=v[i];                   // Suffix_sum = 16-8 = 8
    }
    int prefix_sum =0;
    for(int i =0;i<v.size();i++){
        prefix_sum+=v[i];
        int suffix_sum= total_sum-prefix_sum;
        if (prefix_sum==suffix_sum)
        {
            return true;
        }
        
    }
    return false;
    
}
int main(){
    
    int n;
    cout<<"ENTER THE SIZE OF ARRAY";
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++){
        int ele;
        cin>>ele;
        v.push_back(ele);
    }
    cout<<prefix_suffix_sum(v)<<endl;
    /*prefix_sum(v);
    for(int i =0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    //sortedSquarearray(v);
    /*for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;*/
    return 0;
}
