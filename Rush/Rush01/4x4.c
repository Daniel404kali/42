/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   4x4.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: descamil <descamil@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 15:55:45 by descamil          #+#    #+#             */
/*   Updated: 2023/06/10 15:57:45 by descamil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void imprimirMatriz(int matriz[4][4]) 
{
    int archivo = 1;

    for (int i = 0; i < 4; i++) 
	{
        for (int j = 0; j < 4; j++) 
		{
            char elemento_str[16];
            int bytes_escritos = snprintf(elemento_str, sizeof(elemento_str), "%d ", matriz[i][j]);
            write(archivo, elemento_str, bytes_escritos);
        }

        write(archivo, "\n", 1);
    }
}

int main(int argc, char *argv[]) 
{
    if (argc != 17) 
	{
        write(2, "Error: Se esperan 16 valores para la matriz.\n", 45);
        return 1;
    }

    int matriz[4][4];
    int contador = 1;

    for (int i = 0; i < 4; i++) 
	{
        for (int j = 0; j < 4; j++) 
		{
            matriz[i][j] = atoi(argv[contador]);
            contador++;
        }
    }

    imprimirMatriz(matriz);

    return 0;
}
