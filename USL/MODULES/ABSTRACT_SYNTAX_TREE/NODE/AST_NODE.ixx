export module AST:NODE;
import DYNAMIC_ARRAY;
export namespace AST {
	struct AST_Node {
		AST_Node* Parrent;
		Dynamic_Array<AST_Node> Children;
	};
}