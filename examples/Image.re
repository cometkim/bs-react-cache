type t;
type onload = unit => unit;
type onerror = exn => unit;

[@bs.new] external make: unit => t = "Image";

[@bs.set] external setSource: (t, string) => unit = "src";
[@bs.set] external setOnLoad: (t, onload) => unit = "onload";
[@bs.set] external setOnError: (t, onerror) => unit = "onerror";
