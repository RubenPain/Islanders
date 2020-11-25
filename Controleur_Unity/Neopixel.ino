/* Définition des couleurs */
int RED[] = {255, 0, 0}; // Couleur Rouge
int GREEN[] = {0, 255, 0}; // Couleur Verte

void allumer(int colors1, int colors2, int colors3)
{
  pixels.clear(); // Set all pixel colors to 'off'
  // The first NeoPixel in a strand is #0, second is 1, all the way up
  // to the count of pixels minus one.
  for(int i=0; i<NUMPIXELS; i++) { // For each pixel...

    // pixels.Color() takes RGB values
    pixels.setPixelColor(i, pixels.Color(colors1, colors2, colors3));  
  }
  // Send the updated pixel colors to the hardware.
  pixels.show(); 
  
}

void FigurineOrNot()
{
  //Allume le feu
  if(Tag!= 0){
    allumer(GREEN[0], GREEN[1], GREEN[2]);
    }
  else{
    allumer(RED[0], RED[1], RED[2]);
    }
}
