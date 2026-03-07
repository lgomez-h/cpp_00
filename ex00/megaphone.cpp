/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgomez-h <lgomez-h@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/30 12:52:33 by lgomez-h          #+#    #+#             */
/*   Updated: 2025/03/30 12:52:54 by lgomez-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

int main(int argc, char **argv)
{
    if (argc == 1) // No hay argumentos, solo el nombre del programa
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return 0;
    }
    else
    {
        int i = 1;
        while (i < argc) // Recorre los argumentos
        {
            int j = 0; // Reiniciar j para cada argumento
            while (argv[i][j] != '\0') // Recorre cada carácter del argumento
            {
                std::cout << (char)toupper(argv[i][j]);
                j++;
            }
            if (i < argc - 1) // Evita un espacio extra al final
                std::cout << " ";
            i++;
        }
        std::cout << std::endl; // Salto de línea final
        return 0;
    }
}




























































