# All Codes were implemented, Executed in Linux :: Ubuntu 18.04  



# PA1
### Implement Lexical Analyzer for C source code using Flex
+ foo.l : c 소스코드를 (Token) Identifier, Keyword, 문자상수, 문자열 상수, 정수상수, 주석, 연산자, punctuation symbol로 분해하고 그 결과를 화면에 출력하는 Flex 기반의 소스코드. 정확히는, 이 토큰들을 분리할 수 있는 lexical analyzer이다. 각 token은 regular expression을 통해 표현하였다. 대부분 일반적인 token의 특성을 따랐지만, 특이한 부분은 아래 기술하겠다. 
 > 1. Identifier 
 : 대문자, 소문자, 또는 아래 밑줄로 시작 가능  
 : 두번째 문자부터는 대문자, 소문자, 아래 밑줄, 숫자 모두 가능  
 : Keyword는 제외  
 > 2. Keyword  
 : break, case, char, default, else, float, for, if, int, return, struct, switch, void, while  
 > 3. Character constant  
 : 전부 ascii code로 변환 가능해야 함.  
 > 4. String constant  
 : 두 개의 " 와 그 사이에 있는 character들의 열  
 > 5. Integer constant  
 : C언어에서 정수 상수는 10진수, 8진수, 16진수로 표현이 가능하고, token value에서 모든 정수가 10진수로 표현될 수 있어야 한다.  
 > 6. Real constant  
 : 391.143E21, 12e8 과 같은 형태도 고려해야함.  
 > 7. Comment  
 : C언어에서 주석은 두 가지로, //로 시작하는 한 줄짜리 주석과 여러줄짜리 주석이 있다.  
 > 8. Operator  
 > 9. Punctuation symbol  
 :{, }, [, ], (, ), ;, :, .

+ Makefile : flex foo.l과 gcc -o bar lex.yy.c -ll 명령어를 단순히 make로 실행해주기 위한, make 명령을 위한 매크로 파일. Makefile로 하여금 make 라는 명령 한 번으로 위의 두 명령어가 순차적으로 실행이 가능하다. 

+ test.c : Linux에서 ./bar test.c 명령어를 실행하여, lexical analyzer을 test 해볼 수 있도록 하기 위해 올려놓음.  
 출력은 다음 형태를 따른다.  
 **[token] -> [token name], [token value (only if constant)], [line in c source code file], [position in its line]**  
 
 ##### Linux 환경에서의 실행 : make clean -> make -> ./bar test.c  




------------------------------------------------------------------------------------------------------------------------------------------



# PA2
### Implement Parser for C source code using Yacc(Bison)  
#### C언어로 된 소스코드로부터 분석된 Token들을 이용하여 parsing tree를 생성해주는 parser 구현.  


+ start symbol : Program
+ terminal symbol : =, +=, -=, *=, /=, %=, +, -, *, /, %, epsilon, (, ), ;, ,, <, <=, >, >=, ==, !=, &&, ||, STRING, ID, STRUCT, void, int, char, float, if, else, switch, case, default, INTEGER, REAL, {, }, return, break, while, for  

+ foo.l : 각 (terminal) token에 대한 이름을 설정해주고 해당 token 패턴이 발생했을 때의 Action을 구현함. 특히 정수나 실수, character 패턴이 나왔을 경우 yylval을 통해 10진수나 실수, ascii 값을 넘겨줄 수 있도록 구현함.  

+ bar.y : 생성 규칙이 사용되면, 그 생성 규칙이 출력되도록 한다. 다음과 같은 형태로 출력된다.  
      [Nonterminal Symbol] -> [Nonterminal/Terminal Symbol]  
        : 만약 INTEGER나 REAL의 경우에는 실제 사용된 수를 출력한다.  
        
##### Linux 환경에서의 실행 : make clean -> make -> ./baz test.c  




------------------------------------------------------------------------------------------------------------------------------------------



# PA3  
### Implement Abstract Syntax Tree based on PA2  

+ util.h, util.c : AST를 만들기 위한 함수들과 Stack을 사용하기 위한 함수를 정의함.  
                 : nodeI, nodeR, nodeS는 각각 정숫값, 실숫값, 그외의 값을 저장하기 위한 node를 만드는 함수.  
                 : mkSibling은 sibling을 설정하는 함수.  
                 : mkSubtree는 child를 설정하는 함수.  
                 : printTree 함수는 인자로 들어가는 node를 root로 두는 subtree를 prefix 탐방 방식으로 보여주는 함수.  
                 : Stack을 용이하게 사용하기 위해 initStack()과 printStack() 둠.  
                 
+ bar.y : util.h를 직접적으로 사용하여 생성규칙의 Action에 Abstract Syntax Tree 를 구성하는 알고리즘 구현.  
        : main 함수에서 parsing이 끝난 후 AST를 출력할 수 있게 함.  
                 
                 
                 
##### Linux 환경에서의 실행 : make clean -> make -> ./baz test.c  
                 
