rm -rf test-prod-cons
rm -rf test-prod-cons-dfs
../cloud9/Release+Asserts+Checks/bin/klee --disable-opt --use-cek-search=line.txt --output-dir=test-prod-cons --debug-print-instructions —dump-states-on-halt prod-cons.bc
../cloud9/Release+Asserts+Checks/bin/klee --disable-opt --output-dir=test-prod-cons-dfs --debug-print-instructions —dump-states-on-halt prod-cons.bc
dot -Tpng funcs.dot > funcs.png
dot -Tpng blocks.dot > blocks.png
cat ce-block-dump.out
