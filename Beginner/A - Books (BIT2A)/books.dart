import 'dart:convert';
import 'dart:io';

void main() {
  int t = int.parse(stdin.readLineSync(encoding: utf8)!);

  while (t > 0) {
    int N = int.parse(stdin.readLineSync(encoding: utf8)!);
    var A = stdin
        .readLineSync(encoding: utf8)!
        .split(" ")
        .map((e) => int.parse(e))
        .toList();

    int c = 0;
    for (int i = 0; i < N; i++) {
      for (int j = i + 1; j < N; j++) {
        if (A[i] < A[j]) {
          c++;
        }
      }

      stdout.write("$c ");
      c = 0;
    }

    t--;
  }
}
