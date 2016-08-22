class MyRunnableThread implements Runnable{
 
    public static int myCount = 0;

    public int threadNum = 99 ;
    public int threadWait = 100 ;

    public MyRunnableThread(){
    }

    public MyRunnableThread(int n ){
       threadNum = n ;
    }

    public MyRunnableThread(int n, int w ){
       threadNum = n ;
       threadWait = w ;
    }

    public void run() {
        while(MyRunnableThread.myCount <= 10){
            try{
                System.out.println("Expl Thread " + threadNum + ": " + (++MyRunnableThread.myCount));
                Thread.sleep(threadWait);
            } catch (InterruptedException iex) {
                System.out.println("Exception in thread: "+iex.getMessage());
            }
        }
    }
}

public class RunMyThread {
    public static void main(String a[]){
        System.out.println("Starting Main Thread...");
        MyRunnableThread mrt = new MyRunnableThread();
        MyRunnableThread mrt1 = new MyRunnableThread(22);
        MyRunnableThread mrt2 = new MyRunnableThread(11, 10);

        Thread t = new Thread(mrt);
        Thread t1 = new Thread(mrt1);
        Thread t2 = new Thread(mrt2);

        t.start();
        t1.start();
        t2.start();

        while(MyRunnableThread.myCount <= 10){
            try{
                System.out.println("Main Thread: 0 "+(++MyRunnableThread.myCount));
                Thread.sleep(200);
            } catch (InterruptedException iex){
                System.out.println("Exception in main thread: "+iex.getMessage());
            }
        }
        System.out.println("End of Main Thread...");
    }
}
