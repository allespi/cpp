#include<stdio.h>
#include<stdlib.h>
#include<math.h>

main()
{
      int a,cond=1,z=1;
      while(z==1){    
      
      printf("=============================\n");
      printf("¿QUIEN QUIERE SER MILLONARIO?\n");
      printf("=============================\n\n");
      
      printf("si logras contestar las siguientes preguntas de forma correcta podras llevarte un millon de Lempiras\n");
      
      printf("Pregunta 1: ¿Cual es el rio mas largo del mundo? \n\n");
      printf("1. Rio Ulua\t         2.Rio Amazonas\n3.Rio Chamelecon\t 4.Rio Motagua\n");
      
      scanf("%d",&a);  
      if(a!=2){
      
              printf("\nLo sentimos\n");
              cond=0;
              }
      if(a==2){
               printf("\nCorrecto\nYa tienes 1,000 lempiras\n\n");
               
               
               printf("Pregunta 2: ¿Cual es el pais con mas habitantes del mundo?\n\n");
               printf("1. USA \t2.India\n3. China\t4. Rusia\n");
               scanf("%d",&a);
               }
              
              if(a!=3 ){
                        printf("\nLo sentimos\n");
                        cond=0;
                        }
               if(a==3 && cond==1){
                       printf("\nCorrecto\nYa tienes 2,000 Lempiras\n\n");  
					        
                       printf("Pregunta 3: ¿Cual es el edificio mas alto del mundo?\n");
                       printf("1. Princess Tower\t2. Empire State Building \n3. HHHR Tower\t4. Burj Khalifa\n");
                       scanf("%d",&a);
                       if(a!=4){
                                printf("\nLo sentimos\n");
                                cond=0;
                                }
                       if(a==4 && cond==1){
                                printf("\nCorrecto\nYa tienes 5,000 Lempiras\n\n");
                                
                                printf("Pregunta 4: ¿En que año cayo el muro de Berlin?\n");
                                printf("1.1989\t2.1876\n3.1986\t4.2001\n");
                                scanf("%d",&a);
                                if(a!=1){
                                         printf("\nLo sentimos\n");
                                         cond=0;
                                         }
                                if(a==1 && cond==1){
                                         printf("\nCorrecto\nYa tienes 10,000 Lempiras\n\n");
                                         
                                         printf("Pregunta 5: ¿Cuantos tiempo duro la Primera Guerra Mundial?\n");
                                         printf("1. De 1914 a 1918\t2.De 1829 a 1832\n3.De 1732 a 1742\t4.De 1936 a 1942\n");
                                         scanf("%d",&a);
                                         if(a!=1){
                                                  printf("\nLo sentimos\n");
                                                  cond=0;
                                                  }
                                         if(a==1 && cond==1){
                                                  printf("\nCorrecto\nYa tienes 20,000 Lempiras\n\n");
                                                  
                                                  printf("Pregunta 6: ¿Cuál es el océano más grande del mundo?\n");
                                                  printf("1.Atlantico\t2.Indico\n3.Pacifico\t4. Artico\n");
                                                  scanf("%d",&a);
                                                  if(a!=3){
                                                           printf("\nLo sentimos\n");
                                                           cond=0;
                                                           }
                                                  if(a==3 && cond==1){
                                                           printf("\nCorrecto\nYa tienes 40,000 Lempiras\n\n");
                                                           
                                                           printf("Pregunta 7:¿Cuántos lados tiene un heptágono?\n");
                                                           printf("1. 8\t2. 7\n3. 9\t4.12\n");
                                                           scanf("%d",&a);
                                                           if(a!=2){
                                                                    printf("\nLo sentimos\n");
                                                                    cond=0;
                                                                    }
                                                           if(a==2 && cond==1){
                                                                    printf("\nCorrecto\nYa tienes 80,000 Lempiras\n\n");
                                                                    
                                                                    printf("Pregunta 8: ¿Cuál es el planeta más grande del Sistema Solar?\n");
                                                                    printf("1.El Sol\t2. Pluton\n3. Jupiter\t4.Saturno\n");
                                                                    scanf("%d",&a);
                                                                    if(a!=3){
                                                                             printf("\nLo sentimos\n");
                                                                             cond=0;
                                                                             }
                                                                    if(a==3 && cond==1){
                                                                             printf("\nCorrecto\nYa tienes 160,000 Lempiras\n\n");
                                                                             
                                                                             printf("Pregunta 9: ¿Quién fue el primer presidente democrático de España después de la dictadura franquista?\n");
                                                                             printf("1.Francisco Franco\t2.Pedro Pérez \n3.Adolfo Suarez\t4.Luis Carrero Blanco\n");
                                                                             scanf("%d",&a);
                                                                             if(a!=3){
                                                                                      printf("\nLo sentimos\n");
                                                                                      cond=0;
                                                                                      }
                                                                             if(a==3 && cond==1){
                                                                                      printf("\nCorrecto\nYa tienes 340,000 Lempiras\n\n");
                                                                                      
                                                                                      printf("Pregunta 10: ¿Cuál es el órgano más grande del cuerpo humano?\n");
                                                                                      printf("1.Pulmones\t2.La Piel\n3.Higado\t4.Corazon\n");
                                                                                      scanf("%d",&a);
                                                                                      if(a!=2){
                                                                                               printf("\nLo sentimos\n");
                                                                                               cond=0;
                                                                                               }
                                                                                      if(a==2 && cond==1){
                                                                                      			printf("\ncorrecto\nYa tienes 500,000 lempiras\n");
                                                                                               printf("\nHaz avanzado a la mitad del juego, esta es una zona segura\n");
																							   printf("puedes seguir adelante a por el millon o puedes retirarte\n\n");
                                                                                               }
                                                                                      }
                                                                             }
                                                                    }
                                                           }
                                                  }
                                         }
                                }
                       }   
                       
             printf("Si desea seguir intentandolo pulsa 1,sino pulsa 0\n");
             scanf("%d",&z);          
      }           
                                                                        
      system("pause");
      