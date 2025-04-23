# Libft

## 📚 Descrição

Este projeto tem como objetivo codificar uma biblioteca em C com funções comuns e utilitárias que serão reutilizadas em projetos futuros. A **Libft** é composta por três partes:

- **Parte 1**: Reimplementação de funções da biblioteca padrão `libc`.
- **Parte 2**: Implementação de funções adicionais, não presentes na `libc`.
- **Parte bônus**: Funções para manipulação de listas encadeadas.
--
## 📈 Progresso geral 

**[███████-------------] 22% completo**


## ✅ Parte Mandatória

### 🔹 Parte 1 — Funções da LibC

| Função         | Descrição |
|----------------|----------|
| `ft_isalpha`   | Verifica se o caractere é alfabético. |
| `ft_isdigit`   | Verifica se o caractere é um dígito (0–9). |
| `ft_isalnum`   | Verifica se o caractere é alfanumérico. Equivale a `isalpha(c) || isdigit(c)`. |
| `ft_isascii`   | Verifica se o caractere pertence à tabela ASCII (7 bits). |
| `ft_isprint`   | Verifica se o caractere é imprimível (incluindo espaço). |
| `ft_strlen`    | Calcula o comprimento de uma string (sem contar o `\0`). |
| `ft_memset`    | Preenche os primeiros `n` bytes da memória com o byte especificado. |
| `ft_bzero`     | Define os primeiros `n` bytes da memória como zero. |
| `ft_memcpy`    | Copia `n` bytes de `src` para `dst`. As áreas não devem se sobrepor. |
| `ft_memmove`   | Copia `n` bytes de `src` para `dst`. Permite sobreposição segura. |
| `ft_strlcpy`   | Copia até `size - 1` caracteres de `src` para `dst`, terminando com `\0`. |
| `ft_strlcat`   | Concatena `src` ao final de `dst`, respeitando o tamanho máximo. |
| `ft_toupper`   | Converte letra minúscula para maiúscula. |
| `ft_tolower`   | Converte letra maiúscula para minúscula. |
| `ft_strchr`    | Retorna ponteiro para a primeira ocorrência do caractere em uma string. |
| `ft_strrchr`   | Retorna ponteiro para a última ocorrência do caractere em uma string. |
| `ft_strncmp`   | Compara os primeiros `n` bytes de duas strings. |
| `ft_memchr`    | Busca a primeira ocorrência de um byte na memória nos primeiros `n` bytes. |
| `ft_memcmp`    | Compara os primeiros `n` bytes de duas áreas de memória. |
| `ft_strnstr`   | Localiza uma substring dentro de outra, limitando a busca por `len` caracteres. |
| `ft_atoi`      | Converte uma string em um número inteiro (`int`). |
| `ft_calloc`    | Aloca memória e inicializa com zeros. |
| `ft_strdup`    | Aloca e retorna uma cópia de uma string. |

---

### 🔹 Parte 2 — Funções Adicionais

| Função           | Descrição |
|------------------|----------|
| `ft_substr`      | Retorna uma substring de uma string. |
| `ft_strjoin`     | Concatena duas strings em uma nova string. |
| `ft_strtrim`     | Remove os caracteres de `set` do início e fim da string. |
| `ft_split`       | Divide uma string em um array de strings, usando um delimitador. |
| `ft_itoa`        | Converte um número inteiro em uma string. |
| `ft_strmapi`     | Cria uma nova string aplicando uma função a cada caractere da string original. |
| `ft_striteri`    | Aplica uma função a cada caractere da string, permitindo modificação por ponteiro. |
| `ft_putchar_fd`  | Escreve um caractere em um file descriptor. |
| `ft_putstr_fd`   | Escreve uma string em um file descriptor. |
| `ft_putendl_fd`  | Escreve uma string seguida por uma nova linha em um file descriptor. |
| `ft_putnbr_fd`   | Escreve um número inteiro em um file descriptor. |

---

## ✨ Parte Bônus — Manipulação de Listas

Para esta parte, você implementará funções para lidar com listas encadeadas utilizando a seguinte estrutura:

```c
typedef struct s_list
{
    void *content;
    struct s_list *next;
} t_list;

    void *content;
    struct s_list *next;
} t_list;

