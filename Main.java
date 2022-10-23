public class Main {
    public static void main(String[] args) {
        /*System.out.println(getImie());
        System.out.println(getWiek());
        System.out.println(Obliczenia(5,7));
        System.out.println(Parzysta(43)); */

    }

    public static String getImie() {
        return "Jan";
    }


    public static int getWiek() {
        return 45;
    }

    public static int Obliczenia(double a, double b) {
        System.out.println("Suma: "+a+" + "+b+" = "+(a+b));
        System.out.println("Różnica: "+a+" - "+b+" = "+(a-b));
        System.out.println("Iloczyn: "+a+" + "+b+" = "+(a*b));
        return 0;
    }

    public static boolean Parzysta(int a) {
        if(a%2==0) return true;
        return false;
    }

    public static int getInt() { return new Scanner(System.in).nextInt();}

    public static void Zadanie1(){
        int lPkt, suma=0, ile=0;
        System.out.println("Podaj liczbe studentow w grupie");
        int n= getInt();
        if (n>0){
            while(n>0){
            System.out.println("Podaj liczbe pkt 0-40 ");
            lPkt=getInt();
            if(lPkt>= 0 && lPkt<= 40){
                suma+=lPkt;
                n--;
                ile++;
            }continue;
        } //koniec while
        System.out.println("Suma: "+suma);
        System.out.printf("Średnia: "+(double)(suma/ile)); // rzutowanie zmiennej
    }
    else System.out.println("W grupie musi byc co najmniej 1 osoba");
    }

    public static void Zadanie2(){
        if (int i =0, i <10, i++);

    }



}






