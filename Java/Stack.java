class Stack {

	int a[] = new int[100];
  int top;

  Stack(){
    top = -1;
  }

	boolean isEmpty(){
		return (top < 0);
	}

	void push(int x){
		if (top >= (99)) {
			System.out.println("Stack Overflow");

		} else {
			   a[++top] = x;
			   System.out.println(x + " pushed into stack");
		}
	}

	int pop() {
		if (top < 0) {
			System.out.println("Stack Underflow");
			return 0;
		}
		else {
			int x = a[top--];
			return x;
		}
	}

	int peek(){
		if (top < 0) {
			System.out.println("Stack Underflow");
			return 0;
		}
		else {
			int x = a[top];
			return x;
		}
	}

	void print(){
	   for(int i = top;i>-1;i--){
	      System.out.print(" "+ a[i]);
	   }
  }

  public static void main(String []args){
     Stack st = new Stack();
     st.push(10);
     st.push(20);
     st.push(30);
     System.out.println(st.pop() + " Popped from stack");
     System.out.println("Top element is :" + st.peek());
     System.out.print("Elements present in stack :");
     st.print();
  }
}
