
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <time.h>

const char *combo[100], *sub[100], *ordercombo[100], *subcombo[100], *order[100], *titleorder[100], *p[100], *pOrder[100];
int i=0, j=0, repeat=0, productQuantity[100], productQuantityCombo[100], valid_input=0, b[100], k=0, a=0, g=0, c=0, quantity, newQuantity, in, prI, search;
float total[100], totalCombo[100], fullTotal=0, cash;
char  decide[100], f[100], code[100], size[100]; 
int cheesy=0, jalapeno=0,caramel=0, cinnamon=0, plain =0 , greenTea=0, garlic=0, sour=0, cinnamonZ=0, eclairs=0 , lemonade=0, fruity=0, mocha=0, mineral=0;
int cinnamonSugar=0 ,eclairsS=0, regular=0 ,cheese=0, original=0, speciality=0, premium=0, pretzelStix=0, pretzelDog=0, cheeseS=0 , caramelD=0, chocEclairs=0;

void ranking(){
	system ("cls");
	printf("\n\t\tKiosk shutting done. \n\t\tReport for today is: ");
	printf("\n\nBest Premium Soft Pretzel:");
	printf("\n");
	
	printf("\n\nMenu Premium Soft Pretzel\n ");
	if(cheesy >= jalapeno && cheesy >= caramel && cheesy >= cinnamon && cheesy >= plain){
		printf("\n1. Cheesy Turkey");
		if(jalapeno >= caramel && jalapeno >=cinnamon && jalapeno >= plain){
			printf("\n2. Jalapeno Cheese");
			if(caramel >= cinnamon && caramel >= plain){
				printf("\n3. Caramel Almond");
				if(cinnamon >= plain){ 
					printf("\n4. Cinnamon \n5. Plain Raisin");
				}else if (plain >= cinnamon){
					printf("\n4. Plain Raisin \n5. Cinnamon");
				}
			}else if (cinnamon >= caramel && cinnamon >= plain){
				printf("\n3. Cinnamon");
				if(caramel >= plain){
					printf("\n4. Caramel Almond \n5. Plain Raisin");
				}else if (plain >= caramel){
					printf("\n4. Plain Raisin \n5. Caramel Almond");
				}
			}else if(plain >= caramel && plain >= cinnamon){
				printf("\n3. Plain Raisin");
				if(caramel >= cinnamon){
					printf("\n4. Caramel Almond \n5. Cinnamon");
				}else if (cinnamon >= caramel){
					printf("\n4. Cinnamon \n5. Caramel Almond");
				}
			}
		}else if(caramel >= jalapeno && caramel >= cinnamon && caramel >= plain){
			printf("\n2. Caramel Almond");
			if(jalapeno >= cinnamon && jalapeno >= plain){
				printf("\n3. Jalapeno Cheese");
				if(cinnamon >= plain){
					printf("\n4. Cinnamon \n5. Plain Raisin");
				}else if (plain >= cinnamon){
					printf("\n4. Plain Raisin \n5. Cinnamon");
				}
			}else if(cinnamon >= jalapeno && cinnamon >= plain){
				printf("\n3. Cinnamon");
				if(jalapeno >= plain){
					printf("\n4. Jalapeno Cheese \n5. Plain Raisin");
				}else if (plain >= jalapeno){
					printf("\n4. Plain Raisin \n5.Jalapeno");
				}
			}else if(plain >= jalapeno && plain >= cinnamon){
				printf("\n3. Plain Raisin");
				if(jalapeno >= cinnamon){
					printf("\n4. Jalapeno Cheese \n5. Cinnamon");
				}else if (cinnamon >= jalapeno){
					printf("\n4. Cinnamon \n5. Jalapeno Cheese");
				}
			}
		}else if (cinnamon >= jalapeno && cinnamon >= caramel && cinnamon >= plain){
			printf("\n2. Cinnamon");
			if(jalapeno >= caramel && jalapeno >= plain){
				printf("\n3. Jalapeno Cheese");
				if(caramel >= plain){
					printf("\n4. Caramel Almond \n5. Plain Raisin");
				}else if (plain >= caramel){
					printf("\n4. Plain Raisin \n5. Caramel Almond");
				}
			}else if (caramel >= jalapeno && caramel >= plain){
				printf("\n3. Caramel Almond");
				if(jalapeno >= plain){
					printf("\n4. Jalapeno Cheese \n5. Plain Raisin");
				}else if (plain >= jalapeno){
					printf("\n4. Plain Raisin \n5. Cheese");
				}
			}else if (plain >= jalapeno && plain >= caramel){
				printf("\n3. Plain Raisin");
				if(jalapeno >= caramel){
					printf("\n4. Jalapeno Cheese \n5. Caramel Almond");
				}else if (caramel >= jalapeno){
					printf("\n4. Caramel Almond \n5. Jalapeno Cheese");
				}
			}
		}else if(plain >= jalapeno && plain >= caramel && plain >= cinnamon)
		{
			printf("\2. Plain Raisin");
			if(jalapeno >= caramel && jalapeno >= cinnamon){
				printf("\n3. Jalapeno Cheese");
				if(caramel >= cinnamon){
					printf("\n4. Caramel Almond \n5. Cinnamon");
				}else if (cinnamon >= caramel){
					printf("\n4. Cinnamon \n5. Caramel Almond");
				}
			}else if(caramel >= jalapeno && caramel >= cinnamon){
				printf("\n3. Caramel Almond");
				if(jalapeno >= cinnamon ){
					printf("\n4. Jalapeno Cheese \n5. Cinnamon");
				}else if (cinnamon >= jalapeno){
					printf("\n4. Cinnamon \n5. Jalapeno Cheese");
				}
			}
		}
	}else if (jalapeno >= cheesy && jalapeno >= caramel && jalapeno >= cinnamon && jalapeno >= plain){
		printf("\n1. Jalapeno Cheese");
		if(cheesy >= caramel && cheesy >= cinnamon && cheesy >= plain){
			printf("\n2. Cheesy Turkey");
			if(caramel >= cinnamon && caramel >= plain){
				printf("\n3. Caramel Almond");
				if(cinnamon >= plain){
					printf("\n4. Cinnamon \n5. Plain Raisin");
				}else if(plain >= cinnamon){
					printf("\n4. Plain Raisin \n5. Cinnamon");
				}
			}else if(cinnamon >= caramel && cinnamon >= plain){
				printf("\n3. Cinnamon");
				if(caramel >= plain){
					printf("\n4. Caramel Almond \n5. Plain Raisin");
				}else if(plain >= caramel){
					printf("\n4. Plain Raisin \n5. Caramel Almond");
				}
			}else if(plain >= caramel && plain >= cinnamon){
				printf("\3. Plain Raisin");
				if(caramel >= cinnamon){
					printf("\n4. Caramel Almond \n5. cinnamon");
				}else if(cinnamon >= caramel){
					printf("\n4. Cinnamon \n5. Caramel Almond");
				}
			}
		}else if (caramel >= cheesy && caramel >= cinnamon && caramel >= plain){
			printf("\n2. Caramel Almond");
			if(cheesy >= cinnamon && cheesy >= plain){
				printf("\n3. Cheesy Turkey");
				if(cinnamon > plain){
					printf("\n4. Cinnamon \n5. Plain Raisin");
				}else if (plain >= cinnamon){
					printf("\n4. Plain Raisin \n5. Cinnamon");
				}
			}else if (cinnamon >= cheesy && cinnamon >= plain){
				printf("\n3. Cinnamon");
				if(cheesy >= plain){
					printf("\n4. Cheesy Turkey \n5. Plain Raisin");
				}else if (plain >= cheesy){
					printf("\n4. Plain Raisin \n5. Cheesy Turkey");
				}
			}else if (plain >= cheesy && plain >= cinnamon){
				printf("\n3. Plain Raisin");
				if(cheesy >= cinnamon){
					printf("\n4. Cheesy Turkey \n5. Cinnamon");
				}else if(cinnamon >= cheesy){
					printf("\n4. Cinnamon \n5. Cheesy Turkey");
				}
			}
			
		}else if (cinnamon >= cheesy && cinnamon >= caramel && cinnamon >= plain){
			printf("\n2. Cinnamon");
			if(cheesy >= caramel && cheesy >= plain){
				printf("\n3. Cheesy Turkey");
				if(caramel >= plain){
					printf("\n4. Caramel Almond \n5. Plain Raisin");
				}else if (plain >= caramel){
					printf("\n4. Plain Raisin \n5. Caramel Almond");
				}
			}else if(caramel >= cheesy && caramel >= plain){
				printf("\n3. Caramel Almond");
				if(cheesy >= plain){
					printf("\n4. Cheesy Bonanaza \n5. Plain Raisin");
				}else if (plain >= cheesy){
					printf("\n4. Plain Raisin \n5. Cheesy Turkey");
				}
			}else if (plain >= cheesy && plain >= caramel){
				printf("\n3. Plain Raisin");
				if(cheesy >= caramel){
					printf("\n4. Cheesy Turkey \n5. Caramel Almond");
				}else if (caramel >= cheesy){
					printf("\n4. Caramel Almond \n5. Cheesy Turkey");
				}
			}
			
		}else if (plain >= cheesy && plain >= caramel && plain >= cinnamon){
			printf("\n2. Plain Raisin");
			if(cheesy >= caramel && cheesy>=cinnamon){
				printf("\n3. Cheesy Turkey");
				if(caramel >= cinnamon){
					printf("\n4. Caramel Almond \n5. Cinnamon");
				}else if (cinnamon >= caramel){
					printf("\n4. Cinnamon \n5. Caramel Almond");
				}
			}else if (caramel >= cheesy && caramel >= cinnamon){
				printf("\n3. Caramel Almond");
				if(cheesy >= cinnamon){
					printf("\n4. Cheesy Turkey \n5. Cinnamon");
				}else if (cinnamon >= cheesy){
					printf("\n4. Cinnamon \n5. Cheesy Turkey");
				}
			}else if (cinnamon >= cheesy && cinnamon >= caramel){
				printf("\n3. Cinnamon");
				if(cheesy >= caramel){
					printf("\n4. Cheesy Turkey \n5. Caramel Almond");
				}else if (caramel >= cheesy){
					printf("\n4. Caramel Almond \n5. Cheesy Turkey");
				}
			}
		}
	}else if (caramel > cheesy && caramel > jalapeno && caramel > cinnamon && caramel > plain){
		printf("\n1. Caramel Almond");
		if(cheesy >= jalapeno && cheesy >= cinnamon && cheesy >= plain){
			printf("\n2. Cheesy Turkey");
			if(jalapeno >= cinnamon && jalapeno >= plain){
				printf("\n3. Jalapeno Cheese");
				if(cinnamon >= plain){
					printf("\n4. Cinnamon \n5. Plain Raisin");
				}else if (plain >= cinnamon){
					printf("\n4. Plain Raisin \n5. Cinnamon");
				}
			}else if (cinnamon >= jalapeno && cinnamon >= plain){
				printf("\n3. Cinnamon");
				if(jalapeno >= plain){
					printf("\n4. Jalapeno \n5. Plain Raisin");
				}else if (plain >= jalapeno){
					printf("\n4. Plain Raisin \n5. Jalapeno");
				}
			}else if (plain >= jalapeno && plain >= cinnamon){
				printf("\n3. Plain Raisin");
				if(jalapeno >= cinnamon){
					printf("\n4. Jalapeno Cheese \n5. Cinnamon");
				}else if (cinnamon >= jalapeno){
					printf("\n4. Cinnamon \n5. Jalapeno Cheese");
				}
			}
		}else if (jalapeno >= cheesy && jalapeno >= cinnamon && jalapeno >= plain)
		{
			printf("\n2. Jalapeno Cheese");
			if(cheesy >= cinnamon && cheesy >= plain){
				printf("\n3. Cheesy Turkey");
				if(cinnamon >= plain){
					printf("\n4. Cinnamon \n5. Plain Raisin");
				}else if (plain >= cinnamon){
					printf("\n4. Plain Raisin \n5. Cinnamon");
				}
			}else if(cinnamon >= cheesy && cinnamon >= plain){
				printf("\n3. Cinnamon");
				if(cheesy >= plain){
					printf("\n4. Cheesy Turkey \n5. Plain Raisin");
				}else if(plain >= cheesy){
					printf("\n4. Plain Raisin \n5. Cheesy Turkey");
				}
			}else if (plain >= cheesy && plain >= cinnamon){
				printf("\3. Plain Raisin");
				if(cheesy >= cinnamon){
					printf("\n4. Cheesy Turkey \n5. Cinnamon");
				}else if (cinnamon >=cheesy){
					printf("\n4. Cinnamon \n5. Cheesy Turkey");
				}
			}
		}else if (cinnamon >= cheesy && cinnamon >= jalapeno && cinnamon >= plain){
			printf("\n2. Cinnamon");
			if(cheesy>=jalapeno && cheesy>= plain){
				printf("\n3. Cheesy Turkey");
				if(jalapeno >= plain){
					printf("\n4. Jalapeno Cheese \n5. Plain Raisin");
				}else if (plain >= jalapeno){
					printf("\n4. Plain Raisin \n5. Jalapeno Cheese");
				}
			}else if (jalapeno >= cheesy && jalapeno >= plain){
				printf("\n3. Jalapeno Cheese");
				if(cheesy >= plain){
					printf("\n4. Cheesy Turkey \n5. Plain Raisin");
				}else if (plain >= cheesy){
					printf("\n4. Plain Raisin \n5. Cheesy Turkey");
				}
			}else if (plain >= cheesy && plain >= jalapeno){
				printf("\n3. Plain Raisin");
				if(cheesy >= jalapeno){
					printf("\n4. Cheesy Turkey \n5. Jalapeno Cheese");
				}else if (jalapeno >= cheesy){
					printf("\n4. Jalapeno Cheese \n5. Cheesy Turkey");
				}
			}
		}else if(plain >= cheesy && plain >= cinnamon && plain >= jalapeno){
			printf("\n2. Plain Raisin");
			if(cheesy>= cinnamon && cheesy>= jalapeno){
				printf("\n3. Cheesy Turkey");
				if(cinnamon >= jalapeno){
					printf("\n4. Cinnamon \n5. Jalapeno Cheese");
				}else if (jalapeno >= cinnamon){
					printf("\n4. Jalapeno Cheese \n5. Cinnamon");
				}
			}else if (cinnamon >= cheesy && cinnamon >= jalapeno){
				printf("\3. Cinnamon");
				if(cheesy >= jalapeno){
					printf("\n4. Cheesy Turkey \n5. Jalapeno Cheese");
				}else if (jalapeno >= cheesy){
					printf("\n4. Jalapeno Cheese \n5. Cheesy Turkey");
				}
			}else if (jalapeno >= cheesy && jalapeno >= cinnamon){
				printf("\3. Jalapeno Cheese");
				if(cheesy >= cinnamon){
					printf("\n4. Cheesy Turkey \n5. Cinnamon");
				}else if(cinnamon >= cheesy){
					printf("\n4. Cinnamon \n5. Cheesy Turkey");
				}
			}
		}
		
	}else if (cinnamon > cheesy && cinnamon > jalapeno && cinnamon > caramel && cinnamon > plain){
		printf("\n1. Cinnamon");
		if(cheesy >= jalapeno && cheesy >= caramel && cheesy >= plain){
			printf("\n2. Cheesy Turkey");
			if(jalapeno >= caramel && jalapeno >= plain){
				printf("\n3. Jalapeno Cheese");
				if(caramel >= plain){
					printf("\n4. Caramel Almond \n5. Plain Raisin");
				}else if (plain >= caramel){
					printf("\n4. Plain Raisin \n5. Caramel Almond");
				}
			}else if (caramel >= jalapeno && caramel >= plain){
				printf("\n3. Caramel Almond");
				if(jalapeno >= plain){
					printf("\n4. Jalapeno Cheese \n5. Plain Raisin");
				}else if (plain >= jalapeno){
					printf("\n4. Plain Raisin \n5. Jalapeno Cheese");
				}
			}else if (plain >= jalapeno && plain >= caramel){
				printf("\n3. Plain Raisin");
				if(jalapeno >= caramel){
					printf("\n4. Jalapeno Cheese \n5. Caramel Almond");
				}else if (caramel >= jalapeno){
					printf("\n4. Caramel Almond \n5. Jalapeno Cheese");
				}
			}
			
		}else if (jalapeno >= cheesy && jalapeno >= caramel && jalapeno >= plain ){
			printf("\n2. Jalapeno Cheese");
			if(cheesy >= caramel && cheesy>= plain){
				printf("\n3. Cheesy Turkey");
				if(caramel >= plain){
					printf("\n4. Caramel Almond \n5. Plain Raisin");
				}else if (plain >= caramel){
					printf("\n4. Plain Raisin \n5. Caramel Almond");
				}
			}else if (caramel >= cheesy && caramel >= plain){
				printf("\n3. Caramel Almond");
				if(cheesy >= plain){
					printf("\n4. Cheesy Turkey \n5. Plain Raisin");
				}else if (plain >= cheesy){
					printf("\n4. Plain Raisin \n5. Cheesy Turkey");
				}
			}else if (plain >= cheesy & plain >= caramel){
				printf("\n3.Plain Raisin");
				if(cheesy >= caramel){
					printf("\n4.cheesy Bonanaza \n5.Caramel Almond");
				}else if (caramel >= cheesy){
					printf("\n4.Caramel Almond \n5.Cheesy Turkey");
				}
			}
		}else if (caramel >= jalapeno && caramel >= cheesy && caramel >= plain){
			printf("\n2. Caramel Almond");
			if(jalapeno >= cheesy && jalapeno >= plain){
				printf("\n3. Jalapeno Cheese");
				if(cheesy >= plain){
					printf("\n4. Cheesy Turkey \n5. Plain Raisin");
				}else if (plain >= cheesy){
					printf("\n4. Plain Raisin \n5. Cheesy Turkey");
				}
			}else if (cheesy >= jalapeno && cheesy >= plain){
				printf("\3. Cheesy Turkey");
				if(jalapeno >= plain){
					printf("\n4. Jalapeno Cheese \n5. Plain Raisin");
				}else if (plain >= jalapeno){
					printf("\n4. Plain Raisin \n5. Jalapeno Cheese");
				}
			}else if (plain >= jalapeno && plain >= cheesy){
				printf("\n3. Plain Raisin");
				if(jalapeno >= cheesy ){
					printf("\n4. Jalapeno \n5. Cheesy Turkey");
				}else if(cheesy > jalapeno){
					printf("\n4.Cheesy Turkey \n5.jalapeno");
				}
			}
		}else if (plain >= cheesy && plain >= jalapeno && plain >= caramel){
			printf("\n2. Plain Raisin");
			if(cheesy >= jalapeno && cheesy >= caramel){
				printf("\n3. Cheesy Turkey");
				if(jalapeno >= caramel){
					printf("\n4. Jalapeno Cheese \n5. Caramel Almond");
				}else if (caramel >= jalapeno){
					printf("\n4. Caramel Almond \n5. Jalapeno Cheese");
				}
			}else if (jalapeno >= cheesy && jalapeno >= caramel){
				printf("\n3. Jalapeno Cheese");
				if(cheesy >= caramel){
					printf("\n4. Cheesy Turkey \n5. Caramel Almond");
				}else if (caramel >= cheesy ){
					printf("\n4. Caramel Almond \n5. Cheesy Turkey");
				}
			}else if (caramel >= cheesy && caramel >= jalapeno){
				printf("\n3. Caramel Almond ");
				if(cheesy >= caramel){
					printf("\n4. Cheesy Turkey \n5. Caramel Almond");
				}else if(caramel >= cheesy){
					printf("\n4. Caramel Almond \n5. Cheesy Turkey");
				}
			}
			
		}
	}else if (plain > cheesy && plain > jalapeno && plain > caramel && plain > cinnamon){
		printf("\n1. Plain Raisin");
		if(cheesy >= jalapeno && cheesy >= caramel && cheesy >= cinnamon){
			printf("\n2. Cheesy Turkey");
			if(jalapeno >= caramel && jalapeno >= cinnamon){
				printf("\n3. Jalapeno Chese");
				if(caramel >= cinnamon){
					printf("\n4. Caramel Almond \n5. Cinnamon");
				}else if (cinnamon >= caramel){
					printf("\n4. Cinnamon \n5. Caramel Almond");
				}
			}else if(caramel >= jalapeno && caramel >= cinnamon){
				printf("\n3. Caramel Almond");
				if(jalapeno >= cinnamon){
					printf("\n4. Jalapeno Cheese \n5. Cinnamon");
				}else if (cinnamon >= jalapeno){
					printf("\n4. Cinnamon \n5. Jalapeno Cheese");
				}
			}else if(cinnamon >= jalapeno && cinnamon >= caramel){
				printf("\n3. Cinnamon");
				if(jalapeno >= caramel){
					printf("\n4. Jalapeno Cheese \n5. Caramel Almond");
				}else if (caramel >= jalapeno){
					printf("\n4. Caramel Almond \n5. Jalapeno Cheese");
				} 
			}
		
		}else if (jalapeno >= cheesy && jalapeno >= caramel && jalapeno >= cinnamon){
			printf("\n2. Jalapeno Cheese");
			if(cheesy >= caramel && cheesy>=cinnamon){
				printf("\n3. Cheesy Turkey");
				if(caramel>= cinnamon){
					printf("\n4. Caramel Almond \n5. Cinnamon");
				}else if (cinnamon >= caramel){
					printf("\n4. Cinnamon \n5. Caramel Almond");
				}
			}else if (caramel >= cheesy && caramel >= cinnamon){
				printf("n3. Caramel Almond");
				if(cheesy >= cinnamon){
					printf("\n4. Cheesy Turkey \n5. Cinnamon");
				}else if (cinnamon >= cheesy){
					printf("\n4. Cinnamon \n5. Cheesy Turkey");
				}
			}else if (cinnamon >= cheesy && cinnamon >= caramel){
				printf("\n3. Cinnamon");
				if(cheesy >= caramel){
					printf("\n4. Cheesy Turkey \n5. Caramel Almond");
				}else if (caramel >= cheesy){
					printf("\n4. Caramel Almond \n5. Cheesy Turkey");
				}
			}
		}else if (caramel >= cheesy && caramel >= jalapeno && caramel >=cinnamon){
			printf("\n2. Caramel Almond");
			if(cheesy >= jalapeno && cheesy >= cinnamon){
				printf("\n3. Cheesy Turkey");
				if(jalapeno >= cinnamon){
					printf("\n4. Jalapeno Cheese \n5. Cinnamon");
				}else if (cinnamon > jalapeno){
					printf("\n4. Cinnamon \n5. Jalapeno Cheese");
				}
			}else if (jalapeno >= cheesy && jalapeno >= cinnamon){
				printf("\n3. Jalapeno Cheese ");
				if(cheesy >= cinnamon){
					printf("\n4. Cheesy Turkey \n5. Cinnamon");
				}else if (cinnamon >= cheesy){
					printf("\n4. Cinnamon \n5. Cheesy Turkey");
				}
			}else if (cinnamon >= cheesy & cinnamon >= jalapeno){
				printf("\n3. Cinnamon");
				if(cheesy >= jalapeno ){
					printf("\n4. Cheesy Turkey \n5. Jalapeno Cheese");
				}else if (jalapeno >=cheesy ){
					printf("\n4. Jalapeno Cheese \n5. Cheesy Turkey");
				}
			}
		}else if (cinnamon >= cheesy && cinnamon >= jalapeno && cinnamon >= caramel){
			printf("\n2. Cinnamon");
			if(cheesy >= jalapeno && cheesy >= caramel){
				printf("\n3. Cheesy Turkey");
				if(jalapeno >= caramel){
					printf("\n4. Jalapeno Cheese \n5. Caramel Almond");
				}else if (caramel >= jalapeno){
					printf("\n4. Caramel Almond \n5. Jalapeno Cheese");
				}
			}else if (jalapeno >= cheesy && jalapeno >= caramel){
				printf("\n3.Jalapeno Cheese ");
				if(cheesy >= caramel){
					printf("\n4.Cheesy Turkey \n5.Caramel Almond");
				}else if (caramel >= cheesy){
					printf("\n4.Caramel Almond \n5.Cheesy Turkey");
				}
			}else if (caramel >= cheesy && caramel >= jalapeno){
				printf("\n3.Caramel Almond");
				if(cheesy >= jalapeno){
					printf("\n4. Cheesy Turkey \n5. Jalapeno Cheese");
				}else if (jalapeno >= cheesy){
					printf("\n4. Jalapeno Cheese \n5. Cheesy Turkey");
				}
			}else if (jalapeno >= cheesy && jalapeno >= caramel){
				printf("\n3. Jalapeno Cheese");
				if(cheesy >= caramel){
					printf("\n4. Cheesy Turkey \n5. Caramel Almond");
				}else if (caramel >= cheesy){
					printf("\n4. Caramel Almond \n5. Cheesy Turkey");
				}
			}
		}
	}
	printf("\n\nMenu speciality \n ");
	if(greenTea >= garlic && greenTea >= sour && greenTea >= cinnamonZ && greenTea>= eclairs)
	{
		printf("\n1. Green Tea");

		if(garlic >= sour && garlic >= cinnamonZ && garlic >= eclairs){
			printf("\n2. Garlic ");
			if(sour >= cinnamonZ && sour >= eclairs){
			printf("\n3. Sour Cream");}
				 if (cinnamonZ >= eclairs){
				 	printf("\n4. Cinnamon Sugar");
				 	if (eclairs <= cinnamonZ)
				 		printf("\n5. Choc Eclairs");
				}
				 	else if (eclairs >= cinnamonZ){
				 	printf("\n4. Choc Eclairs");
				 	if (cinnamonZ<= eclairs)
					 printf("\n5. Cinnamon Sugar");
				 }
		 	 else if(cinnamonZ >= sour && cinnamonZ >= eclairs){
			  	printf("\n3. Cinnamon Sugar");
				  if (sour >= eclairs){
				  		printf("\n4. Sour Cream");	
						  if(eclairs <= sour)
						  		printf("\n5. Choc Eclairs"); 
				  }
				  else if(eclairs >= sour){
				  		printf("\n4. Choc Eclairs");
				  			if (sour <= eclairs)
				  				printf("\n5. Sour Cream");
				  }  
			  }
			  else if(eclairs>=cinnamonZ && eclairs>=sour){
			  		printf("\n3. Choc Eclairs"); 
			  		if (cinnamonZ >= sour){
			  			 printf("\n4. Cinnamon Sugar");
			  			 if (sour<=cinnamonZ)
			  			printf("\n5. Sour Cream");}
					else if(sour >= cinnamonZ){
						printf("\n4. Sour Cream");	
						if(cinnamonZ <= sour)
							 printf("\n5. Cinnamon Sugar");
					}			
			  }
	}	else if(sour>=garlic && sour>=eclairs && sour>=cinnamonZ)
		{
			printf("\n2. Sour Cream");
			if(garlic>=eclairs && garlic>=cinnamonZ){
				printf("\n3. Garlic ");
				if(cinnamonZ>=eclairs){
					printf("\n4. Cinnamon Sugar");
					if(eclairs<=cinnamonZ)
						printf("\n5. Choc Eclairs"); 
						}
						else if( eclairs>=cinnamonZ){
							printf("\n4. Choc Eclairs");
							if(cinnamonZ<=eclairs)
								printf("\n5. Cinnamon Sugar");
						}
				}
				else if(eclairs>=garlic && eclairs>=cinnamonZ){
					printf("\n3. Choc Eclairs");
					if(garlic>=cinnamonZ){
						printf("\n4. Garlic ");
						if(cinnamonZ<=garlic)
							printf("\n5. Cinnamon Sugar");
					}
					else if(cinnamonZ>=garlic){
						printf("\n4. Cinnamon Sugar");
						if(garlic<=cinnamonZ)
							printf("\n5. Garlic ");
					}
				}
				else if(cinnamonZ>=eclairs && cinnamonZ>=garlic){
					printf("\n3. Cinnamon Sugar");
					if(eclairs>=garlic){
						printf("\n4. Choc Eclairs");
						if(garlic<=eclairs)
							printf("\n5. Garlic ");	
					}
					else if(garlic>=eclairs){
						printf("\n4. Garlic ");	
						if(eclairs<=garlic)
							printf("\n5. Choc Eclairs");
					}
				}			
			}else if(eclairs>=cinnamonZ && eclairs>=sour && eclairs>=garlic){
				printf("\n2. Choc Eclairs");
				if(cinnamonZ>=sour && cinnamonZ>=garlic){
					printf("\n3. Cinnamon Sugar");
					if(sour>=garlic){
						printf("\n4. Sour Cream");
						if(garlic<=sour)
							printf("\n5. Garlic ");		
					}
					else if(garlic>=sour){
						printf("\n4. Garlic ");
						if(sour<=garlic)
							printf("\n5. Sour Cream");
					}
				}else if(sour>=cinnamonZ && sour>=garlic){
					printf("\n3. Sour Cream");
					if(cinnamonZ>=garlic){
						printf("\n4. Cinnamon Sugar");	
						if(garlic<=cinnamonZ)
							printf("\n5. Garlic ");	
					}
					else if(garlic>=cinnamonZ){
						printf("\n4. Garlic ");	
						if(cinnamonZ<=garlic)
							printf("\n5. Cinnamon Sugar");		
					}
				}	else if(garlic>=cinnamonZ && garlic>=sour){
					printf("\n3. Garlic ");	
					if(cinnamonZ>=sour){
						printf("\n4. Cinnamon Sugar");	
						if(sour<=cinnamonZ)
							printf("\n5. Sour Cream");
					}
					else if(sour>=cinnamonZ){
						printf("\n4. Sour Cream");
							if(cinnamonZ<=sour)
								printf("\n5. Cinnamon Sugar");		
					}
				}
			}else if(cinnamonZ>= eclairs && cinnamonZ>=garlic && cinnamonZ>=sour){
				printf("\n2. Cinnamon Sugar");	
				if(eclairs>=garlic && eclairs>=sour ){
					printf("\n3. Choc Eclairs");
						if(garlic>=sour){
							printf("\n4. Garlic ");
							if(sour>=garlic)
								printf("\n5. Sour Cream");
						}
						else if(sour>=garlic){
							printf("\n4. Sour Cream");
							if(garlic<= sour)
								printf("\n5. Garlic ");
						}
				}else if(garlic>=eclairs && garlic>=sour){
					printf("\n3. Garlic");
					if(eclairs>=sour){
						printf("\n4. Choc Eclairs");
						if(sour<=eclairs)
							printf("\n5. Sour Cream");
					}
					else if(sour>= eclairs){
						printf("\n4. Sour Cream");
						if(eclairs<=sour)
							printf("\n5. Choc Eclairs");
					}			
				}
				else if(sour>=eclairs && sour>= garlic){
					printf("\n3. Sour Cream");
					if(eclairs>=garlic){
						printf("\n4. Choc Eclairs");
						if(garlic>=eclairs)
							printf("\n5. Garlic ");	
					}
					else if(garlic>=eclairs){
						printf("\n4. Garlic ");	
						if(eclairs<=garlic)
							printf("\n5. Choc Eclairs");	
					}	
				}
			}
	}else if(garlic>=sour && garlic>=eclairs && garlic>=cinnamonZ && garlic>=greenTea){
			printf("\n1. Garlic ");
			if(sour>=eclairs && sour>=cinnamonZ && sour>=greenTea){
				printf("\n2. Sour Cream");
				if(eclairs>=cinnamonZ && eclairs>=greenTea){
					printf("\n3. Choc Eclairs");
					if(cinnamonZ>=greenTea){
						printf("\n4. Cinnamon Sugar");	
						if(greenTea<=cinnamonZ)
							printf("\n5. Green Tea");	
					}
					else if(greenTea>=cinnamonZ){
						printf("\n4. Green Tea");
						if(cinnamonZ<=greenTea)
							printf("\n5. Cinnamon Sugar");		
					}	
				}else if(cinnamonZ>=eclairs && cinnamonZ>=greenTea){
					printf("\n3. Cinnamon Sugar");	
					if(eclairs>=greenTea){
						printf("\n4. Choc Eclairs");
						if(greenTea<=eclairs)
							printf("\n5. Green Tea");	
					}
					else if(greenTea>=eclairs){
						printf("\n4. Green Tea");
						if(eclairs<=greenTea)
							printf("\n5. Choc Eclairs");	
					}		
				}else if(greenTea>=eclairs && greenTea>=cinnamonZ){
					printf("\n3. Green Tea");
					if(eclairs>=cinnamonZ){
						printf("\n4. Choc Eclairs");
						if(cinnamonZ<=eclairs)
							printf("\n5. Cinnamon Sugar");
					}
					else if(cinnamonZ>=eclairs){
						printf("\n4. Cinnamon Sugar");
						if(eclairs<=cinnamonZ)
							printf("\n5. Choc Eclairs");	
					}
				}	
			}
			else if(eclairs>=greenTea && eclairs>=cinnamonZ && eclairs>=sour)
			{
				printf("\n2. Choc Eclairs");
				if(greenTea>=cinnamonZ && greenTea>=sour){
					printf("\n3. Green Tea");
					if(cinnamonZ>=sour){
						printf("\n4. Cinnamon Sugar");
						if(sour<=cinnamonZ)
							printf("\n5. Sour Cream");		
					}
					else if(sour>=cinnamonZ){
						printf("\n4. Sour Cream");
						if(cinnamonZ>=sour)
							printf("\n5. Cinnamon Sugar");
					}
				}else if(cinnamonZ>=greenTea && cinnamonZ>=sour){
					printf("\n3. Cinnamon Sugar");
						if(greenTea>=sour){
							printf("\n4. Green Tea");
							if(sour<=greenTea)
								printf("\n5. Sour Cream");	
						}
						else if(sour>=greenTea){
							printf("\n4. Sour Cream");
							if(greenTea<=sour)
								printf("\n5. Green Tea");	
						}		
				}else if(sour>=cinnamonZ && sour>=greenTea){
					printf("\n3. Sour Cream");
					if(cinnamonZ>=greenTea){
						printf("\n4. Cinnamon Sugar");	
							if(greenTea<=cinnamonZ)
								printf("\n5. Green Tea");
					}
					else if(greenTea>=cinnamonZ){
						printf("\n4. Green Tea");
						if(cinnamonZ<=greenTea)
							printf("\n5. Cinnamon Sugar");	
					}		
				}
			}else if(cinnamonZ>=sour && cinnamonZ>=greenTea && cinnamonZ>=eclairs){
				printf("\n2. Cinnamon Sugar");
				if(sour>=greenTea && sour>=eclairs){
					printf("\n3. Sour Cream");
					if(greenTea>=eclairs){
						printf("\n4. Green Tea");
						if(eclairs<=greenTea)
							printf("\n5. Choc Eclairs");
					}
					else if(eclairs>=greenTea)
					{
						printf("\n4. Choc Eclairs");
						if(greenTea<=eclairs)
							printf("\n5. Green Tea");	
					}
				}else if(greenTea>=sour && greenTea>=eclairs){
					printf("\n3. Green Tea");
					if(sour>=eclairs){
						printf("\n4. Sour Cream");
						if(eclairs<=sour)
							printf("\n5. Choc Eclairs");
					}else if(eclairs>=sour){
						printf("\n4. Choc Eclairs");
						if(sour<=eclairs)
							printf("\n5. Sour Cream");
					}
				}else if(eclairs>=sour && eclairs>=greenTea){
					printf("\n3. Choc Eclairs");
					if(sour>=greenTea)
					{
						printf("\n4. Sour Creamy");
						if(greenTea<=sour)
							printf("\n5. Green Tea");
					}
					else if(greenTea>=sour)
					{
						printf("\n4. Green Tea");
						if(sour<=greenTea)
							printf("\n5. Sour Cream");
					}
				}
			}else if( greenTea>=eclairs && greenTea>=sour && greenTea>=cinnamonZ){
				printf("\n2. Green Tea");
				if(eclairs>=sour && eclairs>=cinnamonZ){
					printf("\n3. Choc Eclairs");
					if(sour>=cinnamonZ){
						printf("\n4. Sour Cream");
						if(cinnamonZ<=sour)
							printf("\n5. Cinnamon Sugar");
					}
					else if(cinnamonZ>=sour){
						printf("\n4. Cinnamon Sugar");
						if(sour<=cinnamonZ)
							printf("\n5. Sour Cream");	
					}
				}else if(sour>=eclairs && sour>=cinnamonZ){
					printf("\n3. Sour Cream");
					if(eclairs>=cinnamonZ){
						printf("\n4. Choc Eclairs");
						if(cinnamonZ<=eclairs)
							printf("\n5. Cinnamon Sugar");
					}
					else if(cinnamonZ>=eclairs){
						printf("\n4. Cinnamon Sugar");
						if(eclairs<=cinnamonZ)
							printf("\n5. Choc Eclairs");
					}
				}else if(cinnamonZ>=sour && cinnamonZ>=eclairs){
					printf("\n3. Cinnamon Sugar");
					if(sour>=eclairs){
						printf("\n4. Sour Creamy");
						if(eclairs<=sour)
							printf("\n5. Choc Eclairs");
					}
					else if(eclairs>=sour){
						printf("\n4. Choc Eclairs");
						if(sour<=eclairs)
							printf("\n5. Sour Cream");
					}
				}
					
			}
		}
		else if(eclairs>=cinnamonZ && eclairs>=greenTea && eclairs>=garlic && eclairs>=sour)
{
	printf("\n1. Choc Eclairs");
	if(cinnamonZ>=greenTea && cinnamonZ>=garlic && cinnamonZ>=sour)
	{
		printf("\n2. Cinnamon Sugar");
		if(greenTea>=garlic && greenTea>=sour)
		{
			printf("\n3. Green Tea");
			if(garlic>=sour)
				printf("\n4.  Garlic  \n 5. Sour Cream");
			else if(sour>=garlic)
				printf("\n4. Sour Cream \n5. Garlic ");
		}
		else if(garlic>=greenTea && garlic>=sour)
		{
			printf("\n3.  Garlic ");
				if(greenTea>=sour)
					printf("\n4. Green Tea \n5. Sour Cream ");
				else if(sour>=greenTea)
					printf("\n4. Sour Cream \n5. Green Tea");
		}
		else if(sour>=greenTea && sour>=garlic)
		{
			printf("\n3. Sour Cream");
			if(greenTea>=garlic)
				printf("\n4. Green Tea \n5. Garlic  ");
			else if(garlic>=greenTea)
				printf("\n4.  Garlic  \n5. Green Tea");
		}
	}
	else if(greenTea>=cinnamonZ && greenTea>=garlic && greenTea>=sour)
	{
		printf("\n2. Green Tea");
			if(cinnamonZ>=garlic && cinnamonZ>=sour)
			{
				printf("\n3. Cinnamon Sugar");	
				if(garlic>=sour)
					printf("\n4. Garlic  \n5. Sour Cream");
				else if(sour>=garlic)
					printf("\n5. Sour Cream \n 5. Garlic ");
			}
			else if (garlic>=cinnamonZ && garlic>=sour)
			{
				printf("\n3. Garlic  ");
				if(cinnamonZ>=sour)
					printf("\n4. Cinnamon Sugar \n5. Sour Cream");	
				else if(sour>=cinnamonZ)
					printf("\n4. Sour Cream \n 5. Cinnamon Sugar");
			}
			else if(sour>=garlic && sour>=cinnamonZ)
			{
				printf("\n3. Sour Cream");
				if(garlic>=cinnamonZ)
					printf("\n4. Garlic  \n5. Cinnamon Sugar");
				else if(cinnamonZ>=garlic)
					printf("\n4. Cinnamon Sugar \n5. Garlic ");		
			}			
	}
	else if(garlic>-greenTea && garlic>=cinnamonZ && garlic>=sour)
	{
		printf("\n2.  Garlic ");
		if(greenTea>=cinnamonZ && greenTea>=sour)
		{
			printf("\n3. Green Tea");
			if(cinnamonZ>=sour)
				printf("\n4. Cinnamon Sugar \n5. Sour Cream");
			else if(sour>=cinnamonZ)
				printf("\n4. Sour Cream \n5. Cinnamon Sugar");
		}
		else if(cinnamonZ>=greenTea && cinnamonZ>=sour)
		{
			printf("\n3. Cinnamon Sugar");
			if(greenTea>=sour)
				printf("\n4. Green Tea \n5. Sour Cream");
			else if(sour>=greenTea)
				printf("\n4. Sour Cream \n5. Green Tea");
		}
			
	}
	else if(sour>=greenTea && sour>=garlic && sour>=cinnamonZ)
	{
		printf("\n2.  Sour Cream");
		if(greenTea>=garlic && greenTea>=cinnamonZ)
		{
			printf("\n3. Green Tea ");
			if(garlic>=cinnamonZ)
				printf("\n4. Garlic  \n5. Cinnamon Sugar");	
			else if(cinnamonZ>=garlic)
				printf("\n4. Cinnamon Sugar \n5. Garlic  ");
		}
		else if(garlic>=greenTea && garlic>=cinnamonZ)
		{
			printf("\n3. Garlic ");
			if(greenTea>=cinnamonZ)
				printf("\n4. Green Tea \n5. Cinnamon Sugar");
			else if(cinnamonZ>=greenTea)
				printf("\n4. Cinnamon Sugar \n5. Green Tea");
		}
		else if(cinnamonZ>=greenTea && cinnamonZ>=garlic)
		{
			printf("\n3. Cinnamon Sugar");
			if(greenTea>=garlic)
				printf("\n4. Green Tea \n5. Garlic ");
			if(garlic>=greenTea)
				printf("\n4.  Garlic  \n5. Green Tea");
		}
		
	}
	
}
		
	printf("\n\nMenu beverages\n");
	if(lemonade>=fruity && lemonade>=mocha && lemonade>=mineral)
	{	printf("\n1. Lemonade fruit");
		if(fruity>=mocha && fruity>=mineral)
		{	printf("\n2. Dutch Ice=Fruity Flavour");
			if(mocha>=mineral)
				printf("\n3. Dutch Ice-Mocha \n4. Mineral Water");
			else if(mineral>=mocha)
				printf("\n3. Mineral Water \n4. Dutch Ice-Mocha");
		}
		else if(mocha>=fruity && mocha>=mineral)
		{	printf("\n2. Dutch Ice-Mocha");
			if(fruity>=mineral)
				printf("\n3. Dutch Ice=Fruity Flavour \n4. Mineral Water");
			else if(mineral>=fruity)
				printf("\n3. Mineral Water \n4. Dutch Ice=Fruity Flavourr");
		}
		else if(mineral>=fruity && mineral>=mocha)
		{	printf("\n2. Mineral water");
			if(fruity>=mocha)
				printf("\n3. Dutch Ice=Fruity Flavour \n4. Dutch Ice-Mocha");
			else if(mocha>=fruity)
				printf("\n3. Dutch Ice-Mocha \n4. Dutch Ice=Fruity Flavourr");
		}
	}
	else if(fruity>=lemonade && fruity>=mocha && fruity>=mineral)
	{	printf("\n1. Dutch Ice=Fruity Flavour");
		if(lemonade>=mocha && lemonade>=mineral)
		{	printf("\n2. Lemonade /Passion Fruit");
			if(mocha>=mineral)
				printf("\n3. Dutch Ice-Mocha \n4. Mineral Water");
			else if(mineral>=mocha)
				printf("\n3. Mineral Water \n4. Dutch Ice-Mocha");
		}
		else if(mocha>=lemonade && mocha>=mineral)
		{	printf("\n2. Dutch Ice-Mocha");
			if(lemonade>=mineral)
				printf("\n3. Lemonade /Passion Fruit \n4. Mineral Water");
			else if(mineral>=lemonade)
				printf("\n3. Mineral Water \n4. Lemonade /Passion Fruit");
		}
		else if(mineral>=lemonade && mineral>=mocha)
		{	printf("\n2. Mineral water");
			if(lemonade>=mocha)
				printf("\n3. Lemonade /Passion Fruit \n4. Dutch Ice-Mocha");
			else if(mocha>=lemonade)
				printf("\n3. Dutch Ice-Mocha \n4. Lemonade /Passion Fruit");
		}
	}
	else if(mocha>=lemonade && mocha>=fruity && mocha>=mineral)
	{	printf("\n1. Dutch Ice-Mocha");
		if(lemonade>=fruity && lemonade>=mineral)
		{	printf("\n2. Lemonade /Passion Fruit");
			if(fruity>=mineral)
				printf("\n3. Dutch Ice=Fruity Flavour \n4. Mineral Water");
			else if(mineral>=fruity)
				printf("\n3. Mineral Water \n4. Dutch Ice=Fruity Flavour");
		}
		else if(fruity>=lemonade && fruity>=mineral)
		{	printf("\n2. Dutch Ice=Fruity Flavour");
			if(lemonade>=mineral)
				printf("\n3. Lemonade /Passion Fruit \n4. Mineral Water");
			else if(mineral>=lemonade)
				printf("\n3. Mineral Water \n4. Lemonade /Passion Fruit");
		}
		else if(mineral>=fruity && mineral>=lemonade)
		{	printf("\n2. Mineral water");
			if(fruity>=lemonade)
				printf("\n3. Dutch Ice=Fruity Flavour \n4. Lemonade /Passion Fruit");
			else if(lemonade>=fruity)
				printf("\n3. Lemonade /Passion Fruit \n4. Dutch Ice=Fruity Flavour");
		}
	}
	else if(mineral>=lemonade && mineral>=fruity && mineral>=mocha)
	{	printf("\n1. Mineral Water");
		if(lemonade>=fruity && lemonade>=mocha)
		{	printf("\n2. Lemonade /Passion Fruit");
			if(fruity>=mocha)
				printf("\n3. Dutch Ice=Fruity Flavour \n4. Dutch Ice-Mocha");
			else if(mocha>=fruity)
				printf("\n3. Dutch Ice-Mocha \n4. Dutch Ice=Fruity Flavour");
		}
		else if(fruity>=lemonade && fruity>=mocha)
		{	printf("\n2. Dutch Ice=Fruity Flavour");
			if(lemonade>=mocha)
				printf("\n3. Lemonade /Passion Fruit \n4. Dutch Ice-Mocha");
			else if(mocha>=lemonade)
				printf("\n3. Dutch Ice-Mocha \n4. Lemonade /Passion Fruit");
		}
		else if(mocha>=fruity && mocha>=lemonade)
		{	printf("\n2. Dutch Ice-Mocha");
			if(fruity>=lemonade)
				printf("\n3. Dutch Ice=Fruity Flavour \n4. Lemonade /Passion Fruit");
			else if(lemonade>=fruity)
				printf("\n3. Lemonade /Passion Fruit \n4. Dutch Ice=Fruity Flavour");
		}
	}
		printf("\n\nMenu pretzel dog\n");
	
	if(regular>=cheese)
		printf("\n1. Jumbo Regular \n2. Jumbo Cheese");
	else if(cheese>=regular)
		printf("\n1. Jumbo Cheese \n2. Jumbo Regular");
		
		printf("\n\nMenu pretzel stix\n");
	
	if(cinnamonSugar>=eclairsS)
		printf("\n1. cinnamon Sugar \n2. Eclairs");
	else if(eclairsS>=cinnamonSugar)
		printf("\n1. Eclairs \n2. Cinnamon Sugar");
	
			printf("\n\nMenu set combo \n ");
	if(original >= speciality && original >= premium && original >= pretzelStix && original>= pretzelDog)
	{
		printf("\n1. Original");

		if(speciality >= premium && speciality >= pretzelStix && speciality >= pretzelDog)
		{
			printf("\n2. Speciality ");
			if(premium >= pretzelStix && premium >= pretzelDog)
			{
			printf("\n3. Premium");}
				 if (pretzelStix >= pretzelDog)
				 {
				 	printf("\n4. Pretzel Stix");
				 	if (pretzelDog <= pretzelStix)
				 		printf("\n5. Pretzel Dog");
				}
				 	
				 else if (pretzelDog >= pretzelStix)
				 {
				 	printf("\n4. Pretzel Dog");
				 	if (pretzelStix<= pretzelDog)
					 printf("\n5. Pretzel Stix");
				 }
		 	 else if(pretzelStix >= premium && pretzelStix >= pretzelDog)
			  {
			  	printf("\n3. Pretzel Stix");
				  if (premium >= pretzelDog)
				  {
				  		printf("\n4. Premium");	
						  if(pretzelDog <= premium)
						  		printf("\n5. Pretzel Dog"); 
				  }
				  else if(pretzelDog >= premium)
				  {
				  		printf("\n4. Pretzel Dog");
				  			if (premium <= pretzelDog)
				  				printf("\n5. Premium");
				  }  
			  }
			  else if(pretzelDog>=pretzelStix && pretzelDog>=premium)
			  {
			  		printf("\n3. Pretzel Dog"); 
			  		if (pretzelStix >= premium){
			  			 printf("\n4. Pretzel Stix");
			  			 if (premium<=pretzelStix)
			  			printf("\n5. Premium");}
					else if(premium >= pretzelStix)
					{
						printf("\n4. Premium");	
						if(pretzelStix <= premium)
							 printf("\n5. Pretzel Stix");
					}	
					
			  }
		
		}
			
			else if(premium>=speciality && premium>=pretzelDog && premium>=pretzelStix)
			{
				printf("\n2. Premium");
				if(speciality>=pretzelDog && speciality>=pretzelStix)
				{
					printf("\n3. speciality ");
						if(pretzelStix>=pretzelDog)
						{
							printf("\n4. Pretzel Stix");
							if(pretzelDog<=pretzelStix)
								printf("\n5. Pretzel Dog"); 
						}
						else if( pretzelDog>=pretzelStix)
						{
							printf("\n4. Pretzel Dog");
								if(pretzelStix<=pretzelDog)
									printf("\n5. Pretzel Stix");
						}
				}
				else if(pretzelDog>=speciality && pretzelDog>=pretzelStix)
				{
					printf("\n3. Pretzel Dog");
					if(speciality>=pretzelStix)
					{
						printf("\n4. Speciality ");
						if(pretzelStix<=speciality)
							printf("\n5. Pretzel Stix");
					}
					else if(pretzelStix>=speciality)
					{
						printf("\n4. Pretzel Stix");
						if(speciality<=pretzelStix)
							printf("\n5. Speciality ");
					}
				}
				else if(pretzelStix>=pretzelDog && pretzelStix>=speciality)
				{
					printf("\n3. Pretzel Stix");
					if(pretzelDog>=speciality)
					{
						printf("\n4. Pretzel Dog");
						if(speciality<=pretzelDog)
							printf("\n5. Speciality ");	
					}
					else if(speciality>=pretzelDog)
					{
						printf("\n4. Speciality ");	
						if(pretzelDog<=speciality)
							printf("\n5. Pretzel Dog");
					}
				}
						
			}
			else if(pretzelDog>=pretzelStix && pretzelDog>=premium && pretzelDog>=speciality)
			{
				printf("\n2. Pretzel Dog");
				if(pretzelStix>=premium && pretzelStix>=speciality)
				{
					printf("\n3. Pretzel Stix");
					if(premium>=speciality)
					{
						printf("\n4. Premium");
						if(speciality<=premium)
							printf("\n5. Speciality ");		
					}
					else if(speciality>=premium)
					{
						printf("\n4. Speciality ");
						if(premium<=speciality)
							printf("\n5. Premium");
					}
				}
				else if(premium>=pretzelStix && premium>=speciality)
				{
					printf("\n3. Premium");
					if(pretzelStix>=speciality)
					{
						printf("\n4. Pretzel Stix");	
						if(speciality<=pretzelStix)
							printf("\n5. Speciality ");	
					}
					else if(speciality>=pretzelStix)
					{
						printf("\n4. Speciality ");	
						if(pretzelStix<=speciality)
							printf("\n5. Pretzel Stix");		
					}
				}
				else if(speciality>=pretzelStix && speciality>=premium)
				{
					printf("\n3. Speciality ");	
					if(pretzelStix>=premium)
					{
						printf("\n4. Pretzel Stix");	
						if(premium<=pretzelStix)
							printf("\n5. Premium");
					}
					else if(premium>=pretzelStix)
					{
						printf("\n4. Premium");
							if(pretzelStix<=premium)
								printf("\n5. Pretzel Stix");		
					}
				}
				
			}
			else if(pretzelStix>= pretzelDog && pretzelStix>=speciality && pretzelStix>=premium)
			{
				printf("\n2. Pretzel Stix");	
				if(pretzelDog>=speciality && pretzelDog>=premium )
				{
					printf("\n3. Pretzel Dog");
						if(speciality>=premium)
						{
							printf("\n4. Speciality ");
							if(premium>=speciality)
								printf("\n5. Premium");
						}
						else if(premium>=speciality)
						{
							printf("\n4. Premium");
							if(speciality<= premium)
								printf("\n5. speciality ");
						}
				}
				else if(speciality>=pretzelDog && speciality>=premium)
				{
					printf("\n3. Speciality");
					if(pretzelDog>=premium)
					{
						printf("\n4. Pretzel Dog");
						if(premium<=pretzelDog)
							printf("\n5. Premium");
					}
					else if(premium>= pretzelDog)
					{
						printf("\n4. Premium");
						if(pretzelDog<=premium)
							printf("\n5. Pretzel Dog");
					}
					
						
				}
				else if(premium>=pretzelDog && premium>= speciality)
				{
					printf("\n3. Premium");
					if(pretzelDog>=speciality)
					{
						printf("\n4. Pretzel Dog");
						if(speciality>=pretzelDog)
							printf("\n5. Speciality ");	
					}
					else if(speciality>=pretzelDog)
					{
						printf("\n4. Speciality ");	
						if(pretzelDog<=speciality)
							printf("\n5. Pretzel Dog");	
					}	
				}
			}
	}
	else if(speciality>=premium && speciality>=pretzelDog && speciality>=pretzelStix && speciality>=original)
		{
			printf("\n1. Speciality ");
			if(premium>=pretzelDog && premium>=pretzelStix && premium>=original)
			{
				printf("\n2. Premium");
				if(pretzelDog>=pretzelStix && pretzelDog>=original)
				{
					printf("\n3. Pretzel Dog");
					if(pretzelStix>=original)
					{
						printf("\n4. Pretzel Stix");	
						if(original<=pretzelStix)
							printf("\n5. Original");	
					}
					else if(original>=pretzelStix)
					{
						printf("\n4. Original");
						if(pretzelStix<=original)
							printf("\n5. Pretzel Stix");		
					}
						
				}
				else if(pretzelStix>=pretzelDog && pretzelStix>=original)
				{
					printf("\n3. Pretzel Stix");	
					if(pretzelDog>=original)
					{
						printf("\n4. Pretzel Dog");
						if(original<=pretzelDog)
							printf("\n5. Original");	
					}
					else if(original>=pretzelDog)
					{
						printf("\n4. Original");
						if(pretzelDog<=original)
							printf("\n5. Pretzel Dog");	
					}		
				}
				else if(original>=pretzelDog && original>=pretzelStix)
				{
					printf("\n3. Original");
					if(pretzelDog>=pretzelStix)
					{
						printf("\n4. Pretzel Dog");
						if(pretzelStix<=pretzelDog)
							printf("\n5. Pretzel Stix");
					}
					else if(pretzelStix>=pretzelDog)
					{
						printf("\n4. Pretzel Stix");
						if(pretzelDog<=pretzelStix)
							printf("\n5. Pretzel Dog");	
					}
				}	
			}
			else if(pretzelDog>=original && pretzelDog>=pretzelStix && pretzelDog>=premium)
			{
				printf("\n2. Pretzel Dog");
				if(original>=pretzelStix && original>=premium)
				{
					printf("\n3. Original");
					if(pretzelStix>=premium)
					{
						printf("\n4. Pretzel Stix");
						if(premium<=pretzelStix)
							printf("\n5. Premium");		
					}
					else if(premium>=pretzelStix)
					{
						printf("\n4. Premium");
						if(pretzelStix>=premium)
							printf("\n5. Pretzel Stix");
					}
				}
				else if(pretzelStix>=original && pretzelStix>=premium)
				{
					printf("\n3. Pretzel Stix");
						if(original>=premium)
						{
							printf("\n4. Original");
							if(premium<=original)
								printf("\n5. Premium");	
						}
						else if(premium>=original)
						{
							printf("\n4. Premium");
							if(original<=premium)
								printf("\n5. Original");	
						}
							
				}
				else if(premium>=pretzelStix && premium>=original)
				{
					printf("\n3. Premium");
					if(pretzelStix>=original)
					{
						printf("\n4. Pretzel Stix");	
							if(original<=pretzelStix)
								printf("\n5. Original");
					}
					else if(original>=pretzelStix)
					{
						printf("\n4. Original");
						if(pretzelStix<=original)
							printf("\n5. Pretzel Stix");	
					}		
				}
			}
			else if(pretzelStix>=premium && pretzelStix>=original && pretzelStix>=pretzelDog)
			{
				printf("\n2. Pretzel Stix");
				if(premium>=original && premium>=pretzelDog)
				{
					printf("\n3. Premium");
					if(original>=pretzelDog)
					{
						printf("\n4. Original");
						if(pretzelDog<=original)
							printf("\n5. Pretzel Dog");
					}
					else if(pretzelDog>=original)
					{
						printf("\n4. Pretzel Dog");
						if(original<=pretzelDog)
							printf("\n5. Original");	
					}
				}
				else if(original>=premium && original>=pretzelDog)
				{
					printf("\n3. Original");
					if(premium>=pretzelDog)
					{
						printf("\n4. Premium");
						if(pretzelDog<=premium)
							printf("\n5. Pretzel Dog");
					}
					else if(pretzelDog>=premium)
					{
						printf("\n4. Pretzel Dog");
						if(premium<=pretzelDog)
							printf("\n5. Premium");
					}
				}
				else if(pretzelDog>=premium && pretzelDog>=original)
				{
					printf("\n3. Pretzel Dog");
					if(premium>=original)
					{
						printf("\n4. Premiumy");
						if(original<=premium)
							printf("\n5. Original");
					}
					else if(original>=premium)
					{
						printf("\n4. Original");
						if(premium<=original)
							printf("\n5. Premium");
					}
				}
			}
			else if( original>=pretzelDog && original>=premium && original>=pretzelStix)
			{
				printf("\n2. Original");
				if(pretzelDog>=premium && pretzelDog>=pretzelStix)
				{
					printf("\n3. Pretzel Dog");
					if(premium>=pretzelStix)
					{
						printf("\n4. Premium");
						if(pretzelStix<=premium)
							printf("\n5. Pretzel Stix");
					}
					else if(pretzelStix>=premium)
					{
						printf("\n4. Pretzel Stix");
						if(premium<=pretzelStix)
							printf("\n5. Premium");	
					}
				}
				else if(premium>=pretzelDog && premium>=pretzelStix)
				{
					printf("\n3. Premium");
					if(pretzelDog>=pretzelStix)
					{
						printf("\n4. Pretzel Dog");
						if(pretzelStix<=pretzelDog)
							printf("\n5. Pretzel Stix");
					}
					else if(pretzelStix>=pretzelDog)
					{
						printf("\n4. Pretzel Stix");
						if(pretzelDog<=pretzelStix)
							printf("\n5. Pretzel Dog");
					}
				}
				else if(pretzelStix>=premium && pretzelStix>=pretzelDog)
				{
					printf("\n3. Pretzel Stix");
					if(premium>=pretzelDog)
					{
						printf("\n4. Premium");
						if(pretzelDog<=premium)
							printf("\n5. Pretzel Dog");
					}
					else if(pretzelDog>=premium)
					{
						printf("\n4. Pretzel Dog");
						if(premium<=pretzelDog)
							printf("\n5. Premium");
					}
				}
					
			}
		}
		else if(pretzelDog>=pretzelStix && pretzelDog>=original && pretzelDog>=speciality && pretzelDog>=premium)
{
	printf("\n1. Pretzel Dog");
	if(pretzelStix>=original && pretzelStix>=speciality && pretzelStix>=premium)
	{
		printf("\n2. Pretzel Stix");
		if(original>=speciality && original>=premium)
		{
			printf("\n3. Original");
			if(speciality>=premium)
				printf("\n4.  Speciality  \n5. Premium");
			else if(premium>=speciality)
				printf("\n4. Premium \n5. Speciality ");
		}
		else if(speciality>=original && speciality>=premium)
		{
			printf("\n3. Speciality ");
				if(original>=premium)
					printf("\n4. Original \n5. Premium ");
				else if(premium>=original)
					printf("\n4. Premium \n5. Original");
		}
		else if(premium>=original && premium>=speciality)
		{
			printf("\n3. Premium");
			if(original>=speciality)
				printf("\n4. Original \n5. Speciality  ");
			else if(speciality>=original)
				printf("\n4. Speciality  \n5. Original");
		}
	}
	else if(original>=pretzelStix && original>=speciality && original>=premium)
	{
		printf("\n2. Original");
			if(pretzelStix>=speciality && pretzelStix>=premium)
			{
				printf("\n3. Pretzel Stix");	
				if(speciality>=premium)
					printf("\n4. Speciality  \n5. Premium");
				else if(premium>=speciality)
					printf("\n5. Premium \n 5. Speciality ");
			}
			else if (speciality>=pretzelStix && speciality>=premium)
			{
				printf("\n3. Speciality  ");
				if(pretzelStix>=premium)
					printf("\n4. Pretzel Stix \n5. Premium");	
				else if(premium>=pretzelStix)
					printf("\n4. Premium \n 5. Pretzel Stix");
			}
			else if(premium>=speciality && premium>=pretzelStix)
			{
				printf("\n3. Premium");
				if(speciality>=pretzelStix)
					printf("\n4. Speciality  \n5. Pretzel Stix");
				else if(pretzelStix>=speciality)
					printf("\n4. Pretzel Stix \n5. Speciality ");		
			}			
	}
	else if(speciality>-original && speciality>=pretzelStix && speciality>=premium)
	{
		printf("\n2. Speciality ");
		if(original>=pretzelStix && original>=premium)
		{
			printf("\n3. Original");
			if(pretzelStix>=premium)
				printf("\n4. Pretzel Stix \n5. Premium");
			else if(premium>=pretzelStix)
				printf("\n4. Premium \n5. Pretzel Stix");
		}
		else if(pretzelStix>=original && pretzelStix>=premium)
		{
			printf("\n3. Pretzel Stix");
			if(original>=premium)
				printf("\n4. Original \n5. Premium");
			else if(premium>=original)
				printf("\n4. Premium \n5. Original");
		}
			
	}
	else if(premium>=original && premium>=speciality && premium>=pretzelStix)
	{
		printf("\n2.  Premium");
		if(original>=speciality && original>=pretzelStix)
		{
			printf("\n3. Original ");
			if(speciality>=pretzelStix)
				printf("\n4. Speciality  \n5. Pretzel Stix");	
			else if(pretzelStix>=speciality)
				printf("\n4. Pretzel Stix \n5. Speciality  ");
		}
		else if(speciality>=original && speciality>=pretzelStix)
		{
			printf("\n3. Speciality ");
			if(original>=pretzelStix)
				printf("\n4. Original \n5. Pretzel Stix");
			else if(pretzelStix>=original)
				printf("\n4. Pretzel Stix \n5. Original");
		}
		else if(pretzelStix>=original && pretzelStix>=speciality)
		{
			printf("\n3. Pretzel Stix");
			if(original>=speciality)
				printf("\n4. Original \n5. Speciality ");
			if(speciality>=original)
				printf("\n4. Speciality  \n5. Original");
		}
		
	}
	
}
		printf("\n\nMain pretzel dips\n");
	
	if(cheeseS>=caramelD && cheeseS>=chocEclairs){
		printf("\n1. Cheese");
		if(caramelD>=chocEclairs)
		printf("\n2. Caramel \n3. Chocolate ");
		else if(chocEclairs>=caramelD)
		printf("\n2.  Chocolate \n3.  Caramel");
	}
	
	else if(caramelD>=cheeseS && caramelD>=chocEclairs){
		printf("\n1. Caramel ");
		if(cheeseS>=chocEclairs)
		printf("\n2. Cheese \n3. Chocolate");
		else if(chocEclairs >= cheeseS)
		printf("\2. Chocolate\n3. Cheese");
	}
	else if(chocEclairs>=caramelD && chocEclairs>=cheeseS){
		printf("\n1. Chocolate ");
		if(caramelD>=cheeseS)
		printf("\n2. Caramel \n3. Cheese");
		else if(cheeseS >= caramelD)
		printf("\n2. Cheese \n3. Caramel");
	}
}

