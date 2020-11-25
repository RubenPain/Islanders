String MSG[] = {"KalashCrimi","ScieLesGuibolles","Percevil"};
unsigned long NumTag[] = {7930080, 6860806, 9732625}; 
bool index = false;
int MsgIndex;

void afficheTextes()
{
  display.setTextSize( 1 );
  display.setTextColor( WHITE );
  display.clearDisplay();

  for(int i = 0; i < 3; i++){   
    if(Tag == NumTag[i]){
      MsgIndex = i;
      index = true;
      }
    
  if(index == false)
  {
    display.setCursor( display.width()/4, 2 );
    display.println( "PRESENTEZ" );
    display.setCursor( display.width()/4, 16 );
    display.println( "une figurine" );
  }
  else if (index == true)
  {
   display.setCursor(5, 10);
   display.println( MSG[MsgIndex]); 
  }
  
  if (Tag == 0){
    index = false;
    }
  }

  cadreEcran();
  display.display();
}

void cadreEcran()
{
  display.drawRect( 0, 0, display.width()-0.5, display.height()-0.5, WHITE );
}
