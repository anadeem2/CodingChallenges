class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> returnList;
        for(int i =1; i <= n; i++) {
                if(i % 3 == 0) {
                    
                    if(i % 5 == 0) {
                        returnList.push_back("FizzBuzz");
                        continue;
                    }
                
                    returnList.push_back("Fizz");
                    continue;
                }
                if(i % 5 ==0){
                    returnList.push_back("Buzz");
                    continue;
                }
                
                returnList.push_back(to_string(i));
                
                
            
        }
        return returnList;
    }
    
};