void WelcomeScreen(){
	system("cls");
	printf("					`...---:::::::--.`                                          \n");
	printf("                                        :/:-.````````..-//                                          \n");
	printf("                                         `.-------------.                                           \n");
	printf("                                        `...`        `.---.`                                        \n");
	printf("                                    `/+++///++/:`.:/++//://++/                                      \n");
	printf("                                   .s/::::::::::+s:::::::::::/o`                                    \n");
	printf("                                  `s/:::+o++o+/::::/ooooy+::::+/                                    \n");
	printf("                                  :o:::+o`  /yso::::/+  `so::::o                                    \n");
	printf("                                  +/:::o   .s::/:::::+.  .h::::o                                    \n");
	printf("                                  ++::/o   :o::::::::+-   h/::/+                                    \n");
	printf("                                  :o::/s   .y::::/o/+s`   y:::+:                                    \n");
	printf("                                  -s:::y`   os::::+yy.   -s:::s.                                    \n");
	printf("                                   y:::oo `/+/o/::::+/- .s/::+s                                     \n");
	printf("                                   /o:::+s+:::/ys/::::/oh/::+y.                                     \n");
	printf("                                    oo+o+:::/shs-+y+::::/osyh:                                      \n");
	printf("                                    `hs::::+yy/////+s+::::/yo                                       \n");
	printf("                                    .ho::oyhhy+////::sho:::sh                                       \n");
	printf("                                     .+ss+--://++++/:--+ssss-    \n");
	printf("\t\t\tWelcome to Auntie Anne's. We are happy to serve you today.\n");
}

