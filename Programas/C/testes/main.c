#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
 telaInicial();
    return 0;
}
void telaInicial()
{
   // vetor com mais de 300 itens
    int num[] = {5, 9, 11, 12, 13, 15, 18, 20, 21, 22, 24, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149, 150, 151, 152, 153, 154, 155, 156, 157, 158, 159, 160, 161, 162, 163, 164, 165, 166, 167, 168, 169, 170, 171, 172, 173, 174, 175, 176, 177, 178, 179, 180, 181, 182, 183, 184, 185, 186, 187, 188, 189, 190, 191, 192, 193, 194, 195, 196, 197, 198, 199, 200, 201, 202, 203, 204, 205, 206, 207, 208, 209, 210, 211, 212, 213, 214, 215, 216, 217, 218, 219, 220, 221, 222, 223, 224, 225, 226, 227, 228, 229, 230, 231, 232, 233, 234, 235, 236, 237, 238, 239, 240, 241, 242, 243, 244, 245, 246, 247, 248, 249, 250, 251, 252, 253, 254, 255, 256, 257, 258, 259, 260, 261, 262, 263, 264, 265, 266, 267, 268, 269, 270, 271, 272, 273, 274, 275, 276, 277, 278, 279, 280, 281, 282, 283, 284, 285, 286, 287, 288, 289, 290, 291, 292, 293, 294, 295, 296, 297, 298, 299, 300, 301, 302, 303, 304, 305, 306, 307, 308, 309, 310, 311, 312, 313, 314, 315, 316, 317, 318, 319, 320, 321, 322, 323, 324, 325, 326, 327, 328, 329, 330, 331, 332, 333, 334, 335, 336, 337, 338, 339, 340, 341, 342, 343, 344, 345, 346, 347, 348, 349, 350, 351, 352, 353,354, 355, 356, 357, 358, 359, 360, 361, 362, 363, 364, 365, 366, 367, 368, 369, 370, 371, 372, 373, 374, 375, 376, 377, 378, 379, 380, 381, 382, 383, 384, 385, 386, 387, 388, 389, 390, 391, 392, 393, 394, 395, 396, 397, 398, 399, 400, 401, 402, 403, 404, 405, 406, 407, 408, 409, 410, 411, 412, 413, 414, 415, 416, 417, 418, 419, 420, 421, 422, 423, 424, 425, 426, 427, 428, 429, 430, 431, 432, 433, 434, 435, 436, 437, 438, 439, 440, 441, 442, 443, 444, 445, 446, 447, 448, 449, 450, 451, 452, 453, 454, 455, 456, 457, 458, 459, 460, 461, 462, 463, 464, 465, 466, 467, 468, 469, 470, 471, 472, 473, 474, 475, 476, 477, 478, 479, 480, 481, 482, 483, 484, 485, 486, 487, 488, 489, 490, 491, 492, 493, 494, 495, 496, 497, 498, 499, 500, 501, 502, 503, 504, 505, 506, 507, 508, 509, 510, 511, 512, 513, 514, 515, 516, 517, 518, 519};
    int leng = sizeof(num) / sizeof(num[0]); // tamanho array
    int count = 1; // contador

    //tela inicial
while(count == 1)
    {
    printf("\\\\____(__^_^_)_____////\n\n");
    printf("1. Busca binaria\n2. Busca especifica(por index)\n0. Sair\n");
    printf("Escolha uma opcao:\n");
    int op;
    //validacao de entrada
    do{
    scanf("%d", &op);
    if(op>2 || op < 0)
        printf("Escolha uma opcao valida!\n");
    }while(op>2 || op < 0);
    if(op == 1)
        interfaceBinarySearch(leng, num);
    else if (op == 2)
        buscaEspecifica(leng, num);
    else
    {
        count = 0;
        printf("voce decidiu sair...");
    }
    system("pause");
    system("cls");
}
}
void interfaceBinarySearch(int leng, int num[])
{
    int key,result;
    // Insert data
    printf("Digite o numero que quer achar: \n");
    scanf("%d", &key);
    //search
    result = binarySearch(key, num,0,leng-1);
    // it shows us the result
    if(result == -1)
        printf("O valor nao foi achado no vetor\n");
    else
        printf("O valor procurado esta no indice %d\n", result);
}
int binarySearch(int key, int arr[],int start, int end)
{   // definindo o meio
    int middle = (start+end)/2;
    // valor encontrado
    if(key == arr[middle])
        return middle;
    // valor nao encontrado
    if(start >= end)
        return -1;
    // valor maior q meio
    if(key > arr[middle])
       return binarySearch(key, arr,middle+1,end);
    // valor menor q meio
    if(key < arr[middle])
        return binarySearch(key, arr,start, middle-1);


}
void buscaEspecifica(int leng, int num[])
{
    int index;
    printf("Digite o indice: \n");
    scanf("%d", &index);
    if(index < 0 || index > leng)
        printf("indice \%d\ invalido\n", index);
    else
        printf("Valor no index \%d\: \n", num[index]);

}
