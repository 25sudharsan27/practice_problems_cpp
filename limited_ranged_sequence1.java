class limited_ranged_sequence1{
    public static void main(String[] args){
        int n=4;
        int val;
        int s=1;
        while (s<4*2)
        {
            int sam=0;
            val=s;

            while(sam<5){
                if(val>n*2){
                    val=1;
                }
                System.out.print(val+" ");
                val=val+2;
                sam++;
            }
            System.out.println("\n");
            s=s+2;
        }
    }
}
