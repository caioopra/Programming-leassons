using System;

namespace Course
{
    class Program
    {
        static void Main(string[] args)
        {
            sbyte x = 100;
            Console.WriteLine(x);

            byte n1 = 126;
            int n2 = 1000;
            Console.WriteLine(n1);
            Console.WriteLine(n2);

            long long1 = 1231231L;
            Console.WriteLine(long1);

            bool valor = false;
            char gen = 'F';
            char letra = '\u0041';
            Console.WriteLine(valor);
            Console.WriteLine(gen);
            Console.WriteLine(letra);

            float n3 = 4.5f;
            double n4 = 4.5;
            Console.WriteLine(n3);
            Console.WriteLine(n4);

            string nome = "Caio";
            Console.WriteLine(nome);

            object teste = "Teste object";
            Console.WriteLine(teste);

            // testes de min e max
            int maxInt = int.MaxValue;
            float minFloat = float.MinValue;

            Console.WriteLine(maxInt);
            Console.WriteLine(minFloat);

        }
    }
}