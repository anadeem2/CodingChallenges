class Solution {
    public List<String> fizzBuzz(int n) {
        List<String> returnList = new ArrayList<>();
			for(int i =1; i <= n; i++) {
				if(i % 3 == 0) {
					
                    if(i % 5 == 0) {
                        returnList.add("FizzBuzz");
                        continue;
                    }
                
                    returnList.add("Fizz");
                    continue;
                }
				if(i % 5 ==0){
					returnList.add("Buzz");
                    continue;
				}
				
				returnList.add(Integer.toString(i));
                
				
			
		}
        return returnList;
    }
}
