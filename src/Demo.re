open Async;

let go = () => {
  Js.log("Here's some JSON of a person");
  let%Async json = Swapi.getPerson();
  Js.log2("Here is the person Json", json);
  resolve();
};

go();