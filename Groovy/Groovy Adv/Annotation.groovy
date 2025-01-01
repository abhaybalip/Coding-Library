// Groovy - Annotation

import groovy.transform.CompileStatic

@CompileStatic
class annotation {
    @Deprecated
    def oldMethod() {
        println "Old Method"
    }

    def newMethod() {
        println "New Method"
    }
}

def a = new annotation()

a.oldMethod()

a.newMethod()

// Output:
// Old Method
// New Method
// Explanation:
// The @Deprecated annotation is used to mark a method as deprecated.
// The @CompileStatic annotation is used to statically compile the class.
// The oldMethod() method is marked as deprecated, so it will generate a warning when it is called.
// The newMethod() method is not marked as deprecated, so it can be called without any warnings.
// Note: The @CompileStatic annotation is not necessary for using the @Deprecated annotation, but it is used here to demonstrate the static compilation feature of Groovy.
