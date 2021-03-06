[%bs.raw {|require('./app.css')|}];

[@bs.module] external logo : string = "./logo.svg";

let component = ReasonReact.statelessComponent("App");

/* let foo = () : Item.model => {
  {
    imageUrl: "http://icons.iconarchive.com/icons/danleech/simple/48/facebook-icon.png",
    text: "FB",
  }
}; */

let make = (~message, _children) => {
  ...component,
  render: (_self) =>
    <div className="App">
      <div className="App-header">
        <img src=logo className="App-logo" alt="logo" />
        <h2> (ReasonReact.stringToElement(message)) </h2>
      </div>
      <p className="App-intro">
        (ReasonReact.stringToElement("To get started, edit"))
        <code> (ReasonReact.stringToElement(" src/App.re ")) </code>
        (ReasonReact.stringToElement("and save to reload."))
      </p>
      <div>
        <Item blah=(Null) />
        <Item blah=(Text("Hello")) />
        <Item blah=(Image("http://icons.iconarchive.com/icons/danleech/simple/48/facebook-icon.png")) />
        <Item blah=(TextWithImage({
          imageUrl: "http://icons.iconarchive.com/icons/danleech/simple/48/facebook-icon.png",
          text: "FB",
        })) />
      </div>
    </div>
};
