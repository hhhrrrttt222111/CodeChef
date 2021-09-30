import 'dart:convert';
import 'dart:io';

void main() {
  int t = int.parse(stdin.readLineSync(encoding: utf8)!);

  while (t > 0) {
    var NP = stdin
        .readLineSync(encoding: utf8)!
        .split(" ")
        .map((e) => int.parse(e))
        .take(2)
        .toList();

    var A = stdin
        .readLineSync(encoding: utf8)!
        .split(" ")
        .map((e) => int.parse(e))
        .toList();

    int e = 0;
    int h = 0;
    for (var i in A) {
      if (i >= NP[1] / 2) {
        e++;
      } else {
        h++;
      }
    }

    if (NP[1] == 1) {
      print("no");
    } else if (e == 1 && h == 2) {
      print("yes");
    } else {
      print("no");
    }

    t--;
  }
}
