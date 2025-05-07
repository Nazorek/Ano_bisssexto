int ehbissexto(int ano);

int main () {
    int ano;
    printf("digite um ano: ");
    scanf("%d" , &ano);
    
    
    if (ano <=0) {

        printf("Por favor,insira um ano positivo./n");
    }
    
    
    else{
        if (ehbissexto(ano))
        {
            printf("o ano %d bissexto./n" , ano );
        }
          
        else {
        printf("O ano %d nao é bissexto./n" , ano);
    }
        
    }


  
    return 0;

}

    

    int ehbissexto(int ano){
        return (ano % 4 == 0 && (ano % 100 != 0 || ano % 400 ==0)) ? 1: 0;
    }
