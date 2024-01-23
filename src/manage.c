#include "../inc/minishell.h"
#include <string.h>


void	manage(t_msh *data)
{
	char	*input;
	int		end;

	end = 0;
	while (1)
	{
		/* TODO: Leemos comandos y añadirlos al historial */
		input = readline("minishell> ");

		/* TODO: parseo */

		/* TODO: Mirar comillas y pedir mas data si hace falta */
		/* TODO: Expandir variables */
		input = expand(input, data);
		if (!input)
			return ; // malloc error
		printf("=> [%s]\n", input); /* Si se quita no compila porque no se usa en ningun otro lugar */
		/* TODO: paso intermedio */

		/* TODO: ejecutor */

		/* TODO: liberamos memoria */
		if (!strcmp("exit", input))
			end = 1;
		if (input)
			free(input);
		if (end)
			break ;
	}
}