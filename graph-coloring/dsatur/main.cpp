/* 
Implémentation de l'algorithme DSATUR pour colorsation de graphes.

tiré de https://fr.wikipedia.org/wiki/DSATUR
À haut niveau:

1. Ordonner les sommets par ordre décroissant de degrés.
2. Colorer un sommet de degré maximum avec la couleur 1.
3. Choisir un sommet avec DSAT maximum. En cas d'égalité, choisir un sommet de degré maximal.
4. Colorer ce sommet avec la plus petite couleur possible.
5. Si tous les sommets sont colorés alors stop. Sinon aller en 3.

Calcul de DSAT
        DSAT(v)= nombre de couleurs différentes dans les sommets adjacents à v.

 */

