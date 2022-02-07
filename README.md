#include<stdio.h>
  int main (){
  	float nulc[4],nust[4],moy,sommeLc=0,nupo,somme=0;;
  	 
  	int i,n,o,j;
  	
    i=0;
    o=0;n=0;j=0;
    // module des langues
  		printf("langue arabe");
  		scanf ("%f",&nulc[i]);
		nulc[i]=nulc[i]*10;
  		i++;
  		printf("langue francaise");
  		scanf ("%f",&nulc[i]);
		  nulc[i]=nulc[i]*10;
  		
  		i++;
  			printf("langue anglaise");
  		scanf ("%f",&nulc[i]);
		nulc[i]=nulc[i]*10;
  		i++;
  		printf("TEC");
  		scanf ("%f",&nulc[i]);
		nulc[i]=nulc[i]*10;
  		i++;
  	// calcule du somme
  		for(i=0;i<4;i++){
  			somme=somme+nulc[i];
		  }
  		//sommeLc=sommeLc/40;
  		
  	// module du conception merise	
  		printf("merise");
  		scanf ("%f",&nupo);
  		somme=somme+(nupo*50);
  		i=0;
  	// module du devloppement	
  		printf("Dev d.app");
  		scanf ("%f",&nust[i]);
		nust[i]=nust[i]*50;
  		i++;
  		printf("math");
  		scanf ("%f",&nust[i]);
		nust[i]=nust[i]*15;
  		i++;
  	// module d'architect
  		printf("arch de si");
  		scanf ("%f",&nust[i]);
		nust[i]=nust[i]*35;
  		i++;
  		printf("eeje");
  		scanf ("%f",&nust[i]);
		nust[i]=nust[i]*10;
  		for(i=0;i<4;i++){
  			somme=somme + nust[i];
		  }
	     //sommest=sommest/40;
	     
	     moy=somme/200;
	     printf("\n\t\t\t\t\t Total : %f\n",somme);
	     printf("  \t\t\t\t\t Moyenne semestre : %f\n",moy);
	     system("PAUSE");
  }
  
  
  
