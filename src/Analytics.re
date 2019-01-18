[@bs.val] [@bs.scope ("window", "analytics")]
external windowTrack: (string, Js.t({.})) => Js.t({.}) = "track";

[@genType]
let track = (event, properties) => {
  windowTrack(event, properties);
};
