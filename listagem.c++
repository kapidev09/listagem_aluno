#include <iostream>
#include <vector>
 using namespace std;

  void presenca(int presente, int resposta){
       do {
         
          cout<<"este alunos esta presente? ";
           cout<<presente<<endl;
           cin>>resposta;
       } while (true);
       
  };



sla sla 
]
  int main (){
 
      int resposta;
     int nomes;

     vector<int> alunos;
     vector<int> presencas;

      do{

     
     cout<<" escreva os nomes pra chamada/lista \"o numero 123 e pra parar\" ";
      cin>>nomes;
       alunos.push_back(nomes);

        if (nomes == 123){
           break;
        };



      }while (true);


          for (int x = 0; x < alunos.size(); x++){
             cout<<alunos[x]<<endl;

          };

              for (int x = 0 ; x < alunos.size(); x++){
             
               cout<<"esta pessoa esta presente ? "<< alunos[x]<<endl;
               cout<<" coloca 0 pra confrimar a presenca, é 1 pra negar a presenca"<<endl;
               cin>>resposta;
                
                if (resposta == 0){
                   cout<<"confirmado, esta presente";
 
                   presencas.push_back(resposta);
                }else {
                   cout<<"confirmado, não está presente "<<endl;
                    presencas.push_back(resposta);

                }
             
      


              }



    return 0;
  }