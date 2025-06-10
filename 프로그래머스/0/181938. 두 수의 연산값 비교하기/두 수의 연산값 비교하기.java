class Solution {
    public int solution(int a, int b) {
        String strkey = "" + a + b;
        int intkey1 = Integer.parseInt(strkey);
        int intkey2 = 2*a*b;
        
        if(intkey1>=intkey2){
            return intkey1;
        }
        else {
            return intkey2;
        }
    }
}
