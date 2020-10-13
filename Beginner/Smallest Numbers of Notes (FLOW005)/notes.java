import java.util.*;


class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner scan = new Scanner (System.in);
		if(scan.hasNext()){
		    int t = scan.nextInt();
		    int arr[] = new int[]{1,2,5,10,50,100};
		    for(int i=0; i<t; i++){
		        int num = scan.nextInt();
		        int count=0;
		        while(num>0){
		            for(int j=5; j>=0; j--){
		                if(num-arr[j]>=0){
		                    num = num-arr[j];
		                    count++;
		                    break;
		                }
		            }
		        }
		        System.out.println(count);
		    }
        }
        scan.close();
	}
}