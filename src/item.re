let component = ReasonReact.statelessComponent("Item");

type model = {
  imageUrl: string,
  text: string,
};

type data = Null | Image(string) | Text(string) | TextWithImage(model);

let element = (data) => {
  switch data {
  | Null => (ReasonReact.stringToElement("Null"))
  | Image(url) => <img src=url />
  | Text(text) => (ReasonReact.stringToElement(text))
  | TextWithImage(model) =>
    <div>
      <img src={model.imageUrl} />
      <div>
        (ReasonReact.stringToElement(model.text))
      </div>
    </div>
  };
};

let make = (~blah: data, _children) => {
  ...component,
  render: (_self) =>
    <div>
      (element(blah))
    </div>
};