char *Home(){
	int va7=0;
	printf("\t\t ______________________________________________________________________   \n");
	printf("\t\t|                                                  |                   |  \n");
	printf("\t\t|                     MAIN MENU                    |       CODE        |  \n");
	printf("\t\t|__________________________________________________|___________________|  \n");
	printf("\t\t|                                                  |                   |  \n");
    printf("\t\t|                     Ala Carte                    |         1         |  \n");
    printf("\t\t|__________________________________________________|___________________|  \n");
    printf("\t\t|                                                  |                   |  \n");
    printf("\t\t|                     Set Combo                    |         2         |  \n");
    printf("\t\t|__________________________________________________|___________________|  \n");
    
	while( va7 == 0 ) {
		printf("\n\t\tEnter your choice: ");
		scanf("  %s", &code);
		if(strcmp(code, "1")==0 || strcmp(code, "2")==0 ){
		va7 = 1;
		return code;
		}else{
		system("cls");
		printf("\t\t ______________________________________________________________________   \n");
		printf("\t\t|                                                  |                   |  \n");
		printf("\t\t|                     MAIN MENU                    |       CODE        |  \n");
		printf("\t\t|__________________________________________________|___________________|  \n");
		printf("\t\t|                                                  |                   |  \n");
   		printf("\t\t|                     Ala Carte                    |         1         |  \n");
    	printf("\t\t|__________________________________________________|___________________|  \n");
    	printf("\t\t|                                                  |                   |  \n");
    	printf("\t\t|                     Set Combo                    |         2         |  \n");
    	printf("\t\t|__________________________________________________|___________________|  \n");		
		printf("\n\t\tInvalid choice. Please enter only 1 or 2.");}
		}
 }

