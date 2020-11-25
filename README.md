# Islanders

# Matériel Arduino
  - Carte Arduino UNO
  - Tag RFID : https://www.gotronic.fr/art-tag-rfid-t5577-3919-0-27738.htm
  - Lecteur RFID : https://www.gotronic.fr/art-module-lecteur-rfid-125-khz-113990042-21511.htm
  - Afficheur OLED : https://www.gotronic.fr/art-module-oled-i2c-gravity-dfr0486-26805.htm
  - Anneau 24 Leds : https://www.gotronic.fr/art-anneau-neopixel-24-leds-rgb-ada1586-22877.htm#complte_desc

# Schéma Connexion

# Initialisation

Assurez-vous que votre carte Arduino UNO soit connectée via le COM/Port 7. Ouvrez dans votre IDE Arduino le fichier Ecran.ino et changez les NumTag par les votres. Téléversez le code Controleur_Unity.ino sur votre Arduino UNO.
Gardez votre carte Arduino branchée.
Ouvrez votre projet Unity, modifiez le script Arduino.cs en ajoutant vos numéros de tag rfid (les mêmes que ceux modifiés juste avant).
Lancez votre scène unity et testez le projet.

# Explication

Dans votre code Arduino le plus important est la fonction loop qui cherche à scanner un tag RFID et Serial.println qui affiche le résultat en retournant à la ligne à chaque fois (pour unity). Le reste du code est pour faire fonctionner l'écran et l'anneau de led (juste de la décoration).
Ensuite dans unity on a un GameObject qui va afficher les prefabs des personnages en fonction des données qu'il reçoit via l'ouverture du SerialPort sur lequel la carte Arduino est connectée. Puis la lecture des données renvoyées via ce SerialPort. Si la donnée reçue correspond au Tag préenregistré alors on fait quelque chose, ici on affiche un prefabs. 
