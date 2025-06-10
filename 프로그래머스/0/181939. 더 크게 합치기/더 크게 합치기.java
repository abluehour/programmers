class Solution {
    public int solution(int a, int b) {
        String stra = Integer.toString(a);
        String strb = Integer.toString(b);
    
        String strab=stra+strb;
        String strba=strb+stra;
    
        int intab = Integer.parseInt(strab);
        int intba = Integer.parseInt(strba);
        
        if(intab>intba){
             return intab;
        }
        else return intba;
       
    }
}