char *alaCarte(){
	int va8=0;
	system("cls");
	printf("\t\t____________________________________________________________________\n");
	printf("\t\t|        Ala Carte           |                Code                 |\n");
	printf("\t\t|____________________________|_____________________________________|\n");
	printf("\t\t|      Soft Pretzels         |                 1                   |\n");
	printf("\t\t|____________________________|_____________________________________|\n");
	printf("\t\t|          Dips              |                 2                   |\n");
	printf("\t\t|____________________________|_____________________________________|\n");
	printf("\t\t|         Beverages          |                 3                   |\n");
	printf("\t\t|____________________________|_____________________________________|\n");
	printf("\t\t|      pretzels dogs         |                 4                   |\n");
	printf("\t\t|____________________________|_____________________________________|\n");
	printf("\t\t|       pretzel stix         |                 5                   |\n");
	printf("\t\t|____________________________|_____________________________________|\n");
	printf("\t\t|     Back to Main Menu      |                 0                   |\n");
	printf("\t\t|____________________________|_____________________________________|\n");
		while( va8 == 0 ) {
		printf("\n\t\tEnter your choice: ");
		scanf("  %s", &code);
		if(strcmp(code, "1")==0 || strcmp(code, "2")==0 || strcmp(code, "3")==0 || strcmp(code, "4")==0 || strcmp(code, "5")==0 || strcmp(code, "0")==0){
		va8 = 1;
		return code;
		}else{
		system("cls");
		printf("\t\t____________________________________________________________________\n");
		printf("\t\t|        Ala Carte           |                Code                 |\n");
		printf("\t\t|____________________________|_____________________________________|\n");
		printf("\t\t|      Soft Pretzels         |                 1                   |\n");
		printf("\t\t|____________________________|_____________________________________|\n");
		printf("\t\t|          Dips              |                 2                   |\n");
		printf("\t\t|____________________________|_____________________________________|\n");
		printf("\t\t|         Beverages          |                 3                   |\n");
		printf("\t\t|____________________________|_____________________________________|\n");
		printf("\t\t|      pretzels dogs         |                 4                   |\n");
		printf("\t\t|____________________________|_____________________________________|\n");
		printf("\t\t|       pretzel stix         |                 5                   |\n");
		printf("\t\t|____________________________|_____________________________________|\n");
		printf("\t\t|     Back to Main Menu      |                 0                   |\n");
		printf("\t\t|____________________________|_____________________________________|\n");	
		printf("\n\t\tInvalid choice. Please enter only 0, 1, 2, 3, 4, or 5.");}
		}
		}

int searchArray(const char *order[100]){
	int search=0, searchAr;
	prI=i;
	p[1]=order[i];
	for (searchAr=0;searchAr<i;searchAr++){
		if(order[searchAr]==p[1]){
			i=searchAr;
			search=1;
			a=searchAr;
			return search;}
	}
	return search;
}

float dips(){
	int va=0;
	printf("\n\t\t _____________________________________________________");
	printf("\n\t\t|       Dips       |        Price           |  Code   |");
	printf("\n\t\t|__________________|________________________|_________|");
	printf("\n\t\t|      Cheese      |         1.50           |    1    |");
	printf("\n\t\t|__________________|________________________|_________|");
	printf("\n\t\t|      Caramel     |         1.50           |    2    |");
	printf("\n\t\t|__________________|________________________|_________|");
	printf("\n\t\t|     Chocolate    |         1.50           |    3    |");
	printf("\n\t\t|__________________|________________________|_________|");
	printf("\n\t\t|           Go back to Ala Carte            |    0    |");
	printf("\n\t\t|___________________________________________|_________|");
	while( va == 0 ) {
		printf("\n\t\tPlease choose your dips and Enter code: ");
    	scanf(" %s", &code);
		if (strcmp(code, "0")!=0 && strcmp(code, "1")!=0 && strcmp(code, "2")!=0 && strcmp(code, "3")!=0 ) {
		system("cls");
		printf("\n\t\t _____________________________________________________");
		printf("\n\t\t|       Dips       |        Price           |  Code   |");
		printf("\n\t\t|__________________|________________________|_________|");
		printf("\n\t\t|      Cheese      |         1.50           |    1    |");
		printf("\n\t\t|__________________|________________________|_________|");
		printf("\n\t\t|      Caramel     |         1.50           |    2    |");
		printf("\n\t\t|__________________|________________________|_________|");
		printf("\n\t\t|     Chocolate    |         1.50           |    3    |");
		printf("\n\t\t|__________________|________________________|_________|");
		printf("\n\t\t|              Go back                      |    0    |");
		printf("\n\t\t|___________________________________________|_________|");
		printf("\n\t\tInvalid code. Please enter 1, 2, 3, or 0.");
		}else{
		va= 1;
			if (strcmp(code, "1")==0){
				printf("\n\t\tPlease enter your quantity: ");
				scanf("%d", &quantity);
				while(quantity<1){
					printf("\n\t\tYour quantity is error. Must be 1 or more.");
					printf("\n\t\tPlease enter your quantity: ");
					scanf("%d", &quantity);}
				order[i]="Cheese Dips";
				cheeseS++;
				search=searchArray(order);
			}else if (strcmp(code, "2")==0){
				printf("\n\t\tPlease enter your quantity: ");
				scanf("%d", &quantity);
				while(quantity<1){
					printf("\n\t\tYour quantity is error. Must be 1 or more.");
					printf("\n\t\tPlease enter your quantity: ");
					scanf("%d", &quantity);}
				order[i]="Caramel Dips";
				caramelD++;
				search=searchArray(order);
			}else if (strcmp(code, "3")==0){
				printf("\n\t\tPlease enter your quantity: ");
				scanf("%d", &quantity);
				while(quantity<1){
					printf("\n\t\tYour quantity is error. Must be 1 or more.");
					printf("\n\t\tPlease enter your quantity: ");
					scanf("%d", &quantity);}
				order[i]="Chocolate Dips";
				chocEclairs++;
				search=searchArray(order);
			}else if(strcmp(code, "0")==0){
				total[a]=0;
				return total[a];
			}
		if(search==1){
		if(strcmp(code, "1")==0 || strcmp(code, "2")==0 || strcmp(code, "3")==0){
		newQuantity=productQuantity[i]+quantity;
		productQuantity[i]=newQuantity;
		total[a]=(1.50*newQuantity);
		i=prI;
		a=prI;
		i--;
		a--;}
	}else{
	if(strcmp(code, "1")==0 || strcmp(code, "2")==0 || strcmp(code, "3")==0){
		productQuantity[i]=quantity;
		total[a]=(1.50*quantity);}
		}
		return total[a];
	}
}	
}

