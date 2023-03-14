class Solution {

/**
 * @param Integer $x
 * @return Boolean
 */
function isPalindrome($x) {
     $num_array = str_split($x);
     $j=count($num_array) -1 ;
    for($i =0; $i<count($num_array);++$i){
        if($num_array[$i]!=$num_array[$j]){
            return 0;
        }
        $j=$j-1;
    }return 1;
    
}
}