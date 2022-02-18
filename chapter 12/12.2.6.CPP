int main()
{
  Coin *anewCoin;  // declare a pointer to a Coin object
  int i, howMany;

  cout << “Enter the number of flips: “;
  cin >> howMany;
  srand(time(NULL));
  for(i = 1; i <= howMany; i++)
  {
    anewCoin = new Coin; // create a new Coin object
    anewCoin->flip();    // flip the coin
    delete anewCoin;     // delete the object
  }
  Coin::percentages();   // call the static member method
  return 0;
}
