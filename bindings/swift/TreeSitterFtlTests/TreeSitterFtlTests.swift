import XCTest
import SwiftTreeSitter
import TreeSitterFtl

final class TreeSitterFtlTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_ftl())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading Ftl grammar")
    }
}
