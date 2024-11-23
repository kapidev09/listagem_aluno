#include <iostream>
#include <vector>
 using namespace std;

//lembrando que este código está sendo desenvolvido ainda tem coisa que estão erradas mas está para uso.

  void presenca(int presente, int resposta){
       do {
         
          cout<<"este alunos esta presente? ";
           cout<<presente<<endl;
           cin>>resposta;
       } while (true);
       
  };

 /// talvez tenha um struct pra colocar os loops pra poder fazer confirmação, isso otimizaria um pouco o código.

  


  int main (){
 
      int resposta;
       string nomes;
    

     vector<string> alunos;
     vector<int> presencas;




   cout<<" escreva os nomes pra chamada/lista \"o numero 123 e pra parar\" "<<endl;
      do{

     
  
      cin>>nomes;
       
         if (nomes == "123"){
           break;
        };
       
       alunos.push_back(nomes);

      



      }while (true);
 
 
 
               cout<<"-----------------------------------------------"<<endl;
              cout<<endl;
             cout<<"estes são as pessoas que estão presente que vc adcionou"<<endl;
            

          for (int x = 0; x < alunos.size(); x++){
             cout<<alunos[x]<<endl;

          };
             cout<<"-----------------------------------------------"<<endl;
              cout<<endl;
             

              for (int x = 0 ; x < alunos.size(); x++){
             cout<<endl;
             
               cout<<"esta pessoa esta presente ? "<< alunos[x]<<endl;
               
               cout<<"coloca 0 pra confrimar a presenca, é 1 pra negar a presenca"<<endl;
               
               cin>>resposta;
                
                if (resposta == 0){
                   cout<<endl;
                   cout<<"confirmado, esta presente"<<endl;
 
                   presencas.push_back(resposta);
                }else if (resposta == 1) {
                      cout<<endl;
                   cout<<"confirmado, não está presente "<<endl;
                    presencas.push_back(resposta);

                };


              };
              
              
                    system('pause');
                    system('cls');
                  
                  
                    cout<<"lembrando que 0 confirma a presença é o 1 confirmar que não esta presente "<<endl;
                  
                  for(int x = 0; x < presencas.size(); x++){
                   
                     
                     cout<<endl;
                     
                      cout<<"pessoa: "<<alunos[x]<<" esta "<<presencas[x]<<endl;
                  };
              



    return 0;
  }
