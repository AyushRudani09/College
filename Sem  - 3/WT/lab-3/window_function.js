// //print window function in console

// a = window;
// console.log(a);

// //encode and decode

// let text = "Hello World!";
// let encoded = btoa(text);
// let decoded = atob(encoded);
// console.log(encoded);
// console.log(decoded);

//// open new window and blur and focus it

// function myWindow() {
//     myWindow = window.open("", "", "width=200, height=100");
//     myWindow.blur()
// }
// function myWindow() {
//     myWindow = window.open("", "", "width=200, height=100");
//     myWindow.focus();
// }

////clearInterval()
////The global clearInterval() method cancels a timed, repeating action which was previously established by a call to setInterval(). If the parameter provided does not identify a previously established action, this method does nothing.

// const myInterval = setInterval(myTimer, 1000);

// function myTimer() {
//     const date = new Date();
//     document.getElementById("demo").innerHTML = date.toLocaleTimeString();
// }

// function myStopFunction() {
//     clearInterval(myInterval);
// }

////clearTimeOut()
////The global clearTimeout() method cancels a timeout previously established by calling setTimeout().If the parameter provided does not identify a previously established action, this method does nothing.

////The close() method closes a window.

////The closed property returns true if the window is closed.The closed property is read-only.

////confirm

// confirm("Press a button!");

/////-------------------DOCUMENTS OBJECTS-----------------------------
//// --Property/Method--                            --Description--
//// activeElement	                                Returns the currently focused element in the document
//// addEventListener()                         	Attaches an event handler to the document
//// adoptNode()	                                Adopts a node from another document
//// anchors	                                    Deprecated
//// applets	                                    Deprecated
//// baseURI	                                    Returns the absolute base URI of a document
//// body	                                        Sets or returns the document's body (the <body> element)
//// charset	                                    Deprecated
//// characterSet	                                Returns the character encoding for the document
//// close()	                                    Closes the output stream previously opened with document.open()
//// cookie	                                        Returns all name/value pairs of cookies in the document
//// createAttribute()	                            Creates an attribute node
//// createComment()	                            Creates a Comment node with the specified text
//// createDocumentFragment()	                    Creates an empty DocumentFragment node
//// createElement()	                            Creates an Element node
//// createEvent()	                                Creates a new event
//// createTextNode()	                            Creates a Text node
//// defaultView	                                Returns the window object associated with a document, or null if none is available.
//// designMode	                                    Controls whether the entire document should be editable or not.
//// doctype	                                    Returns the Document Type Declaration associated with the document
//// documentElement	                            Returns the Document Element of the document (the <html> element)
//// documentMode	                                Deprecated
//// documentURI	                                Sets or returns the location of the document
//// domain	                                        Returns the domain name of the server that loaded the document
//// domConfig	                                    Deprecated
//// embeds	                                        Returns a collection of all <embed> elements the document
//// execCommand()                              	Deprecated
//// forms	                                        Returns a collection of all <form> elements in the document
//// getElementById()	                            Returns the element that has the ID attribute with the specified value
//// getElementsByClassName()	                    Returns an HTMLCollection containing all elements with the specified class name
//// getElementsByName()	                        Returns an live NodeList containing all elements with the specified name
//// getElementsByTagName()	                        Returns an HTMLCollection containing all elements with the specified tag name
//// hasFocus()                                 	Returns a Boolean value indicating whether the document has focus
//// head	                                        Returns the <head> element of the document
//// images	                                        Returns a collection of all <img> elements in the document
//// implementation	                                Returns the DOMImplementation object that handles this document
//// importNode()	                                Imports a node from another document
//// inputEncoding	                                Deprecated
//// lastModified	                                Returns the date and time the document was last modified
//// links	                                        Returns a collection of all <a> and <area> elements in the document that have       a                                                   href attribute
//// normalize()	                                Removes empty Text nodes, and joins adjacent nodes
//// normalizeDocument()	                        Deprecated
//// open()	                                        Opens an HTML output stream to collect output from document.write()
//// querySelector()	                            Returns the first element that matches a specified CSS selector(s) in the document
//// querySelectorAll()	                            Returns a static NodeList containing all elements that matches a specified CSS                                                 selector(s) in the document
//// readyState	                                    Returns the (loading) status of the document
//// referrer	                                    Returns the URL of the document that loaded the current document
//// removeEventListener()	                        Removes an event handler from the document (that has been attached with the                                                 addEventListener() method)
//// renameNode()	                                Deprecated
//// scripts	                                    Returns a collection of <script> elements in the document
//// strictErrorChecking	                        Deprecated
//// title	                                        Sets or returns the title of the document
//// URL	                                        Returns the full URL of the HTML document
//// write()	                                    Writes HTML expressions or JavaScript code to a document
//// writeln()	                                    Same as write(), but adds a newline character after each statement

/////-------------------OVER DOCUMENTS OBJECTS-----------------------------

////The focus() method sets focus to a window.

////The frames property returns an array with all window objects in the window.The windows can be accessed by index numbers. The first index is 0.The frames property is read-only.

////history

//// Property/Method	Description
//// back()	            Loads the previous URL (page) in the history list
//// forward()      	Loads the next URL (page) in the history list
//// go()	            Loads a specific URL (page) from the history list
//// length         	Returns the number of URLs (pages) in the history list