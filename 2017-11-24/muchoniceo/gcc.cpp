#pragma once 
using namespace system: :drawing 

ref class Måltavla 
{
private:
  int x, y, radie;
  
public:
  Måltavla ( int x, int y, int r)
  {
    this->x = x;
    this->y = y;
    this->radie = r;
  }
  
  int HämtaX ( void ) { return x; }
  int HämtaY ( void ) { return y; }
  int HämtaRadie ( void ) { return radie; }
  void SättX ( int x ) { this->x = x; }
  void SättX ( int y ) { this->y = y; }
  void SättRadie( int r ) { if ( r<0 ) this->radie = -r; else this->radie = r; }
  
  void Rita ( Graphics^ g )
  {
    int r = radie;
    
    g->FillEllipse( gcnew SolidBrush( Color: :White ), x-r, y-r, r*2, r*2 );
    r = (int)( radie * 0.8);
    g->FillEllipse( gcnew SolidBrush( Color: :Black ), x-r, y-r, r*2, r*2 );
    r = (int)( radie * 0.6);
    g->FillEllipse( gcnew SolidBrush( Color: :Blue ), x-r, y-r, r*2, r*2 );
    r = (int)( radie * 0.4);
    g->FillEllipse( gcnew SolidBrush( Color: :Red ), x-r, y-r, r*2, r*2 );
    r = (int)( radie * 0.2);
    g->FillEllipse( gcnew SolidBrush( Color: :Yellow ), x-r, y-r, r*2, r*2 );
    
    g->DrawEllipse( gcnew Pen( Color: :Black, 2 ),
      x-radie, y-radie, radie*2, radie*2 );	    
    
    
  }