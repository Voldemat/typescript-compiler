#include <CLI/App.hpp>
#include <CLI/Error.hpp>
#include <CLI/Option.hpp>

#include <cstdlib>

int main(int argc, char **argv) {
    CLI::App app;
    argv = app.ensure_utf8(argv);
    CLI11_PARSE(app, argc, argv);
    return EXIT_SUCCESS;
}
