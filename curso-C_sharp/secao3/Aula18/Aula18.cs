using System;
using System.Globalization;

namespace Aula18 
{
    class Aula18
    {
        static void Main(string[] args)
        {
            Console.Write("Print Write");
            Console.WriteLine("Print WriteLine");
            System.Console.WriteLine("----------");

            string nome = "Caio";
            int idade = 18;
            double salario = 1234.5136;
            System.Console.WriteLine(nome);
            System.Console.WriteLine(idade);
            System.Console.WriteLine(salario);
            
            // controlar numero de casas decimais em double/float
            System.Console.WriteLine(salario.ToString("F2"));
            System.Console.WriteLine(salario.ToString("F3", CultureInfo.InvariantCulture));

            // Placeholders, concatenação e interpolação
            System.Console.WriteLine($"{nome} tem {idade} anos");

        }
    }

}