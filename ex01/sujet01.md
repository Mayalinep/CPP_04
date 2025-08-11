Exercice : 01
Je ne veux pas brûler le monde
Dossier de rendu : ex01/
Fichiers à rendre : Fichiers de l’exercice précédent + *.cpp, *.{h, hpp}
Fonctions interdites : Aucune


Les constructeurs et les destructeurs de chaque classe doivent afficher des messages qui leur sont propres.

Implémentez une classe Brain (cerveau) contenant un tableau de 100 std::string appelé ideas (idées).

Ainsi, les classes Dog et Cat auront un attribut privé Brain*.

À la construction, les classes Dog et Cat créeront leur Brain avec new Brain();

À la destruction, les classes Dog et Cat devront delete leur Brain.
Dans votre fonction main, créez et remplissez un tableau d’objets Animal dont la moitié est composée d’objets Dog et l’autre moitié d’objets Cat. À la fin de l’exécution du programme, parcourez ce tableau afin de delete chaque Animal. 
Vous devez delete directement les chiens et les chats en tant qu’Animal. 
Les destructeurs correspondants doivent être appelés dans le bon ordre.

N’oubliez pas de vérifier que vous n’avez pas de fuites de mémoire.

La copie d’un objet Dog ou d’un objet Cat ne doit pas être superficielle. Par conséquent, vous devez vous assurer que vos copies sont bien des copies profondes.

```
int main()
{
const Animal* j = new Dog();
const Animal* i = new Cat();
delete j;//should not create a leak
delete i;
...
return 0;
}
```
Écrivez et rendez plus de tests que ceux donnés ci-dessus