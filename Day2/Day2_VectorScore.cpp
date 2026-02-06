#include<iostream>
#include<vector>


int main(){
    std::vector<int> scores = {10,20,30};

    std::cout<<"Player scores:"<<"\n";
    for(int s:scores){
        std::cout<<s<<"\n";
    }
    std::cout<<"Total no. of scores "<<scores.size()<<"\n";
    return 0;
}