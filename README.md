# Libft

## 📚 Descrição

O projeto **Libft** consiste na criação de uma biblioteca própria em C, reimplementando funções da biblioteca padrão (libc) e adicionando funções utilitárias. Essa biblioteca será reutilizada em diversos outros projetos futuros da 42.

## 🛠️ Estrutura

- **Nome da biblioteca:** `libft.a`
- **Arquivos entregues:** `libft.h`, `ft_*.c`, `Makefile`
- **Flags de compilação:** `-Wall -Wextra -Werror`

---

## ✅ Parte Mandatória

### 🧩 Parte 1 — Funções da LibC

Você deve reimplementar as seguintes funções da biblioteca padrão, com o prefixo `ft_`:

- `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`
- `ft_strlen`, `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`
- `ft_strlcpy`, `ft_strlcat`, `ft_toupper`, `ft_tolower`, `ft_strchr`, `ft_strrchr`
- `ft_strncmp`, `ft_memchr`, `ft_memcmp`, `ft_strnstr`, `ft_atoi`
- `ft_calloc`, `ft_strdup`

### 🧩 Parte 2 — Funções adicionais

Funções utilitárias extras a serem implementadas:

- `ft_substr`, `ft_strjoin`, `ft_strtrim`, `ft_split`, `ft_itoa`
- `ft_strmapi`, `ft_striteri`, `ft_putchar_fd`, `ft_putstr_fd`
- `ft_putendl_fd`, `ft_putnbr_fd`

---

## ✨ Parte Bônus

Após completar a parte obrigatória com sucesso, é possível implementar funções para manipulação de listas ligadas, usando a seguinte estrutura:

```c
typedef struct s_list
{
    void *content;
    struct s_list *next;
} t_list;