float beverages(){
	int va6=0;
	printf("\n  __________________________________________________________________________________________________________________");
	printf("\n  |                                       |                  Price (RM)                     |                       |");
	printf("\n  |                Type                   |_________________________________________________|         Code          |");
	printf("\n  |                                       |    Regular     |     Medium     |     Large     |                       |");
	printf("\n  |_______________________________________|________________|________________|_______________|_______________________|");	
	printf("\n  |         Lemonade fruit                |      3.30      |      4.10      |     5.60      |           1           |");
	printf("\n  |_______________________________________|________________|________________|_______________|_______________________|");
	printf("\n  |         Dutch Ice- Fruity Flavour     |      5.50      |                |               |           2           |");
	printf("\n  |_______________________________________|________________|________________|_______________|_______________________|");	
	printf("\n  |         Dutch Ice- Mocha              |      7.80      |                |               |           3           |");
	printf("\n  |_______________________________________|________________|________________|_______________|_______________________|");		
	printf("\n  |         Mineral Water                 |      2.00      |                |               |           4           |");
	printf("\n  |_______________________________________|________________|________________|_______________|_______________________|");
	printf("\n  |                                             Back Ala Carte                              |           0           |");
	printf("\n  |_________________________________________________________________________________________|_______________________|");
	while( va6 == 0 ) {
		printf("\n\t\tPlease choose your beverage and Enter code: ");
    	scanf(" %s", &code);
		if (strcmp(code, "0")!=0 && strcmp(code, "1")!=0 && strcmp(code, "2")!=0 && strcmp(code, "3")!=0 && strcmp(code, "4")!=0) {
		system("cls");
	printf("\n  __________________________________________________________________________________________________________________");
	printf("\n  |                                       |                  Price (RM)                     |                       |");
	printf("\n  |                Type                   |_________________________________________________|         Code          |");
	printf("\n  |                                       |    Regular     |     Medium     |     Large     |                       |");
	printf("\n  |_______________________________________|________________|________________|_______________|_______________________|");	
	printf("\n  |         Lemonade fruit                |      3.30      |      4.10      |     5.60      |           1           |");
	printf("\n  |_______________________________________|________________|________________|_______________|_______________________|");
	printf("\n  |         Dutch Ice- Fruity Flavour     |      5.50      |                |               |           2           |");
	printf("\n  |_______________________________________|________________|________________|_______________|_______________________|");	
	printf("\n  |         Dutch Ice- Mocha              |      7.80      |                |               |           3           |");
	printf("\n  |_______________________________________|________________|________________|_______________|_______________________|");		
	printf("\n  |         Mineral Water                 |      2.00      |                |               |           4           |");
	printf("\n  |_______________________________________|________________|________________|_______________|_______________________|");
	printf("\n  |                                             Back Ala Carte                              |           0           |");
	printf("\n  |_________________________________________________________________________________________|_______________________|");
		printf("\n\t\tInvalid code. Please enter 1, 2, 3, 4 or 0.");
		}else{
		va6= 1;
			if (strcmp(code, "1")==0){
				printf("\t\tDo you want Regular, Medium or Large?: ");
				scanf(" %s", &size);
				while((strcmp(size, "Regular")!=0 && strcmp(size, "regular")!=0 && strcmp(size, "Medium")!=0 && strcmp(size, "medium")!=0 && strcmp(size, "Large")!=0 && strcmp(size, "large")!=0)){
					printf("\n\t\tYou have entered the wrong size.");
					printf("\n\t\tDo you want Regular, Medium or Large?: ");
					scanf(" %s", &size);
				}
				if(strcmp(size,"Regular")==0 || strcmp(size,"regular")==0){
					printf("\n\t\tPlease enter your quantity: ");
					scanf("%d", &quantity);
					while(quantity<1){
						printf("\n\t\tYour quantity is error. Must be 1 or more.");
						printf("\n\t\tPlease enter your quantity: ");
						scanf("%d", &quantity);}
				order[i]="Lemonade fruit (Regular)";
				lemonade++;
				search=searchArray(order);
				}else if(strcmp(size,"Medium")==0 || strcmp(size,"medium")==0){
					printf("\n\t\tPlease enter your quantity: ");
					scanf("%d", &quantity);
					while(quantity<1){
						printf("\n\t\tYour quantity is error. Must be 1 or more.");
						printf("\n\t\tPlease enter your quantity: ");
						scanf("%d", &quantity);}
				order[i]="Lemonade fruit (Medium)";
				lemonade++;
				search=searchArray(order);
				}else if(strcmp(size,"Large")==0 || strcmp(size,"large")==0){
					printf("\n\t\tPlease enter your quantity: ");
					scanf("%d", &quantity);
					while(quantity<1){
						printf("\n\t\tYour quantity is error. Must be 1 or more.");
						printf("\n\t\tPlease enter your quantity: ");
						scanf("%d", &quantity);}
				order[i]="Lemonade fruit (Large)";
				lemonade++;
				search=searchArray(order);}
			}else if(strcmp(code, "2")==0){
				printf("\n\t\tPlease enter your quantity: ");
				scanf("%d", &quantity);
				while(quantity<1){
					printf("\n\t\tYour quantity is error. Must be 1 or more.");
					printf("\n\t\tPlease enter your quantity: ");
					scanf("%d", &quantity);}
			order[i]="Dutch Ice- Fruity Flavour";
			fruity++;
			search=searchArray(order);
			}else if(strcmp(code, "3")==0){
				printf("\n\t\tPlease enter your quantity: ");
				scanf("%d", &quantity);
				while(quantity<1){
					printf("\n\t\tYour quantity is error. Must be 1 or more.");
					printf("\n\t\tPlease enter your quantity: ");
					scanf("%d", &quantity);}
			order[i]="Dutch Ice- Mocha";
			mocha++;
			search=searchArray(order);
			}else if(strcmp(code, "4")==0){
				printf("\n\t\tPlease enter your quantity: ");
				scanf("%d", &quantity);
				while(quantity<1){
					printf("\n\t\tYour quantity is error. Must be 1 or more.");
					printf("\n\t\tPlease enter your quantity: ");
					scanf("%d", &quantity);}
			order[i]="Mineral Water";
			mineral++;
			search=searchArray(order);
			}else if(strcmp(code, "0")==0){
				total[a]=0;
				return total[a];
			}
		if(search==1){
		if(strcmp(code, "1")==0){
			if(strcmp(size,"Regular")==0 || strcmp(size,"regular")==0){
				newQuantity=productQuantity[i]+quantity;
				productQuantity[i]=newQuantity;
				total[a]=(3.30*newQuantity);
				i=prI;
				a=prI;
				i--;
				a--;
			}else if(strcmp(size,"Medium")==0 || strcmp(size,"medium")==0){
				newQuantity=productQuantity[i]+quantity;
				productQuantity[i]=newQuantity;
				total[a]=(4.10*newQuantity);
				i=prI;
				a=prI;
				i--;
				a--;
			}else{
				newQuantity=productQuantity[i]+quantity;
				productQuantity[i]=newQuantity;
				total[a]=(5.60*newQuantity);
				i=prI;
				a=prI;
				i--;
				a--;}
		}else if(strcmp(code, "2")==0){
			newQuantity=productQuantity[i]+quantity;
			productQuantity[i]=newQuantity;
			total[a]=(5.50*newQuantity);
			i=prI;
			a=prI;
			i--;
			a--;
		}else if(strcmp(code, "3")==0){
			newQuantity=productQuantity[i]+quantity;
			productQuantity[i]=newQuantity;
			total[a]=(7.80*newQuantity);
			i=prI;
			a=prI;
			i--;
			a--;
		}else if(strcmp(code, "4")==0){
			newQuantity=productQuantity[i]+quantity;
			productQuantity[i]=newQuantity;
			total[a]=(2.00*newQuantity);
			i=prI;
			a=prI;
			i--;
			a--;}
	}else{
	if(strcmp(code, "1")==0){
		if(strcmp(size,"Regular")==0 || strcmp(size,"regular")==0){
			total[a]=(3.30 * quantity);
			productQuantity[i]=quantity;
		}else if(strcmp(size,"Medium")==0 || strcmp(size,"medium")==0){
			productQuantity[i]=quantity;
			total[a]=(4.10 * quantity);
		}else{
			productQuantity[i]=quantity;
			total[a]=(5.60 * quantity);}
	}else if(strcmp(code, "2")==0){
		productQuantity[i]=quantity;
		total[a]=(5.50 * quantity);	
	}else if(strcmp(code, "3")==0){
		productQuantity[i]=quantity;
		total[a]=(7.80 * quantity);
	}else if(strcmp(code, "4")==0){
		productQuantity[i]=quantity;
		total[a]=(2.00 * quantity);}
		}
		return total[a];
	}
}	
}

float softPretzel(){
	soft:
	int va3=0, va5=0, va4=0;
	system("cls");
	printf("\t\t _______________________________________________________________________");
	printf("\n\t\t|           Soft Pretzel           |     Price      |   Code          |");
	printf("\n\t\t|__________________________________|________________|_________________|");
	printf("\n\t\t|         Original Pretzel         |      2.90      |    1            |");
	printf("\n\t\t|__________________________________|________________|_________________|");
	printf("\n\t\t|         Specialty Pretzel        |      3.40      |    2            |");
	printf("\n\t\t|__________________________________|________________|_________________|");	
	printf("\n\t\t|         Premium Pretzel          |      3.40      |    3            |");
	printf("\n\t\t|__________________________________|________________|_________________|");
	printf("\n\t\t|                     Go back to ala carte          |    0            |");
	printf("\n\t\t|___________________________________________________|_________________|");	
	while(va3==0) {
		printf("\n\t\tPlease choose your soft pretzel and Enter code: ");
		scanf(" %s", &code);
		if (strcmp(code, "0")!=0 && strcmp(code, "1")!=0 && strcmp(code, "2")!=0 && strcmp(code, "3")!=0 ) {
		system("cls");	
		printf("\t\t _______________________________________________________________________");
		printf("\n\t\t|           Soft Pretzel           |     Price      |   Code          |");
		printf("\n\t\t|__________________________________|________________|_________________|");
		printf("\n\t\t|         Original Pretzel         |      2.90      |    1            |");
		printf("\n\t\t|__________________________________|________________|_________________|");
		printf("\n\t\t|         Specialty Pretzel        |      3.40      |    2            |");
		printf("\n\t\t|__________________________________|________________|_________________|");	
		printf("\n\t\t|         Premium Pretzel          |      3.40      |    3            |");
		printf("\n\t\t|__________________________________|________________|_________________|");
		printf("\n\t\t|                     Go back to ala carte          |    0            |");
		printf("\n\t\t|___________________________________________________|_________________|");
		printf("\n\t\tInvalid code. Please enter 1, 2, 3, or 0.");
		}else{
		va3= 1;
		if (strcmp(code, "1")==0){
			printf("\n\t\tPlease enter your quantity: ");
			scanf("%d", &quantity);
			while(quantity<1){
			printf("\n\t\tYour quantity is error. Must be 1 or more.");
			printf("\n\t\tPlease enter your quantity: ");
			scanf("%d", &quantity);}
				order[i]="Original Pretzel";
				search=searchArray(order);
			}else if(strcmp(code, "2")==0){
	system("cls");
	printf("\n\t\t ___________________________________________________________________________________");
	printf("\n\t\t|        Special  Pretzel        |          Price          |          Code          |");
	printf("\n\t\t|________________________________|_________________________|________________________|");
	printf("\n\t\t|         Cinammon sugar         |          3.40           |            1           |");
	printf("\n\t\t|________________________________|_________________________|________________________|");
	printf("\n\t\t|         Sour and cream         |          3.40           |            2           |");
	printf("\n\t\t|________________________________|_________________________|________________________|");	
	printf("\n\t\t|             Garlic             |          3.40           |            3           |");
	printf("\n\t\t|________________________________|_________________________|________________________|");
	printf("\n\t\t|           Green Tea            |          3.40           |            4           |");
	printf("\n\t\t|________________________________|_________________________|________________________|");	
	printf("\n\t\t|          Choc Eclairs          |          3.40           |            5           |");
	printf("\n\t\t|________________________________|_________________________|________________________|");
	printf("\n\t\t|                Go back to Soft Pretzel                   |            0           |");
	printf("\n\t\t|__________________________________________________________|________________________|");
	while( va5 == 0 ) {
		printf("\n\t\tPlease choose your special pretzel and Enter code: ");
    	scanf(" %s", &code);
		if (strcmp(code, "0")!=0 && strcmp(code, "1")!=0 && strcmp(code, "2")!=0 && strcmp(code, "3")!=0 && (strcmp(code, "4")!=0 && strcmp(code, "5")!=0)) {
		system("cls");
			printf("\n\t\t ___________________________________________________________________________________");
			printf("\n\t\t|        Special  Pretzel        |          Price          |          Code          |");
			printf("\n\t\t|________________________________|_________________________|________________________|");
			printf("\n\t\t|         Cinammon sugar         |          3.40           |            1           |");
			printf("\n\t\t|________________________________|_________________________|________________________|");
			printf("\n\t\t|         Sour and cream         |          3.40           |            2           |");
			printf("\n\t\t|________________________________|_________________________|________________________|");	
			printf("\n\t\t|             Garlic             |          3.40           |            3           |");
			printf("\n\t\t|________________________________|_________________________|________________________|");
			printf("\n\t\t|           Green Tea            |          3.40           |            4           |");
			printf("\n\t\t|________________________________|_________________________|________________________|");	
			printf("\n\t\t|          Choc Eclairs          |          3.40           |            5           |");
			printf("\n\t\t|________________________________|_________________________|________________________|");
			printf("\n\t\t|                Go back to Soft Pretzel                   |            0           |");
			printf("\n\t\t|__________________________________________________________|________________________|");
			printf("\n\t\tInvalid code. Please enter 1, 2, 3, 4, 5 or 0.");
		}else{
		va5= 1;
			if (strcmp(code, "1")==0){
				printf("\n\t\tPlease enter your quantity: ");
				scanf("%d", &quantity);
				while(quantity<1){
					printf("\n\t\tYour quantity is error. Must be 1 or more.");
					printf("\n\t\tPlease enter your quantity: ");
					scanf("%d", &quantity);}
				order[i]="Special Pretzel - Cinammon sugar";
				cinnamonZ++;
				search=searchArray(order);
			}else if(strcmp(code, "2")==0){
				printf("\n\t\tPlease enter your quantity: ");
				scanf("%d", &quantity);
				while(quantity<1){
					printf("\n\t\tYour quantity is error. Must be 1 or more.");
					printf("\n\t\tPlease enter your quantity: ");
					scanf("%d", &quantity);}
				order[i]="Special Pretzel - Sour and cream";
				sour++;
				search=searchArray(order);
			}else if(strcmp(code, "3")==0){
				printf("\n\t\tPlease enter your quantity: ");
				scanf("%d", &quantity);
				while(quantity<1){
					printf("\n\t\tYour quantity is error. Must be 1 or more.");
					printf("\n\t\tPlease enter your quantity: ");
					scanf("%d", &quantity);}
				order[i]="Special Pretzel - Garlic";
				garlic++;
				search=searchArray(order);
			}else if(strcmp(code, "4")==0){
				printf("\n\t\tPlease enter your quantity: ");
				scanf("%d", &quantity);
				while(quantity<1){
					printf("\n\t\tYour quantity is error. Must be 1 or more.");
					printf("\n\t\tPlease enter your quantity: ");
					scanf("%d", &quantity);}
				order[i]="Special Pretzel - Green Tea";
				greenTea++;
				search=searchArray(order);
			}else if(strcmp(code, "5")==0){
				printf("\n\t\tPlease enter your quantity: ");
				scanf("%d", &quantity);
					while(quantity<1){
						printf("\n\t\tYour quantity is error. Must be 1 or more.");
						printf("\n\t\tPlease enter your quantity: ");
						scanf("%d", &quantity);}
				order[i]="Special Pretzel - Choc Eclairs";
				eclairs++;
				search=searchArray(order);
			}else if(strcmp(code, "0")==0){
				goto soft;
			}
		if(search==1){
			if(strcmp(code, "1")==0 || strcmp(code, "2")==0 || strcmp(code, "3")==0 || strcmp(code, "4")==0 || strcmp(code, "5")==0){
			newQuantity=productQuantity[i]+quantity;
			productQuantity[i]=newQuantity;
			total[a]=(3.40*newQuantity);
			i=prI;
			a=prI;
			i--;
			a--;}
	}else{
		if(strcmp(code, "1")==0 || strcmp(code, "2")==0 || strcmp(code, "3")==0 || strcmp(code, "4")==0 || strcmp(code, "5")==0){
		productQuantity[i]=quantity;
		total[a]=(3.40*quantity);}
		}
		return total[a];
	}
}
			}else if(strcmp(code, "3")==0){
	system("cls");
	printf("\n\t\t ___________________________________________________________________________________________");
	printf("\n\t\t|             Premium Pretzel            |          Price          |          Code          |");
	printf("\n\t\t|________________________________________|_________________________|________________________|");
	printf("\n\t\t|             Caramel Almond             |          3.40           |            1           |");
	printf("\n\t\t|________________________________________|_________________________|________________________|");
	printf("\n\t\t|             Jalapeno Cheese            |          3.40           |            2           |");
	printf("\n\t\t|________________________________________|_________________________|________________________|");	
	printf("\n\t\t|             Cheezy Turkey              |          3.40           |            3           |");
	printf("\n\t\t|________________________________________|_________________________|________________________|");
	printf("\n\t\t|             Cinnamon Raison            |          3.40           |            4           |");
	printf("\n\t\t|________________________________________|_________________________|________________________|");	
	printf("\n\t\t|             Plain Raisin               |          3.40           |            5           |");
	printf("\n\t\t|________________________________________|_________________________|________________________|");	
	printf("\n\t\t|                     Go back to Soft Pretzel                      |            0           |");
	printf("\n\t\t|__________________________________________________________________|________________________|");
	while(va4==0) {
		printf("\n\t\tPlease choose your premium pretzel and Enter code: ");
		scanf(" %s", &code);
		if (strcmp(code, "0")!=0 && strcmp(code, "1")!=0 && strcmp(code, "2")!=0 && strcmp(code, "3")!=0 && strcmp(code, "4")!=0 && strcmp(code, "5")!=0) {
		system("cls");	
	printf("\n\t\t ___________________________________________________________________________________________");
	printf("\n\t\t|             Premium Pretzel            |          Price          |          Code          |");
	printf("\n\t\t|________________________________________|_________________________|________________________|");
	printf("\n\t\t|             Caramel Almond             |          3.40           |            1           |");
	printf("\n\t\t|________________________________________|_________________________|________________________|");
	printf("\n\t\t|             Jalapeno Cheese            |          3.40           |            2           |");
	printf("\n\t\t|________________________________________|_________________________|________________________|");	
	printf("\n\t\t|             Cheezy Turkey              |          3.40           |            3           |");
	printf("\n\t\t|________________________________________|_________________________|________________________|");
	printf("\n\t\t|             Cinnamon Raison            |          3.40           |            4           |");
	printf("\n\t\t|________________________________________|_________________________|________________________|");	
	printf("\n\t\t|             Plain Raisin               |          3.40           |            5           |");
	printf("\n\t\t|________________________________________|_________________________|________________________|");	
	printf("\n\t\t|                     Go back to Soft Pretzel                      |            0           |");
	printf("\n\t\t|__________________________________________________________________|________________________|");
		printf("\n\t\tInvalid code. Please enter 1, 2, 3, 4, 5 or 0.");
		}else{
		va4=1;
		if (strcmp(code, "1")==0){
				printf("\n\t\tPlease enter your quantity: ");
				scanf("%d", &quantity);
					while(quantity<1){
					printf("\n\tYour quantity is error. Must be 1 or more.");
					printf("\n\tPlease enter your quantity: ");
					scanf("%d", &quantity);}
				order[i]="Premium Pretzel - Caramel Almond";
				caramel++;
				search=searchArray(order);
			}else if(strcmp(code, "2")==0){
				printf("\n\t\tPlease enter your quantity: ");
				scanf("%d", &quantity);
					while(quantity<1){
					printf("\n\tYour quantity is error. Must be 1 or more.");
					printf("\n\tPlease enter your quantity: ");
					scanf("%d", &quantity);}
				order[i]="Premium Pretzel - Jalapeno Cheese";
				jalapeno++;
				search=searchArray(order);
			}else if(strcmp(code, "3")==0){
				printf("\n\t\tPlease enter your quantity: ");
				scanf("%d", &quantity);
					while(quantity<1){
					printf("\n\tYour quantity is error. Must be 1 or more.");
					printf("\n\tPlease enter your quantity: ");
					scanf("%d", &quantity);}
				order[i]="Premium Pretzel - Cheezy Turkey";
				cheesy++;
				search=searchArray(order);
			}else if(strcmp(code, "4")==0){
				printf("\n\t\tPlease enter your quantity: ");
				scanf("%d", &quantity);
					while(quantity<1){
					printf("\n\tYour quantity is error. Must be 1 or more.");
					printf("\n\tPlease enter your quantity: ");
					scanf("%d", &quantity);}
				order[i]="Premium Pretzel - Cinnamon Raison";
				cinnamon++;
				search=searchArray(order);
			}else if(strcmp(code, "5")==0){
				printf("\n\t\tPlease enter your quantity: ");
				scanf("%d", &quantity);
					while(quantity<1){
					printf("\n\tYour quantity is error. Must be 1 or more.");
					printf("\n\tPlease enter your quantity: ");
					scanf("%d", &quantity);}
				order[i]="Premium Pretzel - Plain Raisin";
				plain++;
				search=searchArray(order);
			}else{
				goto soft;
			}
		if(search==1){
		if(strcmp(code, "1")==0 || strcmp(code, "2")==0 || strcmp(code, "3")==0 || strcmp(code, "4")==0 || strcmp(code, "5")==0){
		newQuantity=productQuantity[i]+quantity;
		productQuantity[i]=newQuantity;
		total[a]=(3.40*newQuantity);
		i=prI;
		a=prI;
		i--;
		a--;}
	}else{
	if(strcmp(code, "1")==0 || strcmp(code, "2")==0 || strcmp(code, "3")==0 || strcmp(code, "4")==0 || strcmp(code, "5")==0){
		productQuantity[i]=quantity;
		total[a]=(3.40*quantity);}
		}
		return total[a];
	}
}
			}else if(strcmp(code, "0")==0){
				total[a]=0;
				return total[a];}
		if(search==1){
		if(strcmp(code, "1")==0){
		newQuantity=productQuantity[i]+quantity;
		productQuantity[i]=newQuantity;
		total[a]=(2.90*newQuantity);
		i=prI;
		a=prI;
		i--;
		a--;
		}else if(strcmp(code, "1")==0){
		return total[a];
		}else if(strcmp(code, "3")==0){
		return total[a];}
	}else{
	if(strcmp(code, "1")==0){
		productQuantity[i]=quantity;
		total[a]=(2.90*quantity);}
		}
		return total[a];
	}
}	
}

