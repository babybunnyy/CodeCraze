# vector manipulation 
getwd()
setwd("C:/Users/godde/OneDrive/Desktop/FADS/R_FADS")
getwd()
# 1 Créer x1 de trois manières différentes
x1 <- c(1,2,3,4,5)
x1 <- seq(1,5)
x1 <- seq_len(5)
# 2 Créer x2 
x2 <- c("R","FADS","FSJES")
x2
# 3 Créer x3 
x3 <- c(TRUE, FALSE, TRUE)
x3
# 4 Créer x4 
x4 <- c(1+1i,2+2i)
x4
# 5 Afficher le mode de chaque objet
class(x1)
class(x2)
class(x3)
class(x4)
# 6 Afficher la longueur de chaque objet
length(x1)
length(x2)
length(x3)
length(x4)
# 7 Extraire le premier élément
x1[1]
x1[length(x1)]
# 8 Extraire les trois premiers éléments
x1[1:3]
# 9 les stocker dans un vecteur a
a <- x1[1:3]
a
# 10 Extraire les éléments en position 1, 3, 5
a <- x1[c(1, 2, 3)]
a
a <- x1[c(1,3,5)]
a
# 11 les stocker dans b
b = x1[c(1,3,5)]
b
# 12 Additionner le nombre 10 au vecteur 
# multiplier le résultat par 2
(x1 + 10) * 2 
resultat <- (x1 + 10) * 2 
# 13 Effectuer l’addition de a et b 
a + b
# 14 Effectuer l’addition x1 + a 
a <- x1[1:5]
x1 + a
a + x1
# 15 Multiplier x1 par c
c <- 2 
x1 * c
# 16 Multiplier a et b 
b <- x1[1:5]
a * b
# 17 Multiplier x et a 
x1 * a
# 18 Calculer la somme des elements de x1 
sum(x1)
# 19 Remplacer le premier élément de x1 par un 4
x1[1] <- 4
x1
# 20 Lister les objets en mémoire dans la session R 
ls()
# 21 supprimer le vecteur 
rm(x1)
# 22 Supprimer la totalité des objets de la session 
rm(list = ls())