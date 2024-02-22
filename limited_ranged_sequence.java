class limited_ranged_sequence{
    public static void main(String[] args) {
       int n=5;
       int val=1;
       for(int i=0;i<n;i++){
           for(int j=1;j<=i;j++){
               if(val>8){
                   val=1;
               }
               System.out.print(val+" ");
               val=val+2;
           }
           System.out.println("\n");
       }
    }
}