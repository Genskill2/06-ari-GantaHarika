string ari(string s) {
int score,chr=0,word=0,sent=0,i=0;
float Score,Chr,Word,Sent;
while(s[i]!='\0') {
if(isalnum(s[i]))
chr++;
if(s[i]==' ')
word++;
if((s[i]=='.' && (s[i+1]==' ' || s[i+1]=='\0')) || s[i]=='?' || s[i]=='!') 
sent++;
i++;
}
Chr = (float) chr;
Word = (float) word;
Sent = (float) sent;
Score = 4.71*(Chr/Word) + 0.5*(Word/Sent) -21.43;
score = (int) Score + 1;
if(score==1)
return "Kindergarten";
else if(score==2)
return "First/Second Grade";
else if(score==3)
return "Third Grade";
else if(score==4)
return "Fourth Grade";
else if(score==5)
return "Fifth Grade";
else if(score==6)
return "Sixth Grade";
else if(score=7)
return "Seventh Grade";
else if(score==8)
return "Eighth Grade";
else if(score==9)
return "Ninth Grade";
else if(score==10)
return "Tenth Grade";
else if(score==11)
return "Eleventh Grade";
else if(score==12)
return "Twelfth Grade";
else if(score==13)
return "College student";
else
return "Professor";
}
