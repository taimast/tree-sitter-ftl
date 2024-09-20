from unittest import TestCase

import tree_sitter, tree_sitter_ftl


class TestLanguage(TestCase):
    def test_can_load_grammar(self):
        try:
            tree_sitter.Language(tree_sitter_ftl.language())
        except Exception:
            self.fail("Error loading Ftl grammar")
