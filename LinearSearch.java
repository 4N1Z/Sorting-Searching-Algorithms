public class LinearSearch{
  public static void Linearsearch(int numbers[] , int key){
  for(int i=0; i< numbers.length; i++){
    if(numbers[i] == key){
      return i;
    }
  }
  return -1;
}
public static void main (String args[]){
  int numbers[]={2,4,6,8,10};
  int key = 8;
  int index=Linearsearch(numbers , key);
  if(index == -1){
    System.out.println("NOT FOUND");
  }else{
    System.out.println("KEY IS FOUND AT INDEX :" + index);
  }
}
  

                   