float pretzelDogs(){
	int va2=0;
	printf("\n\t\t ________________________________________________________");
	printf("\n\t\t|    Pretzel Dog      |        Prices          |  Code   |");
	printf("\n\t\t|_____________________|________________________|_________|");
	printf("\n\t\t|     Jumbo Regular   |         7.50           |    1    |");
	printf("\n\t\t|_____________________|________________________|_________|");
	printf("\n\t\t|     Jumbo Cheese    |         8.80           |    2    |");
	printf("\n\t\t|_____________________|________________________|_________|");
	printf("\n\t\t|           Go back to Ala Carte               |    0    |");
	printf("\n\t\t|______________________________________________|_________|");
	while( va2 == 0 ) {
		printf("\n\t\tPlease choose your pretzel dog and Enter code: ");
    	scanf(" %s", &code);
		if (strcmp(code, "0")!=0 && strcmp(code, "1")!=0 && strcmp(code, "2")!=0 && strcmp(code, "3")!=0 && strcmp(code, "4")!=0) {
		system("cls");
			printf("\n\t\t ________________________________________________________");
			printf("\n\t\t|    Pretzel Dog      |        Prices          |  Code   |");
			printf("\n\t\t|_____________________|________________________|_________|");
			printf("\n\t\t|     Jumbo Regular   |         7.50           |    1    |");
			printf("\n\t\t|_____________________|________________________|_________|");
			printf("\n\t\t|     Jumbo Cheese    |         8.80           |    2    |");
			printf("\n\t\t|_____________________|________________________|_________|");
			printf("\n\t\t|           Go back to Ala Carte               |    0    |");
			printf("\n\t\t|______________________________________________|_________|");
			printf("\n\t\tInvalid code. Please enter 1, 2, or 0.");
		}else{
		va2= 1;
			if (strcmp(code, "1")==0){
				printf("\n\t\tPlease enter your quantity: ");
				scanf("%d", &quantity);
					while(quantity<1){
						printf("\n\t\tYour quantity is invalid. Must be 1 or more.");
						printf("\n\t\tPlease enter your quantity: ");
						scanf("%d", &quantity);}
			order[i]="Pretzel Dog - Jumbo Regular";
			regular++;
			search=searchArray(order);
			}else if(strcmp(code, "2")==0){
				printf("\n\t\tPlease enter your quantity: ");
				scanf("%d", &quantity);
					while(quantity<1){
						printf("\n\t\tYour quantity is invalid. Must be 1 or more.");
						printf("\n\t\tPlease enter your quantity: ");
						scanf("%d", &quantity);}
			order[i]="Pretzel Dog - Jumbo Cheese";
			cheese++;
			search=searchArray(order);
			}else if(strcmp(code, "0")==0){
				total[a]=0;
				return total[a];
			}
		if(search==1){
			if(strcmp(code, "1")==0){
			newQuantity=productQuantity[i]+quantity;
			productQuantity[i]=newQuantity;
			total[a]=(7.50*newQuantity);
			i=prI;
			a=prI;
			i--;
			a--;
		}else if(strcmp(code, "2")==0){
			newQuantity=productQuantity[i]+quantity;
			productQuantity[i]=newQuantity;
			total[a]=(8.80*newQuantity);
			i=prI;
			a=prI;
			i--;
			a--;}
	}else{
	if(strcmp(code, "1")==0){
		productQuantity[i]=quantity;
		total[a]=(7.50*quantity);
	}else if(strcmp(code, "2")==0){
		productQuantity[i]=quantity;
		total[a]=(8.80*quantity);}
		}
		return total[a];
	}
}	
}

float pretzelStix1(){
int va1=0;
printf("\t\t________________________________________________________________________________\n");
printf("\t\t|      Pretzel Stix          |               Prizes                |    code    |\n");
printf("\t\t|____________________________|_____________________________________|____________|\n");
printf("\t\t|        Eclairs             |               RM 3.90               |      1     |\n");
printf("\t\t|____________________________|_____________________________________|____________|\n");
printf("\t\t|      Cinamon Sugar         |               RM 3.90               |      2     |\n");
printf("\t\t|____________________________|_____________________________________|____________|\n");
printf("\t\t|             Go back to Ala Carte                                 |      0     |\n");
printf("\t\t|__________________________________________________________________|____________|\n");
	while( va1 == 0 ) {
		printf("\n\t\tPlease choose your Pretzel Stix and Enter code: ");
    	scanf(" %s", &code);
			if (strcmp(code, "0")!=0 && strcmp(code, "1")!=0 && strcmp(code, "2")!=0 ) {
			system("cls");	
			printf("\t\t________________________________________________________________________________\n");
			printf("\t\t|      Pretzel Stix          |               Prizes                |    code    |\n");
			printf("\t\t|____________________________|_____________________________________|____________|\n");
			printf("\t\t|        Eclairs             |               RM 3.90               |      1     |\n");
			printf("\t\t|____________________________|_____________________________________|____________|\n");
			printf("\t\t|      Cinamon Sugar         |               RM 3.90               |      2     |\n");
			printf("\t\t|____________________________|_____________________________________|____________|\n");
			printf("\t\t|             Go back to Ala Carte                                 |      0     |\n");
			printf("\t\t|__________________________________________________________________|____________|\n");
			printf("\n\t\tInvalid code. Please enter 1, 2, or 0.");
			}else{
			va1=1;
				if(strcmp(code, "1")==0){
					printf("\n\t\tPlease enter your quantity: ");
					scanf("%d", &quantity);
					while(quantity<1){
						printf("\n\t\tYour quantity is invalid. Must be 1 or more.");
						printf("\n\t\tPlease enter your quantity: ");
						scanf("%d", &quantity);}
				order[i]="Pretzel Stix - Eclairs";
				eclairsS++;
				search=searchArray(order);
				}else if(strcmp(code, "2")==0){
					printf("\n\t\tPlease enter your quantity: ");
					scanf("%d", &quantity);
					while(quantity<1){
						printf("\n\t\tYour quantity is invalid. Must be 1 or more.");
						printf("\n\t\tPlease enter your quantity: ");
						scanf("%d", &quantity);}
				order[i]="Pretzel Stix - Cinamon Sugar";
				cinnamonSugar++;
				search=searchArray(order);
				}else if(strcmp(code, "0")==0){
					total[a]=0;
					return total[a];
				}
			if(search==1){
				if(strcmp(code, "1")==0){
				newQuantity=productQuantity[i]+quantity;
				productQuantity[i]=newQuantity;
				total[a]=(3.90*newQuantity);
				i=prI;
				a=prI;
				i--;
				a--;
				}else{
				newQuantity=productQuantity[i]+quantity;
				productQuantity[i]=newQuantity;
				total[a]=(3.90*newQuantity);
				i=prI;
				a=prI;
				i--;
				a--;}		
			}else{
				if(strcmp(code, "1")==0){
				productQuantity[i]=quantity;
				total[a]=(3.90*quantity);
				}else{
				productQuantity[i]=quantity;
				total[a]=(3.90*quantity);}
				}
			return total[a];

	}
}	
}

void dipsCombo(){
	int vaF1=0;
		printf("\n\t\t _________________________________________");
		printf("\n\t\t|              Dips         |    Code     |");
		printf("\n\t\t|___________________________|_____________|");
		printf("\n\t\t|            Cheese         |      1      |");
		printf("\n\t\t|___________________________|_____________|");
		printf("\n\t\t|            Caramel        |      2      |");
		printf("\n\t\t|___________________________|_____________|");
		printf("\n\t\t|           Chocolate       |      3      |");
		printf("\n\t\t|___________________________|_____________|");
	while( vaF1 == 0 ) {
		printf("\n\t\tPlease choose your dips and Enter code: ");
    	scanf(" %s", &code);
		if (strcmp(code, "1")!=0 && strcmp(code, "2")!=0 && strcmp(code, "3")!=0 ) {
		system("cls");
		printf("\n\t\t _________________________________________");
		printf("\n\t\t|              Dips         |    Code     |");
		printf("\n\t\t|___________________________|_____________|");
		printf("\n\t\t|            Cheese         |      1      |");
		printf("\n\t\t|___________________________|_____________|");
		printf("\n\t\t|            Caramel        |      2      |");
		printf("\n\t\t|___________________________|_____________|");
		printf("\n\t\t|           Chocolate       |      3      |");
		printf("\n\t\t|___________________________|_____________|");
		printf("\n\t\tInvalid code. Please enter 1, 2, 3, or 0.");
		}else{
		vaF1= 1;
		if(strcmp(code, "1")==0){
			sub[g]="Cheese";
			return;
		}else if(strcmp(code, "2")==0){
			sub[g]="Caramel";
			return;
		}else if(strcmp(code, "3")==0){
			sub[g]="Chocolate";
		}
}	
}
}

void premiumCombo(){
	int vaF2=0;
	printf("\n\t\t _________________________________________________________________");
	printf("\n\t\t|             Premium Pretzel            |          Code          |");
	printf("\n\t\t|________________________________________|________________________|");
	printf("\n\t\t|             Caramel Almond             |            1           |");
	printf("\n\t\t|________________________________________|________________________|");
	printf("\n\t\t|             Jalapeno Cheese            |            2           |");
	printf("\n\t\t|________________________________________|________________________|");	
	printf("\n\t\t|             Cheezy Turkey              |            3           |");
	printf("\n\t\t|________________________________________|________________________|");
	printf("\n\t\t|             Cinnamon Raison            |            4           |");
	printf("\n\t\t|________________________________________|________________________|");	
	printf("\n\t\t|             Plain Raisin               |            5           |");
	printf("\n\t\t|________________________________________|________________________|");
	while(vaF2==0) {
		printf("\n\t\tPlease choose your premium pretzel and Enter code: ");
		scanf(" %s", &code);
		if (strcmp(code, "1")!=0 && strcmp(code, "2")!=0 && strcmp(code, "3")!=0 && strcmp(code, "4")!=0 && strcmp(code, "5")!=0) {
		system("cls");	
			printf("\n\t\t _________________________________________________________________");
			printf("\n\t\t|             Premium Pretzel            |          Code          |");
			printf("\n\t\t|________________________________________|________________________|");
			printf("\n\t\t|             Caramel Almond             |            1           |");
			printf("\n\t\t|________________________________________|________________________|");
			printf("\n\t\t|             Jalapeno Cheese            |            2           |");
			printf("\n\t\t|________________________________________|________________________|");	
			printf("\n\t\t|             Cheezy Turkey              |            3           |");
			printf("\n\t\t|________________________________________|________________________|");
			printf("\n\t\t|             Cinnamon Raison            |            4           |");
			printf("\n\t\t|________________________________________|________________________|");	
			printf("\n\t\t|             Plain Raisin               |            5           |");
			printf("\n\t\t|________________________________________|________________________|");
			printf("\n\t\tInvalid code. Please enter 1, 2, 3, 4, or 5.");
		}else{
			vaF2=1;
			if(strcmp(code, "1")==0){
			sub[g]="Caramel Almond";
			return;
		}else if(strcmp(code, "2")==0){
			sub[g]="Jalapeno Cheese";
			return;
		}else if(strcmp(code, "3")==0){
			sub[g]="Cheezy Turkey";
			return;
		}else if(strcmp(code, "4")==0){
			sub[g]="Cinnamon Raison";
			return;
		}else if(strcmp(code, "5")==0){
			sub[g]="Plain Raisin";
			return;
		}
		}
	}
}

