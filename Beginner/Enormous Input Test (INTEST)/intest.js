importPackage(java.io);
importPackage(java.lang);

var reader = BufferedReader(InputStreamReader(System["in"]) );
var items  = reader.readLine().split(" ");

var n = Number(items[0]);
var k = Number(items[1]);
var t = 0;

for(i=0;i<n;i++){
    let num = Number(reader.readLine());
    if(num%k===0){
        t++;
    }
}
print(t);
