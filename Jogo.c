#include <stdio.h>
#include <stdlib.h>
#include <conio.h>	//bibliotecas usadas
#include <windows.h>
#include <locale.h>
#include <stddef.h>
#include <time.h>

#define ANSI_COLOR_RED      "\x1b[31m"
#define ANSI_COLOR_RESET    "\033[0;0m"
#define ANSI_COLOR_MAGENTA  "\033[1;35m"
#define ANSI_COLOR_CYAN     "\033[1;36m"	//definindo cores a serem usadas no código 
#define ANSI_COLOR_AZUL     "\033[1;34m"
#define ANSI_COLOR_VERDE    "\033[1;32m"

void jogo()
{
	const long num_loops = 600000000L;//contador da CPU
	char nome[50];//variável string para os nomes
	int start, opcoes, atk,v1=30,v2=20,duration,minuto,pont=0;// variáveis de manipulação
	long i = num_loops;//contador da CPU e a variável do cronômetro
	clock_t comeco,finish;//variáveis do cronômetro início e fim
	setlocale(LC_ALL,"portuguese");//configurando a linguagem do programa para reconhecer o português
	system("Color 3f");//cor do fundo do console
	
	comeco = clock();//começo do cronômetor
	while(i--);//cronômetro
	printf(" --- As AVENTURAS DE MARCIO BRO ---\n");//abertura
	printf(" --> Digite o seu nome de jogador: ");//nome do jogador
	scanf("%s",&nome);//variável nome adquirindo valor
    
    printf("\nMarcio bro é um carteiro que nasceu no Rio de janeiro e como qualquer brasileiro de 20 anos ele é calvo e adora uma cervejinha no final de semana.\n");
	
	printf("\nDeseja iniciar essa jornada? Digite {1} para sim ou Digite {2} para não\n");
	scanf("%d", &start);//variável start adquirindo valor
	
	system("cls");//limpar tela
	
	//CERES VOCÊ É A MELHOR
	if(start == 1){//Começar a jornada
		printf("KKKKKKKKKKKK, boa sorte\n");//humor
		pont+=2;//pontuação aumenta dois
		Sleep(3000);//Tempo de espera para deixar mais dinâmico
		
		system("cls");//limpar tela
		
		printf("\nUm belo dia, Marcio foi fazer as suas entregas diárias.\n");
		system("pause");//Espera o jogador digitar qualquer coisa para avançar
		system("cls");//limpar tela
		printf("Andando pela rua em sua bike caloi, encontrou o caminho para o bar.\n");
		system("pause");//Espera o jogador digitar qualquer coisa para avançar
		system("cls");//limpar tela
		printf("\n Você vai para o bar ou continuará fazendo entregas??\n");
		printf("|Digite {1} se deseja ir para o bar|\n|Digite {2} se deseja continuar entregando cartas|\n");
		scanf("%d", &opcoes);//Variável opcoes adquirindo valor
		
		system("cls");//limpar tela
	
		if(opcoes == 1){//Quebra violão de Fagner
			
			pont+=2;//pontuação aumenta dois
			
			printf("Chegando no bar, Marcio Bro avista a gangue de Ceres contra os Queridinho de Alexssandra.\n");
			system("pause");//Espera o jogador digitar qualquer coisa para avançar
			system("cls");//limpar tela
			
			printf("Movido pela raiva pois não tinha como tomar cachaça, Marcio bro decide brigar com o líder da gangue Queridinhos de Alexssandra\n");
			system("pause");//Espera o jogador digitar qualquer coisa para avançar
			system("cls");//limpar tela
			
			printf("Fagner (Líder dos Queridinhos de Alexssandra) - Ora bolas, se não e o Marcio, aquele que...\n");
			system("pause");//Espera o jogador digitar qualquer coisa para avançar
			system("cls");//limpar tela
			
			printf("Marcio Bro - Sou eu mesmo, cantorzinho mixuruca\n");
			system("pause");//Espera o jogador digitar qualquer coisa para avançar
			system("cls");//limpar tela
			
			printf("Fagner toma uma lapada de CANA e vem pra cima de você. O QUE VOCÊ FAZ??\n");
			printf("|Digite {1} se deseja quebrar o violão de Fagner|\n|Digite {2} se deseja abraça-lo\n");
			scanf("%d", &opcoes);//Variável opcoes adquirindo valor
			
			system("cls");//limpar tela
			
			if(opcoes == 1){//Quebra violão de Fagner
				
				pont++;//pontuação aumenta um
				
				printf("Após ter seu violão quebrado por Marcio Bro. Fagner desiste de cantar e se aposenta.\n");
				system("pause");//Espera o jogador digitar qualquer coisa para avançar
				system("cls");//limpar tela
				
				printf("Marcio Bro vendo que seu cantor favorito se aposentou e desistiu de suas aventuras, fica triste e fica escutando as músicas do seu ídolo até sua aposentadoria como carteiro.\n");
				system("pause");//Espera o jogador digitar qualquer coisa para avançar
				system("cls");//limpar tela
				
				printf("  -----> FIM <----- ");//FIM DE JOGO
				system("pause");//Espera o jogador digitar qualquer coisa para avançar
				
			}else if (opcoes == 2){//Abraça Fagner
				
				pont+=2;//pontuação aumenta dois
				
				printf("Fagner se acalma e se junta a Marcio Bro para aventura que está por vir\n");
				system("pause");//Espera o jogador digitar qualquer coisa para avançar
				system("cls");//limpar tela
				
				printf("Porém, os clientes do bar esperavam o show de Fagner, mas Fagner desistiu do show para se juntar a Marcio\n");
				system("pause");//Espera o jogador digitar qualquer coisa para avançar
				system("cls");//limpar tela
				
				printf("Irados com a decisão do cantor, a gangue de Ceres e os Queridinhos de Alexsandra começam a brigar\n");
				printf("O COMBATE SE DAR ENTRE:\n");
				Sleep(3000);//Tempo de espera para deixar mais dinâmico
				printf("MARCIO BRO\tCONTRA\tQUERIDINHO DE ALEXSANDRA\n");
				printf("Mas, para toda briga precisa-se identificar a força de cada um\n");
				printf("Que aqui se dar pelos seus atributos.\n");
				system("pause");//Espera o jogador digitar qualquer coisa para avançar
				system("cls");//limpar tela
				
				printf("\t\t_________________________________________________\n");
				printf("\t\t|MARCIO BRO\t|\tQUERIDINHO DE ALEXSANDRA|\n");
				printf("\t\t|Força:15\t|\tForça:10                |\n");//atributos
				printf("\t\t|Defesa:15\t|\tDefesa:10               |\n");
				printf("\t\t|Vida:%d  \t|\tVida:%d                 |\n",v1,v2);
				printf("\t\t_________________________________________________\n");
				
				printf("Atacar com:\n1 - um pedaço de madeira [10 de dano]\nou\n2 - uma garrafa [12 de dano] ?\n");//opções de ataque
				scanf("%d",&atk);//Variável atk adquirindo valor
				while(v2>0){//enquanto não for negativo 
					if(atk==1){//primeira opção de ataque
						system("cls");//limpar tela
								
						printf("O QUERIDINHO DE ALEXSANDRA TE ACERTOU COM UMA TAMPINHA ");
						printf("ENQUANTO VOCÊ PEGAVA O PEDAÇO DE MADEIRA.\n");
						Sleep(2500);//Tempo de espera para deixar mais dinâmico
								
						printf("VOCÊ PERDE 6 DE VIDA!\n");
						v1-=6;//MARCIO BRO PERDE 6 DE VIDA
						v2-=10;//OPONENTE PERDE 10 DE VIDA
						system("pause");//Espera o jogador digitar qualquer coisa para avançar
								
						system("cls");//limpar tela
								
						printf("\t\t_________________________________________________\n");
						printf("\t\t|MARCIO BRO\t|\tQUERIDINHO DE ALEXSANDRA|\n");
						printf("\t\t|Força:15\t|\tForça:10                |\n");//atributos
						printf("\t\t|Defesa:15\t|\tDefesa:10               |\n");
						printf("\t\t|Vida:%d  \t|\tVida:%d                 |\n",v1,v2);
						printf("\t\t_________________________________________________\n");
						
						printf("Atacar com:\n1 - um pedaço de madeira [10 de dano]\nou\n2 - uma garrafa [12 de dano] ?\n");//opções de ataque
						scanf("%d",&atk);//Variável atk adquirindo valor
							
					}else if(atk==2){//segunda opção de ataque
							
						system("cls");//limpar tela
								
						printf("O QUERIDINHO DE ALEXSANDRA TE ACERTOU COM UMA CADEIRA ");
						printf("ENQUANTO VOCÊ PEGAVA A GARRAFA.\n");
						Sleep(2500);//Tempo de espera para deixar mais dinâmico
						
						printf("VOCÊ PERDE 8 DE VIDA!\n");
						v1-=8;//MARCIO BRO PERDE 8 DE VIDA
						v2-=12;// OPONENTE PERDE 12 DE VIDA
						system("pause");//Espera o jogador digitar qualquer coisa para avançar
						
						system("cls");//limpar tela		
						printf("\t\t_________________________________________________\n");
						printf("\t\t|MARCIO BRO\t|\tQUERIDINHO DE ALEXSANDRA|\n");
						printf("\t\t|Força:15\t|\tForça:10                |\n");
						printf("\t\t|Defesa:15\t|\tDefesa:10               |\n");
						printf("\t\t|Vida:%d  \t|\tVida:%d                 |\n",v1,v2);
						printf("\t\t_________________________________________________\n");
						
						
						printf("Atacar com:\n1 - um pedaço de madeira [10 de dano]\nou\n2 - uma garrafa [12 de dano] ?\n");//opções de ataque
						scanf("%d",&atk);//Variável atk adquirindo valor
			
					}else{//caso selecionar uma opção inválida
						do{//fazer isso
							printf("Esta opção não está disponível.");
							system("cls");//limpar tela
						
							printf("Atacar com:\n1 - um pedaço de madeira [10 de dano]\nou\n2 - uma garrafa [12 de dano] ?\n");//opções de ataque
							scanf("%d",&atk);//Variável atk adquirindo valor
						}while(atk>2||atk<1);//enquanto for diferente de 1 e 2
						if(atk==1){//primeira opção de ataque
							system("cls");//limpar tela
									
							printf("O QUERIDINHO DE ALEXSANDRA TE ACERTOU COM UMA TAMPINHA ");
							printf("ENQUANTO VOCÊ PEGAVA O PEDAÇO DE MADEIRA.\n");
							Sleep(2500);//Tempo de espera para deixar mais dinâmico
									
							printf("VOCÊ PERDE 6 DE VIDA!\n");
							v1-=6;//MARCIO BRO PERDE 6 DE VIDA
							v2-=10;//OPONENTE PERDE 10 DE VIDA
							system("pause");//Espera o jogador digitar qualquer coisa para avançar
									
							system("cls");//limpar tela
					
							printf("\t\t_________________________________________________\n");
							printf("\t\t|MARCIO BRO\t|\tQUERIDINHO DE ALEXSANDRA|\n");
							printf("\t\t|Força:15\t|\tForça:10                |\n");
							printf("\t\t|Defesa:15\t|\tDefesa:10               |\n");
							printf("\t\t|Vida:%d  \t|\tVida:%d                 |\n",v1,v2);
							printf("\t\t_________________________________________________\n");
							
							
							printf("Atacar com:\n1 - um pedaço de madeira [10 de dano]\nou\n2 - uma garrafa [12 de dano] ?\n");//opções de ataque
							scanf("%d",&atk);//Variável atk adquirindo valor
								
						}else if(atk==2){//segunda opção de ataque
								
							system("cls");//limpar tela
									
							printf("O QUERIDINHO DE ALEXSANDRA TE ACERTOU COM UMA CADEIRA ");
							printf("ENQUANTO VOCÊ PEGAVA A GARRAFA.\n");
							Sleep(2500);//Tempo de espera para deixar mais dinâmico
							
							printf("VOCÊ PERDE 8 DE VIDA!\n");
							v1-=8;//MARCIO BRO PERDE 8 DE VIDA
							v2-=12;// OPONENTE PERDE 12 DE VIDA
							system("pause");//Espera o jogador digitar qualquer coisa para avançar
							
							system("cls");//limpar tela
									
							printf("\t\t_________________________________________________\n");
							printf("\t\t|MARCIO BRO\t|\tQUERIDINHO DE ALEXSANDRA|\n");
							printf("\t\t|Força:15\t|\tForça:10                |\n");
							printf("\t\t|Defesa:15\t|\tDefesa:10               |\n");
							printf("\t\t|Vida:%d  \t|\tVida:%d                 |\n",v1,v2);
							printf("\t\t_________________________________________________\n");
							
							
							printf("Atacar com:\n1 - um pedaço de madeira [10 de dano]\nou\n2 - uma garrafa [12 de dano] ?\n");//opções de ataque
							scanf("%d",&atk);//Variável atk adquirindo valor
						}
					
					}
				}
				system("cls");//limpar tela
				
				printf("Após o combate MARCIO BRO recupera suas energias comendo amendoim, antes de seu próximo combate.\n");
				
				pont+=2;//pontuação aumenta dois
				
				printf("O PROXÍMO COMBATE SE DAR ENTRE:\n");
				system("pause");//Espera o jogador digitar qualquer coisa para avançar
				system("cls");//limpar tela
				printf("MARCIO BRO\tCONTRA\tMEMBRO DA GANGUE DE CERES\n");
				system("cls");//limpar tela
				
				v1=30;//MARCIO BRO TEM VIDA REABASTECIDA APÓS COMER
				v2=20;//VIDA DO OPONENTE NOVO
				
				printf("\t\t_________________________________________________\n");
				printf("\t\t|MARCIO BRO\t|\tMEMBRO DA GANGUE DE CERES|\n");
				printf("\t\t|Força:15\t|\tForça:10                |\n");//atributos
				printf("\t\t|Defesa:15\t|\tDefesa:10               |\n");
				printf("\t\t|Vida:%d  \t|\tVida:%d                 |\n",v1,v2);
				printf("\t\t_________________________________________________\n");
				
				printf("Atacar com:\n1 - um pedaço de madeira [10 de dano]\nou\n2 - uma garrafa [12 de dano] ?\n");//opções de ataque
				scanf("%d",&atk);//Variável atk adquirindo valor
				while(v2>0){//enquanto não for negativo
					if(atk==1){//primeira opção de ataque
						system("cls");//limpar tela
								
						printf("O MEMBRO DA GANGUE DE CERES TE ACERTOU COM UMA TAMPINHA ");
						printf("ENQUANTO VOCÊ PEGAVA O PEDAÇO DE MADEIRA.\n");
						Sleep(2500);//Tempo de espera para deixar mais dinâmico
								
						printf("VOCÊ PERDE 6 DE VIDA!\n");
						v1-=6;//MARCIO BRO PERDE 6 DE VIDA
						v2-=10;//OPONENTE PERDE 10 DE VIDA
						system("pause");//Espera o jogador digitar qualquer coisa para avançar
								
						system("cls");//limpar tela
								
						printf("\t\t_________________________________________________\n");
						printf("\t\t|MARCIO BRO\t|\tMEMBRO DA GANGUE DE CERES|\n");
						printf("\t\t|Força:15\t|\tForça:10                |\n");//atributos
						printf("\t\t|Defesa:15\t|\tDefesa:10               |\n");
						printf("\t\t|Vida:%d  \t|\tVida:%d                 |\n",v1,v2);
						printf("\t\t_________________________________________________\n");
						
						
						printf("Atacar com:\n1 - um pedaço de madeira [10 de dano]\nou\n2 - uma garrafa [12 de dano] ?\n");//opções de ataque
						scanf("%d",&atk);//Variável atk adquirindo valor
							
					}else if(atk==2){//segunda opção de ataque
							
						system("cls");//limpar tela
								
						printf("O MEMBRO DA GANGUE DE CERES TE ACERTOU COM UMA CADEIRA ");
						printf("ENQUANTO VOCÊ PEGAVA A GARRAFA.\n");
						Sleep(2500);//Tempo de espera para deixar mais dinâmico
						
						printf("VOCÊ PERDE 8 DE VIDA!\n");
						v1-=8;//MARCIO BRO PERDE 8 DE VIDA
						v2-=12;// OPONENTE PERDE 12 DE VIDA
						system("pause");//Espera o jogador digitar qualquer coisa para avançar
						
						system("cls");//limpar tela
								
						printf("\t\t_________________________________________________\n");
						printf("\t\t|MARCIO BRO\t|\tMEMBRO DA GANGUE DE CERES|\n");
						printf("\t\t|Força:15\t|\tForça:10                |\n");//atributos
						printf("\t\t|Defesa:15\t|\tDefesa:10               |\n");
						printf("\t\t|Vida:%d  \t|\tVida:%d                 |\n",v1,v2);
						printf("\t\t_________________________________________________\n");
						
						
						printf("Atacar com:\n1 - um pedaço de madeira [10 de dano]\nou\n2 - uma garrafa [12 de dano] ?\n");//opções de ataque
						scanf("%d",&atk);//Variável atk adquirindo valor
			
					}else{//caso selecionar uma opção inválida
						do{//fazer isso
							printf("Esta opção não está disponível.");
							system("cls");//limpar tela
						
							printf("Atacar com:\n1 - um pedaço de madeira [10 de dano]\nou\n2 - uma garrafa [12 de dano] ?\n");//opções de ataque
							scanf("%d",&atk);//Variável atk adquirindo valor
						}while(atk>2||atk<1);//enquanto for diferente de 1 e 2
						if(atk==1){//primeira opção de ataque
							system("cls");//limpar tela
									
							printf("O MEMBRO DA GANGUE DE CERES TE ACERTOU COM UMA TAMPINHA ");
							printf("ENQUANTO VOCÊ PEGAVA O PEDAÇO DE MADEIRA.\n");
							Sleep(2500);//Tempo de espera para deixar mais dinâmico
									
							printf("VOCÊ PERDE 6 DE VIDA!\n");
							v1-=6;//MARCIO BRO PERDE 6 DE VIDA
							v2-=10;//OPONENTE PERDE 10 DE VIDA
							system("pause");//Espera o jogador digitar qualquer coisa para avançar
							system("cls");//limpar tela
									
							system("cls");//limpar tela
									
							printf("\t\t_________________________________________________\n");
							printf("\t\t|MARCIO BRO\t|\tMEMBRO DA GANGUE DE CERES|\n");
							printf("\t\t|Força:15\t|\tForça:10                |\n");//atributos
							printf("\t\t|Defesa:15\t|\tDefesa:10               |\n");
							printf("\t\t|Vida:%d  \t|\tVida:%d                 |\n",v1,v2);
							printf("\t\t_________________________________________________\n");
							
							
							printf("Atacar com:\n1 - um pedaço de madeira [10 de dano]\nou\n2 - uma garrafa [12 de dano] ?\n");//opções de ataque
							scanf("%d",&atk);//Variável atk adquirindo valor
								
						}else if(atk==2){//segunda opção de ataque
								
							system("cls");//limpar tela
									
							printf("O MEMBRO DA GANGUE DE CERES TE ACERTOU COM UMA CADEIRA ");
							printf("ENQUANTO VOCÊ PEGAVA A GARRAFA.\n");
							Sleep(2500);//Tempo de espera para deixar mais dinâmico
							
							printf("VOCÊ PERDE 8 DE VIDA!\n");
							v1-=8;//MARCIO BRO PERDE 8 DE VIDA
							v2-=12;// OPONENTE PERDE 12 DE VIDA
							system("pause");//Espera o jogador digitar qualquer coisa para avançar
							
							system("cls");//limpar tela
									
							printf("\t\t_________________________________________________\n");
							printf("\t\t|MARCIO BRO\t|\tMEMBRO DA GANGUE DE CERES|\n");
							printf("\t\t|Força:15\t|\tForça:10                |\n");//atributos
							printf("\t\t|Defesa:15\t|\tDefesa:10               |\n");
							printf("\t\t|Vida:%d  \t|\tVida:%d                 |\n",v1,v2);
							printf("\t\t_________________________________________________\n");
							
							
							printf("Atacar com:\n1 - um pedaço de madeira [10 de dano]\nou\n2 - uma garrafa [12 de dano] ?\n");//opções de ataque
							scanf("%d",&atk);//Variável atk adquirindo valor
						}
					
					}
				}
				system("cls");//limpar tela
				
				printf("APÓS A LUTA, MARCIO BRO TOMA ENERGÉTICO PARA RECUPERAR SUA ENERGIA E CHEGA AO CONFRONTO FINAL CONTRA O LÍDER DA GANGUE DE CERES QUE É:\n");
				pont+=2;//pontuação aumenta dois
				Sleep(4000);//Tempo de espera
				printf("BELCHIOR\tO GRANDE INIMIGO DE FAGNER\n");
				
				printf("MARCIO BRO - Vou acabar com você.\n");
				printf("BELCHIOR - Você sucumbirá aos meus pés e verá que sou melhor que FAGNER.\n");
				
				printf("FAGNER - ESPERE MARCIO BRO.\n");
				printf("FAGNER - PEGUE O MEU VIOLÃO E ACABE COM ELE.\n");
				
				printf("BELCHIOR - JÁ CHEGA, ESTÁ NA HORA DE LUTAR!\n");
				system("pause");//Espera o jogador digitar qualquer coisa para avançar
				system("cls");//limpar tela
				
				v1=35;//VIDA DO MARCIO BRO REABASTECIDA COM BÔNUS
				v2=52;//VIDA DO BELCHIOR
				
				printf("\t\t_________________________________________________\n");
				printf("\t\t|MARCIO BRO\t|\tBELCHIOR|\n");
				printf("\t\t|Força:15\t|\tForça:26                |\n");//atributos
				printf("\t\t|Defesa:20\t|\tDefesa:26               |\n");
				printf("\t\t|Vida:%d  \t|\tVida:%d                 |\n",v1,v2);
				printf("\t\t_________________________________________________\n");
				
				printf("Atacar com:\n1 - O VIOLÃO DE FAGNER [13 de dano]\nou\n2 - uma garrafa [10 de dano] ?\n");//Opções de ataque do Boss final
				
				printf("CASO, ESCOLHA VIOLÃO DE FAGNER GANHARÁ UM BôNUS DE 5 DE FORÇA E 5 DE DEFESA, AINDA 5 DE VIDA.\n");//Bônus de usar o violão de Fagner
				
				scanf("%d",&atk);//Variável atk adquirindo valor
				while(v2>0){//enquanto não for negativo
					if(atk==1){//primeira opção de ataque
						system("cls");//limpar tela
								
						printf("BELCHIOR TE ACERTOU COM UMA NOTA MUSICAL DÓ ");
						printf("ENQUANTO VOCÊ PEGAVA O VIOLÃO DE FAGNER.\n");
						Sleep(2500);//Tempo de espera para deixar mais dinâmico
								
						printf("VOCÊ PERDE 8 DE VIDA!\n");
						v1-=8;//MARCIO BRO PERDE 8 DE VIDA
						v2-=13;//BELCHIOR PERDE 13 DE VIDA
						v1+=5;//MARCIO BRO GANHA 5 DE VIDA POR CAUSA DO BÔNUS DO VIOLÃO
						
						printf("PORÉM VOCÊ CONTRA-ATACA COM UMA NOTA RÉ.\n");
						system("pause");//Espera o jogador digitar qualquer coisa para avançar
								
						system("cls");//limpar tela
								
						printf("\t\t_________________________________________________\n");
						printf("\t\t|MARCIO BRO\t|\tBELCHIOR|\n");
						printf("\t\t|Força:20\t|\tForça:26                |\n");
						printf("\t\t|Defesa:25\t|\tDefesa:26               |\n");
						printf("\t\t|Vida:%d  \t|\tVida:%d                 |\n",v1,v2);
						printf("\t\t_________________________________________________\n");
						
						
						printf("Atacar com:\n1 - O VIOLÃO DE FAGNER [13 de dano]\nou\n2 - uma garrafa [10 de dano] ?\n");//Opções de ataque do Boss final
						scanf("%d",&atk);//Variável atk adquirindo valor
							
					}else if(atk==2){//segunda opção de ataque
							
						system("cls");//limpar tela
								
						printf("BELCHIOR TE ACERTOU COM UMA NOTA MUSICAL MI ");
						printf("ENQUANTO VOCÊ PEGAVA A GARRAFA.\n");
						Sleep(2500);//Tempo de espera para deixar mais dinâmico
						
						printf("VOCÊ PERDE 6 DE VIDA!\n");
						v1-=6;//MARCIO BRO PERDE 6 DE VIDA
						v2-=10;//OPONENTE PERDE 10 DE VIDA
						system("pause");//Espera o jogador digitar qualquer coisa para avançar
						
						system("cls");//limpar tela
								
						printf("\t\t_________________________________________________\n");
						printf("\t\t|MARCIO BRO\t|\tBELCHIOR|\n");
						printf("\t\t|Força:15\t|\tForça:26                 |\n");//atributos
						printf("\t\t|Defesa:20\t|\tDefesa:26               |\n");
						printf("\t\t|Vida:%d  \t|\tVida:%d                 |\n",v1,v2);
						printf("\t\t_________________________________________________\n");
						
						
						printf("Atacar com:\n1 - O VIOLÃO DE FAGNER [13 de dano]\nou\n2 - uma garrafa [10 de dano] ?\n");//Opções de ataque do Boss final
						scanf("%d",&atk);//Variável atk adquirindo valor
			
					}else{//caso selecionar uma opção inválida
						do{//fazer isso
							printf("Esta opção não está disponível.");
							system("cls");//limpar tela
						
							printf("Atacar com:\n1 - O VIOLÃO DE FAGNER [13 de dano]\nou\n2 - uma garrafa [10 de dano] ?\n");//Opções de ataque do Boss final
							scanf("%d",&atk);//Variável atk adquirindo valor
						}while(atk>2||atk<1);//enquanto for diferente de 1 e 2
						if(atk==1){//primeira opção de ataque
							system("cls");//limpar tela
									
							printf("BELCHIOR TE ACERTOU COM UMA NOTA MUSICAL DÓ ");
							printf("ENQUANTO VOCÊ PEGAVA O VIOLÃO DE FAGNER.\n");
							Sleep(2500);//Tempo de espera para deixar mais dinâmico
							
							printf("VOCÊ PERDE 8 DE VIDA!\n");
							v1-=8;//MARCIO BRO PERDE 8 DE VIDA
							v2-=13;//BELCHIOR PERDE 13 DE VIDA
							v1+=5;//MARCIO BRO GANHA 5 DE VIDA POR CAUSA DO BÔNUS DO VIOLÃO
							
							printf("PORÉM VOCÊ CONTRA-ATACA COM UMA NOTA RÉ.\n");
							system("pause");//Espera o jogador digitar qualquer coisa para avançar
									
							system("cls");//limpar tela
									
							printf("\t\t_________________________________________________\n");
							printf("\t\t|MARCIO BRO\t|\tBELCHIOR|\n");
							printf("\t\t|Força:20\t|\tForça:26                |\n");
							printf("\t\t|Defesa:25\t|\tDefesa:26               |\n");
							printf("\t\t|Vida:%d  \t|\tVida:%d                 |\n",v1,v2);
							printf("\t\t_________________________________________________\n");
							
							
							printf("Atacar com:\n1 - O VIOLÃO DE FAGNER [13 de dano]\nou\n2 - uma garrafa [10 de dano] ?\n");//Opções de ataque do Boss final
							scanf("%d",&atk);//Variável atk adquirindo valor
								
						}else if(atk==2){//segunda opção de ataque
								
							system("cls");//limpar tela
									
							printf("BELCHIOR TE ACERTOU COM UMA NOTA MUSICAL MI ");
							printf("ENQUANTO VOCÊ PEGAVA A GARRAFA.\n");
							Sleep(2500);//Tempo de espera para deixar mais dinâmico
							
							printf("VOCÊ PERDE 6 DE VIDA!\n");
							v1-=6;//MARCIO BRO PERDE 6 DE VIDA
							v2-=10;//OPONENTE PERDE 10 DE VIDA
							system("pause");//Espera o jogador digitar qualquer coisa para avançar
							
							system("cls");//limpar tela
									
							printf("\t\t_________________________________________________\n");
							printf("\t\t|MARCIO BRO\t|\tBELCHIOR|\n");
							printf("\t\t|Força:15\t|\tForça:26                |\n");//atributos
							printf("\t\t|Defesa:20\t|\tDefesa:26               |\n");
							printf("\t\t|Vida:%d  \t|\tVida:%d                 |\n",v1,v2);
							printf("\t\t_________________________________________________\n");
							
							
							printf("Atacar com:\n1 - O VIOLÃO DE FAGNER [13 de dano]\nou\n2 - uma garrafa [10 de dano] ?\n");//Opções de ataque do Boss final
							scanf("%d",&atk);//Variável atk adquirindo valor
						}
					
					}
				}
				
				system("cls");//limpar tela
				
				printf("MARCIO BRO DERROTA BELCHIOR!\n");
				pont+=2;//pontuação aumenta dois
				printf("MARCIO BRO RECEBE HONRARIAS E BENEFICIOS DO DONO DO BAR, APÓS EVITAR DANOS MAIORES AO BAR.\n");
				
				printf("COM TODA A CONFUSÃO RESOLVIDA, MARCIO BRO VOLTA AO TRABALHO.\n");
				
				printf("  -----> FIM <----- ");//FIM DE JOGO
				system("pause");//Espera o jogador digitar qualquer coisa para avançar
				
			}        
		}else if(opcoes==2){
			
			pont++;//pontuação aumenta um
			
			printf("MARCIO BRO FOI FAZER SUAS ENTREGAS.\n");
			
			printf("  -----> FIM <----- ");//FIM DE JOGO
			system("pause");//Espera o jogador digitar qualquer coisa para avançar
			
		}else{//caso selecionar uma opção inválida
			
			do{//fazer isso
				printf("Esta opção não está disponível.");		
				system("cls");//limpar tela
						
				printf("|Digite {1} se deseja ir para o bar|\n|Digite {2} se deseja continuar entregando cartas.\n");
				scanf("%d", &opcoes);//Variável opcoes adquirindo valor
			}while(opcoes>2||opcoes<1);//enquanto for diferente de 1 e 2
			
			if(opcoes == 1){//Quebra violão de Fagner
				pont+=2;//pontuação aumenta dois
			
				printf("Chegando no bar, Marcio Bro avista a gangue de Ceres contra os Queridinho de Alexssandra.\n");
				system("pause");//Espera o jogador digitar qualquer coisa para avançar
				system("cls");//limpar tela
				
				printf("Movido pela raiva pois não tinha como tomar cachaça, Marcio bro decide brigar com o líder da gangue Queridinhos de Alexssandra\n");
				system("pause");//Espera o jogador digitar qualquer coisa para avançar
				system("cls");//limpar tela
				
				printf("Fagner (Líder dos Queridinhos de Alexssandra) - Ora bolas, se não e o Marcio, aquele que...\n");
				system("pause");//Espera o jogador digitar qualquer coisa para avançar
				system("cls");//limpar tela
				
				printf("Marcio Bro - Sou eu mesmo, cantorzinho mixuruca\n");
				system("pause");//Espera o jogador digitar qualquer coisa para avançar
				system("cls");//limpar tela
				
				printf("Fagner toma uma lapada de CANA e vem pra cima de você. O QUE VOCÊ FAZ??\n");
				printf("|Digite {1} se deseja quebrar o violão de Fagner|\n|Digite {2} se deseja abraça-lo\n");
				scanf("%d", &opcoes);//Variável opcoes adquirindo valor
				
				system("cls");//limpar tela
			
			if(opcoes == 1){//Quebra violão de Fagner
				
				pont++;//pontuação aumenta um
				
				printf("Após ter seu violão quebrado por Marcio Bro. Fagner desiste de cantar e se aposenta.\n");
				system("pause");//Espera o jogador digitar qualquer coisa para avançar
				system("cls");//limpar tela
				
				printf("Marcio Bro vendo que seu cantor favorito se aposentou e desistiu de suas aventuras, fica triste e fica escutando as músicas do seu ídolo até sua aposentadoria como carteiro.\n");
				system("pause");//Espera o jogador digitar qualquer coisa para avançar
				system("cls");//limpar tela
				
				printf("  -----> FIM <----- ");//FIM DE JOGO
				system("pause");//Espera o jogador digitar qualquer coisa para avançar
				
			}else if (opcoes == 2){//Abraça Fagner
				
				pont+=2;//pontuação aumenta dois
				
				printf("Fagner se acalma e se junta a Marcio Bro para aventura que está por vir\n");
				system("pause");//Espera o jogador digitar qualquer coisa para avançar
				system("cls");//limpar tela
				
				printf("Porém, os clientes do bar esperavam o show de Fagner, mas Fagner desistiu do show para se juntar a Marcio\n");
				system("pause");//Espera o jogador digitar qualquer coisa para avançar
				system("cls");//limpar tela
				
				printf("Irados com a decisão do cantor, a gangue de Ceres e os Queridinhos de Alexsandra começam a brigar\n");
				printf("O COMBATE SE DAR ENTRE:\n");
				Sleep(3000);//Tempo de espera para deixar mais dinâmico
				printf("MARCIO BRO\tCONTRA\tQUERIDINHO DE ALEXSANDRA\n");
				printf("Mas, para toda briga precisa-se identificar a força de cada um\n");
				printf("Que aqui se dar pelos seus atributos.\n");
				system("pause");//Espera o jogador digitar qualquer coisa para avançar
				system("cls");//limpar tela
				
				printf("\t\t_________________________________________________\n");
				printf("\t\t|MARCIO BRO\t|\tQUERIDINHO DE ALEXSANDRA|\n");
				printf("\t\t|Força:15\t|\tForça:10                |\n");//atributos
				printf("\t\t|Defesa:15\t|\tDefesa:10               |\n");
				printf("\t\t|Vida:%d  \t|\tVida:%d                 |\n",v1,v2);
				printf("\t\t_________________________________________________\n");
				
				printf("Atacar com:\n1 - um pedaço de madeira [10 de dano]\nou\n2 - uma garrafa [12 de dano] ?\n");//opções de ataque
				scanf("%d",&atk);//Variável atk adquirindo valor
				while(v2>0){//enquanto não for negativo
					if(atk==1){//primeira opção de ataque
						system("cls");//limpar tela
								
						printf("O QUERIDINHO DE ALEXSANDRA TE ACERTOU COM UMA TAMPINHA ");
						printf("ENQUANTO VOCÊ PEGAVA O PEDAÇO DE MADEIRA.\n");
						Sleep(2500);//Tempo de espera para deixar mais dinâmico
								
						printf("VOCÊ PERDE 6 DE VIDA!\n");
						v1-=6;//MARCIO BRO PERDE 6 DE VIDA
						v2-=10;//OPONENTE PERDE 10 DE VIDA
						system("pause");//Espera o jogador digitar qualquer coisa para avançar
								
						system("cls");//limpar tela
								
						printf("\t\t_________________________________________________\n");
						printf("\t\t|MARCIO BRO\t|\tQUERIDINHO DE ALEXSANDRA|\n");
						printf("\t\t|Força:15\t|\tForça:10                |\n");//atributos
						printf("\t\t|Defesa:15\t|\tDefesa:10               |\n");
						printf("\t\t|Vida:%d  \t|\tVida:%d                 |\n",v1,v2);
						printf("\t\t_________________________________________________\n");
						
						printf("Atacar com:\n1 - um pedaço de madeira [10 de dano]\nou\n2 - uma garrafa [12 de dano] ?\n");//opções de ataque
						scanf("%d",&atk);//Variável atk adquirindo valor
							
					}else if(atk==2){//segunda opção de ataque
							
						system("cls");//limpar tela
								
						printf("O QUERIDINHO DE ALEXSANDRA TE ACERTOU COM UMA CADEIRA ");
						printf("ENQUANTO VOCÊ PEGAVA A GARRAFA.\n");
						Sleep(2500);//Tempo de espera para deixar mais dinâmico
						
						printf("VOCÊ PERDE 8 DE VIDA!\n");
						v1-=8;//MARCIO BRO PERDE 8 DE VIDA
						v2-=12;// OPONENTE PERDE 12 DE VIDA
						system("pause");//Espera o jogador digitar qualquer coisa para avançar
						
						system("cls");//limpar tela		
						printf("\t\t_________________________________________________\n");
						printf("\t\t|MARCIO BRO\t|\tQUERIDINHO DE ALEXSANDRA|\n");
						printf("\t\t|Força:15\t|\tForça:10                |\n");//atributos
						printf("\t\t|Defesa:15\t|\tDefesa:10               |\n");
						printf("\t\t|Vida:%d  \t|\tVida:%d                 |\n",v1,v2);
						printf("\t\t_________________________________________________\n");
						
						
						printf("Atacar com:\n1 - um pedaço de madeira [10 de dano]\nou\n2 - uma garrafa [12 de dano] ?\n");//opções de ataque
						scanf("%d",&atk);//Variável atk adquirindo valor
			
					}else{//caso selecionar uma opção inválida
						do{//fazer isso
							printf("Esta opção não está disponível.");
							system("cls");//limpar tela
						
							printf("Atacar com:\n1 - um pedaço de madeira [10 de dano]\nou\n2 - uma garrafa [12 de dano] ?\n");//opções de ataque
							scanf("%d",&atk);//Variável atk adquirindo valor
						}while(atk>2||atk<1);//enquanto for diferente de 1 e 2
						if(atk==1){//primeira opção de ataque
							system("cls");//limpar tela
									
							printf("O QUERIDINHO DE ALEXSANDRA TE ACERTOU COM UMA TAMPINHA ");
							printf("ENQUANTO VOCÊ PEGAVA O PEDAÇO DE MADEIRA.\n");
							Sleep(2500);//Tempo de espera para deixar mais dinâmico
									
							printf("VOCÊ PERDE 6 DE VIDA!\n");
							v1-=6;//MARCIO BRO PERDE 6 DE VIDA
							v2-=10;//OPONENTE PERDE 10 DE VIDA
							system("pause");//Espera o jogador digitar qualquer coisa para avançar
									
							system("cls");//limpar tela
					
							printf("\t\t_________________________________________________\n");
							printf("\t\t|MARCIO BRO\t|\tQUERIDINHO DE ALEXSANDRA|\n");
							printf("\t\t|Força:15\t|\tForça:10                |\n");//atributos
							printf("\t\t|Defesa:15\t|\tDefesa:10               |\n");
							printf("\t\t|Vida:%d  \t|\tVida:%d                 |\n",v1,v2);
							printf("\t\t_________________________________________________\n");
							
							
							printf("Atacar com:\n1 - um pedaço de madeira [10 de dano]\nou\n2 - uma garrafa [12 de dano] ?\n");//opções de ataque
							scanf("%d",&atk);//Variável atk adquirindo valor
								
						}else if(atk==2){//segunda opção de ataque
								
							system("cls");//limpar tela
									
							printf("O QUERIDINHO DE ALEXSANDRA TE ACERTOU COM UMA CADEIRA ");
							printf("ENQUANTO VOCÊ PEGAVA A GARRAFA.\n");
							Sleep(2500);//Tempo de espera para deixar mais dinâmico
							
							printf("VOCÊ PERDE 8 DE VIDA!\n");
							v1-=8;//MARCIO BRO PERDE 8 DE VIDA
							v2-=12;// OPONENTE PERDE 12 DE VIDA
							system("pause");//Espera o jogador digitar qualquer coisa para avançar
							
							system("cls");//limpar tela
									
							printf("\t\t_________________________________________________\n");
							printf("\t\t|MARCIO BRO\t|\tQUERIDINHO DE ALEXSANDRA|\n");
							printf("\t\t|Força:15\t|\tForça:10                |\n");//atributos
							printf("\t\t|Defesa:15\t|\tDefesa:10               |\n");
							printf("\t\t|Vida:%d  \t|\tVida:%d                 |\n",v1,v2);
							printf("\t\t_________________________________________________\n");
							
							
							printf("Atacar com:\n1 - um pedaço de madeira [10 de dano]\nou\n2 - uma garrafa [12 de dano] ?\n");//opções de ataque
							scanf("%d",&atk);//Variável atk adquirindo valor
						}
					
					}
				}
				system("cls");//limpar tela
				
				printf("Após o combate MARCIO BRO recupera suas energias comendo amendoim, antes de seu próximo combate.\n");
				pont+=2;//pontuação aumenta dois
				
				printf("O PROXÍMO COMBATE SE DAR ENTRE:\n");
				system("pause");//Espera o jogador digitar qualquer coisa para avançar
				system("cls");//limpar tela
				printf("MARCIO BRO\tCONTRA\tMEMBRO DA GANGUE DE CERES\n");
				system("cls");//limpar tela
				
				v1=30;//MARCIO BRO TEM VIDA REABASTECIDA APÓS COMER
				v2=20;//VIDA DO OPONENTE NOVO
				
				printf("\t\t_________________________________________________\n");
				printf("\t\t|MARCIO BRO\t|\tMEMBRO DA GANGUE DE CERES|\n");
				printf("\t\t|Força:15\t|\tForça:10                |\n");//atributos
				printf("\t\t|Defesa:15\t|\tDefesa:10               |\n");
				printf("\t\t|Vida:%d  \t|\tVida:%d                 |\n",v1,v2);
				printf("\t\t_________________________________________________\n");
				
				printf("Atacar com:\n1 - um pedaço de madeira [10 de dano]\nou\n2 - uma garrafa [12 de dano] ?\n");//opções de ataque
				scanf("%d",&atk);//Variável atk adquirindo valor
				while(v2>0){//enquanto não for negativo
					if(atk==1){//primeira opção de ataque
						system("cls");//limpar tela
								
						printf("O MEMBRO DA GANGUE DE CERES TE ACERTOU COM UMA TAMPINHA ");
						printf("ENQUANTO VOCÊ PEGAVA O PEDAÇO DE MADEIRA.\n");
						Sleep(2500);//Tempo de espera para deixar mais dinâmico
								
						printf("VOCÊ PERDE 6 DE VIDA!\n");
						v1-=6;//MARCIO BRO PERDE 6 DE VIDA
						v2-=10;//OPONENTE PERDE 10 DE VIDA
						system("pause");//Espera o jogador digitar qualquer coisa para avançar
								
						system("cls");//limpar tela
								
						printf("\t\t_________________________________________________\n");
						printf("\t\t|MARCIO BRO\t|\tMEMBRO DA GANGUE DE CERES|\n");
						printf("\t\t|Força:15\t|\tForça:10                |\n");//atributos
						printf("\t\t|Defesa:15\t|\tDefesa:10               |\n");
						printf("\t\t|Vida:%d  \t|\tVida:%d                 |\n",v1,v2);
						printf("\t\t_________________________________________________\n");
						
						
						printf("Atacar com:\n1 - um pedaço de madeira [10 de dano]\nou\n2 - uma garrafa [12 de dano] ?\n");//opções de ataque
						scanf("%d",&atk);//Variável atk adquirindo valor
							
					}else if(atk==2){//segunda opção de ataque
							
						system("cls");//limpar tela
								
						printf("O MEMBRO DA GANGUE DE CERES TE ACERTOU COM UMA CADEIRA ");
						printf("ENQUANTO VOCÊ PEGAVA A GARRAFA.\n");
						Sleep(2500);//Tempo de espera para deixar mais dinâmico
						
						printf("VOCÊ PERDE 8 DE VIDA!\n");
						v1-=8;//MARCIO BRO PERDE 8 DE VIDA
						v2-=12;// OPONENTE PERDE 12 DE VIDA
						system("pause");//Espera o jogador digitar qualquer coisa para avançar
						
						system("cls");//limpar tela
								
						printf("\t\t_________________________________________________\n");
						printf("\t\t|MARCIO BRO\t|\tMEMBRO DA GANGUE DE CERES|\n");
						printf("\t\t|Força:15\t|\tForça:10                |\n");//atributos
						printf("\t\t|Defesa:15\t|\tDefesa:10               |\n");
						printf("\t\t|Vida:%d  \t|\tVida:%d                 |\n",v1,v2);
						printf("\t\t_________________________________________________\n");
						
						
						printf("Atacar com:\n1 - um pedaço de madeira [10 de dano]\nou\n2 - uma garrafa [12 de dano] ?\n");//opções de ataque
						scanf("%d",&atk);//Variável atk adquirindo valor
			
					}else{//caso selecionar uma opção inválida
						do{//fazer isso
							printf("Esta opção não está disponível.");
							system("cls");//limpar tela
						
							printf("Atacar com:\n1 - um pedaço de madeira [10 de dano]\nou\n2 - uma garrafa [12 de dano] ?\n");//opções de ataque
							scanf("%d",&atk);//Variável atk adquirindo valor
						}while(atk>2||atk<1);//enquanto for diferente de 1 e 2
						if(atk==1){//primeira opção de ataque
							system("cls");//limpar tela
									
							printf("O MEMBRO DA GANGUE DE CERES TE ACERTOU COM UMA TAMPINHA ");
							printf("ENQUANTO VOCÊ PEGAVA O PEDAÇO DE MADEIRA.\n");
							Sleep(2500);//Tempo de espera para deixar mais dinâmico
									
							printf("VOCÊ PERDE 6 DE VIDA!\n");
							v1-=6;//MARCIO BRO PERDE 6 DE VIDA
							v2-=10;//OPONENTE PERDE 10 DE VIDA
							system("pause");//Espera o jogador digitar qualquer coisa para avançar
							system("cls");//limpar tela
									
							system("cls");//limpar tela
									
							printf("\t\t_________________________________________________\n");
							printf("\t\t|MARCIO BRO\t|\tMEMBRO DA GANGUE DE CERES|\n");
							printf("\t\t|Força:15\t|\tForça:10                |\n");//atributos
							printf("\t\t|Defesa:15\t|\tDefesa:10               |\n");
							printf("\t\t|Vida:%d  \t|\tVida:%d                 |\n",v1,v2);
							printf("\t\t_________________________________________________\n");
							
							
							printf("Atacar com:\n1 - um pedaço de madeira [10 de dano]\nou\n2 - uma garrafa [12 de dano] ?\n");//opções de ataque
							scanf("%d",&atk);//Variável atk adquirindo valor
								
						}else if(atk==2){//segunda opção de ataque
								
							system("cls");//limpar tela
									
							printf("O MEMBRO DA GANGUE DE CERES TE ACERTOU COM UMA CADEIRA ");
							printf("ENQUANTO VOCÊ PEGAVA A GARRAFA.\n");
							Sleep(2500);//Tempo de espera para deixar mais dinâmico
							
							printf("VOCÊ PERDE 8 DE VIDA!\n");
							v1-=8;//MARCIO BRO PERDE 8 DE VIDA
							v2-=12;// OPONENTE PERDE 12 DE VIDA
							system("pause");//Espera o jogador digitar qualquer coisa para avançar
							
							system("cls");//limpar tela
									
							printf("\t\t_________________________________________________\n");
							printf("\t\t|MARCIO BRO\t|\tMEMBRO DA GANGUE DE CERES|\n");
							printf("\t\t|Força:15\t|\tForça:10                |\n");//atributos
							printf("\t\t|Defesa:15\t|\tDefesa:10               |\n");
							printf("\t\t|Vida:%d  \t|\tVida:%d                 |\n",v1,v2);
							printf("\t\t_________________________________________________\n");
							
							
							printf("Atacar com:\n1 - um pedaço de madeira [10 de dano]\nou\n2 - uma garrafa [12 de dano] ?\n");//opções de ataque
							scanf("%d",&atk);//Variável atk adquirindo valor
						}
					
					}
				}
				system("cls");//limpar tela
				
				printf("APÓS A LUTA, MARCIO BRO TOMA ENERGÉTICO PARA RECUPERAR SUA ENERGIA E CHEGA AO CONFRONTO FINAL CONTRA O LÍDER DA GANGUE DE CERES QUE É:\n");
				pont+=2;//pontuação aumenta dois
				Sleep(4000);//Tempo de espera
				printf("BELCHIOR\tO GRANDE INIMIGO DE FAGNER\n");
				
				printf("MARCIO BRO - Vou acabar com você.\n");
				printf("BELCHIOR - Você sucumbirá aos meus pés e verá que sou melhor que FAGNER.\n");
				
				printf("FAGNER - ESPERE MARCIO BRO.\n");
				printf("FAGNER - PEGUE O MEU VIOLÃO E ACABE COM ELE.\n");
				
				printf("BELCHIOR - JÁ CHEGA, ESTÁ NA HORA DE LUTAR!\n");
				system("pause");//Espera o jogador digitar qualquer coisa para avançar
				system("cls");//limpar tela
				
				v1=35;//VIDA DO MARCIO BRO REABASTECIDA COM BÔNUS
				v2=52;//VIDA DO BELCHIOR
				
				printf("\t\t_________________________________________________\n");
				printf("\t\t|MARCIO BRO\t|\tBELCHIOR|\n");
				printf("\t\t|Força:15\t|\tForça:26                |\n");//atributos
				printf("\t\t|Defesa:20\t|\tDefesa:26               |\n");
				printf("\t\t|Vida:%d  \t|\tVida:%d                 |\n",v1,v2);
				printf("\t\t_________________________________________________\n");
				
				printf("Atacar com:\n1 - O VIOLÃO DE FAGNER [13 de dano]\nou\n2 - uma garrafa [10 de dano] ?\n");//Opções de ataque do Boss final
				
				printf("CASO, ESCOLHA VIOLÃO DE FAGNER GANHARÁ UM BôNUS DE 5 DE FORÇA E 5 DE DEFESA, AINDA 5 DE VIDA.\n");//Bônus de usar o violão de Fagner
				
				scanf("%d",&atk);//Variável atk adquirindo valor
				while(v2>0){//enquanto não for negativo
					if(atk==1){//primeira opção de ataque
						system("cls");//limpar tela
								
						printf("BELCHIOR TE ACERTOU COM UMA NOTA MUSICAL DÓ ");
						printf("ENQUANTO VOCÊ PEGAVA O VIOLÃO DE FAGNER.\n");
						Sleep(2500);//Tempo de espera para deixar mais dinâmico
								
						printf("VOCÊ PERDE 8 DE VIDA!\n");
						v1-=8;//MARCIO BRO PERDE 8 DE VIDA
						v2-=13;//BELCHIOR PERDE 13 DE VIDA
						v1+=5;//MARCIO BRO GANHA 5 DE VIDA POR CAUSA DO BÔNUS DO VIOLÃO
						
						printf("PORÉM VOCÊ CONTRA-ATACA COM UMA NOTA RÉ.\n");
						system("pause");//Espera o jogador digitar qualquer coisa para avançar
								
						system("cls");//limpar tela
								
						printf("\t\t_________________________________________________\n");
						printf("\t\t|MARCIO BRO\t|\tBELCHIOR|\n");
						printf("\t\t|Força:20\t|\tForça:26                |\n");
						printf("\t\t|Defesa:25\t|\tDefesa:26               |\n");
						printf("\t\t|Vida:%d  \t|\tVida:%d                 |\n",v1,v2);
						printf("\t\t_________________________________________________\n");
						
						
						printf("Atacar com:\n1 - O VIOLÃO DE FAGNER [13 de dano]\nou\n2 - uma garrafa [10 de dano] ?\n");//Opções de ataque do Boss final
						scanf("%d",&atk);//Variável atk adquirindo valor
							
					}else if(atk==2){//segunda opção de ataque
							
						system("cls");//limpar tela
								
						printf("BELCHIOR TE ACERTOU COM UMA NOTA MUSICAL MI ");
						printf("ENQUANTO VOCÊ PEGAVA A GARRAFA.\n");
						Sleep(2500);//Tempo de espera para deixar mais dinâmico
						
						printf("VOCÊ PERDE 6 DE VIDA!\n");
						v1-=6;//MARCIO BRO PERDE 6 DE VIDA
						v2-=10;//OPONENTE PERDE 10 DE VIDA
						system("pause");//Espera o jogador digitar qualquer coisa para avançar
						
						system("cls");//limpar tela
								
						printf("\t\t_________________________________________________\n");
						printf("\t\t|MARCIO BRO\t|\tBELCHIOR|\n");
						printf("\t\t|Força:15\t|\tForça:26                 |\n");//atributos
						printf("\t\t|Defesa:20\t|\tDefesa:26               |\n");
						printf("\t\t|Vida:%d  \t|\tVida:%d                 |\n",v1,v2);
						printf("\t\t_________________________________________________\n");
						
						
						printf("Atacar com:\n1 - O VIOLÃO DE FAGNER [13 de dano]\nou\n2 - uma garrafa [10 de dano] ?\n");//Opções de ataque do Boss final
						scanf("%d",&atk);//Variável atk adquirindo valor
			
					}else{//caso selecionar uma opção inválida
						do{//fazer isso
							printf("Esta opção não está disponível.");
							system("cls");//limpar tela
						
							printf("Atacar com:\n1 - O VIOLÃO DE FAGNER [13 de dano]\nou\n2 - uma garrafa [10 de dano] ?\n");//Opções de ataque do Boss final
							scanf("%d",&atk);//Variável atk adquirindo valor
						}while(atk>2||atk<1);//enquanto for diferente de 1 e 2
						if(atk==1){//primeira opção de ataque
							system("cls");//limpar tela
									
							printf("BELCHIOR TE ACERTOU COM UMA NOTA MUSICAL DÓ ");
							printf("ENQUANTO VOCÊ PEGAVA O VIOLÃO DE FAGNER.\n");
							Sleep(2500);//Tempo de espera para deixar mais dinâmico
							
							printf("VOCÊ PERDE 8 DE VIDA!\n");
							v1-=8;//MARCIO BRO PERDE 8 DE VIDA
							v2-=13;//BELCHIOR PERDE 13 DE VIDA
							v1+=5;//MARCIO BRO GANHA 5 DE VIDA POR CAUSA DO BÔNUS DO VIOLÃO
							
							printf("PORÉM VOCÊ CONTRA-ATACA COM UMA NOTA RÉ.\n");
							system("pause");//Espera o jogador digitar qualquer coisa para avançar
									
							system("cls");//limpar tela
									
							printf("\t\t_________________________________________________\n");
							printf("\t\t|MARCIO BRO\t|\tBELCHIOR|\n");
							printf("\t\t|Força:20\t|\tForça:26                |\n");
							printf("\t\t|Defesa:25\t|\tDefesa:26               |\n");
							printf("\t\t|Vida:%d  \t|\tVida:%d                 |\n",v1,v2);
							printf("\t\t_________________________________________________\n");
							
							
							printf("Atacar com:\n1 - O VIOLÃO DE FAGNER [13 de dano]\nou\n2 - uma garrafa [10 de dano] ?\n");//Opções de ataque do Boss final
							scanf("%d",&atk);//Variável atk adquirindo valor
								
						}else if(atk==2){//segunda opção de ataque
								
							system("cls");//limpar tela
									
							printf("BELCHIOR TE ACERTOU COM UMA NOTA MUSICAL MI ");
							printf("ENQUANTO VOCÊ PEGAVA A GARRAFA.\n");
							Sleep(2500);//Tempo de espera para deixar mais dinâmico
							
							printf("VOCÊ PERDE 6 DE VIDA!\n");
							v1-=6;//MARCIO BRO PERDE 6 DE VIDA
							v2-=10;//OPONENTE PERDE 10 DE VIDA
							system("pause");//Espera o jogador digitar qualquer coisa para avançar
							
							system("cls");//limpar tela
									
							printf("\t\t_________________________________________________\n");
							printf("\t\t|MARCIO BRO\t|\tBELCHIOR|\n");
							printf("\t\t|Força:15\t|\tForça:26                |\n");//atributos
							printf("\t\t|Defesa:20\t|\tDefesa:26               |\n");
							printf("\t\t|Vida:%d  \t|\tVida:%d                 |\n",v1,v2);
							printf("\t\t_________________________________________________\n");
							
							
							printf("Atacar com:\n1 - O VIOLÃO DE FAGNER [13 de dano]\nou\n2 - uma garrafa [10 de dano] ?\n");//Opções de ataque do Boss final
							scanf("%d",&atk);//Variável atk adquirindo valor
						}
					
					}
				}
				
				system("cls");//limpar tela
				
				printf("MARCIO BRO DERROTA BELCHIOR!\n");
				pont+=2;//pontuação aumenta dois
				printf("MARCIO BRO RECEBE HONRARIAS E BENEFICIOS DO DONO DO BAR, APÓS EVITAR DANOS MAIORES AO BAR.\n");
				
				printf("COM TODA A CONFUSÃO RESOLVIDA, MARCIO BRO VOLTA AO TRABALHO.\n");
				
				printf("  -----> FIM <----- ");//FIM DE JOGO
				system("pause");//Espera o jogador digitar qualquer coisa para avançar
				
			}        
		}else if(opcoes==2){
			
			pont++;//pontuação aumenta um
			
			system("cls");//limpar tela
			
			printf("MARCIO BRO FOI FAZER SUAS ENTREGAS.\n");
			
			printf("  -----> FIM <----- ");//FIM DE JOGO
			system("pause");//Espera o jogador digitar qualquer coisa para avançar
			
		}
			
		}	
	}else if(start == 2){//Não quer jogar, tchau
		
		pont++;//pontuação aumenta um
			
			printf("Nunca mais volte, obrigado.\n");
			
			printf("  -----> FIM <----- ");//FIM DE JOGO
			system("pause");//Espera o jogador digitar qualquer coisa para avançar
		
	}else{//caso selecionar uma opção inválida
		do{//fazer isso
			printf("Esta opção não está disponível.");		
			system("cls");//limpar tela
						
			printf("\nDeseja iniciar essa jornada? Digite {1} para sim ou Digite {2} para não\n");
			scanf("%d", &start);//variável start adquirindo valor
		}while(start>2||start<1);
		
		if(start == 1){//Começar a jornada
			pont+=2;//pontuação aumenta dois
			printf("KKKKKKKKKKKK, boa sorte\n");//humor
			Sleep(3000);//Tempo de espera para deixar mais dinâmico
			
			system("cls");//limpar tela
			
			printf("\nUm belo dia, Marcio foi fazer as suas entregas diárias.\n");
			system("pause");//Espera o jogador digitar qualquer coisa para avançar
			system("cls");//limpar tela
			printf("Andando pela rua em sua bike caloi, encontrou o caminho para o bar.\n");
			system("pause");//Espera o jogador digitar qualquer coisa para avançar
			system("cls");//limpar tela
			printf("\n Você vai para o bar ou continuará fazendo entregas??\n");
			printf("|Digite {1} se deseja ir para o bar|\n|Digite {2} se deseja continuar entregando cartas.\n");
			scanf("%d", &opcoes);//Variável opcoes adquirindo valor
			
			system("cls");//limpar tela
	
		if(opcoes == 1){//Quebra violão de Fagner
			
			pont+=2;//pontuação aumenta dois
			
			printf("Chegando no bar, Marcio Bro avista a gangue de Ceres contra os Queridinho de Alexssandra.\n");
			system("pause");//Espera o jogador digitar qualquer coisa para avançar
			system("cls");//limpar tela
			
			printf("Movido pela raiva pois não tinha como tomar cachaça, Marcio bro decide brigar com o líder da gangue Queridinhos de Alexssandra\n");
			system("pause");//Espera o jogador digitar qualquer coisa para avançar
			system("cls");//limpar tela
			
			printf("Fagner (Líder dos Queridinhos de Alexssandra) - Ora bolas, se não e o Marcio, aquele que...\n");
			system("pause");//Espera o jogador digitar qualquer coisa para avançar
			system("cls");//limpar tela
			
			printf("Marcio Bro - Sou eu mesmo, cantorzinho mixuruca\n");
			system("pause");//Espera o jogador digitar qualquer coisa para avançar
			system("cls");//limpar tela
			
			printf("Fagner toma uma lapada de CANA e vem pra cima de você. O QUE VOCÊ FAZ??\n");
			printf("|Digite {1} se deseja quebrar o violão de Fagner|\n|Digite {2} se deseja abraça-lo\n");
			scanf("%d", &opcoes);//Variável opcoes adquirindo valor
			
			system("cls");//limpar tela
			
			if(opcoes == 1){//Quebra violão de Fagner
				
				pont++;//pontuação aumenta um
				
				printf("Após ter seu violão quebrado por Marcio Bro. Fagner desiste de cantar e se aposenta.\n");
				system("pause");//Espera o jogador digitar qualquer coisa para avançar
				system("cls");//limpar tela
				
				printf("Marcio Bro vendo que seu cantor favorito se aposentou e desistiu de suas aventuras, fica triste e fica escutando as músicas do seu ídolo até sua aposentadoria como carteiro.\n");
				system("pause");//Espera o jogador digitar qualquer coisa para avançar
				system("cls");//limpar tela
				
				printf("  -----> FIM <----- ");//FIM DE JOGO
				system("pause");//Espera o jogador digitar qualquer coisa para avançar
				
			}else if (opcoes == 2){//Abraça Fagner
				
				pont+=2;//pontuação aumenta dois
				
				printf("Fagner se acalma e se junta a Marcio Bro para aventura que está por vir\n");
				system("pause");//Espera o jogador digitar qualquer coisa para avançar
				system("cls");//limpar tela
				
				printf("Porém, os clientes do bar esperavam o show de Fagner, mas Fagner desistiu do show para se juntar a Marcio\n");
				system("pause");//Espera o jogador digitar qualquer coisa para avançar
				system("cls");//limpar tela
				
				printf("Irados com a decisão do cantor, a gangue de Ceres e os Queridinhos de Alexsandra começam a brigar\n");
				printf("O COMBATE SE DAR ENTRE:\n");
				Sleep(3000);//Tempo de espera para deixar mais dinâmico
				printf("MARCIO BRO\tCONTRA\tQUERIDINHO DE ALEXSANDRA\n");
				printf("Mas, para toda briga precisa-se identificar a força de cada um\n");
				printf("Que aqui se dar pelos seus atributos.\n");
				system("pause");//Espera o jogador digitar qualquer coisa para avançar
				system("cls");//limpar tela
				
				printf("\t\t_________________________________________________\n");
				printf("\t\t|MARCIO BRO\t|\tQUERIDINHO DE ALEXSANDRA|\n");
				printf("\t\t|Força:15\t|\tForça:10                |\n");//atributos
				printf("\t\t|Defesa:15\t|\tDefesa:10               |\n");
				printf("\t\t|Vida:%d  \t|\tVida:%d                 |\n",v1,v2);
				printf("\t\t_________________________________________________\n");
				
				printf("Atacar com:\n1 - um pedaço de madeira [10 de dano]\nou\n2 - uma garrafa [12 de dano] ?\n");//opções de ataque
				scanf("%d",&atk);//Variável atk adquirindo valor
				while(v2>0){//enquanto não for negativo
					if(atk==1){//primeira opção de ataque
						system("cls");//limpar tela
								
						printf("O QUERIDINHO DE ALEXSANDRA TE ACERTOU COM UMA TAMPINHA ");
						printf("ENQUANTO VOCÊ PEGAVA O PEDAÇO DE MADEIRA.\n");
						Sleep(2500);//Tempo de espera para deixar mais dinâmico
								
						printf("VOCÊ PERDE 6 DE VIDA!\n");
						v1-=6;//MARCIO BRO PERDE 6 DE VIDA
						v2-=10;//OPONENTE PERDE 10 DE VIDA
						system("pause");//Espera o jogador digitar qualquer coisa para avançar
								
						system("cls");//limpar tela
								
						printf("\t\t_________________________________________________\n");
						printf("\t\t|MARCIO BRO\t|\tQUERIDINHO DE ALEXSANDRA|\n");
						printf("\t\t|Força:15\t|\tForça:10                |\n");//atributos
						printf("\t\t|Defesa:15\t|\tDefesa:10               |\n");
						printf("\t\t|Vida:%d  \t|\tVida:%d                 |\n",v1,v2);
						printf("\t\t_________________________________________________\n");
						
						printf("Atacar com:\n1 - um pedaço de madeira [10 de dano]\nou\n2 - uma garrafa [12 de dano] ?\n");//opções de ataque
						scanf("%d",&atk);//Variável atk adquirindo valor
							
					}else if(atk==2){//segunda opção de ataque
							
						system("cls");//limpar tela
								
						printf("O QUERIDINHO DE ALEXSANDRA TE ACERTOU COM UMA CADEIRA ");
						printf("ENQUANTO VOCÊ PEGAVA A GARRAFA.\n");
						Sleep(2500);//Tempo de espera para deixar mais dinâmico
						
						printf("VOCÊ PERDE 8 DE VIDA!\n");
						v1-=8;//MARCIO BRO PERDE 8 DE VIDA
						v2-=12;// OPONENTE PERDE 12 DE VIDA
						system("pause");//Espera o jogador digitar qualquer coisa para avançar
						
						system("cls");//limpar tela		
						printf("\t\t_________________________________________________\n");
						printf("\t\t|MARCIO BRO\t|\tQUERIDINHO DE ALEXSANDRA|\n");
						printf("\t\t|Força:15\t|\tForça:10                |\n");//atributos
						printf("\t\t|Defesa:15\t|\tDefesa:10               |\n");
						printf("\t\t|Vida:%d  \t|\tVida:%d                 |\n",v1,v2);
						printf("\t\t_________________________________________________\n");
						
						
						printf("Atacar com:\n1 - um pedaço de madeira [10 de dano]\nou\n2 - uma garrafa [12 de dano] ?\n");//opções de ataque
						scanf("%d",&atk);//Variável atk adquirindo valor
			
					}else{//caso selecionar uma opção inválida
						do{//fazer isso
							printf("Esta opção não está disponível.");
							system("cls");//limpar tela
						
							printf("Atacar com:\n1 - um pedaço de madeira [10 de dano]\nou\n2 - uma garrafa [12 de dano] ?\n");//opções de ataque
							scanf("%d",&atk);//Variável atk adquirindo valor
						}while(atk>2||atk<1);//enquanto for diferente de 1 e 2
						if(atk==1){//primeira opção de ataque
							system("cls");//limpar tela
									
							printf("O QUERIDINHO DE ALEXSANDRA TE ACERTOU COM UMA TAMPINHA ");
							printf("ENQUANTO VOCÊ PEGAVA O PEDAÇO DE MADEIRA.\n");
							Sleep(2500);//Tempo de espera para deixar mais dinâmico
									
							printf("VOCÊ PERDE 6 DE VIDA!\n");
							v1-=6;//MARCIO BRO PERDE 6 DE VIDA
							v2-=10;//OPONENTE PERDE 10 DE VIDA
							system("pause");//Espera o jogador digitar qualquer coisa para avançar
									
							system("cls");//limpar tela
					
							printf("\t\t_________________________________________________\n");
							printf("\t\t|MARCIO BRO\t|\tQUERIDINHO DE ALEXSANDRA|\n");
							printf("\t\t|Força:15\t|\tForça:10                |\n");//atributos
							printf("\t\t|Defesa:15\t|\tDefesa:10               |\n");
							printf("\t\t|Vida:%d  \t|\tVida:%d                 |\n",v1,v2);
							printf("\t\t_________________________________________________\n");
							
							
							printf("Atacar com:\n1 - um pedaço de madeira [10 de dano]\nou\n2 - uma garrafa [12 de dano] ?\n");//opções de ataque
							scanf("%d",&atk);//Variável atk adquirindo valor
								
						}else if(atk==2){//segunda opção de ataque
								
							system("cls");//limpar tela
									
							printf("O QUERIDINHO DE ALEXSANDRA TE ACERTOU COM UMA CADEIRA ");
							printf("ENQUANTO VOCÊ PEGAVA A GARRAFA.\n");
							Sleep(2500);//Tempo de espera para deixar mais dinâmico
							
							printf("VOCÊ PERDE 8 DE VIDA!\n");
							v1-=8;//MARCIO BRO PERDE 8 DE VIDA
							v2-=12;// OPONENTE PERDE 12 DE VIDA
							system("pause");//Espera o jogador digitar qualquer coisa para avançar
							
							system("cls");//limpar tela
									
							printf("\t\t_________________________________________________\n");
							printf("\t\t|MARCIO BRO\t|\tQUERIDINHO DE ALEXSANDRA|\n");
							printf("\t\t|Força:15\t|\tForça:10                |\n");//atributos
							printf("\t\t|Defesa:15\t|\tDefesa:10               |\n");
							printf("\t\t|Vida:%d  \t|\tVida:%d                 |\n",v1,v2);
							printf("\t\t_________________________________________________\n");
							
							
							printf("Atacar com:\n1 - um pedaço de madeira [10 de dano]\nou\n2 - uma garrafa [12 de dano] ?\n");//opções de ataque
							scanf("%d",&atk);//Variável atk adquirindo valor
						}
					
					}
				}
				system("cls");//limpar tela
				
				printf("Após o combate MARCIO BRO recupera suas energias comendo amendoim, antes de seu próximo combate.\n");
				pont+=2;//pontuação aumenta dois
				
				printf("O PROXÍMO COMBATE SE DAR ENTRE:\n");
				system("pause");//Espera o jogador digitar qualquer coisa para avançar
				system("cls");//limpar tela
				printf("MARCIO BRO\tCONTRA\tMEMBRO DA GANGUE DE CERES\n");
				system("cls");//limpar tela
				
				v1=30;//MARCIO BRO TEM VIDA REABASTECIDA APÓS COMER
				v2=20;//VIDA DO OPONENTE NOVO
				
				printf("\t\t_________________________________________________\n");
				printf("\t\t|MARCIO BRO\t|\tMEMBRO DA GANGUE DE CERES|\n");
				printf("\t\t|Força:15\t|\tForça:10                |\n");//atributos
				printf("\t\t|Defesa:15\t|\tDefesa:10               |\n");
				printf("\t\t|Vida:%d  \t|\tVida:%d                 |\n",v1,v2);
				printf("\t\t_________________________________________________\n");
				
				printf("Atacar com:\n1 - um pedaço de madeira [10 de dano]\nou\n2 - uma garrafa [12 de dano] ?\n");//opções de ataque
				scanf("%d",&atk);//Variável atk adquirindo valor
				while(v2>0){//enquanto não for negativo
					if(atk==1){//primeira opção de ataque
						system("cls");//limpar tela
								
						printf("O MEMBRO DA GANGUE DE CERES TE ACERTOU COM UMA TAMPINHA ");
						printf("ENQUANTO VOCÊ PEGAVA O PEDAÇO DE MADEIRA.\n");
						Sleep(2500);//Tempo de espera para deixar mais dinâmico
								
						printf("VOCÊ PERDE 6 DE VIDA!\n");
						v1-=6;//MARCIO BRO PERDE 6 DE VIDA
						v2-=10;//OPONENTE PERDE 10 DE VIDA
						system("pause");//Espera o jogador digitar qualquer coisa para avançar
								
						system("cls");//limpar tela
								
						printf("\t\t_________________________________________________\n");
						printf("\t\t|MARCIO BRO\t|\tMEMBRO DA GANGUE DE CERES|\n");
						printf("\t\t|Força:15\t|\tForça:10                |\n");//atributos
						printf("\t\t|Defesa:15\t|\tDefesa:10               |\n");
						printf("\t\t|Vida:%d  \t|\tVida:%d                 |\n",v1,v2);
						printf("\t\t_________________________________________________\n");
						
						
						printf("Atacar com:\n1 - um pedaço de madeira [10 de dano]\nou\n2 - uma garrafa [12 de dano] ?\n");//opções de ataque
						scanf("%d",&atk);//Variável atk adquirindo valor
							
					}else if(atk==2){//segunda opção de ataque
							
						system("cls");//limpar tela
								
						printf("O MEMBRO DA GANGUE DE CERES TE ACERTOU COM UMA CADEIRA ");
						printf("ENQUANTO VOCÊ PEGAVA A GARRAFA.\n");
						Sleep(2500);//Tempo de espera para deixar mais dinâmico
						
						printf("VOCÊ PERDE 8 DE VIDA!\n");
						v1-=8;//MARCIO BRO PERDE 8 DE VIDA
						v2-=12;// OPONENTE PERDE 12 DE VIDA
						system("pause");//Espera o jogador digitar qualquer coisa para avançar
						
						system("cls");//limpar tela
								
						printf("\t\t_________________________________________________\n");
						printf("\t\t|MARCIO BRO\t|\tMEMBRO DA GANGUE DE CERES|\n");
						printf("\t\t|Força:15\t|\tForça:10                |\n");//atributos
						printf("\t\t|Defesa:15\t|\tDefesa:10               |\n");
						printf("\t\t|Vida:%d  \t|\tVida:%d                 |\n",v1,v2);
						printf("\t\t_________________________________________________\n");
						
						
						printf("Atacar com:\n1 - um pedaço de madeira [10 de dano]\nou\n2 - uma garrafa [12 de dano] ?\n");//opções de ataque
						scanf("%d",&atk);//Variável atk adquirindo valor
			
					}else{//caso selecionar uma opção inválida
						do{//fazer isso
							printf("Esta opção não está disponível.");
							system("cls");//limpar tela
						
							printf("Atacar com:\n1 - um pedaço de madeira [10 de dano]\nou\n2 - uma garrafa [12 de dano] ?\n");//opções de ataque
							scanf("%d",&atk);//Variável atk adquirindo valor
						}while(atk>2||atk<1);//enquanto for diferente de 1 e 2
						if(atk==1){//primeira opção de ataque
							system("cls");//limpar tela
									
							printf("O MEMBRO DA GANGUE DE CERES TE ACERTOU COM UMA TAMPINHA ");
							printf("ENQUANTO VOCÊ PEGAVA O PEDAÇO DE MADEIRA.\n");
							Sleep(2500);//Tempo de espera para deixar mais dinâmico
									
							printf("VOCÊ PERDE 6 DE VIDA!\n");
							v1-=6;//MARCIO BRO PERDE 6 DE VIDA
							v2-=10;//OPONENTE PERDE 10 DE VIDA
							system("pause");//Espera o jogador digitar qualquer coisa para avançar
							system("cls");//limpar tela
									
							system("cls");//limpar tela
									
							printf("\t\t_________________________________________________\n");
							printf("\t\t|MARCIO BRO\t|\tMEMBRO DA GANGUE DE CERES|\n");
							printf("\t\t|Força:15\t|\tForça:10                |\n");//atributos
							printf("\t\t|Defesa:15\t|\tDefesa:10               |\n");
							printf("\t\t|Vida:%d  \t|\tVida:%d                 |\n",v1,v2);
							printf("\t\t_________________________________________________\n");
							
							
							printf("Atacar com:\n1 - um pedaço de madeira [10 de dano]\nou\n2 - uma garrafa [12 de dano] ?\n");//opções de ataque
							scanf("%d",&atk);//Variável atk adquirindo valor
								
						}else if(atk==2){//segunda opção de ataque
								
							system("cls");//limpar tela
									
							printf("O MEMBRO DA GANGUE DE CERES TE ACERTOU COM UMA CADEIRA ");
							printf("ENQUANTO VOCÊ PEGAVA A GARRAFA.\n");
							Sleep(2500);//Tempo de espera para deixar mais dinâmico
							
							printf("VOCÊ PERDE 8 DE VIDA!\n");
							v1-=8;//MARCIO BRO PERDE 8 DE VIDA
							v2-=12;// OPONENTE PERDE 12 DE VIDA
							system("pause");//Espera o jogador digitar qualquer coisa para avançar
							
							system("cls");//limpar tela
									
							printf("\t\t_________________________________________________\n");
							printf("\t\t|MARCIO BRO\t|\tMEMBRO DA GANGUE DE CERES|\n");
							printf("\t\t|Força:15\t|\tForça:10                |\n");//atributos
							printf("\t\t|Defesa:15\t|\tDefesa:10               |\n");
							printf("\t\t|Vida:%d  \t|\tVida:%d                 |\n",v1,v2);
							printf("\t\t_________________________________________________\n");
							
							
							printf("Atacar com:\n1 - um pedaço de madeira [10 de dano]\nou\n2 - uma garrafa [12 de dano] ?\n");//opções de ataque
							scanf("%d",&atk);//Variável atk adquirindo valor
						}
					
					}
				}
				system("cls");//limpar tela
				
				printf("APÓS A LUTA, MARCIO BRO TOMA ENERGÉTICO PARA RECUPERAR SUA ENERGIA E CHEGA AO CONFRONTO FINAL CONTRA O LÍDER DA GANGUE DE CERES QUE É:\n");
				pont+=2;//pontuação aumenta dois
				Sleep(4000);//Tempo de espera
				printf("BELCHIOR\tO GRANDE INIMIGO DE FAGNER\n");
				
				printf("MARCIO BRO - Vou acabar com você.\n");
				printf("BELCHIOR - Você sucumbirá aos meus pés e verá que sou melhor que FAGNER.\n");
				
				printf("FAGNER - ESPERE MARCIO BRO.\n");
				printf("FAGNER - PEGUE O MEU VIOLÃO E ACABE COM ELE.\n");
				
				printf("BELCHIOR - JÁ CHEGA, ESTÁ NA HORA DE LUTAR!\n");
				system("pause");//Espera o jogador digitar qualquer coisa para avançar
				system("cls");//limpar tela
				
				v1=35;//VIDA DO MARCIO BRO REABASTECIDA COM BÔNUS
				v2=52;//VIDA DO BELCHIOR
				
				printf("\t\t_________________________________________________\n");
				printf("\t\t|MARCIO BRO\t|\tBELCHIOR|\n");
				printf("\t\t|Força:15\t|\tForça:26                |\n");//atributos
				printf("\t\t|Defesa:20\t|\tDefesa:26               |\n");
				printf("\t\t|Vida:%d  \t|\tVida:%d                 |\n",v1,v2);
				printf("\t\t_________________________________________________\n");
				
				printf("Atacar com:\n1 - O VIOLÃO DE FAGNER [13 de dano]\nou\n2 - uma garrafa [10 de dano] ?\n");//Opções de ataque do Boss final
				
				printf("CASO, ESCOLHA VIOLÃO DE FAGNER GANHARÁ UM BôNUS DE 5 DE FORÇA E 5 DE DEFESA, AINDA 5 DE VIDA.\n");//Bônus de usar o violão de Fagner
				
				scanf("%d",&atk);//Variável atk adquirindo valor
				while(v2>0){//enquanto não for negativo
					if(atk==1){//primeira opção de ataque
						system("cls");//limpar tela
								
						printf("BELCHIOR TE ACERTOU COM UMA NOTA MUSICAL DÓ ");
						printf("ENQUANTO VOCÊ PEGAVA O VIOLÃO DE FAGNER.\n");
						Sleep(2500);//Tempo de espera para deixar mais dinâmico
								
						printf("VOCÊ PERDE 8 DE VIDA!\n");
						v1-=8;//MARCIO BRO PERDE 8 DE VIDA
						v2-=13;//BELCHIOR PERDE 13 DE VIDA
						v1+=5;//MARCIO BRO GANHA 5 DE VIDA POR CAUSA DO BÔNUS DO VIOLÃO
						
						printf("PORÉM VOCÊ CONTRA-ATACA COM UMA NOTA RÉ.\n");
						system("pause");//Espera o jogador digitar qualquer coisa para avançar
								
						system("cls");//limpar tela
								
						printf("\t\t_________________________________________________\n");
						printf("\t\t|MARCIO BRO\t|\tBELCHIOR|\n");
						printf("\t\t|Força:20\t|\tForça:26                |\n");
						printf("\t\t|Defesa:25\t|\tDefesa:26               |\n");
						printf("\t\t|Vida:%d  \t|\tVida:%d                 |\n",v1,v2);
						printf("\t\t_________________________________________________\n");
						
						
						printf("Atacar com:\n1 - O VIOLÃO DE FAGNER [13 de dano]\nou\n2 - uma garrafa [10 de dano] ?\n");//Opções de ataque do Boss final
						scanf("%d",&atk);//Variável atk adquirindo valor
							
					}else if(atk==2){//segunda opção de ataque
							
						system("cls");//limpar tela
								
						printf("BELCHIOR TE ACERTOU COM UMA NOTA MUSICAL MI ");
						printf("ENQUANTO VOCÊ PEGAVA A GARRAFA.\n");
						Sleep(2500);//Tempo de espera para deixar mais dinâmico
						
						printf("VOCÊ PERDE 6 DE VIDA!\n");
						v1-=6;//MARCIO BRO PERDE 6 DE VIDA
						v2-=10;//OPONENTE PERDE 10 DE VIDA
						system("pause");//Espera o jogador digitar qualquer coisa para avançar
						
						system("cls");//limpar tela
								
						printf("\t\t_________________________________________________\n");
						printf("\t\t|MARCIO BRO\t|\tBELCHIOR|\n");
						printf("\t\t|Força:15\t|\tForça:26                 |\n");//atributos
						printf("\t\t|Defesa:20\t|\tDefesa:26               |\n");
						printf("\t\t|Vida:%d  \t|\tVida:%d                 |\n",v1,v2);
						printf("\t\t_________________________________________________\n");
						
						
						printf("Atacar com:\n1 - O VIOLÃO DE FAGNER [13 de dano]\nou\n2 - uma garrafa [10 de dano] ?\n");//Opções de ataque do Boss final
						scanf("%d",&atk);//Variável atk adquirindo valor
			
					}else{//caso selecionar uma opção inválida
						do{//fazer isso
							printf("Esta opção não está disponível.");
							system("cls");//limpar tela
						
							printf("Atacar com:\n1 - O VIOLÃO DE FAGNER [13 de dano]\nou\n2 - uma garrafa [10 de dano] ?\n");//Opções de ataque do Boss final
							scanf("%d",&atk);//Variável atk adquirindo valor
						}while(atk>2||atk<1);//enquanto for diferente de 1 e 2
						if(atk==1){//primeira opção de ataque
							system("cls");//limpar tela
									
							printf("BELCHIOR TE ACERTOU COM UMA NOTA MUSICAL DÓ ");
							printf("ENQUANTO VOCÊ PEGAVA O VIOLÃO DE FAGNER.\n");
							Sleep(2500);//Tempo de espera para deixar mais dinâmico
							
							printf("VOCÊ PERDE 8 DE VIDA!\n");
							v1-=8;//MARCIO BRO PERDE 8 DE VIDA
							v2-=13;//BELCHIOR PERDE 13 DE VIDA
							v1+=5;//MARCIO BRO GANHA 5 DE VIDA POR CAUSA DO BÔNUS DO VIOLÃO
							
							printf("PORÉM VOCÊ CONTRA-ATACA COM UMA NOTA RÉ.\n");
							system("pause");//Espera o jogador digitar qualquer coisa para avançar
									
							system("cls");//limpar tela
									
							printf("\t\t_________________________________________________\n");
							printf("\t\t|MARCIO BRO\t|\tBELCHIOR|\n");
							printf("\t\t|Força:20\t|\tForça:26                |\n");
							printf("\t\t|Defesa:25\t|\tDefesa:26               |\n");
							printf("\t\t|Vida:%d  \t|\tVida:%d                 |\n",v1,v2);
							printf("\t\t_________________________________________________\n");
							
							
							printf("Atacar com:\n1 - O VIOLÃO DE FAGNER [13 de dano]\nou\n2 - uma garrafa [10 de dano] ?\n");//Opções de ataque do Boss final
							scanf("%d",&atk);//Variável atk adquirindo valor
								
						}else if(atk==2){//segunda opção de ataque
								
							system("cls");//limpar tela
									
							printf("BELCHIOR TE ACERTOU COM UMA NOTA MUSICAL MI ");
							printf("ENQUANTO VOCÊ PEGAVA A GARRAFA.\n");
							Sleep(2500);//Tempo de espera para deixar mais dinâmico
							
							printf("VOCÊ PERDE 6 DE VIDA!\n");
							v1-=6;//MARCIO BRO PERDE 6 DE VIDA
							v2-=10;//OPONENTE PERDE 10 DE VIDA
							system("pause");//Espera o jogador digitar qualquer coisa para avançar
							
							system("cls");//limpar tela
									
							printf("\t\t_________________________________________________\n");
							printf("\t\t|MARCIO BRO\t|\tBELCHIOR|\n");
							printf("\t\t|Força:15\t|\tForça:26                |\n");//atributos
							printf("\t\t|Defesa:20\t|\tDefesa:26               |\n");
							printf("\t\t|Vida:%d  \t|\tVida:%d                 |\n",v1,v2);
							printf("\t\t_________________________________________________\n");
							
							
							printf("Atacar com:\n1 - O VIOLÃO DE FAGNER [13 de dano]\nou\n2 - uma garrafa [10 de dano] ?\n");//Opções de ataque do Boss final
							scanf("%d",&atk);//Variável atk adquirindo valor
						}
					
					}
				}
				
				system("cls");//limpar tela
				
				printf("MARCIO BRO DERROTA BELCHIOR!\n");
				pont+=2;//pontuação aumenta dois
				printf("MARCIO BRO RECEBE HONRARIAS E BENEFICIOS DO DONO DO BAR, APÓS EVITAR DANOS MAIORES AO BAR.\n");
				
				printf("COM TODA A CONFUSÃO RESOLVIDA, MARCIO BRO VOLTA AO TRABALHO.\n");
				
				printf("  -----> FIM <----- ");//FIM DE JOGO
				system("pause");//Espera o jogador digitar qualquer coisa para avançar
				
			}        
		}else if(opcoes==2){//segunda opção de quando MARCIO BRO VAI FAZER SUAS ENTREGAS NORMALMENTE
			
			pont++;//pontuação aumenta um
			
			printf("MARCIO BRO FOI FAZER SUAS ENTREGAS.\n");
			
			printf("  -----> FIM <----- ");//FIM DE JOGO
			system("pause");//Espera o jogador digitar qualquer coisa para avançar
			
		}else{//caso selecionar uma opção inválida
			
			do{//fazer isso
				printf("Esta opção não está disponível.");		
				system("cls");//limpar tela
						
				printf("|Digite {1} se deseja ir para o bar|\n|Digite {2} se deseja continuar entregando cartas.\n");
				scanf("%d", &opcoes);//Variável opcoes adquirindo valor
			}while(opcoes>2||opcoes<1);//enquanto for diferente de 1 e 2
			
			if(opcoes == 1){//Quebra violão de Fagner
				pont+=2;//pontuação aumenta dois
			
				printf("Chegando no bar, Marcio Bro avista a gangue de Ceres contra os Queridinho de Alexssandra.\n");
				system("pause");//Espera o jogador digitar qualquer coisa para avançar
				system("cls");//limpar tela
				
				printf("Movido pela raiva pois não tinha como tomar cachaça, Marcio bro decide brigar com o líder da gangue Queridinhos de Alexssandra\n");
				system("pause");//Espera o jogador digitar qualquer coisa para avançar
				system("cls");//limpar tela
				
				printf("Fagner (Líder dos Queridinhos de Alexssandra) - Ora bolas, se não e o Marcio, aquele que...\n");
				system("pause");//Espera o jogador digitar qualquer coisa para avançar
				system("cls");//limpar tela
				
				printf("Marcio Bro - Sou eu mesmo, cantorzinho mixuruca\n");
				system("pause");//Espera o jogador digitar qualquer coisa para avançar
				system("cls");//limpar tela
				
				printf("Fagner toma uma lapada de CANA e vem pra cima de você. O QUE VOCÊ FAZ??\n");
				printf("|Digite {1} se deseja quebrar o violão de Fagner|\n|Digite {2} se deseja abraça-lo\n");
				scanf("%d", &opcoes);//Variável opcoes adquirindo valor
				
				system("cls");//limpar tela
			
			if(opcoes == 1){//Quebra violão de Fagner
				
				pont++;//pontuação aumenta um
				
				printf("Após ter seu violão quebrado por Marcio Bro. Fagner desiste de cantar e se aposenta.\n");
				system("pause");//Espera o jogador digitar qualquer coisa para avançar
				system("cls");//limpar tela
				
				printf("Marcio Bro vendo que seu cantor favorito se aposentou e desistiu de suas aventuras, fica triste e fica escutando as músicas do seu ídolo até sua aposentadoria como carteiro.\n");
				system("pause");//Espera o jogador digitar qualquer coisa para avançar
				system("cls");//limpar tela
				
				printf("  -----> FIM <----- ");//FIM DE JOGO
				system("pause");//Espera o jogador digitar qualquer coisa para avançar
				
			}else if (opcoes == 2){//Abraça Fagner
				
				pont+=2;//pontuação aumenta dois
				
				printf("Fagner se acalma e se junta a Marcio Bro para aventura que está por vir\n");
				system("pause");//Espera o jogador digitar qualquer coisa para avançar
				system("cls");//limpar tela
				
				printf("Porém, os clientes do bar esperavam o show de Fagner, mas Fagner desistiu do show para se juntar a Marcio\n");
				system("pause");//Espera o jogador digitar qualquer coisa para avançar
				system("cls");//limpar tela
				
				printf("Irados com a decisão do cantor, a gangue de Ceres e os Queridinhos de Alexsandra começam a brigar\n");
				printf("O COMBATE SE DAR ENTRE:\n");
				Sleep(3000);//Tempo de espera para deixar mais dinâmico
				printf("MARCIO BRO\tCONTRA\tQUERIDINHO DE ALEXSANDRA\n");
				printf("Mas, para toda briga precisa-se identificar a força de cada um\n");
				printf("Que aqui se dar pelos seus atributos.\n");
				system("pause");//Espera o jogador digitar qualquer coisa para avançar
				system("cls");//limpar tela
				
				printf("\t\t_________________________________________________\n");
				printf("\t\t|MARCIO BRO\t|\tQUERIDINHO DE ALEXSANDRA|\n");
				printf("\t\t|Força:15\t|\tForça:10                |\n");//atributos
				printf("\t\t|Defesa:15\t|\tDefesa:10               |\n");
				printf("\t\t|Vida:%d  \t|\tVida:%d                 |\n",v1,v2);
				printf("\t\t_________________________________________________\n");
				
				printf("Atacar com:\n1 - um pedaço de madeira [10 de dano]\nou\n2 - uma garrafa [12 de dano] ?\n");//opções de ataque
				scanf("%d",&atk);//Variável atk adquirindo valor
				while(v2>0){//enquanto não for negativo
					if(atk==1){//primeira opção de ataque
						system("cls");//limpar tela
								
						printf("O QUERIDINHO DE ALEXSANDRA TE ACERTOU COM UMA TAMPINHA ");
						printf("ENQUANTO VOCÊ PEGAVA O PEDAÇO DE MADEIRA.\n");
						Sleep(2500);//Tempo de espera para deixar mais dinâmico
								
						printf("VOCÊ PERDE 6 DE VIDA!\n");
						v1-=6;//MARCIO BRO PERDE 6 DE VIDA
						v2-=10;//OPONENTE PERDE 10 DE VIDA
						system("pause");//Espera o jogador digitar qualquer coisa para avançar
								
						system("cls");//limpar tela
								
						printf("\t\t_________________________________________________\n");
						printf("\t\t|MARCIO BRO\t|\tQUERIDINHO DE ALEXSANDRA|\n");
						printf("\t\t|Força:15\t|\tForça:10                |\n");//atributos
						printf("\t\t|Defesa:15\t|\tDefesa:10               |\n");
						printf("\t\t|Vida:%d  \t|\tVida:%d                 |\n",v1,v2);
						printf("\t\t_________________________________________________\n");
						
						printf("Atacar com:\n1 - um pedaço de madeira [10 de dano]\nou\n2 - uma garrafa [12 de dano] ?\n");//opções de ataque
						scanf("%d",&atk);//Variável atk adquirindo valor
							
					}else if(atk==2){//segunda opção de ataque
							
						system("cls");//limpar tela
								
						printf("O QUERIDINHO DE ALEXSANDRA TE ACERTOU COM UMA CADEIRA ");
						printf("ENQUANTO VOCÊ PEGAVA A GARRAFA.\n");
						Sleep(2500);//Tempo de espera para deixar mais dinâmico
						
						printf("VOCÊ PERDE 8 DE VIDA!\n");
						v1-=8;//MARCIO BRO PERDE 8 DE VIDA
						v2-=12;// OPONENTE PERDE 12 DE VIDA
						system("pause");//Espera o jogador digitar qualquer coisa para avançar
						
						system("cls");//limpar tela		
						printf("\t\t_________________________________________________\n");
						printf("\t\t|MARCIO BRO\t|\tQUERIDINHO DE ALEXSANDRA|\n");
						printf("\t\t|Força:15\t|\tForça:10                |\n");//atributos
						printf("\t\t|Defesa:15\t|\tDefesa:10               |\n");
						printf("\t\t|Vida:%d  \t|\tVida:%d                 |\n",v1,v2);
						printf("\t\t_________________________________________________\n");
						
						
						printf("Atacar com:\n1 - um pedaço de madeira [10 de dano]\nou\n2 - uma garrafa [12 de dano] ?\n");//opções de ataque
						scanf("%d",&atk);//Variável atk adquirindo valor
			
					}else{//caso selecionar uma opção inválida
						do{//fazer isso
							printf("Esta opção não está disponível.");
							system("cls");//limpar tela
						
							printf("Atacar com:\n1 - um pedaço de madeira [10 de dano]\nou\n2 - uma garrafa [12 de dano] ?\n");//opções de ataque
							scanf("%d",&atk);//Variável atk adquirindo valor
						}while(atk>2||atk<1);//enquanto for diferente de 1 e 2
						if(atk==1){//primeira opção de ataque
							system("cls");//limpar tela
									
							printf("O QUERIDINHO DE ALEXSANDRA TE ACERTOU COM UMA TAMPINHA ");
							printf("ENQUANTO VOCÊ PEGAVA O PEDAÇO DE MADEIRA.\n");
							Sleep(2500);//Tempo de espera para deixar mais dinâmico
									
							printf("VOCÊ PERDE 6 DE VIDA!\n");
							v1-=6;//MARCIO BRO PERDE 6 DE VIDA
							v2-=10;//OPONENTE PERDE 10 DE VIDA
							system("pause");//Espera o jogador digitar qualquer coisa para avançar
									
							system("cls");//limpar tela
					
							printf("\t\t_________________________________________________\n");
							printf("\t\t|MARCIO BRO\t|\tQUERIDINHO DE ALEXSANDRA|\n");
							printf("\t\t|Força:15\t|\tForça:10                |\n");//atributos
							printf("\t\t|Defesa:15\t|\tDefesa:10               |\n");
							printf("\t\t|Vida:%d  \t|\tVida:%d                 |\n",v1,v2);
							printf("\t\t_________________________________________________\n");
							
							
							printf("Atacar com:\n1 - um pedaço de madeira [10 de dano]\nou\n2 - uma garrafa [12 de dano] ?\n");//opções de ataque
							scanf("%d",&atk);//Variável atk adquirindo valor
								
						}else if(atk==2){//segunda opção de ataque
								
							system("cls");//limpar tela
									
							printf("O QUERIDINHO DE ALEXSANDRA TE ACERTOU COM UMA CADEIRA ");
							printf("ENQUANTO VOCÊ PEGAVA A GARRAFA.\n");
							Sleep(2500);//Tempo de espera para deixar mais dinâmico
							
							printf("VOCÊ PERDE 8 DE VIDA!\n");
							v1-=8;//MARCIO BRO PERDE 8 DE VIDA
							v2-=12;// OPONENTE PERDE 12 DE VIDA
							system("pause");//Espera o jogador digitar qualquer coisa para avançar
							
							system("cls");//limpar tela
									
							printf("\t\t_________________________________________________\n");
							printf("\t\t|MARCIO BRO\t|\tQUERIDINHO DE ALEXSANDRA|\n");
							printf("\t\t|Força:15\t|\tForça:10                |\n");//atributos
							printf("\t\t|Defesa:15\t|\tDefesa:10               |\n");
							printf("\t\t|Vida:%d  \t|\tVida:%d                 |\n",v1,v2);
							printf("\t\t_________________________________________________\n");
							
							
							printf("Atacar com:\n1 - um pedaço de madeira [10 de dano]\nou\n2 - uma garrafa [12 de dano] ?\n");//opções de ataque
							scanf("%d",&atk);//Variável atk adquirindo valor
						}
					
					}
				}
				system("cls");//limpar tela
				
				printf("Após o combate MARCIO BRO recupera suas energias comendo amendoim, antes de seu próximo combate.\n");
				pont+=2;//pontuação aumenta dois
				
				printf("O PROXÍMO COMBATE SE DAR ENTRE:\n");
				system("pause");//Espera o jogador digitar qualquer coisa para avançar
				system("cls");//limpar tela
				printf("MARCIO BRO\tCONTRA\tMEMBRO DA GANGUE DE CERES\n");
				system("cls");//limpar tela
				
				v1=30;//MARCIO BRO TEM VIDA REABASTECIDA APÓS COMER
				v2=20;//VIDA DO OPONENTE NOVO
				
				printf("\t\t_________________________________________________\n");
				printf("\t\t|MARCIO BRO\t|\tMEMBRO DA GANGUE DE CERES|\n");
				printf("\t\t|Força:15\t|\tForça:10                |\n");//atributos
				printf("\t\t|Defesa:15\t|\tDefesa:10               |\n");
				printf("\t\t|Vida:%d  \t|\tVida:%d                 |\n",v1,v2);
				printf("\t\t_________________________________________________\n");
				
				printf("Atacar com:\n1 - um pedaço de madeira [10 de dano]\nou\n2 - uma garrafa [12 de dano] ?\n");//opções de ataque
				scanf("%d",&atk);//Variável atk adquirindo valor
				while(v2>0){//enquanto não for negativo
					if(atk==1){//primeira opção de ataque
						system("cls");//limpar tela
								
						printf("O MEMBRO DA GANGUE DE CERES TE ACERTOU COM UMA TAMPINHA ");
						printf("ENQUANTO VOCÊ PEGAVA O PEDAÇO DE MADEIRA.\n");
						Sleep(2500);//Tempo de espera para deixar mais dinâmico
								
						printf("VOCÊ PERDE 6 DE VIDA!\n");
						v1-=6;//MARCIO BRO PERDE 6 DE VIDA
						v2-=10;//OPONENTE PERDE 10 DE VIDA
						system("pause");//Espera o jogador digitar qualquer coisa para avançar
								
						system("cls");//limpar tela
								
						printf("\t\t_________________________________________________\n");
						printf("\t\t|MARCIO BRO\t|\tMEMBRO DA GANGUE DE CERES|\n");
						printf("\t\t|Força:15\t|\tForça:10                |\n");//atributos
						printf("\t\t|Defesa:15\t|\tDefesa:10               |\n");
						printf("\t\t|Vida:%d  \t|\tVida:%d                 |\n",v1,v2);
						printf("\t\t_________________________________________________\n");
						
						
						printf("Atacar com:\n1 - um pedaço de madeira [10 de dano]\nou\n2 - uma garrafa [12 de dano] ?\n");//opções de ataque
						scanf("%d",&atk);//Variável atk adquirindo valor
							
					}else if(atk==2){//segunda opção de ataque
							
						system("cls");//limpar tela
								
						printf("O MEMBRO DA GANGUE DE CERES TE ACERTOU COM UMA CADEIRA ");
						printf("ENQUANTO VOCÊ PEGAVA A GARRAFA.\n");
						Sleep(2500);//Tempo de espera para deixar mais dinâmico
						
						printf("VOCÊ PERDE 8 DE VIDA!\n");
						v1-=8;//MARCIO BRO PERDE 8 DE VIDA
						v2-=12;// OPONENTE PERDE 12 DE VIDA
						system("pause");//Espera o jogador digitar qualquer coisa para avançar
						
						system("cls");//limpar tela
								
						printf("\t\t_________________________________________________\n");
						printf("\t\t|MARCIO BRO\t|\tMEMBRO DA GANGUE DE CERES|\n");
						printf("\t\t|Força:15\t|\tForça:10                |\n");//atributos
						printf("\t\t|Defesa:15\t|\tDefesa:10               |\n");
						printf("\t\t|Vida:%d  \t|\tVida:%d                 |\n",v1,v2);
						printf("\t\t_________________________________________________\n");
						
						
						printf("Atacar com:\n1 - um pedaço de madeira [10 de dano]\nou\n2 - uma garrafa [12 de dano] ?\n");//opções de ataque
						scanf("%d",&atk);//Variável atk adquirindo valor
			
					}else{//caso selecionar uma opção inválida
						do{//fazer isso
							printf("Esta opção não está disponível.");
							system("cls");//limpar tela
						
							printf("Atacar com:\n1 - um pedaço de madeira [10 de dano]\nou\n2 - uma garrafa [12 de dano] ?\n");//opções de ataque
							scanf("%d",&atk);//Variável atk adquirindo valor
						}while(atk>2||atk<1);//enquanto for diferente de 1 e 2
						if(atk==1){//primeira opção de ataque
							system("cls");//limpar tela
									
							printf("O MEMBRO DA GANGUE DE CERES TE ACERTOU COM UMA TAMPINHA ");
							printf("ENQUANTO VOCÊ PEGAVA O PEDAÇO DE MADEIRA.\n");
							Sleep(2500);//Tempo de espera para deixar mais dinâmico
									
							printf("VOCÊ PERDE 6 DE VIDA!\n");
							v1-=6;//MARCIO BRO PERDE 6 DE VIDA
							v2-=10;//OPONENTE PERDE 10 DE VIDA
							system("pause");//Espera o jogador digitar qualquer coisa para avançar
							system("cls");//limpar tela
									
							system("cls");//limpar tela
									
							printf("\t\t_________________________________________________\n");
							printf("\t\t|MARCIO BRO\t|\tMEMBRO DA GANGUE DE CERES|\n");
							printf("\t\t|Força:15\t|\tForça:10                |\n");//atributos
							printf("\t\t|Defesa:15\t|\tDefesa:10               |\n");
							printf("\t\t|Vida:%d  \t|\tVida:%d                 |\n",v1,v2);
							printf("\t\t_________________________________________________\n");
							
							
							printf("Atacar com:\n1 - um pedaço de madeira [10 de dano]\nou\n2 - uma garrafa [12 de dano] ?\n");//opções de ataque
							scanf("%d",&atk);//Variável atk adquirindo valor
								
						}else if(atk==2){//segunda opção de ataque
								
							system("cls");//limpar tela
									
							printf("O MEMBRO DA GANGUE DE CERES TE ACERTOU COM UMA CADEIRA ");
							printf("ENQUANTO VOCÊ PEGAVA A GARRAFA.\n");
							Sleep(2500);//Tempo de espera para deixar mais dinâmico
							
							printf("VOCÊ PERDE 8 DE VIDA!\n");
							v1-=8;//MARCIO BRO PERDE 8 DE VIDA
							v2-=12;// OPONENTE PERDE 12 DE VIDA
							system("pause");//Espera o jogador digitar qualquer coisa para avançar
							
							system("cls");//limpar tela
									
							printf("\t\t_________________________________________________\n");
							printf("\t\t|MARCIO BRO\t|\tMEMBRO DA GANGUE DE CERES|\n");
							printf("\t\t|Força:15\t|\tForça:10                |\n");//atributos
							printf("\t\t|Defesa:15\t|\tDefesa:10               |\n");
							printf("\t\t|Vida:%d  \t|\tVida:%d                 |\n",v1,v2);
							printf("\t\t_________________________________________________\n");
							
							
							printf("Atacar com:\n1 - um pedaço de madeira [10 de dano]\nou\n2 - uma garrafa [12 de dano] ?\n");//opções de ataque
							scanf("%d",&atk);//Variável atk adquirindo valor
						}
					
					}
				}
				system("cls");//limpar tela
				
				printf("APÓS A LUTA, MARCIO BRO TOMA ENERGÉTICO PARA RECUPERAR SUA ENERGIA E CHEGA AO CONFRONTO FINAL CONTRA O LÍDER DA GANGUE DE CERES QUE É:\n");
				pont+=2;//pontuação aumenta dois
				Sleep(4000);//Tempo de espera
				printf("BELCHIOR\tO GRANDE INIMIGO DE FAGNER\n");
				
				printf("MARCIO BRO - Vou acabar com você.\n");
				printf("BELCHIOR - Você sucumbirá aos meus pés e verá que sou melhor que FAGNER.\n");
				
				printf("FAGNER - ESPERE MARCIO BRO.\n");
				printf("FAGNER - PEGUE O MEU VIOLÃO E ACABE COM ELE.\n");
				
				printf("BELCHIOR - JÁ CHEGA, ESTÁ NA HORA DE LUTAR!\n");
				system("pause");//Espera o jogador digitar qualquer coisa para avançar
				system("cls");//limpar tela
				
				v1=35;//VIDA DO MARCIO BRO REABASTECIDA COM BÔNUS
				v2=52;//VIDA DO BELCHIOR
				
				printf("\t\t_________________________________________________\n");
				printf("\t\t|MARCIO BRO\t|\tBELCHIOR|\n");
				printf("\t\t|Força:15\t|\tForça:26                |\n");//atributos
				printf("\t\t|Defesa:20\t|\tDefesa:26               |\n");
				printf("\t\t|Vida:%d  \t|\tVida:%d                 |\n",v1,v2);
				printf("\t\t_________________________________________________\n");
				
				printf("Atacar com:\n1 - O VIOLÃO DE FAGNER [13 de dano]\nou\n2 - uma garrafa [10 de dano] ?\n");//Opções de ataque do Boss final
				
				printf("CASO, ESCOLHA VIOLÃO DE FAGNER GANHARÁ UM BôNUS DE 5 DE FORÇA E 5 DE DEFESA, AINDA 5 DE VIDA.\n");//Bônus de usar o violão de Fagner
				
				scanf("%d",&atk);//Variável atk adquirindo valor
				while(v2>0){//enquanto não for negativo
					if(atk==1){//primeira opção de ataque
						system("cls");//limpar tela
								
						printf("BELCHIOR TE ACERTOU COM UMA NOTA MUSICAL DÓ ");
						printf("ENQUANTO VOCÊ PEGAVA O VIOLÃO DE FAGNER.\n");
						Sleep(2500);//Tempo de espera para deixar mais dinâmico
								
						printf("VOCÊ PERDE 8 DE VIDA!\n");
						v1-=8;//MARCIO BRO PERDE 8 DE VIDA
						v2-=13;//BELCHIOR PERDE 13 DE VIDA
						v1+=5;//MARCIO BRO GANHA 5 DE VIDA POR CAUSA DO BÔNUS DO VIOLÃO
						
						printf("PORÉM VOCÊ CONTRA-ATACA COM UMA NOTA RÉ.\n");
						system("pause");//Espera o jogador digitar qualquer coisa para avançar
								
						system("cls");//limpar tela
								
						printf("\t\t_________________________________________________\n");
						printf("\t\t|MARCIO BRO\t|\tBELCHIOR|\n");
						printf("\t\t|Força:20\t|\tForça:26                |\n");
						printf("\t\t|Defesa:25\t|\tDefesa:26               |\n");
						printf("\t\t|Vida:%d  \t|\tVida:%d                 |\n",v1,v2);
						printf("\t\t_________________________________________________\n");
						
						
						printf("Atacar com:\n1 - O VIOLÃO DE FAGNER [13 de dano]\nou\n2 - uma garrafa [10 de dano] ?\n");//Opções de ataque do Boss final
						scanf("%d",&atk);//Variável atk adquirindo valor
							
					}else if(atk==2){//segunda opção de ataque
							
						system("cls");//limpar tela
								
						printf("BELCHIOR TE ACERTOU COM UMA NOTA MUSICAL MI ");
						printf("ENQUANTO VOCÊ PEGAVA A GARRAFA.\n");
						Sleep(2500);//Tempo de espera para deixar mais dinâmico
						
						printf("VOCÊ PERDE 6 DE VIDA!\n");
						v1-=6;//MARCIO BRO PERDE 6 DE VIDA
						v2-=10;//OPONENTE PERDE 10 DE VIDA
						system("pause");//Espera o jogador digitar qualquer coisa para avançar
						
						system("cls");//limpar tela
								
						printf("\t\t_________________________________________________\n");
						printf("\t\t|MARCIO BRO\t|\tBELCHIOR|\n");
						printf("\t\t|Força:15\t|\tForça:26                 |\n");//atributos
						printf("\t\t|Defesa:20\t|\tDefesa:26               |\n");
						printf("\t\t|Vida:%d  \t|\tVida:%d                 |\n",v1,v2);
						printf("\t\t_________________________________________________\n");
						
						
						printf("Atacar com:\n1 - O VIOLÃO DE FAGNER [13 de dano]\nou\n2 - uma garrafa [10 de dano] ?\n");//Opções de ataque do Boss final
						scanf("%d",&atk);//Variável atk adquirindo valor
			
					}else{//caso selecionar uma opção inválida
						do{//fazer isso
							printf("Esta opção não está disponível.");
							system("cls");//limpar tela
						
							printf("Atacar com:\n1 - O VIOLÃO DE FAGNER [13 de dano]\nou\n2 - uma garrafa [10 de dano] ?\n");//Opções de ataque do Boss final
							scanf("%d",&atk);//Variável atk adquirindo valor
						}while(atk>2||atk<1);//enquanto for diferente de 1 e 2
						if(atk==1){//primeira opção de ataque
							system("cls");//limpar tela
									
							printf("BELCHIOR TE ACERTOU COM UMA NOTA MUSICAL DÓ ");
							printf("ENQUANTO VOCÊ PEGAVA O VIOLÃO DE FAGNER.\n");
							Sleep(2500);//Tempo de espera para deixar mais dinâmico
							
							printf("VOCÊ PERDE 8 DE VIDA!\n");
							v1-=8;//MARCIO BRO PERDE 8 DE VIDA
							v2-=13;//BELCHIOR PERDE 13 DE VIDA
							v1+=5;//MARCIO BRO GANHA 5 DE VIDA POR CAUSA DO BÔNUS DO VIOLÃO
							
							printf("PORÉM VOCÊ CONTRA-ATACA COM UMA NOTA RÉ.\n");
							system("pause");//Espera o jogador digitar qualquer coisa para avançar
									
							system("cls");//limpar tela
									
							printf("\t\t_________________________________________________\n");
							printf("\t\t|MARCIO BRO\t|\tBELCHIOR|\n");
							printf("\t\t|Força:20\t|\tForça:26                |\n");
							printf("\t\t|Defesa:25\t|\tDefesa:26               |\n");
							printf("\t\t|Vida:%d  \t|\tVida:%d                 |\n",v1,v2);
							printf("\t\t_________________________________________________\n");
							
							
							printf("Atacar com:\n1 - O VIOLÃO DE FAGNER [13 de dano]\nou\n2 - uma garrafa [10 de dano] ?\n");//Opções de ataque do Boss final
							scanf("%d",&atk);//Variável atk adquirindo valor
								
						}else if(atk==2){//segunda opção de ataque
								
							system("cls");//limpar tela
									
							printf("BELCHIOR TE ACERTOU COM UMA NOTA MUSICAL MI ");
							printf("ENQUANTO VOCÊ PEGAVA A GARRAFA.\n");
							Sleep(2500);//Tempo de espera para deixar mais dinâmico
							
							printf("VOCÊ PERDE 6 DE VIDA!\n");
							v1-=6;//MARCIO BRO PERDE 6 DE VIDA
							v2-=10;//OPONENTE PERDE 10 DE VIDA
							system("pause");//Espera o jogador digitar qualquer coisa para avançar
							
							system("cls");//limpar tela
									
							printf("\t\t_________________________________________________\n");
							printf("\t\t|MARCIO BRO\t|\tBELCHIOR|\n");
							printf("\t\t|Força:15\t|\tForça:26                |\n");//atributos
							printf("\t\t|Defesa:20\t|\tDefesa:26               |\n");
							printf("\t\t|Vida:%d  \t|\tVida:%d                 |\n",v1,v2);
							printf("\t\t_________________________________________________\n");
							
							
							printf("Atacar com:\n1 - O VIOLÃO DE FAGNER [13 de dano]\nou\n2 - uma garrafa [10 de dano] ?\n");//Opções de ataque do Boss final
							scanf("%d",&atk);//Variável atk adquirindo valor
						}
					
					}
				}
				
				system("cls");//limpar tela
				
				printf("MARCIO BRO DERROTA BELCHIOR!\n");
				pont+=2;//pontuação aumenta dois
				printf("MARCIO BRO RECEBE HONRARIAS E BENEFICIOS DO DONO DO BAR, APÓS EVITAR DANOS MAIORES AO BAR.\n");
				
				printf("COM TODA A CONFUSÃO RESOLVIDA, MARCIO BRO VOLTA AO TRABALHO.\n");
				
				printf("  -----> FIM <----- ");//FIM DE JOGO
				system("pause");//Espera o jogador digitar qualquer coisa para avançar
				
			}        
		}else if(opcoes==2){//MARCIO BRO CONTINUOU FAZENDO ENTREGAS
			
			pont++;//pontuação aumenta um
			
			system("cls");//limpar tela
			
			printf("MARCIO BRO FOI FAZER SUAS ENTREGAS.\n");
			
			printf("  -----> FIM <----- ");//FIM DE JOGO
			system("pause");//Espera o jogador digitar qualquer coisa para avançar
			
		}
			
		}	
	}else if(start == 2){//Não quer jogar, tchau
		
			pont++;//pontuação aumenta um
			
			system("cls");//limpar tela
			
			printf("Nunca mais volte, obrigado.\n");
			
			printf("  -----> FIM <----- ");//FIM DE JOGO
			system("pause");//Espera o jogador digitar qualquer coisa para avançar
		
	}
		
	}
	finish = clock();//final do cronômetro
	duration = (double)(finish - comeco) / CLOCKS_PER_SEC;//valor do cronômetro menos tempo de clocks de cpu
	minuto= (duration%3600)/60;//cálculo para colocar os minutos
	duration = (duration%3600)%60;//cálculo para colocar os segundos
	printf("\nNOME DO JOGADOR: %s",nome);//apresenta nome do jogador
	printf(" E SEU TEMPO FOI DE %d Minutos e %d Segundos\n",minuto,duration);//tempo final do jogador
	printf("SUA PONTUAÇÃO FOI DE :%d\n",pont);//pontuação final do jogador
	system("pause");//Espera o jogador digitar qualquer coisa para avançar
}

