#include <time.h>
#include <stdlib.h>


int main()
{
        clock_t start_time = clock();
        int count = typing();
        printf ("GOT MATCHED! When %d words generated.\n", count);
        printf ("%f\n", (float)(clock() - start_time) / CLOCKS_PER_SEC);
}

int typing()
{
        char *all_chars = "abcdefghijklmnopqrstuvwxyz";
        char *match = "match";
        int match_length = getlen(match);

        srand((unsigned)clock());
        int i;
        for (i = 0; ; i++)
        {
                int j;
                char word[match_length];

                for (j=0; j < match_length; j++)
                {
                        int rand_int = rand() % match_length;
                        word[j]=match[rand_int];
                }
                //print_str(word);
                if (strcmp(word, match))
                {
                        return i;
                }
        }
}

int getlen(char *a){
    int i=0;
    while(a[i]!='\0'){
        i++;
    }
    return i;
}

int print_str(char *a)
{
        int i = 0;
        while (a[i] != '\0')
        {
                printf("%c", a[i]);
                i++;
        }
        printf ("\n");
        return 0;
}
int strcmp(char *a, char *b)
{
        int i;
        if (getlen(a) != getlen(b))
                return 0;
        for (i=0; i < getlen(a); i++)
        {
                if (a[i] != b[i])
                        return 0;
        }
        return 1;

