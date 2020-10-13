import java.util.*;


class Codechef {
	public static void main (String[] args) throws java.lang.Exception {
		Scanner scan = new Scanner(System.in);
		if(scan.hasNext()){
		    int t = scan.nextInt();
		    for(int i=0; i<t; i++){
		        char c=scan.next().charAt(0);
		        if(c=='B'||c=='b'){
		            System.out.println("BattleShip");
		        }
		        else if(c=='c'||c=='C'){
		            System.out.println("Cruiser");
		        }
		        else if(c=='d'||c=='D'){
		            System.out.println("Destroyer");
		        }
		        else if(c=='f'||c=='F'){
		            System.out.println("Frigate");
		        }
		    }
        }
        scan.close();
		
	}
}