int a,b,L,L2;
void gotoxy(int x,int y){
    COORD c;		
    c.X = x;			//função para definir duas coordenadas
    c.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
}
void titulo(){//função do título do jogo
	system("color 0f");
	printf("\n\n");
	printf(ANSI_COLOR_RED"                                                \n");
	printf("\t\t                    ___                          \n");
	printf("\t\t                   /__/                          \n");
	printf("\t\t        __  __    ____    ____   ____   __   ___  \n");
	printf("\t\t       /  |/  |  /    |  /    \\ /  __| /__| / __\\ \n");
	printf("\t\t      / |__/  | /  4  | /   D_|/  /__ /  / / /_// \n");
	printf("\t\t    /__/  |__|/__/|__|/__/|_| \\____//__/  \\___/  \n");		//titulo do jogo
	printf("\t\t                    ___               \n");
	printf("\t\t                   /   \\   ____     ___      \n");
	printf("\t\t                  /  D_/  /    \\   / __\\   \n");
	printf("\t\t                /  D\\   /   D_|  / /_//     \n");
	printf("\t\t                /____/  /__/|_|   \\___/      \n");
	printf("\t\t                                                  \n");
	printf("\t\t                                                  \n");
	printf("\t\t                                                  \n");
	system("pause");//Espera digitar algo
}
int main(){//função principal
    /*//menu*/
    setlocale(LC_ALL, "Portuguese");//Colocando para reconhecer o português
    int opcao;
    
    titulo();
    
    do{//faça isso
        inicio://inicio
        opcao=0;//opção recebe 0
        L=2;L2=2;b=2;//variáveis adquirindo novos valores
        system("cls");//limpa tela
        system("color 0f");//cor
		printf(ANSI_COLOR_RED"\n     |THE JOURNEY OF MÁRCIO BRO|");		//menu do jogo
		printf("\n     |-----[1]-----|---PLAY----|");
		printf("\n     |-----[2]-----|--CREDITS--|");
		printf("\n     |-----[3]-----|---QUIT----|"ANSI_COLOR_RESET);
        do{//faça isso
            gotoxy(1,L);
            printf(ANSI_COLOR_RED"-->");	//função das coordenadas da seta
            gotoxy(10,6);
            if(kbhit){a=getch();}
            if(a == 80 && b < 4){L2=L;L++;b++;}	/*seta p/baixo*/
            if(a == 72 && b > 2){L2=L;L--;b--;}	/*seta p/cima */
            if(L!=L2){gotoxy(1,L2);printf("   ");L2=L;}
            if(a == 13){opcao=b-1;}
        }while(opcao == 0);// enquanto for igual a 0
        switch (opcao){
            case 1://caso selecione 1
                system("cls");//limpar tela
                jogo();//função que contém o jogo
                break;//encerra a opção
            case 2://caso selecione 2
                system("cls");//limpar tela
                Sleep(2000);//Tempo de espera
                printf(ANSI_COLOR_MAGENTA"\n\tGame developers: Yuri e Caio e Yan"ANSI_COLOR_RESET);
                Sleep(2000);//Tempo de espera
                printf(ANSI_COLOR_CYAN"\n\n\t\tStorytelling team: Caio e Lucas"ANSI_COLOR_RESET);	//créditos
                Sleep(2000);//Tempo de espera
                printf(ANSI_COLOR_AZUL"\n\n\t\t\tArt director: André"ANSI_COLOR_RESET);
                Sleep(2000);//Tempo de espera
                printf(ANSI_COLOR_VERDE"\n\n\t\t\t\tSoundtrack composer: Yan\n\n"ANSI_COLOR_RED);
                system("pause");//Espera digitar algo
                break;//encerra a opção
            case 3://Caso selecione 3
                system("cls");//limpa tela
                printf(ANSI_COLOR_RED"\n\tVocê pediu para sair, destruindo este mundo completamente...\n");	//fim do jogo
                Sleep(5000);//Tempo de espera
                break;//encerra a opção
            default:
                printf(ANSI_COLOR_RED"\n\tVocê deve escolher uma opção válida\n");	//default para opções inválidas
                printf("\tPressione qualquer tecla para voltar ao menu\n");	
                system("pause");//Espera digitar algo
                goto inicio;//voltar para o inicio
        }
    }while(opcao!=3);//laço de repetição enquanto for diferente de 3
    
    return 0;//retorna o valor 0 ao finalizar o programa
}
