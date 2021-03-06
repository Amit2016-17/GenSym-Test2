package antlr;

/**
 * <b>SOFTWARE RIGHTS</b>
 * <p>
 * ANTLR 2.6.0 MageLang Institute
 * <p>
 * We reserve no legal rights to the ANTLR--it is fully in the
 * public domain. An individual or company may do whatever
 * they wish with source code distributed with ANTLR or the
 * code generated by ANTLR, including the incorporation of
 * ANTLR, or its output, into commerical software.
 * <p>
 * We encourage users to develop software with ANTLR. However,
 * we do ask that credit is given to us for developing
 * ANTLR. By "credit", we mean that if you use ANTLR or
 * incorporate any source code into one of your programs
 * (commercial product, research project, or otherwise) that
 * you acknowledge this fact somewhere in the documentation,
 * research report, etc... If you like ANTLR and have
 * developed a nice tool with the output, please mention that
 * you developed it using ANTLR. In addition, we ask that the
 * headers remain intact in our source code. As long as these
 * guidelines are kept, we expect to continue enhancing this
 * system and expect to make other tools available as they are
 * completed.
 * <p>
 * The ANTLR gang:
 * @version ANTLR 2.6.0 MageLang Institute
 * @author Terence Parr, <a href=http://www.MageLang.com>MageLang Institute</a>
 * @author <br>John Lilley, <a href=http://www.Empathy.com>Empathy Software</a>
 */
import java.io.*;
import antlr.collections.AST;

/** Simple class to dump the contents of an AST to the output */
public class DumpASTVisitor implements ASTVisitor {
	protected int level = 0;


	private void tabs() {
		for (int i = 0; i < level; i++) {
			System.out.print("   ");
		}
	}
	public void visit(AST node) {
		// Flatten this level of the tree if it has no children
		boolean flatten = /*true*/ false;
		AST node2;
		for (node2 = node; node2 != null ; node2 = node2.getNextSibling()) {
			if (node2.getFirstChild() != null) {
				flatten = false;
				break;
			}
		}

		for (node2 = node; node2 != null; node2 = node2.getNextSibling()) {
			if (!flatten || node2 == node) {
				tabs();
			}
			if ( node2.getText()==null ) {
				System.out.print("nil");
			}
			else {
				System.out.print(node2.getText());
			}

			System.out.print(" [" + node2.getType() + "] ");

			if (flatten) {
				System.out.print(" ");
			}
			else {
				System.out.println("");
			}

			if ( node2.getFirstChild() != null ) {
				level++;
				visit(node2.getFirstChild());
				level--;
			}
		}

		if (flatten) {
			System.out.println("");
		}
	}
}