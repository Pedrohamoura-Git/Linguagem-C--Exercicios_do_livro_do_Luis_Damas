## Guia da linguagem _Markdown_
* "_***_" = Linha
***
* "*" ou "_" = *Itálico*
***
* "**" ou "__" = **Negrito**
***
* " ~~ " = ~~Riscado~~
***
### Emojis
"Ao usar os dois pontos (:) na caixa de texto, é possível acessar á lista de emojis."

Ex:

Entrada :_Olá, pequeno Gafanhoto!_ : +1

Saída: _Olá, pequeno Gafanhoto!_ 👍


***_Recomendações_***
1. O link abaixo permite acesso á um repositório com a lista de emojis disponíveis para uso no **GitHub**:
2. [Repositório de emojis - GitHub](https://github.com/ikatyang/emoji-cheat-sheet)
3. Não é possível usar emojis no título da issue através dos comandos do site. Para isso, é recomendado copiar um emoji de um site externo e colá-lo no local desejado.
4. [Site externo para emojis](https://emojipedia.org/)
***
### Lista numerada:

* "Qualquer número seguido de um ponto inicia uma lista numerada"

1. Teste
2. Teste2
   1. Teste2.1
   2. Teste2.2
9. Teste3
10. Teste4

***
### Lista demarcada:

* "Apenas **_um_** asterisco ou traço cria uma lista demarcada"

* Teste
   * Teste
- Teste
   - Teste
***
### Lista de tarefas

* "- [ ]" = Cria uma caixa de verificação

- [ ] Exemplo
- [X] Exemplo2
- [ ] Exemplo3
***
### Tabelas

"Coluna1 | Coluna2 | Coluna3... | coluna'n'

---|---|---...|---"

* "A configuração acima ilustra os símbolos que criam as tambelas, onde a contra-barra ( | ) seguida por espaço cria a coluna para separar os elementos e '---|' para criar as linhas.

* É importante ressaltar que as linhas e colunas devem estar em igual número para criar a tabela."

Ex:

"Num | Nome | Notas

---|---|---"

Equivale á:

Num | Nome | Notas
---|---|---

* "Para atribuir elementos dentro da tabela usando o índice, basta seguir a configuração abaixo:"

1 | Pedro | 8,5

2 | José | 10,00

3 | Maria | 9,0

**Terminou a tabela**

* "Logo, a tabela do exemplo anterior ficaria da seguinte forma:

Num | Nome | Notas

---|---|---


1 | Pedro | 8,5

2 | José | 10,00

3 | Maria | 9,0

**Terminou a tabela**"

Resultando em:

Num | Nome | Notas
---|---|---
1 | Pedro | 8,5
2 | José | 10,00
3 | Maria | 9,0

**Terminou a tabela**
***
### Anexo de imagens

* "Para anexar uma imagem em um editor **_Markdown_** basta arrastá-la e soltá-la na caixa de _'Write'_, criando um link de upload do arquivo.
Tudo que estiver dentro do colchetes é a descrição da imagem e pode ser alterada."

***_Recomendações para bom uso_***
1. Usar uma imagem de, no máximo, 500x500 pixels.
2. Usar formatos compactados, como png e jpg.

* "Também é possível criar links dentro da caixa de _'Write'_. Basta, primeiro, colocar a descrição dentro de colcheres ([]) e, em seguida - sem espaço, o link desejado dentro de parênteses."

Ex:
"[Acesse meu GutHub](https://github.com/Pedrohamoura-Git)."
***
### Reconhecendo códigos

* "Para que o leitor **_Markdown_** reconheça trechos de código, é necessário usar três crases (''') antes e depois de escrevê-lo."

 Ex: 
 
Olha o meu programa em Python:


```

num = int(input('Digite um valor: ')
if num % 2 == 0:
    print(f'O valor (num) é PAR') 
else:
    printf(f'O valor {num} é ÍMPAR')

```
### Considerações finais
***
_Também disponível em PDF através do link:_ [ gustavoguanabara-guia_Markdown](https://github.com/gustavoguanabara/git-github/blob/master/manuais-PDF/guia-markdown.pdf)
***
