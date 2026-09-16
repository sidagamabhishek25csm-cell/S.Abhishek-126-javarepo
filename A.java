class A {
    int a = 10;   
    void m1() {
        float a = 21.3f;   
        System.out.println(a);      
        System.out.println(this.a); 
    }
	public static void main(String[] args) {
     A obj = new A();
     obj.m1();
    }
}