/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yufonten <yufonten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 11:39:43 by yufonten          #+#    #+#             */
/*   Updated: 2025/02/06 11:39:43 by yufonten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

bool    bsp(Point const a, Point const b, Point const c, Point const point);

void    run_test(Point a, Point b, Point c, Point p, bool expected, std::string test) {
    bool result = bsp(a, b, c, p);
    std::cout << test << " -> ";
    if (expected == result) {
        std::cout << "✅ Passou\n";
    } else {
        std::cout << "❌ Falhou (Esperado: " << expected << ", Obtido: " << result << ")\n";
    }
}

int main(void) {

    Point a(0.0f, 0.0f);
    Point b(5.0f, 0.0f);
    Point c(2.5f, 5.0f);

    // 🟢 Caso 1: Ponto dentro do triângulo
    run_test(a, b, c, Point(2.5f, 2.0f), true, "Caso 1 - Ponto dentro");

    // 🔴 Caso 2: Ponto fora do triângulo
    run_test(a, b, c, Point(5.0f, 5.0f), false, "Caso 2 - Ponto fora");

    // 🔷 Caso 3: Ponto sobre a aresta do triângulo
    run_test(a, b, c, Point(2.5f, 0.0f), false, "Caso 3 - Ponto na borda");

    // 🔺 Caso 4: Ponto exatamente em um dos vértices
    run_test(a, b, c, Point(0.0f, 0.0f), false, "Caso 4 - Ponto no vértice");

    // ⚡ Caso 5: Ponto muito próximo da aresta, dentro
    run_test(a, b, c, Point(2.5f, 0.01f), true, "Caso 5 - Ponto próximo da borda, dentro");

    // 🌐 Caso 6: Dois vértices iguais (não forma um triângulo)
    run_test(Point(0.0f, 0.0f), Point(0.0f, 0.0f), Point(5.5f, 5.5f), Point(2.5f, 0.3f), false, "Caso 6 - Dois vértices iguais");

    return 0;
}
