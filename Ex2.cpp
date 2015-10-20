int main() {
  Person one
  Person two("Smythecraft"); 
  Person three("Dimwiddy", "Sam"); 
  one.Show();
  cout << endl;
  one.FormalShow();
  // etc. for two and three
  two.Show();
  two.FormalShow();
  
  cout << endl;
  three.Show();
  three.FormalShow();
  cout << endl;

  return 0;
}