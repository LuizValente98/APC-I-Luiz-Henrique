#include <stdio.h>

int main() {
   int tabela[3][3];
   //    0  1  3
   // 0 |  |  |  | 
   // 1 |  |  |  |
   // 3 |  |  |  |

   tabela[0][0] = 1;
   //    0  1  3
   // 0 |1 |  |  | 
   // 1 |  |  |  |
   // 3 |  |  |  |

    tabela[0][1] = 1;
   //    0  1  3
   // 0 |1 |0 |  | 
   // 1 |  |  |  |
   // 3 |  |  |  |

     tabela[0][2] = 1;
   //    0  1  3
   // 0 |1 |0 |1 | 
   // 1 |  |  |  |
   // 3 |  |  |  |

     tabela[1][0] = 0;
   //    0  1  3
   // 0 |1 |0 |1 | 
   // 1 | 0|  |  |
   // 3 |  |  |  |

   for(int i = 0; i < 3; i++) {
      for(int j = 0; j < 3; j++) {
        printf("Entre com a posicao [%i,%i]: ", i, j);
        scanf("%i", &tabela[i][j]);
      }
   }

printf("A tabela ficou assim: \n");
   for(int i = 0; i < 3; i++) {
      for(int j = 0; j < 3; j++) {
      printf("%i ", tabela[i][j]);
        
      }
      printf("\n");
   }


   


       return 0;
}