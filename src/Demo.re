open Async;

[@decco]
type person = {firstName: string};

let go = () => {
  Js.log("Here's some JSON of a person");
  let%Async json = Swapi.getPerson();
  let result = person_decode(json);
  switch (result) {
  | Ok(luke) => Js.log2("Here is the name", luke.firstName)
  | Error(msg) => Js.log2("Our decoding failed", msg)
  };
  resolve();
};

go();