void beveragesCombo(){
	int vaF2=0;
	printf("\n\t\t _______________________________________________________________");
	printf("\n\t\t|                                       |                       |");
	printf("\n\t\t|             Beverages                 |         Code          |");
	printf("\n\t\t|                                       |                       |");
	printf("\n\t\t|_______________________________________|_______________________|");	
	printf("\n\t\t|         Lemonade fruit                |           1           |");
	printf("\n\t\t|_______________________________________|_______________________|");
	printf("\n\t\t|         Dutch Ice- Fruity Flavour     |           2           |");
	printf("\n\t\t|_______________________________________|_______________________|");	
	printf("\n\t\t|         Dutch Ice- Mocha              |           3           |");
	printf("\n\t\t|_______________________________________|_______________________|");		
	printf("\n\t\t|         Mineral Water                 |           4           |");
	printf("\n\t\t|_______________________________________|_______________________|");
while( vaF2 == 0 ) {
		printf("\n\t\tPlease choose your beverage and Enter code: ");
    	scanf(" %s", &code);	
		if (strcmp(code, "1")!=0 && strcmp(code, "2")!=0 && strcmp(code, "3")!=0 && strcmp(code, "4")!=0 ) {
		system("cls");
		printf("\n\t\t _______________________________________________________________");
		printf("\n\t\t|                                       |                       |");
		printf("\n\t\t|             Beverages                 |         Code          |");
		printf("\n\t\t|                                       |                       |");
		printf("\n\t\t|_______________________________________|_______________________|");	
		printf("\n\t\t|         Lemonade fruit                |           1           |");
		printf("\n\t\t|_______________________________________|_______________________|");
		printf("\n\t\t|         Dutch Ice- Fruity Flavour     |           2           |");
		printf("\n\t\t|_______________________________________|_______________________|");	
		printf("\n\t\t|         Dutch Ice- Mocha              |           3           |");
		printf("\n\t\t|_______________________________________|_______________________|");		
		printf("\n\t\t|         Mineral Water                 |           4           |");
		printf("\n\t\t|_______________________________________|_______________________|");
		printf("\n\t\tInvalid code. Please enter 1, 2, 3, or 4.");
		}else{
		vaF2=1;
		if(strcmp(code, "1")==0){
			sub[g]="Lemonade fruit";
			return;
		}else if(strcmp(code, "2")==0){
			sub[g]="Dutch Ice- Fruity Flavour";
			return;
		}else if(strcmp(code, "3")==0){
			sub[g]="Dutch Ice- Mocha";
			return;
		}else if(strcmp(code, "4")==0){
			sub[g]="Mineral Water";
			return;
		}
		}
		}	
			}

void pretzelStixCombo(){
int vaF3=0;
	printf("\n\t\t________________________________________________\n");
	printf("\n\t\t|          Pretzel Stix          |     Code     |\n");
	printf("\n\t\t|________________________________|______________|\n");
	printf("\n\t\t|            Eclairs             |       1      |\n");
	printf("\n\t\t|________________________________|______________|\n");
	printf("\n\t\t|          Cinamon Sugar         |       2      |\n");
	printf("\n\t\t|________________________________|______________|\n");
	while(vaF3==0) {
		printf("\n\t\tPlease choose your pretzel stix and Enter code: ");
		scanf(" %s", &code);
		if (strcmp(code, "1")!=0 && strcmp(code, "2")!=0 && strcmp(code, "3")!=0 && strcmp(code, "4")!=0 && strcmp(code, "5")!=0) {
		system("cls");	
			printf("\n\t\t________________________________________________\n");
			printf("\n\t\t|          Pretzel Stix          |     Code     |\n");
			printf("\n\t\t|________________________________|______________|\n");
			printf("\n\t\t|            Eclairs             |       1      |\n");
			printf("\n\t\t|________________________________|______________|\n");
			printf("\n\t\t|          Cinamon Sugar         |       2      |\n");
			printf("\n\t\t|________________________________|______________|\n");
			printf("\n\t\tInvalid code. Please enter 1, 2, 3, or 4.");
		}else{
			vaF3=1;
			if(strcmp(code, "1")==0){
			sub[g]="Eclairs";
			return;
		}else if(strcmp(code, "2")==0){
			sub[g]="Cinamon Sugar";
			return;
		}
		}
	}
}

void specialCombo(){
	int vaF3=0;
	printf("\n\t\t ___________________________________________________________");
	printf("\n\t\t|              Special            |           Code          |");
	printf("\n\t\t|_________________________________|_________________________|");
	printf("\n\t\t|          Cinammon sugar         |             1           |");
	printf("\n\t\t|_________________________________|_________________________|");
	printf("\n\t\t|          Sour and cream         |             2           |");
	printf("\n\t\t|_________________________________|_________________________|");	
	printf("\n\t\t|              Garlic             |             3           |");
	printf("\n\t\t|_________________________________|_________________________|");
	printf("\n\t\t|            Green Tea            |             4           |");
	printf("\n\t\t|_________________________________|_________________________|");	
	printf("\n\t\t|           Choc Eclairs          |             5           |");
	printf("\n\t\t|_________________________________|_________________________|");
	while( vaF3 == 0 ) {
		printf("\n\t\tPlease choose your beverage and Enter code: ");
    	scanf(" %s", &code);
		if (strcmp(code, "1")!=0 && strcmp(code, "2")!=0 && strcmp(code, "3")!=0 && strcmp(code, "4")!=0 && strcmp(code, "5")!=0 ) {
		system("cls");
		printf("\n\t\t ___________________________________________________________");
		printf("\n\t\t|              Special            |           Code          |");
		printf("\n\t\t|_________________________________|_________________________|");
		printf("\n\t\t|          Cinammon sugar         |             1           |");
		printf("\n\t\t|_________________________________|_________________________|");
		printf("\n\t\t|          Sour and cream         |             2           |");
		printf("\n\t\t|_________________________________|_________________________|");	
		printf("\n\t\t|              Garlic             |             3           |");
		printf("\n\t\t|_________________________________|_________________________|");
		printf("\n\t\t|            Green Tea            |             4           |");
		printf("\n\t\t|_________________________________|_________________________|");	
		printf("\n\t\t|           Choc Eclairs          |             5           |");
		printf("\n\t\t|_________________________________|_________________________|");
		printf("\n\t\tInvalid code. Please enter 1, 2, 3, 4 or 5.");
		}else{
		vaF3=1;
		if(strcmp(code, "1")==0){
			sub[g]="Cinammon sugar";
			return;
		}else if(strcmp(code, "2")==0){
			sub[g]="Sour and Cream";
			return;
		}else if(strcmp(code, "3")==0){
			sub[g]="Garlic";
			return;
		}else if(strcmp(code, "4")==0){
			sub[g]="Greentea";
			return;
		}else if(strcmp(code, "5")==0){
			sub[g]="Choc Eclairs";
			return;
		}
		}	
			}
	}

char *comboSet(){
	int vaC=0;
		printf("\n\t\t__________________________________________________________________________");
		printf("\n\t\t| TYPE                       | PRICE               | CODE                  |");
		printf("\n\t\t|____________________________|_____________________|_______________________|");
		printf("\n\t\t| ORIGINAL                   | RM 6.90             |  1                    |");
		printf("\n\t\t|       *1 Original          |                     |                       |");
		printf("\n\t\t|       *1 Drink             |                     |                       |");
		printf("\n\t\t|       *1 Dip               |                     |                       |");
		printf("\n\t\t|____________________________|_____________________|_______________________|");
		printf("\n\t\t| SPECIALITY                 | RM 9.20             |  2                    |");
		printf("\n\t\t|       *2 Speciality        |                     |                       |");
		printf("\n\t\t|       *1 Drink             |                     |                       |");
		printf("\n\t\t|____________________________|_____________________|_______________________|");
		printf("\n\t\t| PREMIUM                    |                     |  3                    |");
		printf("\n\t\t|       *1 Premium           | RM 7.20             |                       |");
		printf("\n\t\t|       *1 Drink             |                     |                       |");
		printf("\n\t\t|____________________________|_____________________|_______________________|");
		printf("\n\t\t| PRETZEL STIX               |                     |  4                    |");
		printf("\n\t\t|       *1 Original + 1 Drink| RM 6.00             |                       |");
		printf("\n\t\t|                            |                     |                       |");
		printf("\n\t\t|       *1 Cinnamon + 1 Drink| RM 6.40             |                       |");
		printf("\n\t\t|____________________________|_____________________|_______________________|");
		printf("\n\t\t| PRETZEL DOG                |                     |  5                    |");
		printf("\n\t\t|       *1 Regular + 1 Drink | RM 9.80             |                       |");
		printf("\n\t\t|                            |                     |                       |");
		printf("\n\t\t|       *1 Cheese + 1 Drink  | RM 11.10            |                       |");
		printf("\n\t\t|____________________________|_____________________|_______________________|");
		printf("\n\t\t|                                                  |  0                    |");
		printf("\n\t\t|        Go back to Main Menu                      |                       |");
		printf("\n\t\t|                                                  |                       |");
		printf("\n\t\t|                                                  |                       |");
		printf("\n\t\t|__________________________________________________|_______________________|");
		while( vaC == 0 ){
	printf("\n\t\tPlease choose any combo set: ");
    scanf(" %s", &code);
	if (strcmp(code, "0")!=0 && strcmp(code, "1")!=0 && strcmp(code, "2")!=0 && strcmp(code, "3")!=0 && strcmp(code, "4")!=0 && strcmp(code, "5")!=0) {
		system("cls");
		printf(" __________________________________________________________________________");
		printf("\n\t\t| TYPE                       | PRICE               | CODE                  |");
		printf("\n\t\t|____________________________|_____________________|_______________________|");
		printf("\n\t\t| ORIGINAL                   | RM 6.90             |  1                    |");
		printf("\n\t\t|       *1 Original          |                     |                       |");
		printf("\n\t\t|       *1 Drink             |                     |                       |");
		printf("\n\t\t|       *1 Dip               |                     |                       |");
		printf("\n\t\t|____________________________|_____________________|_______________________|");
		printf("\n\t\t| SPECIALITY                 | RM 9.20             |  2                    |");
		printf("\n\t\t|       *2 Speciality        |                     |                       |");
		printf("\n\t\t|       *1 Drink             |                     |                       |");
		printf("\n\t\t|____________________________|_____________________|_______________________|");
		printf("\n\t\t| PREMIUM                    |                     |  3                    |");
		printf("\n\t\t|       *1 Premium           | RM 7.20             |                       |");
		printf("\n\t\t|       *1 Drink             |                     |                       |");
		printf("\n\t\t|____________________________|_____________________|_______________________|");
		printf("\n\t\t| PRETZEL STIX               |                     |  4                    |");
		printf("\n\t\t|       *1 Original + 1 Drink| RM 6.00             |                       |");
		printf("\n\t\t|                            |                     |                       |");
		printf("\n\t\t|       *1 Cinnamon + 1 Drink| RM 6.40             |                       |");
		printf("\n\t\t|____________________________|_____________________|_______________________|");
		printf("\n\t\t| PRETZEL DOG                |                     |  5                    |");
		printf("\n\t\t|       *1 Regular + 1 Drink | RM 9.80             |                       |");
		printf("\n\t\t|                            |                     |                       |");
		printf("\n\t\t|       *1 Cheese + 1 Drink  | RM 11.10            |                       |");
		printf("\n\t\t|____________________________|_____________________|_______________________|");
		printf("\n\t\t|                                                  |  0                    |");
		printf("\n\t\t|        Go back to Main Menu                      |                       |");
		printf("\n\t\t|                                                  |                       |");
		printf("\n\t\t|                                                  |                       |");
		printf("\n\t\t|__________________________________________________|_______________________|");
		printf("\n\t\tInvalid code. Please enter 1, 2, 3, 4, 5 or 0.");
		}else{
			vaC= 1;
		return code;}
}
}

float receipt(float fullTotal){
	int y=0, m=1, p=1, q=1;
	float gst=0;
	time_t rawtime;
  	struct tm * timeinfo;

  	time ( &rawtime );
  	timeinfo = localtime ( &rawtime );
	printf("\t\t\t\t\t\tAuntie Anne's\n\t\t\t\t\tLG-82, Concourse Queensbay Mall, \n\t\t\t\t     Persiaran Bayan Lepas, Sungai Nibong, \n\t\t\t\t\t  11900, Bayan Lepas, Penang.");
	printf("\n\t\t\t\t\tChrisna Jenio Sdn Bhd (383083-H)\n\t\t\t\t\t    GST ID :000 485 834 752");
	printf("\n\n  ------------------------------------------------------------------------------------------------------------------");
	printf("\n\tInvoice: 001-709061\t\t\t\t\t\t\t\t\tTake Out");
	printf("\n\tDate: %d/%d/%d %d:%d:%d", timeinfo->tm_year + 1900, timeinfo->tm_mon + 1, timeinfo->tm_mday, timeinfo->tm_hour, timeinfo->tm_min, timeinfo->tm_sec);
	printf("\n  ------------------------------------------------------------------------------------------------------------------");
	if(i!=0){
		for(j=1;j<=i; j++){
        printf("\n\t%-80s %-10d RM%.2f", order[j] , productQuantity[j], total[j-1]);
		}
	}
	
		if(c!=0){
			for(y=1;y<=c;y++){
			printf("\n\t%-80s %-10d RM%.2f", ordercombo[y], productQuantityCombo[y], totalCombo[y]);
			q=1;
			for(m=p;q<=b[y];m++){
			printf("\n\t- %-80s", sub[m]);
			q++;}
			p=m;
		}
			}
    printf("\n\t\t\t\t\t\t\t\t\t\t\t---------------------");
	printf("\n\t\t\t\t\t\t\t\tTotal After Rounding\t    RM %.2f", fullTotal);
	printf("\n\t\t\t\t\t\t\t\t\t\t\t---------------------\n\t\t\t\t\t\t\t\t\t\t\t---------------------");
	gst=(fullTotal*0.06);
	printf("\n\t\t\t\t\t\t\t(Bill Inclusive of 6%% GST   :  RM%.2f )", gst);
	printf("\n\n\t\t\t\t\t\t\t\t\t\tCash       RM%.2f ", cash);
	printf("\n\t\t\t\t\t\t\t\t\t\tChange     RM%.2f ", cash-fullTotal);
	printf("\n\t\t\t\t\tThank You. Please come again.\n\t\t\t\t\t Comments/inquiry, email to\n\t\t\t\t\t  info@christinajenio.com");
	printf("\n\n  001-%d/%d/%d %d:%d:%d NUR SYIFAA 001-709061 [1]", timeinfo->tm_year + 1900, timeinfo->tm_mon + 1, timeinfo->tm_mday, timeinfo->tm_hour, timeinfo->tm_min, timeinfo->tm_sec);
	
}

float displayTotal(){
	int y=0, m=1, p=1, q=1;
	float totalAla, totalCom;
		system("cls");
		printf("\n  :::::::");
		printf("\n  :::::::");
		printf("\n	::::");
		printf("\n	:::::");
		printf("\n	 ::::");
		printf("\n	  ::::");
		printf("\n	  ::::::::::::::::::::::::::::::::::::::        :::::::         :::      :::::::    :::::::::::");
		printf("\n	  ::::::::::::::::::::::::::::::::::::::        ::             :: ::     ::   ::    :::::::::::");
		printf("\n	  ::::::::::::::::::::::::::::::::::::::        ::            :::::::    :::::::       ::::");
		printf("\n	  ::::::::::::::::::::::::::::::::::::::        ::           ::     ::   ::   :::      ::::");
		printf("\n	  ::::::::::::::::::::::::::::::::::::::        :::::::     ::       ::  ::    :::     ::::");
		printf("\n	     :::::::::::::::::::::::::::::::::::");
		printf("\n	      ::::::::::::::::::::::::::::::::::");
		printf("\n	      ::::::::::::::::::::::::::::::::::");
		printf("\n	     :::::::::::::::::::::::::::::::::::");
		printf("\n	      :::       :::         :::       :::");
		printf("\n	      ::         ::         ::         ::");
		printf("\n	      ::         ::         ::         ::");
		printf("\n	       :::      :::          :::      :::");
		printf("\n	        ::::::::::            ::::::::::");
		printf("\n    ________________________________________________________________________________");
		printf("\n   | Product						  |     Quantity            |");
		printf("\n   |______________________________________________________|_________________________|");
		if(i!=0){
		for(j=1;j<=i; j++){
        printf("\n   |    %-50s| %-24d|", order[j] , productQuantity[j]);
        printf("\n   |______________________________________________________|_________________________|");
		}
	}
	
		if(c!=0){
			for(y=1;y<=c;y++){
			printf("\n   |    %-50s| %-24d|", ordercombo[y], productQuantityCombo[y]);
			q=1;
			for(m=p;q<=b[y];m++){
			printf("\n   |  - %-50s|                         |", sub[m]);
			q++;}
			printf("\n   |______________________________________________________|_________________________|");
			p=m;
		}
		}
        fflush(stdout);
        for(k=0; k<=a; k++){
        	totalAla=totalAla+(total[k]);
		}
		for(k=1; k<=c; k++){
        	totalCom=totalCom+(totalCombo[k]);
		}
		fullTotal=totalAla+totalCom;
	printf("\n\n\t\t\t\t\t\tYour total is: RM %.2f", fullTotal);
	return fullTotal;
}	
	
