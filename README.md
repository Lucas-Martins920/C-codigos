# C-codigos - Primeiros Passos em C e C++

![C++ Logo](https://img.shields.io/badge/C%2B%2B-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white)  
![C Logo](https://img.shields.io/badge/C-00599C?style=for-the-badge&logo=c&logoColor=white)  
![Nível](https://img.shields.io/badge/Nível-Iniciante-yellow)

Repositório com **primeiros códigos e exercícios** em **C** e **C++**.  
Aqui estão registrados os passos iniciais de aprendizado: hello world, variáveis, condicionais, loops, funções, ponteiros, structs, arquivos e conceitos básicos das duas linguagens.

Objetivo: praticar sintaxe, lógica e boas práticas antes de projetos mais complexos.

## Sobre o Repositório

Coleção de arquivos `.c` e `.cpp` simples, feitos durante estudos e cursos (2024–2025).  
Cada arquivo representa um conceito ou exercício resolvido, com comentários no código para facilitar o entendimento.

## Conteúdo Principal (arquivos de código)

- Arquivos `.c` → Exemplos puros em C (padrão ANSI C)  
- Arquivos `.cpp` → Exemplos em C++ (usando std::cout, vectors, classes básicas, etc.)  
- Pasta `.vscode/` → Configurações do Visual Studio Code para compilar e debugar C/C++ localmente (veja seção abaixo)

Exemplos comuns de arquivos que você pode ter (atualize conforme os reais no seu repo):
- `hello.c` / `ola_mundo.cpp` → Hello World básico  
- `variaveis.c` → Declaração de tipos primitivos e input/output  
- `condicionais.c` → if/else, switch  
- `loops.c` → for, while, do-while  
- `funcoes.c` → Definição e chamada de funções  
- `ponteiros.c` → Conceitos iniciais de ponteiros e alocação dinâmica  
- `vetores_matrizes.c` → Arrays e matrizes  
- `arquivos.c` → Leitura/escrita em arquivos texto  
- ... (adicione mais conforme existir)

## Configuração do VS Code (pasta .vscode)

A pasta `.vscode` contém arquivos de configuração para tornar o desenvolvimento mais fácil no Visual Studio Code:

- `c_cpp_properties.json` → Define caminhos de include, compilador (ex: MinGW, GCC) e IntelliSense para C/C++  
- `launch.json` → Configuração de debug (breakpoints, variáveis, etc.)  
- `settings.json` → Preferências específicas do workspace (formatação, extensions recomendadas)  
- `tasks.json` → Tarefas para compilar (ex: g++ -o programa arquivo.cpp)

Se você clonar o repo e abrir no VS Code com a extensão **C/C++ da Microsoft** instalada, o IntelliSense e o build/debug devem funcionar automaticamente (ajuste paths se necessário para o seu sistema).

## Como Compilar e Executar

### Pré-requisitos
- GCC/G++ instalado (MinGW no Windows, gcc no Linux/Mac via brew/apt)  
- VS Code com extensões:  
  - C/C++ (Microsoft)  
  - Code Runner (opcional para rodar rápido)

### Via terminal (recomendado para entender o processo)

2. Compile (exemplos):
   Para C:
    gcc arquivo.c -o programa

   Para C++:
     g++ arquivo.cpp -o programa

   Execute:
     ./programa       # Linux/Mac
programa.exe     # Windows

No VS Code (usando a config .vscode)

Abra o repo no VS Code
Pressione Ctrl+Shift+B → selecione "Build" (se tasks.json configurado)
Ou use F5 para debug (se launch.json ok)

O que Pratiquei Aqui

Sintaxe básica de C e diferenças com C++
Gerenciamento manual de memória (ponteiros, malloc/free)
Entrada/saída padrão (stdio.h / iostream)
Boas práticas: indentação, comentários, nomes claros
Primeiros contatos com compilação manual e debugging

  
1. Navegue até a pasta do arquivo:
   ```bash
   cd caminho/para/o/arquivo
