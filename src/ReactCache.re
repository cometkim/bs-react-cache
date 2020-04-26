type t('input, 'value);

type hash('input) = 'input => string;

type loader('input, 'value) = 'input => Js.Promise.t('value);

[@bs.module "react-cache"]
external setGlobalCacheLimit: int => unit = "unstable_setGlobalCacheLimit";

[@bs.module "react-cache"]
external make:
  (
    ~loader: loader('input, 'value),
    ~hashInput: option(hash('input))=?,
    unit
  ) =>
  t('input, 'value) =
  "unstable_createResource";

[@bs.send] external read: (t('input, 'value), 'input) => 'value = "read";

[@bs.send] external preload: (t('input, 'value), 'input) => unit = "preload";
