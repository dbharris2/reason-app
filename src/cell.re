let component = ReasonReact.statelessComponent("Cell");

type input = Text(string) | Image(string);

let inputElement = (input) => {
  switch input {
  | Text(text) => (ReasonReact.stringToElement(text))
  | Image(url) => <img src=url />
  };
};

let make = (~input, _children) => {
  ...component,
  render: (_self) =>
    <div>
      <p> (inputElement(input)) </p>
    </div>
};
