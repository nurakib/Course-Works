package labexam;

public class InvoiceTest {
	public static void main(String[] args){
		Invoice ob1 = new Invoice("27", "Blueberry", 3, 1.9);
		System.out.println(ob1.getName() + "\t" + ob1.getDescription() + "\t" +
				ob1.getQuantity() + "\t" + ob1.getPrice() + "\t" + ob1.getInvoiceAmount());
	}
}
