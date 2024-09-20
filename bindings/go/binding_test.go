package tree_sitter_ftl_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_ftl "github.com/tree-sitter/tree-sitter-ftl/bindings/go"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_ftl.Language())
	if language == nil {
		t.Errorf("Error loading Ftl grammar")
	}
}
