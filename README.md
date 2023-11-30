# Chiffrement Affine en C++

Ce programme C++ implémente le chiffrement affine, une méthode de chiffrement par substitution monoalphabétique. Le chiffrement affine utilise une fonction mathématique de la forme E(x) = (ax + b) mod m, où 'a' et 'b' sont des clés, et 'm' est la taille de l'alphabet.

## Fonctions Principales

### 1. Calcul du PGCD (Plus Grand Commun Diviseur)

La fonction `pgcd(a, b)` calcule le PGCD de deux nombres à l'aide de l'algorithme d'Euclide étendu. Cela est utilisé pour vérifier si 'a' et la taille de l'alphabet sont premiers entre eux.

### 2. Inverse Modulo

La fonction `inverseModulo(a, m)` calcule l'inverse multiplicatif de 'a' modulo 'm'. Ceci est nécessaire car 'a' doit être inversible modulo 'm' pour garantir un déchiffrement unique.

### 3. Chiffrement Affine

La fonction `chiffrementAffine(lettre, a, b)` prend une lettre et les clés 'a' et 'b', puis applique le chiffrement affine en utilisant la formule E(x) = (ax + b) mod 26 (pour un alphabet de taille 26). Les espaces et les caractères non alphabétiques restent inchangés.

### 4. Chiffrement Affine d'une Chaîne

La fonction `chiffrementAffineString(message, a, b)` chiffre une chaîne de caractères en appliquant le chiffrement affine à chaque lettre.

## Comment Utiliser

1. Exécutez le programme.
2. Entrez les valeurs de 'a' et 'b'.
3. Entrez le message à chiffrer (y compris les espaces).
4. Le programme affiche le message chiffré.

## Exigences

- C++11 ou version ultérieure.

## Remarques

Assurez-vous que la valeur de 'a' choisie a un PGCD de 1 avec 26 pour garantir le déchiffrement correct.

## Exemple d'Utilisation

```bash
Entrez la valeur de a (premier paramètre) : 3
Entrez la valeur de b (deuxième paramètre) : 5
Entrez le message à chiffrer (y compris les espaces) : Hello World
Message chiffré : Axeeh Phkew
