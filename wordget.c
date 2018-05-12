#include <stdio.h>
#include <stdlib.h> 
#include <string.h>      
#include "interface.h"

	void GeradorOfnumber(void)
	{                                        
		FILE *fp;  
		int i,op; 
		int n1,n2;
		int temp;       

			fp = fopen("WORDLISTS\\wordlist.txt","w");     
			if (fp == NULL)    
			{  
				printf ("ocorreu um erro ");
			}
                                                              
			printf ("[>] QUANTIDADE INICIAL [> ]"); 
				scanf ("%d",&n1);

			printf ("[>] QUANTIDADE FINAL [> ]");
				scanf ("%d",&n2);

				 system ("cls");
				 printf ("[!]          CTRL + C PARA IMTERROMPER         [!]\n");
				 printf ("[!] SUA WORDLIST SERA SALVA NA PASTA WORDLISTS [!]\n\n");
				 printf ("[+]    APERTE QUALQUER TECLA PARA CONTINUAR    [+]");
				 	getch();
					

				if (n1 > n2)
				{
					printf ("\n[-] A QUANTIDADE INICIAL NAO PODE SER MAIOR QUE A FINAL [-]\n");
					printf ("[>] DESEJA REINICIAR [1]SIM [2]NAO [> ]");
						scanf ("%d",&temp);
						if (temp == 1) 
						{	
							system("cls");
							main();
						}else
						{
							exit(1); 
						}
				}

			for (i=n1; i <= n2; i++) 
			{	                   
			
			system("CLS");	
			  fprintf (fp,"%d\n",i);
			    printf ("[-] GERANDO -> [%d] <-> [%d] [-] ",i,n2,n1);
				
			}
			
			printf ("-> [+]  CONCLUIDO  [+]\n\n");
			  fclose(fp);
			 
			  printf ("[+] A WORDLIST FOI SALVA NA PASTA WORDLISTS [+]\n");
			  printf ("[>]  DESEJA ABRIR WORDLIST [1]SIM [2]NAO   [> ]");
			  	scanf ("%d",&op);
			  	
			  	if (op == 1)
			  	{
					system ("notepad WORDLISTS\\wordlist.txt"); //abri a wordlist//
			  	}else
			  	{
			  		exit(1);
			  	}
    	}

	void GeradorOfnumberString(void)
	{
		char str1[124],str2[124];
		int n1,n2, v; 
		int op,i,j,op1;

		FILE *fp;

			fp = fopen("WORDLISTS\\wordliststr.txt","w");
			if (fp == NULL)     
			{
				printf ("erro ao criar");
			}
			
				printf ("[>] NUMEROS [1]NO COMECO DA STRING [2]NO FIM [> ]");
					scanf ("%d",&op);

						if (op == 1) 
						{  
						 gets(str1);  
						   printf ("[>] INFORME UMA STRING [A-Z-0-9] [> ]");
						     gets(str1);


							printf ("[>] INFORME UM NUMERO INICIAL [> ]");
								scanf ("%d",&n1);

							printf ("[>] INFORME UM NUMERO FINAL [> ]");
								scanf ("%d",&n2);

								 system ("cls");
								 printf ("[!]          CTRL + C PARA IMTERROMPER         [!]\n");
								 printf ("[!] SUA WORDLIST SERA SALVA NA PASTA WORDLISTS [!]\n\n");
							     printf ("[+]    APERTE QUALQUER TECLA PARA CONTINUAR    [+]");
								 	getch();

								for (i=n1; i <= n2; i++)
								{				

									system("cls");
									  fprintf(fp, "%d%s\n",i,str1);
										printf ("[-] GERANDO -> [%d%s] <-> [%d] [-] ",i,str1,n2);

								}
						}if (op == 2)
						{
							gets(str1); 
							  printf ("[>] INFORME UMA STRING [A-Z-0-9] [> ]");
						   		gets(str1);

							printf ("[>] INFORME UM NUMERO INICIAL [> ]");
								scanf ("%d",&n1);

							printf ("[>] INFORME UM NUMERO FINAL [> ]");
								scanf ("%d",&n2);

								system ("cls");
								printf ("[!]          CTRL + C PARA IMTERROMPER         [!]\n");
								printf ("[!] SUA WORDLIST SERA SALVA NA PASTA WORDLISTS [!]\n\n");
								printf ("[+]    APERTE QUALQUER TECLA PARA CONTINUAR    [+]");
									getch();
					

								for (i=n1; i <= n2; i++)
								{	

									system("cls");
									  fprintf(fp, "%s%d\n",str1,i);
										printf ("[-] GERANDO -> [%s%d] <-> [%d] [-] ",str1,i,n2);

								}

							}
						
				
						printf ("-> [+]  CONCLUIDO  [+]\n\n");						
				   		  fclose(fp);

				   		printf ("[+] A WORDLIST FOI SALVA NA PASTA WORDLISTS [+]\n");
			 			printf ("[>]   DESEJA ABRIR WORDLIST [1]SIM [2]NAO  [> ]");	
			 				scanf ("%d",&op1);
			  	
			  				if (op1 == 1)
			  				{
								system ("notepad WORDLISTS\\wordliststr.txt"); //abri a wordlist//
			  				}else
			  				{
			  					exit(1);
			  				}
			  			}


	void GeradorOfCell(void)
	{
		char str1[126], str2[126];
		int i,j;
		int prefixo;
		int n1,n2,op,op2;
		FILE *fp;

		fp = fopen("WORDLISTS\\wordlistCell.txt","w");
		if (fp == NULL)
		{
			printf ("erro ao criar"); 
		}

			printf ("[>] INFORME O NUMERO DA REGIAO EX[91] [ >]");
				scanf ("%d",&prefixo);

			printf ("DESEJA GERAR [1]NO COMECO [2]NO FIM [ >]");
				scanf ("%d",&op);

				if (op == 1)
				{

				gets(str1);	
				   printf ("[>] INFORME O FINAL DO NUMERO [ >]");
					 gets(str1);

					 system ("cls");
					 printf ("[!]          CTRL + C PARA IMTERROMPER         [!]\n");
					 printf ("[!] SUA WORDLIST SERA SALVA NA PASTA WORDLISTS [!]\n\n");
					 printf ("[+]    APERTE QUALQUER TECLA PARA CONTINUAR    [+]");
					 getch();
					
					 for (i=1000; i <9999; i++) 
					 {	
					
					 	fprintf (fp,"(%d) 9 %d-%s\n",prefixo, i, str1);
					      printf ("[-] GERANDO (%d) 9 %d-%s [-] ",prefixo, i, str1);
					      	system ("cls");
					 	    
					 }

					 printf (" -> [+] CONCLUIDO [+]\n\n");
					   fclose(fp);

					   printf ("[+] A WORDLIST FOI SALVA NA PASTA WORDLISTS [+]\n");
			 		   printf ("[>]   DESEJA ABRIR WORDLIST [1]SIM [2]NAO  [> ]");	
			 				scanf ("%d",&op2);
			  	
			  				if (op == 1)
			  				{
								system ("notepad WORDLISTS\\wordlistCell.txt"); //abri a wordlist//
			  				}else
			  				{
			  					exit(1);
			  				}

				}if (op == 2)
				{
					gets(str1);
				  	  printf ("[>] INFORME O INICIO DO NUMERO [ >]");
				  	  	gets(str1);

				  	    system ("cls");
					    printf ("[!]          CTRL + C PARA IMTERROMPER         [!]\n");
					    printf ("[!] SUA WORDLIST SERA SALVA NA PASTA WORDLISTS [!]\n\n");
					    printf ("[+]    APERTE QUALQUER TECLA PARA CONTINUAR    [+]");
					      getch();
					

				  	  	for (i=1000; i < 9999; i++)
				  	  	{
				  	  		fprintf (fp,"(%d) 9 %s-%d\n",prefixo, str1, i);
						 	  printf ("[-] GERANDO (%d) 9 %s-%d [-] ",prefixo, str1, i);
						 	    system ("cls");

				  	  	}

				  	  	printf (" -> [+] CONCLUIDO [+]\n\n");
				  	  	  fclose(fp);
					        
					        printf ("[+] A WORDLIST FOI SALVA NA PASTA WORDLISTS [+]\n");
			 				printf ("[>]   DESEJA ABRIR WORDLIST [1]SIM [2]NAO  [> ]");	
			 					scanf ("%d",&op2);
			  	
			  				if (op == 1)
			  				{
								system ("notepad WORDLISTS\\wordlistCell.txt"); //abri a wordlist//
			  				}else
			  				{
			  					exit(1);
			  				}				
				}
	}

	void helps(void)
	{	
		int oph;
		
		system ("cls");
		interface();

		printf ("[1]GERA NUMEROS ALEATORIOS ENTRE INTERVALOS DE TEMPO EX: DE X A X\n");
		printf ("[2]GERA NUMEROS COM STRINGS EX: ADMINxxx O xxx E O NUMERO ALEATORIO\n");
		printf ("[3]GERA NUMEROS DE TELEFONE CELULAR EX: XX 9 8354-XXXX O XXXX E O NUMERO ALEATORIO\n");
		printf ("[4]AJUDA\n\n");

		printf ("[+]AUTOMATICAMENTE O PROGRAMA GERA UM ARQUIVO COM A WORDLIST[+]\n");
		printf ("[1]NA PRIMEIRA OPCAO GERA UMA WORDLIST COM O NOME [WORDLIST.TXT]\n");
		printf ("[2]NA SEGUNDA OPCAO GERA UMA WORDLIST COM O NOME [WORDLISTSTR.TXT]\n");
		printf ("[3]NA TERCEIRA OPCAO GERA UMA WORDLIST COM O NOME [WORDLISTCELL.TXT]\n\n");

		printf ("[+]AVISO: A WORDLIST SERA GERADA NO LOCAL DE EXECUCAO DO PROGRAMA[+]\n\n");
		 getch();

		printf ("[>]DESEJA CONTINUAR [1]SIM [2]NAO [ >]");
			scanf("%d",&oph);

			if (oph == 1)
			{	
				system("cls");
				main();
			}else
			{
				exit(1);
			}
	}

	int main(void)                
	{
		int ops;

		do{
			
			system ("cls");
			interface(); //função externa que chama a interface do sistema//

			printf ("[1]GERADOR DE NUMEROS\n");
			printf ("[2]GERADOR DE NUMERO COM STRING\n");
			printf ("[3]GERADOR DE NUMERO DE TELEFONE\n");
			printf ("[4]AJUDA\n\n");
			printf ("[> ]");
				scanf ("%d",&ops);

		 }while(ops < 1 || ops > 4); 

			if (ops == 1)
			{
				GeradorOfnumber();
				
			}else if (ops == 2)
			{
				GeradorOfnumberString();
				
			}else if (ops == 3)
			{
				GeradorOfCell();
			
			}else if (ops == 4)
			{
				helps();
			}
}