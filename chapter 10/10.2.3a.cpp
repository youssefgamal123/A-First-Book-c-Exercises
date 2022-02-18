Time::Time(int h, int m, int s){
	hour = h;
	minute = m;
	seconds = s;
}

void Time::getdata(int  s,int m ,int h){
  secs = s;
  minutes = m;
  hours = h;
}

void Time::showdata(){
  cout << secs << " "<< minutes <<" " << hours << endl;
}
