# Islanders

https://youtu.be/5ReYzrDueLk

# Matériel Arduino
  - Carte Arduino UNO
  - Tag RFID : https://www.gotronic.fr/art-tag-rfid-t5577-3919-0-27738.htm
  - Lecteur RFID : https://www.gotronic.fr/art-module-lecteur-rfid-125-khz-113990042-21511.htm
  - Afficheur OLED : https://www.gotronic.fr/art-module-oled-i2c-gravity-dfr0486-26805.htm
  - Anneau 24 Leds : https://www.gotronic.fr/art-anneau-neopixel-24-leds-rgb-ada1586-22877.htm#complte_desc

# Schéma Connexion

En cours de rédaction...

# Initialisation

Assurez-vous que votre carte Arduino UNO soit connectée via le COM/Port <strong>7</strong>. Ouvrez dans votre IDE Arduino le fichier Ecran.ino et remplacez les NumTag par les votres. Téléversez le code Controleur_Unity.ino sur votre Arduino UNO.<br>
Gardez votre carte Arduino branchée.<br>
Ouvrez votre projet Unity, modifiez le script Arduino.cs en ajoutant vos numéros de tag rfid (les mêmes que ceux modifiés juste avant).<br>
Lancez votre scène unity et testez le projet.<br>

# Explication

Dans votre code Arduino le plus important est la fonction loop qui cherche à scanner un tag RFID et Serial.println qui affiche le résultat en retournant à la ligne à chaque fois (pour unity). Le reste du code est pour faire fonctionner l'écran et l'anneau de led (juste de la décoration).<br><br>
Ensuite dans unity on a un GameObject qui va afficher les prefabs des personnages en fonction des données qu'il reçoit via l'ouverture du SerialPort sur lequel la carte Arduino est connectée. Puis la lecture des données renvoyées via ce SerialPort. Si la donnée reçue correspond au Tag préenregistré alors on fait quelque chose, ici on affiche un prefabs. 

# Images 
<img src="https://github.com/RubenPain/Islanders/blob/master/IMG/P1000130.JPG" >
<img src="https://github.com/RubenPain/Islanders/blob/master/IMG/P1000131.JPG" >
<img src="https://github.com/RubenPain/Islanders/blob/master/IMG/P1000132.JPG" >
<img src="https://github.com/RubenPain/Islanders/blob/master/IMG/P1000133.JPG" >
<img src="https://github.com/RubenPain/Islanders/blob/master/IMG/P1000134.JPG" >
<img src="https://github.com/RubenPain/Islanders/blob/master/IMG/P1000135.JPG" >
<img src="https://github.com/RubenPain/Islanders/blob/master/IMG/P1000136.JPG" >
<img src="https://github.com/RubenPain/Islanders/blob/master/IMG/P1000137.JPG" >
<img src="https://github.com/RubenPain/Islanders/blob/master/IMG/P1000138.JPG" >
<img src="https://github.com/RubenPain/Islanders/blob/master/IMG/P1000140.JPG" >
