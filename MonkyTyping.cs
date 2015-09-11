using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace MonkyTyping
{
    class Program
    {
        public static readonly char[] all_chars = new char[] {'a','b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j',
            'k','l','m','n', 'o','p', 'q', 'r','s', 't', 'u', 'v', 'w', 'x' , 'y', 'z'};

        public static readonly String match = "match";

        static void Main(string[] args)
        {
            DateTime startTime = DateTime.Now;
            
            int count = Typing();
            Console.WriteLine("GOT MATCHED! When " + count.ToString() + " words generated." );

            DateTime stopTime = DateTime.Now;
            Console.WriteLine(stopTime - startTime);
            Console.ReadLine();
        }

        private static int Typing()
        {
            Random rd = new Random();
            for (int i = 0; true ; i++)
            {
                System.Text.StringBuilder word = new System.Text.StringBuilder(match.Length);
                for (int j = 0; j < match.Length; j++)
                {
                    word.Append(all_chars[rd.Next(all_chars.Length)]);
                }
                //Console.WriteLine(word.ToString());
                if (match == word.ToString())
                    return i;
            }
        }
    }
}
