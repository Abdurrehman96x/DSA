#include <iostream>
#include <vector>
using namespace std;
int vectors(){
    vector<int> v;
    //LOOPS in Vectors
    for(int i =0;i<5;i++){
        int element;
        cin>>element;
        v.push_back(element);

    }
    for(int i = 0;i<v.size();i++){
        cout<<v[i]<<" ";

    }
    
    cout<<endl;
    v.insert(v.begin()+2,6);
    //FOR EACH Loop
    for(int ele:v){
        cout<<ele<<" ";

    }
    cout<<endl;
    v.erase(v.end()-2);
    //WHILE LOOP
    int idx = 0;
    while(idx<v.size()){
        cout<<v[idx++]<<" ";
    }
    return 0;
}
    /*cout<<"size:"<<v.size()<<endl;
    cout<<"Capacity:"<<v.capacity()<<endl;

    v.push_back(1);
    cout<<"size:"<<v.size()<<endl;
    cout<<"Capacity:"<<v.capacity()<<endl;

    v.push_back(2);
    cout<<"size:"<<v.size()<<endl;
    cout<<"Capacity:"<<v.capacity()<<endl;
    v.push_back(3);
    cout<<"size:"<<v.size()<<endl;
    cout<<"Capacity:"<<v.capacity()<<endl;
    v.push_back(4);
    cout<<"size:"<<v.size()<<endl;
    cout<<"Capacity:"<<v.capacity()<<endl;
    v.push_back(5);
    cout<<"size:"<<v.size()<<endl;
    cout<<"Capacity:"<<v.capacity()<<endl;

    v.resize(6);
    cout<<"size:"<<v.size()<<endl;
    cout<<"Capacity:"<<v.capacity()<<endl;
    v.resize(10);
    cout<<"size:"<<v.size()<<endl;
    cout<<"Capacity:"<<v.capacity()<<endl;
    v.pop_back();
    v.pop_back();
    cout<<"size:"<<v.size()<<endl;
    cout<<"Capacity:"<<v.capacity()<<endl;
    v.clear();
    cout<<"size:"<<v.size()<<endl;
    cout<<"Capacity:"<<v.capacity()<<endl;



    return 0;
}
*/
int main(){
    vectors();
    /*char vowel[5];
    for(int idx = 0;idx<5;idx++){
        cin>>vowel[idx];

    }
    for (int idx = 0; idx <5;idx++)
    {
        cout<<vowel[idx]<<" ";
    }
    

    /*int array[] = {1,23,3,4,5};
    int size = sizeof(array)/sizeof(array[0]);

    for(int idx = 0;idx <size;idx++){
        cout<<array[idx]<<endl;
    }
    /*cout<<array[0];
    cout<<array[1];
    cout<<array[2];
    cout<<array[3];
    cout<<array[4]; */


    return 0;

}