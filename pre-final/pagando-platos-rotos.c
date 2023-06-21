#include <stdio.h>


/* PROTOTIPOS */

/* DRIVER */
int
main()
{
  int costos[4][4], rotos[4][4],
      n = 0,c = 0,f = 0;

  char plato[2];
  int total=0, bc=0;
  for(int i=0;i<4;i++){
	for(int j=0;j<4;j++){
	      scanf("%d", &costos[i][j]);
	      rotos[i][j]=0;
	}
  }
  scanf("%d", &n);
  for(int i=0;i<n;i++){
	scanf("%s", plato);
  	switch(plato[0]){
		case 'A':
		  f=0;
		  break;
		case 'B':
		  f=1;
		  break;
		case 'C':
		  f=2;
		  break;
		case 'D':
		  f=3;
		  break;
	}
	c=(int)(plato[1]-'0')-1;
	rotos[f][c]=rotos[f][c]+1;
	total+=costos[f][c];
  }
  
  int m;
  for(int i=0;i<4;i++){
	m=1000;
	for(int j=0;j<4;j++){
	      m= m>rotos[i][j] ? rotos[i][j]:m;
	}
	bc+=m;
  }
  printf(" %d\n", total-bc*10);
}