class NumberContainers {
public:
    
    map<int,int>index_to_number;
    map<int,set<int>>number_to_index;
    
    void change(int index, int number) {
        
        if(!index_to_number.count(index)){
            index_to_number[index]=number;
            number_to_index[number].insert(index);
        }
        
        else{
            int num=index_to_number[index];
            
            number_to_index[num].erase(index);
            if(number_to_index[num].empty()) number_to_index.erase(num);
            
            
            index_to_number[index]=number;
            number_to_index[number].insert(index);
            
        }
    
        
        
        
        
    }
    
    int find(int number) {
        if(number_to_index.count(number)==0) return -1;
        else  return *number_to_index[number].begin();
    }
};

/**
 * Your NumberContainers object will be instantiated and called as such:
 * NumberContainers* obj = new NumberContainers();
 * obj->change(index,number);
 * int param_2 = obj->find(number);
 */