/**
 * Generates openxr bindings from its header files.
 */

package main

import "core:fmt"

import "../../bindgen"

main :: proc() {
    options : bindgen.GeneratorOptions;

    bindgen.generate(
        packageName = "newton",
        foreignLibrary = "newton",
        outputFile = "./shared/newton_dynamics/newton.odin",
        //outputFile = "../Mimir/shared/newton_dynamics/newton.odin",
        headerFiles = []string{"./examples/newtondynamics/headers/newton_odin_preprocessed.h"},
        options = options,
    );
}
