using System;
using System.Globalization;

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

            // parte da aula 23
            int n1 = int.Parse(Console.ReadLine());
            char ch = char.Parse(Console.ReadLine()); 
            double n2 = double.Parse(Console.ReadLine(), CultureInfo.InvariantCulture);

            string[] vet = Console.ReadLine().split(' ');
            string nome = vet[0];
            char sexo = char.Parse(vet[1]);
            int idade = int.Parse(vet[2]);
            double altura = double.Parse(vet[3], CultureInfo.InvariantCulture);
            console.WriteLine($"{nome} {sexo} {idade} {altura}");
        }
    }
}