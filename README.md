# Algorytm B - Binarna wersja algorytmu Euklidesa

## Opis zadania

Algorytm ten stosuje operacje, które są łatwe do przeprowadzenia w systemie binarnym komputera, co sprawia, że jego wykonanie jest bardzo szybkie. Celem jest zaimplementowanie algorytmu z użyciem wyłącznie podstawowych instrukcji takich jak:

- Dzielenie przez dwa (dla liczb parzystych),
- Odejmowanie,
- Sprawdzanie parzystości liczby,
- Potęgowanie liczby 2.

## Działanie algorytmu

Danymi wejściowymi algorytmu są liczby `u` i `v` (obie typu całkowitego). Do obliczeń wykorzystywane są również zmienne pomocnicze `t` i `k`. Algorytm działa według poniższego opisu:

### Kroki algorytmu:

1. Inicjalizuj zmienną pomocniczą `k` wartością 0.
2. Powtarzaj operacje:
   - Zwiększaj `k` o 1,
   - Dzielenie `u` i `v` przez 2, jeśli są parzyste,
   - Proces powtarzaj, aż przynajmniej jedna z liczb przestanie być parzysta.
3. Jeśli `u` jest nieparzyste, przypisz `t = -v`, w przeciwnym razie `t = u`.
4. Podziel `t` przez 2 (gdyż `t` jest parzyste i różne od zera).
5. Jeśli `t` nadal jest parzyste, wróć do kroku 3.
6. Jeśli `t > 0`, przypisz `u = t`, w przeciwnym razie `v = -t`.
7. Oblicz `t = u - v`. Jeśli `t ≠ 0`, wróć do kroku 3. W przeciwnym razie algorytm kończy działanie, a wynik to wspólny dzielnik.

> Uwaga: `t ≠ 0` oznacza, że wartość `t` nie może być zerem.
