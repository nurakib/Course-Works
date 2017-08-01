package labexam;

public class Invoice {
	//Instance Variables
	String part_name;
	String part_des;
	int quantity;
	double price;
	
	//Constructor 
	Invoice(String name, String description, int quant, double value){
		part_name = name;
		part_des = description;
		quantity = quant;
		price = value;
	}
	
	//Set Methods
	void setName(String name){
		part_name = name;
	}
	void setDescription(String description){
		part_des = description;
	}
	void setQuantity(int quant){
		quantity = quant;
		if(quant < 0)
			quantity = 0;
	}
	void setPrice(double value){
		price = value;
		if(value < 0)
			price = 0.0;
	}
	
	//Get Methods
	String getName(){
		return part_name;
	}
	String getDescription(){
		return part_des;
	}
	int getQuantity(){
		return quantity;
	}
	double getPrice(){
		return price;
	}
	
	//Get Invoice Amount
	double getInvoiceAmount(){
		return quantity * price;
	}
}
