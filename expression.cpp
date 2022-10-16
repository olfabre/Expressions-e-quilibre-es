#include<iostream>
#include <fstream>
#include <stack>

using namespace std;

#include "expression.h"


bool expression::equilibre(char* filename)
{
    
    
    
    // Ouverture du fichier en argument
    file.open(filename, std::ifstream::in);
    file >> c;

            // Lecture du contenu du fichier caratere par caratere tant que le contenu n'est pas terminé
            while(!file.eof()){

                            //Lecture du caratere et l'affecte dans la viariable c et avance le chariot de lecture
                            
                            
                               

                                // Si balises ouvertures
                                if ( (c == '(') || (c == '[') || (c == '{') )
                                {
                                    // on ajoute dans la pile
                                    pile.push(c);
                                    //cout << c << " ";
                                
                                    

                                }
                                
                                // Si balises fermetures
                                
                                if (!pile.empty()){ // si pile est non vide

                                        if ( ( c == ')') && (pile.top()=='(') )  
                                        {
                                            //cout << c << " ";
                                            pile.pop(); // on le supprime de la pile
                                            
                                        } 
                                        
                                        if ( ( c == ']') && (pile.top()=='[') ) 
                                        {
                                             //cout << c << " ";
                                            pile.pop(); // on le supprime de la pile
                                           
                                        }

                                        if ( ( c == '}') && (pile.top()=='{') ) 
                                        {
                                             //cout << c << " ";
                                            pile.pop(); // on le supprime de la pile
                                            
                                        } 
                                
                                } // Condition pile pas vide
                                else{
                                    pile.push(c);
                                }
 
                        file >> c;

 


            }

    // Fermeture du fichier
    file.close();


    if (pile.empty()){
        return(true);
    }else{
        
        return(false) ;}
}