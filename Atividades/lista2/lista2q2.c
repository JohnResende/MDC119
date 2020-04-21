#include <stdio.h>
#include <stdlib.h>
#include <string.h>

union u_produto {
    char tipo[30];
    float preco;
    float volume;
    float peso
};
struct s_produto
{
    char tipo[30];
    float preco;
    float volume;
    float peso
};

struct s_item
{
    char tipo[30];
    float preco;
    union u_compartilhar_a_mesma_memoria {
        float volume;
        float peso
    } u_compartilhar_a_mesma_memoria;
};

int main()
{

    union u_produto produto1;
    struct s_produto produto2;
    struct s_item produto3;
    struct s_item produto4;
    float tamanhoproduto1;
    float tamanhoproduto2;
    float tamanhoproduto3;
    float tamanhoproduto4;

    produto1.tipo[30] = 'varejo distribuicao';
    produto1.preco = 10.23;
    produto1.volume = 3;
    produto1.peso = 15;

    produto2.tipo[30] = 'varejo distribuicao';
    produto2.preco = 10.23;
    produto2.volume = 3;
    produto2.peso = 15;

    tamanhoproduto1 = sizeof(produto1);
    tamanhoproduto2 = sizeof(produto2);
    tamanhoproduto3 = sizeof(produto3);
    tamanhoproduto4 = sizeof(produto4); 

    produto4.u_compartilhar_a_mesma_memoria.volume = 3;
    produto3.u_compartilhar_a_mesma_memoria.peso = 15;

    printf("\n tamanho produto1 (union):%f", tamanhoproduto1);
    printf("\n tamanho produto2 (struct):%f", tamanhoproduto2);
    printf("\n tamanho produto3 (struct com compartilhamento de memoria):%f", tamanhoproduto3);
    printf("\n tamanho produto4 (struct com compartilhamento de memoria):%f", tamanhoproduto4);

    return 0;
}