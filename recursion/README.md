# Recursion
Learning how to solve problems by making functions call themselves.
* Base cases vs. recursive steps.
* Computing factorials, exponents, and string lengths recursively.

# Recursion Project

Utilisation de l'analogie avec le film Inception.
La récursivité est le fait d'entrer dans un rêve, puis un autre, puis un autre...
jusqu'à une certaine condition. Une fois la condition atteinte, on se réveille d'étage en étage.
Selon la position de l'instruction, on effectue cette dernière soit : 

## à l'endormissement 

```
		_putchar(*s);
    _print_rev_recursion(s + 1);

    on va imprimer du premier caractère jusqu'au dernier 
```

## au réveil

```
	_print_rev_recursion(s + 1);
	_putchar(*s);

    on va imprimer du dernier caractère jusqu'au premier
````


### À l'endormissement (Pré-récursion) : L'action est exécutée immédiatement, puis on passe le relais au niveau suivant. C'est un comportement de type file (le premier arrivé est le premier servi).

Ordre : 1, 2, 3, 4...

### Au réveil (Post-récursion) : L'action est mise en attente. Le programme doit attendre que le niveau suivant soit totalement terminé pour pouvoir exécuter sa propre instruction. C'est un comportement de type pile (LIFO : le dernier arrivé est le premier servi).

Ordre : ...4, 3, 2, 1.
