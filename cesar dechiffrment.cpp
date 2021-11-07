#include<stdio.h>
#include <stdlib.h>
#include <string.h>
#define M 3000
int main()
{
    int tab[26],i=0;
    int s,rang;
    int j, total=0;
    int t,key;
    int occ;
    char lettre[]={"abcdefghijklmnopqrstuvwxyz"};
    int longuerm;
    char code[M] = "Hena qj ykza lnklna ja oanw owjo zkqpa fwiweo amqerwhajp w hena Ha Oaecjaqn zao wjjawqt. Hw iapwldkna heppanwena j’aj naopa lwo ikejo ejpanaoowjpa. Ykiia qj nkiwj, qj ykza lnklna zkep yhwenaiajp ikjpnan hao pajoekjo zwjo ha lnkxhaia w naokqzna. Eh zkep hao iajan w haqn lwnktuoia, lkqn mq’ajbej ha haypaqn oa zeoa \"Ad kqe, arezaiiajp !\" aj wnnerwjp w hw nalkjoa arezajpa wqt mqaopekjo";
	char dechif[M];
    char letter_f;
    for(s=0;s<26;s++)
    {
        tab[s]=0;
    }
    
    

  
    
   for(j=0;j<26;j++){
    i=0;
       while(code[i]!='\0')
       {
            if(code[i]==lettre[j])
            {
                tab[j]++;
            }
           
           
           i++;
       }
    
   }
   i=0;
   while(code[i]!='\0')
       {
    if( code[i]!=' '){
			total++;
			}
		    i++;
       }
   for(t=0;t<26;t++){
   	printf("%d \t",tab[t]);
   }
   	s=1;
   for(t=0;t<26;t++)
   {
	
		if(tab[t]>=s)
		{
			s=tab[t];
			letter_f = t;
		}
		
   }
   
    
   
printf("\n La lettre la plus frequente est: %c; s = : %d\n ", (letter_f + 97), s);

printf("\n totale %d \n",total);
//
//occ=s/total;
//
//int tocc = s/total;
//printf("\n occ trial : %f \n",tocc);
//
//
//printf("\n occ : %f \n",occ);
//occ=occ*100;
//printf("\n occ : %f \n",occ);

 key = 26-abs(letter_f -4)%26;
 
	printf("\n Key = : %d\n",key);
	 i=0;
       
	   while(code[i]!='\0')
       {
       		if((code[i]>='a')&&(code[i]<='z')){
       			rang=(code[i] - key);
       			if(rang < 'a') rang += 26;
       			else if (rang > 'z') rang -= 26;
       			dechif[i]=  rang;	
			}else if((code[i]>='A')&&(code[i]<='Z')){
       			rang=(code[i] - key);
       			if(rang < 'A') rang += 26;
       			else if (rang > 'Z') rang -= 26;
       			dechif[i]=  rang;	
			}else dechif[i]=code[i];
			i++;
       }
       dechif[i]='\0';
       puts(dechif);
	
return 0;
}




//"Hena qj ykza lnklna ja oanw owjo zkqpa fwiweo amqerwhajp w hena Ha Oaecjaqn zao wjjawqt. Hw iapwldkna heppanwena j’aj naopa lwo ikejo ejpanaoowjpa. Ykiia qj nkiwj, qj ykza lnklna zkep yhwenaiajp ikjpnan hao pajoekjo zwjo ha lnkxhaia w naokqzna. Eh zkep hao iajan w haqn lwnktuoia, lkqn mq’ajbej ha haypaqn oa zeoa \"Ad kqe, arezaiiajp !\" aj wnnerwjp w hw nalkjoa arezajpa wqt mqaopekjo"
