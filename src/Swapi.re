type response('a) = {body: Js.Json.t};
type options = {responseType: string};

[@bs.module]
external got: (string, options) => Js.Promise.t(response('a)) = "got";

let getPerson = (): Js.Promise.t(Js.Json.t) => {
  got("https://swapi.co/api/people/1", {responseType: "json"})
  |> Js.Promise.then_(response => Js.Promise.resolve(response.body));
};