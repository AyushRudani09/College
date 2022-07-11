for (i = 101; i <= 165; i++) {
    document.write(`<input type = 'checkbox' name = 'checkbox'  id = '${i}'>${i}<br>`);
}
document.querySelector('.all').onclick = function() {
    for (i = 101; i <= 165; i++) {
        document.getElementById(`${i}`).checked = true;
    }
}
document.querySelector('.clear').onclick = function() {
    for (i = 101; i <= 165; i++) {
        document.getElementById(`${i}`).checked = false;
    }
}

let c = [0];
for (i = 101; i <= 165; i++) {
    document.getElementById(`${i}`).onclick = function() {

        if ((document.getElementById(this.id).checked) == true) {
            c.push(this.id);
        } else {
            c.pop()
        }
    }

}