/*!if GRAMMAR_PROLOGUE*/

%token<token_atrib> SUBPARSE_SUPERSCALAR_DECLARATOR

%type<ast> superscalar_declarator

/*!endif*/
/*!if GRAMMAR_RULES*/

// Grammar entry point
subparsing : SUBPARSE_SUPERSCALAR_DECLARATOR superscalar_declarator
{
	$$ = $2;
}
;

superscalar_declarator : declarator_id
{
	$$ = $1;
}
| superscalar_declarator '[' assignment_expression ']'
{
	$$ = ASTMake4(AST_DECLARATOR_ARRAY, $1, $3, NULL, NULL,  ASTLine($1), NULL);
}
;

/*!endif*/
