let (|?) = Relude.Option.Infix.(|?)

type message = option(string)
let message: message = Some("Lorem ipsum dolor sit amet");

Js.log(message |? "No message found");