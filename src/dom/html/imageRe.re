type t;

external makeWithData : array::Js.Typed_array.Uint8ClampedArray.t => width::float => height::float => t = "ImageData" [@@bs.new];
external make: width::float => height::float => t = "ImageData" [@@bs.new];
external data : t => Js.Typed_array.Uint8ClampedArray.t = "" [@@bs.get];
external height : t => float = "" [@@bs.get];
external width : t => float = "" [@@bs.get];
