char p [20];
char * s = “string“;
int length = strlen (s);
for (i = 0 ;i< length; i++)
p[i] = s[length - i];
printf(“%s“,p);
