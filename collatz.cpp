/*
 * Patrik Kudláček, Záhada padajících čísel. Matematický objev, ze
 * kterého běhá mráz po zádech. Medium, Seznam.cz, 2026
 *
 *
 * Německý matematik Lothar Collatz přišel s touto myšlenkou v roce 1937.
 *
 * Vyberte jakékoliv celé kladné číslo.
 *
 * 1. Pokud je  číslo sudé, vydělte ho dvěma.
 * 2. Pokud je číslo liché, vynásobte ho třemi a přičtětě jedničku.
 *
 * Tento postup opakujte s každým novým výsledkem.
 *
 * Jakmile se dostanete na jedničku, cyklus se dostane do nekonečné
 * smyčky: 1 je lichá (3*1 +1 = 4), 4 je sudá (2), a zase 1. Konec hry.
 */

#include <iostream>
#include <string>

using std::cout;
using std::endl;

int main(int argc, char* argv[])
{
  long N = 27;
  if (argc == 2)
    {
      N = std::stoi( argv[1] );
    }

  do
    {
      cout << N << " ";

      if (N%2 == 0) N /= 2;
      else          N = N*3 + 1;

    } while ( N != 1 );

  cout << N << endl;
}
