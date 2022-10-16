<h1>L2 Computer Science & Mathematics</h1>
<h2>Algorithmique avancée et programmation C++</h2>
<h3>Exercice: Expressions-equilibrees</h3>
Exemple: ch = ({}[]()){[]}
De façon "intuitive", ces chaînes correspondent aux parenthéses, accolades, crochets que l'on pourrait extraire d'un code C++.

Une chaîne sera dite équilibrée si à une accolade (parenthèse, crochet) ouvrante correspond une fermante, et que "l'imbrication" de ces ouvertures / fermetures est "correcte".

Plus formellement, partant du principe que la chaîne vide est équilibrée, on dira qu'une chaine "ch" de 𝑛≥2 caractères (n pair) est équilibrée si et seulement si  :

pour tout caractère ouvrant "(" (resp. "{", "[") de ch, on peut trouver un caractère fermant ")" (resp. "}", "]") tel que "ch" contienne une sous-chaîne elle-même équilibrée délimitée par ces deux caractères. 𝑐ℎ=...(𝑐ℎ∗).... 
 (resp. 𝑐ℎ=...{𝑐ℎ∗}....,     𝑐ℎ=...[𝑐ℎ∗].....


(inversement) pour tout caractère fermant ")" (resp. "}", "]") de ch, on peut trouver un caractère ouvrant "(" (resp. "{", "[") tel que "ch" contienne une sous-chaîne elle-même équilibrée délimitée par ces deux caractères.
Exemple (suite). 

Soit ch = ({}[]()){[]}
1	2	3	4	5	6	7	8	9	10	11	12
(	{	}	[	]	(	)	)	{	[	]	}
Pour répèrer les caractères, on peut les numéroter comme dans le tableau ci-dessus.

Au premier caractère (paranthèse ouvrante) correspond le caractère numéro 8 pour lequel ch contient la sous-chaîne :

(𝑐ℎ∗).....

avec 𝑐ℎ∗={}[]() équilibré car :

au caractère ouvrant "{" correspond le caractère fermant "}"  tel que 𝑐ℎ∗ contient la sous-chaine {𝑐ℎ′}.  𝑐ℎ′ est équilibrée puisque c'est la chaîne vide.
de même, au caractère ouvrant "[" correspond le caractère fermant "]"  tel que 𝑐ℎ∗ contient la sous-chaîne [𝑐ℎ′] avec 𝑐ℎ′ équilibrée puisque c'est la chaîne vide.
etc.
◻

On se propose d'écrire un algorithme qui, étant donné une chaîne de caractères de ce type, permet de vérifier si elle est équilibrée ou non. Ce type d'algorithme peut par exemple être utilisé par un compilateur pour indiquer si les accolades, paranthèses, crochets de votre code s'ouvrent et se ferment correctement, et signaler si nécessaire l'erreur de compilation.

Les chaînes de caractères seront lues dans un fichier les contenant.

Pour tester vos méthodes, le bouton "run" utilise les deux fichiers suivants :

entree1.txt

({}[]())(]]

entree2.txt

({[]})[]{}{(())}

Attention le bouton "evaluate" en utilise d'autres.

Il vous est fourni un fichier entête contenant une classe où cet algorithme devra être codé. Seules les structures données dans cette classe doivent être utilisées. Le fichier .h ne doit pas être modifié. Il n'y a ici qu'une seule méthode à coder. Elle utilise une pile représentée par la classe STL "stack<>". 
