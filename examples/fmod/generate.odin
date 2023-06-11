/**
 * Generates openxr bindings from its header files.
 */

package main

import "core:fmt"

import "../../bindgen"

main :: proc() {
    options : bindgen.GeneratorOptions;
    /*
    // We remove defines' prefix.
    options.definePrefixes = []string{"XR_"};
    options.defineCase = bindgen.Case.Constant;

    // Pseudo types are everything that can act as a type,
    // enum, struct, unions.
    options.pseudoTypePrefixes = []string{"Xr", "xr"};
    options.pseudoTypeTransparentPrefixes = []string{"PFN_"};

    // In the C header, functions look like xrCreateInstance(), we remove the prefix.
    options.functionPrefixes = []string{"xr"};
    options.functionCase = bindgen.Case.Snake;

    options.enumValuePrefixes = []string{"XR_"};
    options.enumValueCase = bindgen.Case.Pascal;
    options.enumValueNameRemove = true;

    // Openxr also has platform-dependent defines that are confusing when parsing,
    // we remove them here.
    options.parserOptions.ignoredTokens = []string{"XRAPI_PTR", "XRAPI_CALL", "XRAPI_ATTR", "XR_MAY_ALIAS"};
    */
    
    bindgen.generate(
        packageName = "fmod",
        foreignLibrary = "fmodex_vc",
        outputFile = "./examples/fmod/generated/fmod.odin",
        headerFiles = []string{"./examples/fmod/headers/fmod_odin_preprocessed.h"},
        options = options,
    );
}
