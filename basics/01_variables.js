const accountId = 144655
let accountEmail = "ayush@outlook.com"/*
ham var ko use nahi karte kyuki jab iski value ek jagah change
 karte hai to har jagah uski value change ho jaati h
isliye ham var ki jagah "let " use karte hai */
var accountPassword = "12344"
accountCity ="Seoni"// java me ye isko directly let kr leta hai.

// accountId =23 // this is not allowed. kyuki accountId ko ham const me declare kar chuke hai.
accountEmail = "Ishu@outlook.com"
let accountState ;// isme ham koi value assign nahi kiya h.Ye undefined aayega.
accountPassword = "284527"
accountCity = "Jabalpur"
console.log(accountId)
console.table([accountId,accountEmail,accountPassword,accountCity,accountState])