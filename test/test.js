const { Parser } = require("tree-sitter");
const Ftl = require("../");

describe("FTL grammar", () => {
  it("parses a simple document", () => {
    const parser = new Parser();
    parser.setLanguage(Ftl);
    const sourceCode = `
      # Комментарий
      welcome-message = Добро пожаловать!
    `;
    const tree = parser.parse(sourceCode);
    console.log(tree.rootNode.toString());
  });
});
