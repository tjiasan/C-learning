   // do loop execution, executed once

   int a = 10;
   do {
      cout << "value of a: " << a << endl;
      a = a + 1;
   }while( a < 20 )


//normal while loop
   while (true){
        break;
   }


// for loop

for (int i = 0; i < a ; i++){
    //do something
}


//continue
a =10;
do {
    if ( a == 15){
        a += 1;
        continue;
    }
    //if continued this lower block is ignored;
    a +=1
}
while(a< 20)

//goto 
//exit nested all loops
// break only works for innermost loop;

for ( ){
    for (){
        while (){
            if () {
                goto stop;
            } 
        }
    }
}