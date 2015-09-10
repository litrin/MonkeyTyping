
 var all_char = "abcdefghijklmnopqrstuvwxyz"
 var match = "match"

function typing(){

	for (i=0; true; i++) {
		var word = ''
		for (j=0; j<match.length; j++){
			word += all_char.charAt(Math.floor(Math.random() * all_char.length))
		}
		
		if (word == match){
			break;
		}
	}

	console.log("GOT MATCHED! When "+ i +" words generated.")
}

function timer(func){
	var start_time = new Date();
	func()
	var stop_time = new Date
	console.log(stop_time.getTime() - start_time.getTime())

}

timer(typing)
