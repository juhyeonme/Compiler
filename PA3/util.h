#ifndef _UTIL_H_
#define _UTIL_H_
typedef enum {_PROG, _VARDEC, _FUNDEC, _STRDEC, _ID, _ID_ARR, _STRTYPE, _TYPE, _VALUE, _PARAMS, _PARAM, _CPDSTMT, _LDECLIST, _STMTLIST, _IFSTMT, _SWSTMT, _RTSTMT, _BRKSTMT, _WHLSTMT, _FORSTMT, _CASE, _DEFAULT, _ID_SLTS, _SLTLIST, _STRMBR, _ARRINDEX, _INCDEC_EXP, _OPER, _INTEGER, _REALNUM, _STRING, _ARGS, _FUNCALL} TKNUM;
typedef enum {terminal, nonterminal} TML;
typedef struct tokenType{
	TKNUM number;
	int intVal;
	double realVal;
	char* stringVal;
} TOKEN;
typedef struct nodeType{
	TOKEN token;
	TML noderep;
	struct nodeType *sibling;
	struct nodeType *child;
} NODE;

NODE* nodeS(char* val, TML rep, TKNUM tknum);
NODE* nodeI(int val, TML rep);
NODE* nodeR(double val, TML rep);
void mkSibling(NODE* l, NODE* r);
void mkSubtree(NODE* p, NODE* c);
void printTree(NODE* head);

struct STACK{
	NODE* node;
	struct STACK* prev;
	struct STACK* next;
};
int stackSize;
struct STACK* stack;
void initStack(void);
void push(NODE* n);
NODE* pop(void);
void printStack(void);
#endif