int main(){
	int vaC1=0, vaC2=0, vaC3=0, chooseValid=0;
	char add[100], sure[100], exit[100];
	welcome:
	i=0, j=0, k=0, g=0, c=0, fullTotal=0;
	WelcomeScreen();
	valid_input=0;
	while( valid_input == 0 ) {
		printf("\n\t\t\t\tDo you wish to start? (1-Yes , 2-No, please shut down this kiosk): ");
		scanf(" %s", &decide);
		if(strcmp(decide, "1")==0 || strcmp(decide,"2")==0){
		valid_input = 1;
			if (strcmp(decide, "1")==0){
			goto next;
		}else{
			printf("\n\t\t\tAre you sure to shut down this kiosk (1-Yes , 2-No): ");
			scanf(" %s", &exit);
			while (strcmp(exit, "1")!=0 && strcmp(exit, "2")!=0){
				printf("\n\t\t\t\tInvalid choice, Please choose either of 1 or 2 only.");
				printf("\n\t\t\tAre you sure to shut down this kiosk (1-Yes , 2-No): ");
				scanf(" %s", &exit);
			}
			if (strcmp(exit, "1")==0){
				ranking();
				return 0; 
			}else{
				system("cls");
				goto welcome;}
				}
		}else {
		system("cls");
		WelcomeScreen();
		printf("\n\t\t\t\tInvalid choice, Please choose either of 1 or 2 only.");}
	}
	next:
	system("cls");
	char *code=Home();
	addon:
		valid_input=0;
		if(strcmp(code, "1")==0){
			system("cls");
			back:
   	 		char *code=alaCarte();
   	 		if(strcmp(code, "0")==0){
   	 			goto next;
				}
   	 		i++;
   	 		if (strcmp(code, "1")==0){
    				system("cls");
 		 			total[a]=softPretzel();
 		 			if (total[a]==0){
 		 				i--;
					  goto back;}
 		 			while( valid_input == 0 ) {
					printf("\n\t\tDo you want to add on? (Yes-1, No-2): ");
					scanf("  %s", &add);
					if(strcmp(add,"1")==0 || strcmp(add,"2")==0){
					valid_input = 1;
						if(strcmp(add,"1")==0){
						a++;
						system("cls");
						char *code=Home();
						goto addon;
						}else{
						displayTotal();}
					}else{
					printf("Invalid choice. Please enter either 1 or 2 only.");}
					}
				}else if (strcmp(code, "2")==0){
    				system("cls");
     				total[a]=dips();
					 if (total[a]==0){
					 	i--;
					  goto back;}				
					while( valid_input == 0 ) {
					printf("\n\t\tDo you want to add on? (Yes-1, No-2): ");
					scanf("  %s", &add);
					if(strcmp(add,"1")==0 || strcmp(add,"2")==0){
					valid_input = 1;
						if(strcmp(add,"1")==0){
						a++;
						system("cls");
						char *code=Home();
						goto addon;
						}else{
						displayTotal();}
					}else{
					printf("Invalid choice. Please enter either 1 or 2 only.");}
					}
				}else if (strcmp(code, "3")==0){
    				system("cls");
      				total[a]=beverages();
      				if (total[a]==0){
      					i--;
					  goto back;}
      				while( valid_input == 0 ) {
					printf("\n\t\tDo you want to add on? (Yes-1, No-2): ");
					scanf("  %s", &add);
					if(strcmp(add,"1")==0 || strcmp(add,"2")==0){
					valid_input = 1;
						if(strcmp(add,"1")==0){
						a++;
						system("cls");
						char *code=Home();
						goto addon;
						}else{
						displayTotal();}
					}else{
					printf("Invalid choice. Please enter either 1 or 2 only.");}
					}
				}else if (strcmp(code, "4")==0){ 
    				system("cls");
  					total[a]=pretzelDogs();
  					if (total[a]==0){
  						i--;
					  goto back;
					  }
  					while( valid_input == 0 ) {
					printf("\n\t\tDo you want to add on? (Yes-1, No-2): ");
					scanf("  %s", &add);
					if(strcmp(add,"1")==0 || strcmp(add,"2")==0){
					valid_input = 1;
						if(strcmp(add,"1")==0){
						a++;
						system("cls");
						char *code=Home();
						goto addon;
						}else{
						displayTotal();}
					}else{
					printf("Invalid choice. Please enter either 1 or 2 only.");}
					}
				}else if (strcmp(code, "5")==0){
    				system("cls");
     				total[a]=pretzelStix1();
     				if (total[a]==0){
     					i--;
					  goto back;}
     				while( valid_input == 0 ) {
					printf("\n\t\tDo you want to add on? (Yes-1, No-2): ");
					scanf("  %s", &add);
					if(strcmp(add,"1")==0 || strcmp(add,"2")==0){
					valid_input = 1;
						if(strcmp(add,"1")==0){
						a++;
						system("cls");
						char *code=Home();
						goto addon;
						}else{
						displayTotal();}
					}else{
					printf("Invalid choice. Please enter either 1 or 2 only.");}
					}
				}
   	 	}else{
   	 		system("cls");
    		char *code=comboSet();
    		c++;
    		if(strcmp(code, "0")==0){
    			c--;
				goto next;
			}else if (strcmp(code, "1")==0){
				original++;
				system("cls");		
				printf("\n\t\tYou have selected original set.");
				ordercombo[c]="Original Set";
				printf("\n\t\tPlease enter your quantity: ");
				scanf("%d", &quantity);
					while(quantity<1){
						printf("\n\t\tYour quantity is error. Must be 1 or more.");
						printf("\n\t\tPlease enter your quantity: ");
						scanf("%d", &quantity);}
					code1:
						for(repeat=0;repeat<quantity;repeat++){
				if(quantity<2){
					b[c]=3;
					g++;
					sub[g]="Original";
					system("cls");
					printf("\n\t\tPlease choose.");
					g++;
					dipsCombo();
					system("cls");
					printf("\n\t\tPlease choose");
					g++;
					beveragesCombo();
				}else{
					b[c]=(quantity*3);
					g++;
					sub[g]="Original";
					system("cls");
					printf("\n\t\tPlease choose for quantity %d.", repeat+1);
					g++;
					dipsCombo();
					system("cls");
					printf("\n\t\tPlease choose for quantity %d.", repeat+1);
					g++;
					beveragesCombo();}
					}
					productQuantityCombo[c]=quantity;
					totalCombo[c]=(6.90*quantity);
					system("cls");
					chooseValid=0;
					while(chooseValid==0){
						printf("\n\tAre you sure and confirm from what you recently choose? (1-Yes , 2-No! Repeat again please?): ");
						scanf("  %s", &sure);
						if(strcmp(sure, "1")!=0 && strcmp(sure, "2")!=0){
						system("cls");
						printf("\n\t\tInvalid answer. Please answer either 1 or 2 only.");
						}else{
						chooseValid=1;
							if(strcmp(sure, "2")==0){
							g=g-(3*quantity);
							goto code1;}
						}
					}
				}else if(strcmp(code, "2")==0){
					speciality++;
					system("cls");
					printf("\n\t\tYou have selected speciality set.");
					printf("\n\t\tPlease enter your quantity: ");
					scanf("%d", &quantity);
						while(quantity<1){
							printf("\n\t\tYour quantity is error. Must be 1 or more.");
							printf("\n\t\tPlease enter your quantity: ");
							scanf("%d", &quantity);}
					code2:
					for(repeat=0;repeat<quantity;repeat++){
						if(quantity<2){
							b[c]=3;
							ordercombo[c]="Speciality Set";
							system("cls");
							printf("\n\t\tPlease choose.");
							g++;
							beveragesCombo();
							system("cls");
							printf("\n\t\tPlease choose.");
							printf("\n\t\tPlease choose first speciality.");
							g++;
							specialCombo();
							system("cls");
							printf("\n\t\tPlease choose");
							printf("\n\t\tPlease choose second speciality.");
							g++;
							specialCombo();
					}else{
						b[c]=3*quantity;
						ordercombo[c]="Speciality Set";
						system("cls");
						printf("\n\t\tPlease choose for quantity %d.", repeat+1);
						g++;
						beveragesCombo();
						system("cls");
						printf("\n\t\tPlease choose for quantity %d.", repeat+1);
						printf("\n\t\tPlease choose first speciality.");
						g++;
						specialCombo();
						system("cls");
						printf("\n\t\tPlease choose for quantity %d.", repeat+1);
						printf("\n\t\tPlease choose second speciality.");
						g++;
						specialCombo();}
					}
					productQuantityCombo[c]=quantity;
					totalCombo[c]=(9.20*quantity);
					system("cls");
					chooseValid=0;
					while(chooseValid==0){
						printf("\n\tAre you sure and confirm from what you recently choose? (1-Yes , 2-No! Repeat again please?): ");
						scanf("  %s", &sure);
						if(strcmp(sure, "1")!=0 && strcmp(sure, "2")!=0){
						system("cls");
						printf("\n\t\tInvalid answer. Please answer either 1 or 2 only.");
						}else{
						chooseValid=1;
							if(strcmp(sure, "2")==0){
							g=g-(3*quantity);
							goto code2;}
						}
					}
				}else if(strcmp(code, "3")==0){
					premium++;
					system("cls");
					printf("\n\t\tYou have selected premium set.");
					printf("\n\t\tPlease enter your quantity: ");
					scanf("%d", &quantity);
						while(quantity<1){
							printf("\n\t\tYour quantity is error. Must be 1 or more.");
							printf("\n\t\tPlease enter your quantity: ");
							scanf("%d", &quantity);}
					code3:
					for(repeat=0;repeat<quantity;repeat++){
					if(quantity<2){
						b[c]=2;
						ordercombo[c]="Premium Set";
						system("cls");
						printf("\n\t\tPlease choose.");
						g++;
						premiumCombo();
						system("cls");
						printf("\n\t\tPlease choose.");
						g++;
						beveragesCombo();
				}else{
					b[c]=2*quantity;
					ordercombo[c]="Premium Set";
					system("cls");
					printf("\n\t\tPlease choose for quantity %d.", repeat+1);
					g++;
					premiumCombo();
					system("cls");
					printf("\n\t\tPlease choose for quantity %d.", repeat+1);
					g++;
					beveragesCombo();}
				}
					productQuantityCombo[c]=quantity;
					totalCombo[c]=(7.20*quantity);
					system("cls");
					chooseValid=0;
					while(chooseValid==0){
						printf("\n\tAre you sure and confirm from what you recently choose? (1-Yes , 2-No! Repeat again please?): ");
						scanf("  %s", &sure);
						if(strcmp(sure, "1")!=0 && strcmp(sure, "2")!=0){
						system("cls");
						printf("\n\t\tInvalid answer. Please answer either 1 or 2 only.");
						}else{
						chooseValid=1;
							if(strcmp(sure, "2")==0){
							g=g-(2*quantity);
							goto code3;}
						}
					}
				}else if(strcmp(code, "4")==0){
				pretzelStix++;
				char code4[100];
					system("cls");
					printf("\n\t\tYou have selected pretzel stix set.");
					printf("\n\t\tPlease enter your quantity: ");
					scanf("%d", &quantity);
						while(quantity<1){
							printf("\n\t\tYour quantity is error. Must be 1 or more.");
							printf("\n\t\tPlease enter your quantity: ");
							scanf("%d", &quantity);}
					code4:
					system("cls");
					vaC2=0;
					while( vaC2 == 0 ) {
					for(repeat=0;repeat<quantity;repeat++){
					if(quantity<2){
						printf("\n\t\tPlease choose your pretzel stix (1-Original , 2-Cinnamon ): ");
						scanf("  %s", &code4);
						if (strcmp(code4, "1")!=0 && strcmp(code4, "2")!=0){
						system("cls");
						printf("\n\t\tInvalid code. Please enter 1, or 2");
						}else{
						vaC2= 1;
						if(strcmp(code4, "1")==0){
						productQuantityCombo[c]=quantity;
						totalCombo[c]=(6.00*quantity);
						b[c]=2;
						ordercombo[c]=("Pretzel Stix Set");
						g++;
						sub[g]="Original";
						system("cls");
						printf("\n\t\tPlease choose.");
						g++;
						beveragesCombo();
						}else if(strcmp(code4, "2")==0){
						productQuantityCombo[c]=quantity;
						totalCombo[c]=(6.40*quantity);
						b[c]=2;
						ordercombo[c]=("Pretzel Stix Set");
						g++;
						sub[g]="Cinnamon";
						system("cls");
						printf("\n\t\tPlease choose.");
						g++;
						beveragesCombo();}
					}
				}else{
						printf("\n\t\tPlease choose your pretzel stix for quantity %d (1-Original , 2-Cinnamon ): ", repeat+1);
						scanf(" %s",&code4);
						if (strcmp(code4, "1")!=0 && strcmp(code4, "2")!=0) {
						system("cls");
						printf("\n\t\tInvalid code. Please enter 1, or 2");
						repeat--;
						}else{
						vaC2= 1;
						if(strcmp(code4, "1")==0){
						productQuantityCombo[c]=quantity;
						totalCombo[c]=(6.00*quantity);
						b[c]=2*quantity;
						ordercombo[c]=("Pretzel Stix Set");
						g++;
						sub[g]="Original";
						system("cls");
						printf("\n\t\tPlease choose for quantity %d.", repeat+1);
						g++;
						beveragesCombo();
						system("cls");
						}else if(strcmp(code4, "2")==0){
						productQuantityCombo[c]=quantity;
						totalCombo[c]=(6.40*quantity);
						b[c]=2*quantity;
						ordercombo[c]=("Pretzel Stix Set");
						g++;
						sub[g]="Cinnamon";
						system("cls");
						printf("\n\t\tPlease choose for quantity %d.", repeat+1);
						g++;
						beveragesCombo();
						system("cls");}
					}
						}
				}
					}	
					
			}else if(strcmp(code, "5")==0){
				pretzelDog++;
	char code5[100];
		system("cls");
		printf("\n\t\tYou have selected Pretzel Dog set.");
		printf("\n\t\tPlease enter your quantity: ");
		scanf("%d", &quantity);
		while(quantity<1){
			printf("\n\t\tYour quantity is error. Must be 1 or more.");
			printf("\n\t\tPlease enter your quantity: ");
			scanf("%d", &quantity);}
	code5:
	system("cls");
	vaC3=0;
	while( vaC3 == 0 ){
		for(repeat=0;repeat<quantity;repeat++){
			if(quantity<2){
				system("cls");
						printf("\n\t\tPlease choose your pretzel dog for quantity (1-Regular , 2-Cheese ): ");
						scanf(" %s", &code5);
						if (strcmp(code5, "1")!=0 && strcmp(code5, "2")!=0){
						system("cls");
						printf("\n\t\tInvalid code. Please enter 1, or 2");
						repeat--;
						}else{
							vaC3= 1;
							if(strcmp(code5, "1")==0){
							productQuantityCombo[c]=quantity;
							totalCombo[c]=(9.80*quantity);
							b[c]=2;
							ordercombo[c]=("Pretzel Dog Set");
							g++;
							sub[g]="Regular";
							system("cls");
							printf("\n\t\tPlease choose.");
							g++;
							beveragesCombo();
							}else if(strcmp(code5, "2")==0){
							productQuantityCombo[c]=quantity;
							totalCombo[c]=(11.10*quantity);
							b[c]=2;
							ordercombo[c]=("Pretzel Dog Set");
							g++;
							sub[g]="Cheese";
							system("cls");
							printf("\n\t\tPlease choose.");
							g++;
							beveragesCombo();}
						}
			}else{
						system("cls");
						printf("\n\t\tPlease choose your pretzel dog for quantity %d (1-Regular , 2-Cheese ): ", repeat+1);
						scanf(" %s", &code5);
						if (strcmp(code5, "1")!=0 && strcmp(code5, "2")!=0){
						system("cls");
						printf("\n\t\tInvalid code. Please enter 1, or 2");
						repeat--;
						}else{
						vaC3=1;
						if(strcmp(code5, "1")==0){
							productQuantityCombo[c]=quantity;
							totalCombo[c]=(9.80*quantity);
							b[c]=2*quantity;
							ordercombo[c]=("Pretzel Dog Set");
							g++;
							sub[g]="Regular";
							system("cls");
							printf("\n\t\tPlease choose for quantity %d.", repeat+1);
							g++;
							beveragesCombo();
							}else if(strcmp(code5, "2")==0){
							productQuantityCombo[c]=quantity;
							totalCombo[c]=(11.10*quantity);
							b[c]=2*quantity;
							ordercombo[c]=("Pretzel Dog Set");
							g++;
							sub[g]="Cheese";
							system("cls");
							printf("\n\t\tPlease choose for quantity %d.", repeat+1);
							g++;
							beveragesCombo();}
						}
				
			}
		}
	}
					system("cls");
					chooseValid=0;
					while(chooseValid==0){
						printf("\n\tAre you sure and confirm from what you recently choose? (1-Yes , 2-No! Repeat again please?): ");
						scanf("  %s", &sure);
						if(strcmp(sure, "1")!=0 && strcmp(sure, "2")!=0){
						system("cls");
						printf("\n\t\tInvalid answer. Please answer either 1 or 2 only.");
						}else{
						chooseValid=1;
							if(strcmp(sure, "2")==0){
							g=g-(2*quantity);
							goto code5;}
						}
					}
	
}
			valid_input=0;		
				 while( valid_input == 0 ) {
					printf("\n\t\tDo you want to add on? (Yes-1, No-2): ");
					scanf("  %s", &add);
					if(strcmp(add,"1")==0 || strcmp(add,"2")==0){
					valid_input = 1;
						if(strcmp(add,"1")==0){
						a++;
						system("cls");
						char *code=Home();
						goto addon;
						}else{
						displayTotal();}
					}else{
					printf("\n\t\tInvalid choice. Please enter either 1 or 2 only.");}
				}
   	 		
		}
		exit:
		printf("\n\n\t\t\t\tDo you wish to checkout? (1-Yes , 2-No, 3-Start over again): ");
		scanf(" %s", &decide);
		while (strcmp(decide, "1")!=0 && strcmp(decide, "2")!=0 && strcmp(decide, "3")!=0){
				printf("\n\t\t\t\tInvalid choice, Please choose either of 1,2 or 3 only.");
				printf("\n\n\t\t\t\tDo you wish to checkout? (1-Yes , 2-No, 3-Start over again): ");
				scanf(" %s", &decide);
			}
		if(strcmp(decide, "1")==0){
		system("cls");
		printf("Please insert money to pay: RM ");
		scanf("%f", &cash);
		while(cash<fullTotal){
		printf("\nYou insert insufficient money. Your amount is RM %.2f \nPlease insert money to pay: RM ", fullTotal);
		scanf("%f", &cash);
		}
		system("cls");
		receipt(fullTotal);
		}else if(strcmp(decide, "2")==0){
		system("cls");
		printf("\n\t\tAre you sure? (1-Yes , 2-No): ");
		scanf(" %s", &sure);
		while(strcmp(sure, "1") != 0 && strcmp(sure, "2") != 0){
			printf("Invalid choice. Please choose either 1 or 2 only.");
			printf("\n\t\tAre you sure?(1-Yes , 2-No): ");
			scanf(" %s", &sure);
		}
			if(strcmp(sure, "1") == 0){
				goto next;;	
			}else{
				displayTotal();
			}
		}else if(strcmp(decide, "3")==0){
		goto welcome;
		}
		valid_input=0;
	while( valid_input == 0 ) {
		printf("\n\t\t\t\tIs there any customer? (1-Yes , 2-No, Please shut down this kiosk): ");
		scanf(" %s", &decide);
		printf("%s", decide);
		if(strcmp(decide, "1")==0 || strcmp(decide,"2")==0){
		valid_input = 1;
			if (strcmp(decide, "1")==0){
			goto welcome;
		}else{
			printf("\n\t\t\tAre you sure to shut down this kiosk (1-Yes , 2-No): ");
			scanf(" %s", &exit);
			while (strcmp(exit, "1")!=0 && strcmp(exit, "2")!=0){
				printf("\n\t\t\t\tInvalid choice, Please choose either of 1 or 2 only.");
				printf("\n\t\t\tAre you sure to shut down this kiosk (1-Yes , 2-No): ");
				scanf(" %s", &exit);
			}
			if (strcmp(exit, "1")==0){
				ranking();
				return 0; 
			}else{
				system("cls");
				goto welcome;}
				}
		}else {
		system("cls");
		WelcomeScreen();
		printf("\n\t\t\t\tError input, Please insert either of 1 or 2 only.");}
	}
	return 0;
}
