void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*pointer;
	size_t			i;

	i = 0;
	pointer = (unsigned char *)s;
	while (i < n)
	{
		*(pointer + i++) = (unsigned char)c;
	}
	return (s);
}

/*
Riceve tre argomenti:
void *s: un puntatore a una zona di memoria da inizializzare.
int c: il valore con cui inizializzare i byte (deve essere convertito in unsigned char).
size_t n: il numero di byte da inizializzare a partire dall'indirizzo puntato da s.
All'interno della funzione, vengono dichiarate due variabili: pointer, un puntatore a unsigned char, 
e i, una variabile di tipo size_t.

Un ciclo while itera da 0 fino a n - 1. 
Durante ogni iterazione, il valore c viene convertito in unsigned char 
e quindi assegnato all'indirizzo puntato da pointer + i. 
Questo comporta l'inizializzazione dei byte nella zona di memoria con il valore c.

Alla fine del ciclo, la funzione restituisce il puntatore originale s,
che punta alla zona di memoria inizializzata
*/