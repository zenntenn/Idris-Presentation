module Palendrome
import Decidable.Equality

%default total

isAPalendrome : (str : String) -> Dec (str = (reverse str))
isAPalendrome str = case decEq str (reverse str) of
                         Yes prf => Yes prf
                         No contra => No contra


