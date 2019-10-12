[@bs.module "react-native-vector-icons/FontAwesome"] [@react.component]
external make:
  (
    ~name: string,
    ~backgroundColor: string,
    ~onPress: unit => unit,
    ~children: React.element
  ) =>
  React.element =
  "Button";