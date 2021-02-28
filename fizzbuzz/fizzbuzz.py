class Solution(object):
    def fizzBuzz(self, n):
        """
        :type n: int
        :rtype: List[str]
        """
        li = []

        for i in range(1,n+1,1):
            if(i % 3 == 0):
                if(i % 5 == 0):
                    li.append("FizzBuzz")
                    continue
                else:
                    li.append("Fizz")
                    continue
            
            if(i % 5 == 0):
                li.append("Buzz")
                continue
            
            
            li.append(str(i))
        return li
                
            