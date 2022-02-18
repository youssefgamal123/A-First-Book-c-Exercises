// Implementation section

Cicle::Circle (int x,int y , double r )
{
  xcenter = x;
  ycenter = y;
  radius = r;

}

void Circle::setCircle(int x,int y , double r )
{

xcenter  = x;
ycenter = y;
radius = r;

}

void Circle::showCircle(){
  cout << "Xcenter" << xcenter<< " Ycenter = "<<ycenter <<" Radius =  "<<radius <<endl; 
}
