#include <stdio.h>
#define IN 1  /* inside a word */
#define OUT 0 /* outside a word */

int main() {
  int c, nl, nw, nc, state;
  state = OUT;
  nl = nw = nc = 0;

  while ((c = getchar()) != EOF) {
    ++nc;
    if (c == '\n')
      ++nl;
    state = OUT;
    if (c == ' ' || c == '\n' || c == '\t')
      state = OUT;
    else if (state == OUT) {
      state = IN;
      ++nw;
    }
  }

  printf("\n------------------------------------\n");
  printf("Thank you for providing input.\n");
  printf("Here are the results:\n");
  printf("------------------------------------\n");
  printf("Number of Lines: %d\nNumber of Words: %d\nNumber of Characters: %d\n",
         nl, nw, nc);

  return 0;
}

// Output:

/*
Text:
------------------------------------
Lorem ipsum dolor sit amet, consectetur adipiscing elit. Donec eu commodo
lectus, vitae ullamcorper felis. Nam luctus velit mattis nisl condimentum, in
porta neque malesuada. Curabitur ac euismod odio. Nunc inter dum tortor sit amet
urna porta malesuada. Nam ut feugiat elit, eu elementum nulla. Aliquam erat
volutpat. Nullam sagittis ante sed ipsum sodales cursus. Nam in enim vel tellus
euismod bibendum. Curabitur quis mi tempus, convallis nibh ac, semper mauris.
Nam lobortis enim eget neque bibendum, sed interdum nunc sollici tudin. Aliquam
at mauris eu massa laoreet cursus. Mauris ullamcorper auctor lacus.

Pellentesque sodales imperdiet massa, at eleifend ante. Praesent tincidunt dolor
nibh, ac ultricies arcu h endrerit sed. Duis consectetur luctus metus, nec
ultrices massa. Nullam odio libero, sollicitudin vel nibh et, volutpat tempus
leo. Duis eget leo nunc. Nullam at neque diam. Vivamus porttitor ullamcorper
massa, q uis tristique nulla scelerisque id. Nullam quis dictum massa. Cras in
maximus odio. Vestibulum placerat ef ficitur ligula, eu laoreet lorem pulvinar
id. Nullam consectetur cursus magna, ac vehicula nibh sodales si t amet. Nullam
quis leo vitae purus dignissim scelerisque. Fusce rutrum mi ut tellus aliquet
condimentum. Nunc felis ex, imperdiet ac enim in, dignissim commodo mauris. Sed
ut suscipit ante.

Nulla et bibendum ante, a vehicula ex. Phasellus nec tellus a justo rhoncus
auctor. Aenean elit felis, con dimentum quis lacinia ac, vestibulum non felis.
Proin at lorem id sapien eleifend dictum et a felis. Nulla et tempus dui. Donec
quis fermentum augue. Curabitur volutpat tincidunt est, at pulvinar arcu
pharetra lo bortis. Nunc lobortis quis velit et consectetur. Praesent
pellentesque ex id feugiat imperdiet. Fusce ulla mcorper placerat nunc eget
rhoncus. Proin nec euismod nulla.

Etiam non metus tortor. Proin eget mauris ac arcu condimentum porta vitae ut
leo. Morbi laoreet pellentesq ue urna, eu volutpat erat. Duis ultrices tempor
magna a suscipit. Proin finibus convallis tellus. Nam veli t lacus, porttitor
non lectus malesuada, faucibus fringilla felis. Mauris nibh ex, aliquet sit amet
tincid unt vitae, posuere et mi. Nulla urna augue, facilisis a semper id,
feugiat in nulla. Aenean malesuada lobo rtis dolor vel venenatis. Nam congue
massa vitae quam tincidunt, nec aliquet dui elementum. Donec vitae nu lla a
augue luctus pulvinar posuere a lacus. Pellentesque consectetur luctus felis a
fringilla. Suspendiss e sed fringilla eros. Pellentesque hendrerit congue turpis
id ultricies.

Praesent nibh nibh, commodo vitae consequat eget, posuere non lacus. Integer
fermentum nunc risus, at sagi ttis diam finibus non. Vestibulum ante ipsum
primis in faucibus orci luctus et ultrices posuere cubilia cu rae; Praesent
volutpat dictum magna sit amet tempor. Fusce dictum turpis leo, vitae sodales
magna venenati s a. Duis urna dui, malesuada in nibh ac, consequat auctor erat.
Pellentesque ut tempor erat. In id metus nec velit efficitur vulputate sit amet
at quam. Cras tristique dolor non lacinia dignissim. Sed sit amet n isi eu dui
ornare sollicitudin ac eu sem. Mauris aliquam convallis porttitor. Phasellus
eget turpis diam. Lorem ipsum dolor sit amet, consectetur adipiscing elit.
Curabitur consectetur quis tellus accumsan tempus . Donec nec rutrum ipsum.
Output:
------------------------------------
Thank you for providing input.
Here are the results:
------------------------------------
Number of Lines: 10
Number of Words: 489
Number of Characters: 3302
*/
