class Solution(object):
    def lemonadeChange(self, bills):

        """
        :type bills: List[int]
        :rtype: bool
        """
        five=0
        ten=0
        for x in bills:
            if bills==5:
                five+=1
            elif bills==10:
                if five>=1:
                    five-=1
                    ten+=1
                else:
                    return False
            else:
                if ten>=1 and five>=1:
                    ten-=1
                    five-=1
                elif ten<1 and five>=3:
                    five-=3
                else:
                    return False
        return 1
        
       
        
    

        