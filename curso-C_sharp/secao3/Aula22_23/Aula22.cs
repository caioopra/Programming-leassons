using System;
namespace Aula22_23
{
    class Aula22
    {
        static void Main(string[] args)
        {
            string frase = Console.ReadLine();
            System.Console.WriteLine(frase);

            string s = Console.ReadLine();
            string[] vet = s.Split(' ');
            System.Console.WriteLine(vet[0] + vet[1] + vet[2]);
        }
    }
}