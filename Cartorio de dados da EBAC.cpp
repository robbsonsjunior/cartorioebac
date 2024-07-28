#include<stdio.h>//biblioteca de comunica��o com o usuario
#include<stdlib.h>//biblioteca de aloca��o de espa�o e memoria
#include<locale.h>//biblioteca de aloca��o de espa�o e regi�o
#include<string.h>//biblioteca das strings


int registro()//fun��o responsavel por cadastrar os usuarios no sistem
{    //inicio da cria��o das variaveis/strings
    char arquivo[40];
	char cpf[40];
	char nome[40];
	char sobrenome[40];
	char cargo[40];
	 //final da cria��o das variaveis/strings
	printf("Digite o cpf a ser regitrado:");//coletando informa��es do usuario
	scanf("%s",cpf);//%s refere-se a string
	
	strcpy(arquivo,cpf);//responsavel por copiar os valores das strings
	
	FILE*file;//cria o arquivo
	file=fopen(arquivo,"w");//cria o arquivo
	fprintf(file,"cpf:");//salva os valores das strings
	fclose(file);//fecha o arquivo
	
	file=fopen(arquivo,"a");
	fprintf(file,cpf);
	fclose(file);
	
	file=fopen(arquivo,"a");
	fprintf(file,",");
	fclose(file);
	
	printf("Digite o nome a ser cadastrado:");
	scanf("%s",nome);

	
	file=fopen(arquivo,"a");
	fprintf(file,"nome:");
	fclose(file);
	
	file=fopen(arquivo,"a");
	fprintf(file,nome);
	fclose(file);
	
	file=fopen(arquivo,"a");
	fprintf(file,",");
	fclose(file);
	
	printf("digite o sobrenome a ser cadastrado:");
	scanf("%s",sobrenome);

	
	file=fopen(arquivo,"a");
	fprintf(file,"sobrenome:");
	fclose(file);
	
	file=fopen(arquivo,"a");
	fprintf(file,sobrenome);
	fclose(file);
	
	file=fopen(arquivo,"a");
	fprintf(file,",");
	fclose(file);
	
	printf("digite o cargo a ser regitrado:");
	scanf("%s",cargo);
	
	
	file=fopen(arquivo,"a");
	fprintf(file,"cargo");
	fclose(file);
	
	file=fopen(arquivo,"a");
	fprintf(file,cargo);
	fclose(file);
	
   system ("pause");
}

int consulta()
{
	char cpf [40];
	char conteudo[200];
	
	setlocale(LC_ALL,"portuguese");
	
	printf("Digite o cpf a ser consultado:");
	scanf("%s",cpf);
	
	FILE*file;
	file=fopen(cpf,"r");
	
	if(file==NULL)
	{
		printf("N�o foi possivel acessar os dados, cpf incorreto!\n");
	
	}

	
	while(fgets(conteudo,200,file)!=NULL);
	{
		printf("Esses s�o os dados a serem consultados!\n");
	    printf("%s",conteudo);
	    printf("\n\n");
	}
	
	system("pause");
}

int Deletar()
{
	char cpf[40];
	
	printf("Digite o numero de cpf a ser deletado!");
	scanf("%s",cpf);
	
	remove(cpf);
	
	FILE*file;
	file=fopen(cpf,"r");
	
	if(file==NULL);
	
{
	printf("O usuario n�o se encontra no sistema!\n");
	system("pause");
	
	
}
		
	
}



int main()
{
	int opcao=0;//definindo variaves
	int x=1;
	
	for(x=1;x=1;)
	{
		
	system("cls");
	
    	setlocale(LC_ALL,"portuguese");//definindo a linguagem
	//inicio do menu
    printf("###Bem vindos ao cartorio de dados da EBAC###\n\n");
	printf("Escolha uma das op��es a seguir.\n");
	printf("\t1 Registrar nome.\n");
	printf("\t2 Consultar nome.\n");
	printf("\t3 deletar nome.\n");
	printf("\t4 Sair do sistema\n\n");
	printf("Op��o:");
	//fim do menu
	
	scanf("%d",&opcao);//armazenando a escolha do usuario
	system("cls");//responsavel por limpar a tela
	
	switch(opcao)//inicio da sele��o do menu
   {
		
	case 1:
		registro();//chamada de fun��es
		break;
		
	case 2:
	    consulta();	
        break;
        
    case 3:
	    Deletar();   
	    break;
	    
	case 4:
	    printf("Obrigado por utilizar o sistema !");
	    return 0;
	    break;
	    
	default:
	    printf("Essa op��o n�o est� disponivel!");
		system("pause");
		break;   
	//fim da sele��o do menu
	
    }
    } 
}
