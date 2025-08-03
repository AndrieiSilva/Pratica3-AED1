# Trabalho prático 2 de AED1

**Nome: Andriei Roshild da Silva**

**Instituição de Ensino: Universidade Federal de Pelotas**

**Curso: Bacharelado em Ciência da Computação**

**Disciplina: Algoritmos e Estruturas de Dados 1**

**Professor: RAFAEL PICCIN TORCHELSEN**

**Turma: M2**

# Exercício: LeetCode : 1405. Longest Happy String
## Descrição do exercício:
A string s is called happy if it satisfies the following conditions:

s only contains the letters 'a', 'b', and 'c'.

s does not contain any of "aaa", "bbb", or "ccc" as a substring.

s contains at most a occurrences of the letter 'a'.

s contains at most b occurrences of the letter 'b'.

s contains at most c occurrences of the letter 'c'.

**Given three integers a, b, and c, return the longest possible happy string. If there are multiple longest happy strings, return any of them. If there is no such string, return the empty string "".**

A substring is a contiguous sequence of characters within a string.

### **Example 1:**

Input: a = 1, b = 1, c = 7

Output: "ccaccbcc"

Explanation: "ccbccacc" would also be a correct answer.

### **Example 2:**

Input: a = 7, b = 1, c = 0

Output: "aabaa"

Explanation: It is the only correct answer in this case.

Constraints:

0 <= a, b, c <= 100
a + b + c > 0

## Realização do exercício:

Realizei o planejamento sobre como realizar o exercício em aula, tentei resolver o problema com uma fila de prioridade **dinâmica**, mas o LeetCode não aceitava pois dava erro de **limite de memória excedido**;
Então apliquei uma fila de prioridade **não dinâmica**, aplicando a mesma estratégia da anterior.

# Submit do LeetCode -----------> [LINK](https://leetcode.com/problems/longest-happy-string/submissions/1680640947/)
